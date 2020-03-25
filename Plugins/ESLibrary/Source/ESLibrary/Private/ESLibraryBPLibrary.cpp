// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ESLibraryBPLibrary.h"
#include "Engine/StreamableManager.h"
#include "ESLibrary.h"
#include "Engine/DataTable.h"
#include "Kismet/KismetMathLibrary.h"
#include "HAL/FileManager.h"
#include "AudioDevice.h"
#include "DataTableUtils.h"
#include "Engine/ObjectLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Console.h"
#include "GameFramework/GameMode.h"
#include "GameFramework/Actor.h"
#include "EngineUtils.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/InputSettings.h"
#include "InputCoreTypes.h"
#include "Materials/MaterialInterface.h"
#include "Engine/StaticMesh.h"
#include "Components/TextBlock.h"
#include "Styling/SlateTypes.h"
#include "Components/CheckBox.h"
#include "Blueprint/WidgetTree.h"
#include "Components/Widget.h"
#include "DrawDebugHelpers.h"
#include "Framework/Application/SlateApplication.h"
#include "Input/Events.h"
#include "Engine/DemoNetDriver.h"
#include "Engine.h"
#include "GameFramework/PlayerState.h"
#include "Engine/World.h"
#include "Misc/EngineVersion.h"
#include "Serialization/ArchiveSaveCompressedProxy.h"
#include "GameFramework/SaveGame.h"
#include "UObject/UObjectBaseUtility.h"
#include "SaveGameSystem.h"
#include "PlatformFeatures.h"
#include "Serialization/MemoryWriter.h"
#include "Serialization/ArchiveLoadCompressedProxy.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "ImageUtils.h"
#include "Engine/Texture2D.h"
#include "../Public/FileHelper.h"
#include "Interfaces/IAudioFormat.h"
#include "VorbisAudioInfo.h"
#include "AIController.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Styling/SlateBrush.h"
#include "UnrealTinyXmlPrivatePCH.h"

namespace
{
	float Grad(int hash, float x, float y, float z)
	{
		switch (hash & 0x0F)
		{
		case 0x00:
			return x + y;
		case 0x01:
			return -x + y;
		case 0x02:
			return x - y;
		case 0x03:
			return -x - y;
		case 0x04:
			return x + z;
		case 0x05:
			return -x + z;
		case 0x06:
			return x - z;
		case 0x07:
			return -x - z;
		case 0x08:
			return y + z;
		case 0x09:
			return -y + z;
		case 0x0A:
			return y - z;
		case 0x0B:
			return -y - z;
		case 0x0C:
			return y + x;
		case 0x0D:
			return -y + z;
		case 0x0E:
			return y - x;
		case 0x0F:
			return -y - z;
		}

		// must not reach here.
		return 0.0f;
	}

	float Lerp(float A, float B, float T) noexcept
	{
		return A + (B - A) * T;
	}

	float Fade(float T) noexcept
	{
		// 6T^5 - 15T^4 + 10T^3
		return T * T * T * (T * (T * 6.0 - 15.0) + 10.0);
	}

	int* HashTbl;

	static int HashTblBase[] =
	{
		151, 160, 137, 91, 90, 15,
		131, 13, 201, 95, 96, 53, 194, 233, 7, 225, 140, 36, 103, 30, 69, 142, 8, 99, 37, 240, 21, 10, 23,
		190, 6, 148, 247, 120, 234, 75, 0, 26, 197, 62, 94, 252, 219, 203, 117, 35, 11, 32, 57, 177, 33,
		88, 237, 149, 56, 87, 174, 20, 125, 136, 171, 168, 68, 175, 74, 165, 71, 134, 139, 48, 27, 166,
		77, 146, 158, 231, 83, 111, 229, 122, 60, 211, 133, 230, 220, 105, 92, 41, 55, 46, 245, 40, 244,
		102, 143, 54, 65, 25, 63, 161, 1, 216, 80, 73, 209, 76, 132, 187, 208, 89, 18, 169, 200, 196,
		135, 130, 116, 188, 159, 86, 164, 100, 109, 198, 173, 186, 3, 64, 52, 217, 226, 250, 124, 123,
		5, 202, 38, 147, 118, 126, 255, 82, 85, 212, 207, 206, 59, 227, 47, 16, 58, 17, 182, 189, 28, 42,
		223, 183, 170, 213, 119, 248, 152, 2, 44, 154, 163, 70, 221, 153, 101, 155, 167, 43, 172, 9,
		129, 22, 39, 253, 19, 98, 108, 110, 79, 113, 224, 232, 178, 185, 112, 104, 218, 246, 97, 228,
		251, 34, 242, 193, 238, 210, 144, 12, 191, 179, 162, 241, 81, 51,145, 235, 249, 14, 239, 107,
		49, 192, 214, 31, 181, 199, 106, 157, 184, 84, 204, 176, 115, 121, 50, 45, 127, 4, 150, 254,
		138, 236, 205, 93, 222, 114, 67, 29, 24, 72, 243, 141, 128, 195, 78, 66, 215, 61, 156, 180
	};

	void InitHashTable()
	{
		int HashTableSize = 2 * sizeof(HashTblBase) / sizeof(HashTblBase[0]);

		HashTbl = new int[HashTableSize];
		for (int Index = 0; Index < HashTableSize; Index++)
		{
			HashTbl[Index] = HashTblBase[Index % (HashTableSize / 2)];
		}
	}

	void DeleteHashTable()
	{
		if (HashTbl)
		{
			delete HashTbl;
		}
	}

	static float Perlin(float X, float Y, float Z)
	{
		InitHashTable();

		// calculate a location of unit cube.
		int UnitCubeX = static_cast<int>(X) & 255;
		int UnitCubeY = static_cast<int>(Y) & 255;
		int UnitCubeZ = static_cast<int>(Z) & 255;

		// coordinate in identity cube.
		float OffsetX = X - static_cast<int>(X);
		float OffsetY = Y - static_cast<int>(Y);
		float OffsetZ = Z - static_cast<int>(Z);

		// create weight for lerp.
		float U = Fade(OffsetX);
		float V = Fade(OffsetY);
		float W = Fade(OffsetZ);

		// create hashes.
		int AAA = HashTbl[HashTbl[HashTbl[UnitCubeX] + UnitCubeY] + UnitCubeZ];
		int ABA = HashTbl[HashTbl[HashTbl[UnitCubeX] + UnitCubeY + 1] + UnitCubeZ];
		int AAB = HashTbl[HashTbl[HashTbl[UnitCubeX] + UnitCubeY] + UnitCubeZ + 1];
		int ABB = HashTbl[HashTbl[HashTbl[UnitCubeX] + UnitCubeY + 1] + UnitCubeZ + 1];
		int BAA = HashTbl[HashTbl[HashTbl[UnitCubeX + 1] + UnitCubeY] + UnitCubeZ];
		int BBA = HashTbl[HashTbl[HashTbl[UnitCubeX + 1] + UnitCubeY + 1] + UnitCubeZ];
		int BAB = HashTbl[HashTbl[HashTbl[UnitCubeX + 1] + UnitCubeY] + UnitCubeZ + 1];
		int BBB = HashTbl[HashTbl[HashTbl[UnitCubeX + 1] + UnitCubeY + 1] + UnitCubeZ + 1];

		// create perlin noise.
		float X1, X2, Y1, Y2;
		X1 = Lerp(Grad(AAA, OffsetX, OffsetY, OffsetZ),
			Grad(BAA, OffsetX - 1, OffsetY, OffsetZ),
			U);
		X2 = Lerp(Grad(ABA, OffsetX, OffsetY - 1, OffsetZ),
			Grad(BBA, OffsetX - 1, OffsetY - 1, OffsetZ),
			U);
		Y1 = Lerp(X1, X2, V);
		X1 = Lerp(Grad(AAB, OffsetX, OffsetY, OffsetZ - 1),
			Grad(BAB, OffsetX - 1, OffsetY, OffsetZ - 1),
			U);
		X2 = Lerp(Grad(ABB, OffsetX, OffsetY - 1, OffsetZ - 1),
			Grad(BBB, OffsetX - 1, OffsetY - 1, OffsetZ - 1),
			U);
		Y2 = Lerp(X1, X2, V);

		float Result = (Lerp(Y1, Y2, W) + 1) / 2;

		DeleteHashTable();

		return Result;
	}

	float Perlin(float X, float Y, float Z, int Octaves, float Persistence)
	{
		float Total = 0.0f;
		float Frequency = 1.0f;
		float Amplitude = 1.0f;
		float MaxValue = 1.0f;

		for (int O = 0; O < Octaves; O++) {
			Total += Perlin(X * Frequency, Y * Frequency, Z * Frequency) * Amplitude;
			MaxValue += Amplitude;
			Amplitude *= Persistence;
			Frequency *= 2.0f;
		}

		return Total / MaxValue;
	}

	float ScaleToHashTblSize(float Value)
	{
		return Value * sizeof(HashTblBase);
	}
}   // namespace


#if WITH_EDITOR
#include "Runtime/Core/Public/Internationalization/Regex.h"
#endif

DEFINE_LOG_CATEGORY(LogESLibraryBPLibrary);

DECLARE_LOG_CATEGORY_EXTERN(LogCustomBlueprintCategory, Log, All);
DEFINE_LOG_CATEGORY(LogCustomBlueprintCategory);

UESLibraryBPLibrary::UESLibraryBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{}

void UESLibraryBPLibrary::GetCSVTableString(UDataTable* DataTable, FString& OutResult)
{
	if (!DataTable->RowStruct)
	{
		return;
	}

	// Write the header (column titles)
	OutResult = TEXT("---");
	for (TFieldIterator<UProperty> It(DataTable->RowStruct); It; ++It)
	{
		UProperty* BaseProp = *It;
		check(BaseProp);

		OutResult += TEXT(",");
		OutResult += BaseProp->GetName();
	}
	OutResult += TEXT("\n");
	// Write each row
	for (auto RowIt = DataTable->GetRowMap().CreateConstIterator(); RowIt; ++RowIt)
	{
		FName RowName = RowIt.Key();
		OutResult += RowName.ToString();

		uint8* RowData = RowIt.Value();
		if (!DataTable->RowStruct)
		{
			return;
		}

		for (TFieldIterator<UProperty> It(DataTable->RowStruct); It; ++It)
		{
			UProperty* BaseProp = *It;
			check(BaseProp);

			const void* Data = BaseProp->ContainerPtrToValuePtr<void>(RowData, 0);

			OutResult += TEXT(",");

			const FString PropertyValue = DataTableUtils::GetPropertyValueAsString(BaseProp, (uint8*)RowData, EDataTableExportFlags::UsePrettyPropertyNames);
			OutResult += TEXT("\"");
			OutResult += PropertyValue.Replace(TEXT("\""), TEXT("\"\""));
			OutResult += TEXT("\"");
		}

		OutResult += TEXT("\n");
	}
}

void UESLibraryBPLibrary::GetCSVRowNames(UDataTable* Table, TArray<FName>& OutRowNames)
{
	if (Table)
	{
		OutRowNames = Table->GetRowNames();
	}
	else
	{
		OutRowNames.Empty();
	}
}

void UESLibraryBPLibrary::GetCSVRowDataAndProperty(UDataTable* Table, FName InRowName, FName InColumnName, uint8*& OutRowData, UProperty*& OutProperty)
{
	if (Table == nullptr)
	{
		return;
	}

	// First build array of properties
	for (TFieldIterator<UProperty> It(Table->RowStruct); It; ++It)
	{
		UProperty* Prop = *It;
		check(Prop != NULL);
		FName PropName = FName(*Prop->GetName());
		if (!PropName.Compare(InColumnName))
		{
			UProperty* ColumnProp = Prop;

			// Now iterate over rows
			for (auto RowIt = Table->GetRowMap().CreateConstIterator(); RowIt; ++RowIt)
			{
				FName RowName = RowIt.Key();
				if (!RowName.Compare(InRowName))
				{
					OutRowData = RowIt.Value();
					OutProperty = ColumnProp;
				}
			}
		}
	}
}

FString UESLibraryBPLibrary::GetStringValueFromDataTable(UDataTable* Table, FName InRowName, FName InColumnName)
{
	uint8* RowData = nullptr;
	UProperty* ColumnProp = nullptr;

	GetCSVRowDataAndProperty(Table, InRowName, InColumnName, RowData, ColumnProp);
	if (RowData != nullptr && ColumnProp != nullptr)
	{
		return DataTableUtils::GetPropertyValueAsString(ColumnProp, RowData, EDataTableExportFlags::UsePrettyPropertyNames);
	}

	return TEXT("");
}

int32 UESLibraryBPLibrary::GetIntValueFromDataTable(UDataTable* Table, FName InRowName, FName InColumnName)
{
	FString ResultStr = GetStringValueFromDataTable(Table, InRowName, InColumnName);
	return ResultStr.IsNumeric() ? FCString::Atoi(*ResultStr) : -1;
}

float UESLibraryBPLibrary::GetFloatValueFromDataTable(UDataTable* Table, FName InRowName, FName InColumnName)
{
	FString ResultStr = GetStringValueFromDataTable(Table, InRowName, InColumnName);
	return ResultStr.IsNumeric() ? FCString::Atof(*ResultStr) : -1.f;
}

TAssetPtr<UTexture> UESLibraryBPLibrary::GetTextureFromDataTable(UDataTable* Table, FName InRowName, FName InColumnName)
{
	uint8* RowData = nullptr;
	UProperty* ColumnProp = nullptr;

	GetCSVRowDataAndProperty(Table, InRowName, InColumnName, RowData, ColumnProp);
	if (RowData != nullptr && ColumnProp != nullptr)
	{
		void* PropertyValue = ColumnProp->ContainerPtrToValuePtr<void>(RowData, 0);
		FAssetPtr& AssetPtr = *(FAssetPtr*)PropertyValue;

		FStringAssetReference ID;
		UObject* Object = AssetPtr.Get();
		if (Object)
		{
			// Use object in case name has changed.
			ID = FStringAssetReference(Object);
		}
		else
		{
			ID = AssetPtr.GetUniqueID();
		}

		//Synchronously load assets 
		FStreamableManager StreamableManager;
		UTexture* TextureAsset = Cast<UTexture>(StreamableManager.LoadSynchronous(ID));
		TAssetPtr<UTexture> TextureAssetPtr = TextureAsset;
		return TextureAssetPtr;
	}

	return nullptr;
}

//
//
/////////////////////////////////////////////////////////
//     ::BRANCHES::                                      //
/////////////////////////////////////////////////////////
//
//
void UESLibraryBPLibrary::Branch_OEquals(UObject* Check, UObject* Against, EN_Equals Branches)
{
	if (Check == Against) {
		Branches = EN_Equals::IfEquals;
	}
	else {
		Branches = EN_Equals::IfNot;
	}
}
//
void UESLibraryBPLibrary::Branch_ONotEqual(UObject* Check, UObject* Against, EN_NotEqual Branches)
{
	if (Check != Against) {
		Branches = EN_NotEqual::IfNotEqual;
	}
	else {
		Branches = EN_NotEqual::IfSo;
	}
}
//
//
void UESLibraryBPLibrary::Branch_STEquals(FString Check, FString Against, EN_Equals Branches)
{
	if (Check == Against) {
		Branches = EN_Equals::IfEquals;
	}
	else {
		Branches = EN_Equals::IfNot;
	}
}
//
void UESLibraryBPLibrary::Branch_TXEquals(FText Check, FText Against, EN_Equals Branches)
{
	if (Check.ToString() == Against.ToString()) {
		Branches = EN_Equals::IfEquals;
	}
	else {
		Branches = EN_Equals::IfNot;
	}
}
//
//
void UESLibraryBPLibrary::Branch_INTEquals(int32 Check, int32 Against, EN_Equals Branches)
{
	if (Check == Against) {
		Branches = EN_Equals::IfEquals;
	}
	else {
		Branches = EN_Equals::IfNot;
	}
}
//
void UESLibraryBPLibrary::Branch_INTNotEqual(int32 Check, int32 Against, EN_NotEqual Branches)
{
	if (Check != Against) {
		Branches = EN_NotEqual::IfNotEqual;
	}
	else {
		Branches = EN_NotEqual::IfSo;
	}
}
//
void UESLibraryBPLibrary::Branch_INTLessThan(int32 Check, int32 Against, EN_IfThenElse Branches)
{
	if (Check < Against) {
		Branches = EN_IfThenElse::IfTrue;
	}
	else {
		Branches = EN_IfThenElse::ElseDo;
	}
}
//
void UESLibraryBPLibrary::Branch_INTGreaterThan(int32 Check, int32 Against, EN_IfThenElse Branches)
{
	if (Check > Against) {
		Branches = EN_IfThenElse::IfTrue;
	}
	else {
		Branches = EN_IfThenElse::ElseDo;
	}
}
//
void UESLibraryBPLibrary::Branch_INTLessOREqual(int32 Check, int32 Against, EN_IfThenElse Branches)
{
	if (Check <= Against) {
		Branches = EN_IfThenElse::IfTrue;
	}
	else {
		Branches = EN_IfThenElse::ElseDo;
	}
}
//
void UESLibraryBPLibrary::Branch_INTGreaterOREqual(int32 Check, int32 Against, EN_IfThenElse Branches)
{
	if (Check >= Against) {
		Branches = EN_IfThenElse::IfTrue;
	}
	else {
		Branches = EN_IfThenElse::ElseDo;
	}
}
//
//
void UESLibraryBPLibrary::Branch_FEquals(float Check, float Against, EN_Equals Branches)
{
	if (Check == Against) {
		Branches = EN_Equals::IfEquals;
	}
	else {
		Branches = EN_Equals::IfNot;
	}
}
//
void UESLibraryBPLibrary::Branch_FNotEqual(float Check, float Against, EN_NotEqual Branches)
{
	if (Check != Against) {
		Branches = EN_NotEqual::IfNotEqual;
	}
	else {
		Branches = EN_NotEqual::IfSo;
	}
}
//
void UESLibraryBPLibrary::Branch_FLessThan(float Check, float Against, EN_IfThenElse Branches)
{
	if (Check < Against) {
		Branches = EN_IfThenElse::IfTrue;
	}
	else {
		Branches = EN_IfThenElse::ElseDo;
	}
}
//
void UESLibraryBPLibrary::Branch_FGreaterThan(float Check, float Against, EN_IfThenElse Branches)
{
	if (Check > Against) {
		Branches = EN_IfThenElse::IfTrue;
	}
	else {
		Branches = EN_IfThenElse::ElseDo;
	}
}
//
void UESLibraryBPLibrary::Branch_FLessOREqual(float Check, float Against, EN_IfThenElse Branches)
{
	if (Check <= Against) {
		Branches = EN_IfThenElse::IfTrue;
	}
	else {
		Branches = EN_IfThenElse::ElseDo;
	}
}
//
void UESLibraryBPLibrary::Branch_FGreaterOREqual(float Check, float Against, EN_IfThenElse Branches)
{
	if (Check >= Against) {
		Branches = EN_IfThenElse::IfTrue;
	}
	else {
		Branches = EN_IfThenElse::ElseDo;
	}
}
//
//
void UESLibraryBPLibrary::Branch_Color(FLinearColor Check, FLinearColor Against, EN_Match Branches, float Tolerance)
{
	if (Check.Equals(Against, Tolerance)) {
		Branches = EN_Match::IfMatch;
	}
	else {
		Branches = EN_Match::IfNot;
	}
}
//
//
void UESLibraryBPLibrary::Branch_AEquals(AActor* Check, AActor* Against, EN_Equals Branches)
{
	if (Check == Against) {
		Branches = EN_Equals::IfEquals;
	}
	else {
		Branches = EN_Equals::IfNot;
	}
}
//
void UESLibraryBPLibrary::Branch_ANotEqual(AActor* Check, AActor* Against, EN_NotEqual Branches)
{
	if (Check != Against) {
		Branches = EN_NotEqual::IfNotEqual;
	}
	else {
		Branches = EN_NotEqual::IfSo;
	}
}
//
//
void UESLibraryBPLibrary::Branch_SCEquals(USceneComponent* Check, USceneComponent* Against, EN_Equals Branches)
{
	if (Check == Against) {
		Branches = EN_Equals::IfEquals;
	}
	else {
		Branches = EN_Equals::IfNot;
	}
}
//
void UESLibraryBPLibrary::Branch_SCNotEqual(USceneComponent* Check, USceneComponent* Against, EN_NotEqual Branches)
{
	if (Check != Against) {
		Branches = EN_NotEqual::IfNotEqual;
	}
	else {
		Branches = EN_NotEqual::IfSo;
	}
}
//
//
void UESLibraryBPLibrary::Branch_PCEquals(UPrimitiveComponent* Check, UPrimitiveComponent* Against, EN_Equals Branches)
{
	if (Check == Against) {
		Branches = EN_Equals::IfEquals;
	}
	else {
		Branches = EN_Equals::IfNot;
	}
}
//
void UESLibraryBPLibrary::Branch_PCNotEqual(UPrimitiveComponent* Check, UPrimitiveComponent* Against, EN_NotEqual Branches)
{
	if (Check != Against) {
		Branches = EN_NotEqual::IfNotEqual;
	}
	else {
		Branches = EN_NotEqual::IfSo;
	}
}
//
//
void UESLibraryBPLibrary::Branch_Trace(TEnumAsByte<ETraceTypeQuery>Check, TEnumAsByte<ETraceTypeQuery>Against, EN_Match Branches)
{
	if (Check.GetValue() == Against.GetValue()) {
		Branches = EN_Match::IfMatch;
	}
	else {
		Branches = EN_Match::IfNot;
	}
}
//
void UESLibraryBPLibrary::Branch_PhysMat(TEnumAsByte<EObjectTypeQuery>Check, TEnumAsByte<EObjectTypeQuery>Against, EN_Match Branches)
{
	if (Check.GetValue() == Against.GetValue()) {
		Branches = EN_Match::IfMatch;
	}
	else {
		Branches = EN_Match::IfNot;
	}
}
//
//
/////////////////////////////////////////////////////////
//     ::ARITHMETICS::                                  //
/////////////////////////////////////////////////////////
//
//
int32 UESLibraryBPLibrary::INTPosIncrement(int32 Value)
{
	return Value++;
}
//
int32 UESLibraryBPLibrary::INTPreIncrement(int32 Value)
{
	return ++Value;
}
//
int32 UESLibraryBPLibrary::INTPosDecrement(int32 Value)
{
	return Value--;
}
//
int32 UESLibraryBPLibrary::INTPreDecrement(int32 Value)
{
	return --Value;
}
//
int32 UESLibraryBPLibrary::INTIncrement(int32 Value)
{
	return (Value += Value);
}
//
int32 UESLibraryBPLibrary::INTDecrement(int32 Value)
{
	return (Value -= Value);
}
//
int32 UESLibraryBPLibrary::INTMultiply(int32 Value)
{
	return (Value *= Value);
}
//
int32 UESLibraryBPLibrary::INTDivide(int32 Value, int32 i)
{
	return (Value /= (Value * i));
}
//
int32 UESLibraryBPLibrary::INTModulo(int32 Value, int32 i)
{
	return (Value %= i);
}
//
int32 UESLibraryBPLibrary::INTPercent(int32 Value, int32 i)
{
	return (Value = (Value * i) / 100);
}
//
//
float UESLibraryBPLibrary::FPosIncrement(float Value)
{
	return Value++;
}
//
float UESLibraryBPLibrary::FPreIncrement(float Value)
{
	return ++Value;
}
//
float UESLibraryBPLibrary::FPosDecrement(float Value)
{
	return Value--;
}
//
float UESLibraryBPLibrary::FPreDecrement(float Value)
{
	return --Value;
}
//
float UESLibraryBPLibrary::FIncrement(float Value)
{
	return (Value += Value);
}
//
float UESLibraryBPLibrary::FDecrement(float Value)
{
	return (Value -= Value);
}
//
float UESLibraryBPLibrary::FMultiply(float Value)
{
	return (Value *= Value);
}
//
float UESLibraryBPLibrary::FDivide(float Value, float f)
{
	return (Value /= (Value * f));
}
//
float UESLibraryBPLibrary::FPercent(float Value, float f)
{
	return (Value = (Value * f) / 100);
}

FQuat UESLibraryBPLibrary::Lerp(const FQuat& A, const FQuat& B, const float& Alpha)
{
	return FMath::Lerp(A, B, Alpha);
}

FQuat UESLibraryBPLibrary::FastLerp(const FQuat& A, const FQuat& B, const float& Alpha)
{
	return FQuat::FastLerp(A, B, Alpha);
}
FQuat UESLibraryBPLibrary::BiLerp(const FQuat& P00, const FQuat& P10, const FQuat& P01, const FQuat& P11, const float& FracX, const float& FracY)
{
	return FMath::BiLerp(P00, P10, P01, P11, FracX, FracY);
}
FQuat UESLibraryBPLibrary::FastBiLerp(const FQuat& P00, const FQuat& P10, const FQuat& P01, const FQuat& P11, const float& FracX, const float& FracY)
{
	return FQuat::FastBilerp(P00, P10, P01, P11, FracX, FracY);
}

FQuat UESLibraryBPLibrary::Slerp(const FQuat& A, const FQuat& B, const float& Slerp)
{
	return FQuat::Slerp(A, B, Slerp);
}

FQuat UESLibraryBPLibrary::Slerp_NotNormalized(const FQuat& A, const FQuat& B, const float& Slerp)
{
	return FQuat::Slerp_NotNormalized(A, B, Slerp);
}

float UESLibraryBPLibrary::Dot(const FQuat& A, const FQuat& B)
{
	return A | B;
}

FQuat UESLibraryBPLibrary::VectorToOrientationQuat(const FVector Vector)
{
	return Vector.ToOrientationQuat();
}

FRotator UESLibraryBPLibrary::VectorToOrientationRotator(const FVector Vector)
{
	return Vector.ToOrientationRotator();
}

FQuat UESLibraryBPLibrary::RotatorToQuat(const FRotator Rotator)
{
	return Rotator.Quaternion();
}

FRotator UESLibraryBPLibrary::QuatToRotator(const FQuat& Quat)
{
	return FRotator(Quat);
}

float UESLibraryBPLibrary::AngleBetweenDirectionVectorsRad(FVector A, FVector B)
{
	A.Normalize(1.0f);
	B.Normalize(1.0f);

	return FGenericPlatformMath::Acos(FVector::DotProduct(A, B));
}

float UESLibraryBPLibrary::AngleBetweenDirectionVectorsDeg(FVector A, FVector B)
{
	A.Normalize(1.0f);
	B.Normalize(1.0f);

	return FMath::RadiansToDegrees(FGenericPlatformMath::Acos(FVector::DotProduct(A, B)));
}

float UESLibraryBPLibrary::AngleBetweenQuatsRad(FQuat A, FQuat B)
{
	return A.AngularDistance(B);
}

float UESLibraryBPLibrary::AngleBetweenQuatsDeg(FQuat A, FQuat B)
{
	return FMath::RadiansToDegrees(A.AngularDistance(B));
}

FQuat UESLibraryBPLibrary::EulerDegToQuat(const FVector Euler)
{
	return FQuat::MakeFromEuler(Euler);
}

FVector UESLibraryBPLibrary::QuatToEulerDeg(const FQuat& Quat)
{
	return Quat.Euler();
}

FQuat UESLibraryBPLibrary::QuatPlusQuat(const FQuat& A, const FQuat& B)
{
	return A + B;
}

FQuat UESLibraryBPLibrary::QuatMinusQuat(const FQuat& A, const FQuat& B)
{
	return A - B;
}

FQuat UESLibraryBPLibrary::QuatMultiplyQuat(const FQuat& A, const FQuat& B)
{
	return A * B;
}

FQuat UESLibraryBPLibrary::QuatMultiplyFloatScale(const FQuat& A, const float B)
{
	return A * B;
}

FQuat UESLibraryBPLibrary::QuatDivFloatScale(const FQuat& A, const float B)
{
	return A / B;
}

bool UESLibraryBPLibrary::AreQuatsEqual(const FQuat& A, const FQuat& B)
{
	return A == B;
}

FString UESLibraryBPLibrary::QuatToString(const FQuat& Quat)
{
	return FString::Printf(TEXT("X=%f,Y=%f,Z=%f,W=%f"), Quat.X, Quat.Y, Quat.Z, Quat.W);
}

void UESLibraryBPLibrary::AddActorLocalRotation(AActor* Actor, const FQuat& Quat, bool bSweep, FHitResult& OutSweepHitResult, bool bTeleport)
{
	ETeleportType Teleport;

	if (bTeleport)
	{
		Teleport = ETeleportType::TeleportPhysics;
	}
	else
	{
		Teleport = ETeleportType::None;
	}

	Actor->AddActorLocalRotation(Quat, bSweep, &OutSweepHitResult, Teleport);
}

void UESLibraryBPLibrary::AddActorWorldRotation(AActor* Actor, const FQuat& Quat, bool bSweep, FHitResult& OutSweepHitResult, bool bTeleport)
{
	ETeleportType Teleport;

	if (bTeleport)
	{
		Teleport = ETeleportType::TeleportPhysics;
	}
	else
	{
		Teleport = ETeleportType::None;
	}

	Actor->AddActorWorldRotation(Quat, bSweep, &OutSweepHitResult, Teleport);
}

void UESLibraryBPLibrary::AddComponentLocalRotation(USceneComponent* Component, const FQuat& Quat, bool bSweep, FHitResult& OutSweepHitResult, bool bTeleport)
{
	ETeleportType Teleport;

	if (bTeleport)
	{
		Teleport = ETeleportType::TeleportPhysics;
	}
	else
	{
		Teleport = ETeleportType::None;
	}

	Component->AddLocalRotation(Quat, bSweep, &OutSweepHitResult, Teleport);
}

void UESLibraryBPLibrary::AddComponentRelativeRotation(USceneComponent* Component, const FQuat& Quat, bool bSweep, FHitResult& OutSweepHitResult, bool bTeleport)
{
	ETeleportType Teleport;

	if (bTeleport)
	{
		Teleport = ETeleportType::TeleportPhysics;
	}
	else
	{
		Teleport = ETeleportType::None;
	}

	Component->AddRelativeRotation(Quat, bSweep, &OutSweepHitResult, Teleport);
}

void UESLibraryBPLibrary::AddComponentWorldRotation(USceneComponent* Component, const FQuat& Quat, bool bSweep, FHitResult& OutSweepHitResult, bool bTeleport)
{
	ETeleportType Teleport;

	if (bTeleport)
	{
		Teleport = ETeleportType::TeleportPhysics;
	}
	else
	{
		Teleport = ETeleportType::None;
	}

	Component->AddWorldRotation(Quat, bSweep, &OutSweepHitResult, Teleport);
}

void UESLibraryBPLibrary::SetActorRelativeRotation(AActor* Actor, const FQuat& Quat, bool bSweep, FHitResult& OutSweepHitResult, bool bTeleport)
{
	ETeleportType Teleport;

	if (bTeleport)
	{
		Teleport = ETeleportType::TeleportPhysics;
	}
	else
	{
		Teleport = ETeleportType::None;
	}

	Actor->SetActorRelativeRotation(Quat, bSweep, &OutSweepHitResult, Teleport);
}

void UESLibraryBPLibrary::SetActorRotation(AActor* Actor, const FQuat& Quat, bool bTeleport)
{
	ETeleportType Teleport;

	if (bTeleport)
	{
		Teleport = ETeleportType::TeleportPhysics;
	}
	else
	{
		Teleport = ETeleportType::None;
	}

	Actor->SetActorRotation(Quat, Teleport);
}

void UESLibraryBPLibrary::SetComponentRelativeRotation(USceneComponent* Component, const FQuat& Quat, bool bSweep, FHitResult& OutSweepHitResult, bool bTeleport)
{
	ETeleportType Teleport;

	if (bTeleport)
	{
		Teleport = ETeleportType::TeleportPhysics;
	}
	else
	{
		Teleport = ETeleportType::None;
	}

	Component->SetRelativeRotation(Quat, bSweep, &OutSweepHitResult, Teleport);
}

void UESLibraryBPLibrary::SetComponentWorldRotation(USceneComponent* Component, const FQuat& Quat, bool bSweep, FHitResult& OutSweepHitResult, bool bTeleport)
{
	ETeleportType Teleport;

	if (bTeleport)
	{
		Teleport = ETeleportType::TeleportPhysics;
	}
	else
	{
		Teleport = ETeleportType::None;
	}

	Component->SetWorldRotation(Quat, bSweep, &OutSweepHitResult, Teleport);
}

FQuat UESLibraryBPLibrary::GetTransformQuat(const FTransform Transform)
{
	return Transform.GetRotation();
}

void UESLibraryBPLibrary::BreakTransformQuat(const FTransform Transform, FVector& Location, FQuat& RotationQuat, FVector& Scale)
{
	Location = Transform.GetLocation();
	RotationQuat = Transform.GetRotation();
	Scale = Transform.GetScale3D();
}

void UESLibraryBPLibrary::QuatAxisAngleRad(const FQuat& Quat, float& OutAngleRad, FVector& OutAxis)
{
	OutAngleRad = Quat.GetAngle();
	OutAxis = Quat.GetRotationAxis();
}

void UESLibraryBPLibrary::QuatAxisAngleDeg(const FQuat& Quat, float& OutAngleDeg, FVector& OutAxis)
{
	OutAngleDeg = FMath::RadiansToDegrees(Quat.GetAngle());
	OutAxis = Quat.GetRotationAxis();
}

FQuat UESLibraryBPLibrary::FindBetweenNormals(const FVector& Normal1, const FVector& Normal2)
{
	return FQuat::FindBetweenNormals(Normal1, Normal2);
}

FVector UESLibraryBPLibrary::GetForwardVector(const FQuat& Quat)
{
	return Quat.GetForwardVector();
}

FVector UESLibraryBPLibrary::GetRightVector(const FQuat& Quat)
{
	return Quat.GetRightVector();
}

FVector UESLibraryBPLibrary::GetUpVector(const FQuat& Quat)
{
	return Quat.GetUpVector();
}

FQuat UESLibraryBPLibrary::Inverse(const FQuat& Quat)
{
	return Quat.Inverse();
}

FVector UESLibraryBPLibrary::QuatToVector(const FQuat& Quat)
{
	return Quat.Vector();
}

void UESLibraryBPLibrary::OctavePerlinNoise1D(float& Out, float X,
	int Octaves, float Persistence)
{
	float ScaledX = ScaleToHashTblSize(X);

	Out = Perlin(ScaledX, 0.0f, 0.0f, Octaves, Persistence);
}

void UESLibraryBPLibrary::OctavePerlinNoise2D(float& Out, float X, float Y,
	int Octaves, float Persistence)
{
	float ScaledX = ScaleToHashTblSize(X);
	float ScaledY = ScaleToHashTblSize(Y);

	Out = Perlin(ScaledX, ScaledY, 0.0f, Octaves, Persistence);
}

void UESLibraryBPLibrary::OctavePerlinNoise3D(float& Out, float X, float Y, float Z,
	int Octaves, float Persistence)
{
	float ScaledX = ScaleToHashTblSize(X);
	float ScaledY = ScaleToHashTblSize(Y);
	float ScaledZ = ScaleToHashTblSize(Z);

	Out = Perlin(ScaledX, ScaledY, ScaledZ, Octaves, Persistence);
}

void UESLibraryBPLibrary::PerlinNoise1D(float& Out, float X,
	float Frequency, float Amplitude)
{
	float ScaledX = ScaleToHashTblSize(X);

	Out = Perlin(ScaledX * Frequency, 0.0f, 0.0f) * Amplitude;
}

void UESLibraryBPLibrary::PerlinNoise2D(float& Out, float X, float Y,
	float Frequency, float Amplitude)
{
	float ScaledX = ScaleToHashTblSize(X);
	float ScaledY = ScaleToHashTblSize(Y);

	Out = Perlin(ScaledX * Frequency, ScaledY * Frequency, 0.0f) * Amplitude;
}

void UESLibraryBPLibrary::PerlinNoise3D(float& Out, float X, float Y, float Z,
	float Frequency, float Amplitude)
{
	float ScaledX = ScaleToHashTblSize(X);
	float ScaledY = ScaleToHashTblSize(Y);
	float ScaledZ = ScaleToHashTblSize(Z);

	Out = Perlin(ScaledX * Frequency, ScaledY * Frequency, ScaledZ * Frequency) * Amplitude;
}

void UESLibraryBPLibrary::AccumulatedPerlinNoise1D(float& Out,
	const TArray<float>& Frequencies,
	const TArray<float>& Amplitudes,
	float X)
{
	if (Frequencies.Num() != Amplitudes.Num())
	{
		UE_LOG(LogTemp, Error,
			TEXT("Number of elements in Frequences and Amplitudes must be same. (Frequences: %d, Amplitudes: %d)"),
			Frequencies.Num(), Amplitudes.Num());
		Out = 0.0f;
		return;
	}

	float ScaledX = ScaleToHashTblSize(X);

	Out = 0.0f;
	for (int Index = 0; Index < Frequencies.Num(); ++Index)
	{
		Out += Perlin(ScaledX * Frequencies[Index], 0.0f, 0.0f) * Amplitudes[Index];
	}
}

void UESLibraryBPLibrary::AccumulatedPerlinNoise2D(float& Out,
	const TArray<float>& Frequencies,
	const TArray<float>& Amplitudes,
	float X, float Y)
{
	if (Frequencies.Num() != Amplitudes.Num())
	{
		UE_LOG(LogTemp, Error,
			TEXT("Number of elements in Frequences and Amplitudes must be same. (Frequences: %d, Amplitudes: %d)"),
			Frequencies.Num(), Amplitudes.Num());
		Out = 0.0f;
		return;
	}

	float ScaledX = ScaleToHashTblSize(X);
	float ScaledY = ScaleToHashTblSize(Y);

	Out = 0.0f;
	for (int Index = 0; Index < Frequencies.Num(); ++Index)
	{
		Out += Perlin(ScaledX * Frequencies[Index], ScaledY * Frequencies[Index], 0.0f) * Amplitudes[Index];
	}
}

void UESLibraryBPLibrary::AccumulatedPerlinNoise3D(float& Out,
	const TArray<float>& Frequencies,
	const TArray<float>& Amplitudes,
	float X, float Y, float Z)
{
	if (Frequencies.Num() != Amplitudes.Num())
	{
		UE_LOG(LogTemp, Error,
			TEXT("Number of elements in Frequences and Amplitudes must be same. (Frequences: %d, Amplitudes: %d)"),
			Frequencies.Num(), Amplitudes.Num());
		Out = 0.0f;
		return;
	}

	float ScaledX = ScaleToHashTblSize(X);
	float ScaledY = ScaleToHashTblSize(Y);
	float ScaledZ = ScaleToHashTblSize(Z);

	Out = 0.0f;
	for (int Index = 0; Index < Frequencies.Num(); ++Index)
	{
		Out += Perlin(ScaledX * Frequencies[Index], ScaledY * Frequencies[Index], ScaledZ * Frequencies[Index]) * Amplitudes[Index];
	}
}
int UESLibraryBPLibrary::LoopToRange_Int(int InValue, int LoopAt)
{
	LoopAt = FMath::Max(LoopAt, 1);

	if (FMath::Abs(InValue) < FMath::Abs(LoopAt))
	{
		return (InValue < 0) ?
			LoopToRange_Int(LoopAt + InValue, LoopAt)/*recursively will handle looping the value if its negative*/
			: InValue/* we already checked if it was positive and less than LoopAt so no need to make it abs */;
	}

	return (FMath::Abs(InValue) % FMath::Abs(LoopAt));
}

int UESLibraryBPLibrary::RandomIntegerInRange_IntPoint(FIntPoint InIntPoint)
{
	return FMath::RandRange(InIntPoint.X, InIntPoint.Y);
}

TArray<int> UESLibraryBPLibrary::Sort_Int(TArray<int> InArray, bool IsReversed)
{
	// Using lambda version cause lambda's are fun
	if (IsReversed)
	{
		InArray.StableSort([](const int& A, const int& B)
			{
				return (A < B);
			});
	}
	else
	{
		InArray.StableSort([](const int& A, const int& B)
			{
				return (A > B);
			});
	}
	return InArray;
}

int UESLibraryBPLibrary::Negate_Int(int InValue)
{
	return -InValue;
}

float UESLibraryBPLibrary::OneMinus(float InValue)
{
	return (1.0f - InValue);
}

float UESLibraryBPLibrary::LoopToRange_Float(float InValue, float LoopAt)
{
	LoopAt = FMath::Max(LoopAt, 1.0f);

	if (FMath::Abs(InValue) < FMath::Abs(LoopAt))
	{
		return (InValue < 0.0f) ?
			LoopToRange_Float(LoopAt + InValue, LoopAt)/*recursively will handle looping the value if its negative*/
			: InValue/* we already checked if it was positive and less than LoopAt so no need to make it abs */;
	}

	return ((FMath::Abs(LoopAt) != 0.0f) ? FMath::Fmod(FMath::Abs(InValue), FMath::Abs(LoopAt)) : 0.0f);
}

float UESLibraryBPLibrary::RandomFloatInRange_Vector2D(FVector2D InVector2D)
{
	return FMath::RandRange(InVector2D.X, InVector2D.Y);
}

TArray<float> UESLibraryBPLibrary::Sort_Float(TArray<float> InArray, bool IsReversed)
{
	// Using lambda version cause lambda's are fun
	if (IsReversed)
	{
		InArray.StableSort([](const float& A, const float& B)
			{
				return (A < B);
			});
	}
	else
	{
		InArray.StableSort([](const float& A, const float& B)
			{
				return (A > B);
			});
	}
	return InArray;
}

float UESLibraryBPLibrary::Negate_Float(float InValue)
{
	return -InValue;
}

FVector2D UESLibraryBPLibrary::Round2DVector(FVector2D Value)
{
	return FVector2D(FMath::RoundToFloat(Value.X),
		FMath::RoundToFloat(Value.Y));
}

bool UESLibraryBPLibrary::InRange(FVector2D Value, FVector2D Min, FVector2D Max)
{
	return (UKismetMathLibrary::InRange_FloatFloat(Value.X, Min.X, Max.X) && UKismetMathLibrary::InRange_FloatFloat(Value.Y, Min.Y, Max.Y));
}

FVector2D UESLibraryBPLibrary::GetCenterBetweenPoints2D(FVector2D V1, FVector2D V2)
{
	return ((V1 + V2) * 0.5f);
}

FVector2D UESLibraryBPLibrary::Vector2D_Min(FVector2D A, FVector2D B)
{
	return FVector2D((A.X < B.X) ? A.X : B.X, (A.Y < B.X) ? A.Y : B.Y);
}

FVector2D UESLibraryBPLibrary::Vector2D_Max(FVector2D A, FVector2D B)
{
	return FVector2D((A.X > B.X) ? A.X : B.X, (A.Y > B.X) ? A.Y : B.Y);
}

FVector2D UESLibraryBPLibrary::ClampVector2D(FVector2D Value, FVector2D Min, FVector2D Max)
{
	return FVector2D(FMath::Clamp(Value.X, Min.X, Max.X), FMath::Clamp(Value.Y, Min.Y, Max.Y));
}

FVector UESLibraryBPLibrary::RoundVector(FVector Value)
{
	return FVector(FMath::RoundToFloat(Value.X),
		FMath::RoundToFloat(Value.Y),
		FMath::RoundToFloat(Value.Z));
}

FVector UESLibraryBPLibrary::GetCenterBetweenPoints(FVector V1, FVector V2)
{
	return ((V1 + V2) * 0.5f);
}

FVector UESLibraryBPLibrary::ClampToBounds(FVector Point, FVector Min, FVector Max)
{
	return Point.BoundToBox(Min, Max);
}

FRotator UESLibraryBPLibrary::RotatorDifference(FRotator A, FRotator B)
{
	FRotator Diff = (A - B);
	return Diff;
}

FRotator UESLibraryBPLibrary::GridSnapRotation(FRotator Rotator, float GridDeg)
{
	if (FMath::IsNearlyZero(GridDeg))
	{
		return Rotator;
	}

	// We assume grid size values of max 90	
	const float gridRad = FMath::DegreesToRadians(GridDeg);
	FQuat quat = Rotator.Quaternion();

	FVector forward = quat.GetForwardVector();
	FVector right = quat.GetRightVector();

	// Forward
	// To get the forward vector, we snap the forward vector of the quaternion
	// to a linear representation of the rotation.
	FVector forwardResult;
	{
		// Bring the vector into linear space
		forwardResult = FVector(
			FMath::Asin(forward.X)
			, FMath::Asin(forward.Y)
			, FMath::Asin(forward.Z));

		// Snap in linear space
		forwardResult = FVector(
			FMath::GridSnap(forwardResult.X, gridRad)
			, FMath::GridSnap(forwardResult.Y, gridRad)
			, FMath::GridSnap(forwardResult.Z, gridRad));

		// Back to sine space
		forwardResult = FVector(
			FMath::Sin(forwardResult.X)
			, FMath::Sin(forwardResult.Y)
			, FMath::Sin(forwardResult.Z));

		// Ensure our forward vector is not Zero
		if (forwardResult.IsNearlyZero())
		{
			TArray<float> maxHelper = { FMath::Abs(forward.X), FMath::Abs(forward.Y), FMath::Abs(forward.Z) };
			int32 maxIndex = INDEX_NONE;
			FMath::Max(maxHelper, &maxIndex);
			forwardResult[maxIndex] = FMath::Sign(forward[maxIndex]);
		}

		// Snapping each component of the vector to the grid does not yet place the vector
		// in the rotation grid (when z != 0). We need to make a correction that also normalizes
		// the vector again.
		// E.g 45 deg rotated around the y axis and then 45deg rotated around the z axis.
		// Cause of the component snapping, all components of the vector are now 0.707 (sin space).
		// Only the z component is valid to have 0.707, X and Y must be adjusted.
		// The proper result must be FVector(0.5, 0.5, 0.707)
		float sizeXYTarget = FMath::Sqrt(1 - FMath::Square(forwardResult.Z));
		FVector2D vec2D = FVector2D(forwardResult);
		float size2d = vec2D.Size();
		if (FMath::IsNearlyZero(size2d))
		{
			vec2D *= 0;
		}
		else
		{
			vec2D *= sizeXYTarget / size2d;
		}

		forwardResult.Normalize();
	}

	// Right
	// To get the right vector we rotate in grid distance around the forward vector
	// and take the vector that is closest to the original right vector.
	FVector rightResult;
	{
		FVector rightTemp;
		if (forwardResult.Equals(FVector(0.f, 0.f, 1.f)))
		{
			rightTemp = FVector(0.f, 1.f, 0.f);
		}
		else if (forwardResult.Equals(FVector(0.f, 0.f, -1.f)))
		{
			rightTemp = FVector(0.f, -1.f, 0.f);
		}
		else
		{
			rightTemp = FVector(0.f, 0.f, 1.f) ^ forwardResult;
			rightTemp.Normalize();
		}
		FVector bestMatch = rightTemp;
		float distClosest = FVector::DistSquared(rightTemp, right);

		bool bInversed = false;
		bool bWasCloser = false;
		int32 rotMultiplier = 0;
		while (true)
		{
			rotMultiplier = rotMultiplier + (bInversed ? -1 : 1);
			FVector rightRotated = rightTemp.RotateAngleAxis(GridDeg * rotMultiplier, forwardResult);
			float dist = FVector::DistSquared(rightRotated, right);
			if (dist < distClosest || FMath::IsNearlyEqual(dist, distClosest, KINDA_SMALL_NUMBER))
			{
				bWasCloser = true;
				distClosest = dist;
				bestMatch = rightRotated;
			}
			else if (dist > distClosest)
			{
				// Getting further away from our target
				if (!bInversed)
				{
					// First time, inverse rotation
					bInversed = true;
				}
				else if (bWasCloser)
				{
					// Have been closest possible already and getting further away again: closest possible found
					break;
				}
			}
		}

		rightResult = bestMatch;
	}

	// Up
	FVector upResult;
	{
		upResult = forwardResult ^ rightResult;
		upResult.Normalize();
	}

	FRotator out = UKismetMathLibrary::MakeRotationFromAxes(forwardResult, rightResult, upResult);
	ensure(!out.ContainsNaN());
	return out;
}

//--------------------PlatformType、ArraySqrt、ServerIP、Audio、physics、UMG lib--------------------
#pragma region Platform Checks

void UESLibraryBPLibrary::SwitchOnPlatformType(EPlatformType& Result)
{
	Result = GetPlatformType();
}

EPlatformType UESLibraryBPLibrary::GetPlatformType()
{
#if PLATFORM_XBOXONE
	return EPlatformType::XboxOne;
#elif PLATFORM_PS4
	return EPlatformType::PS4;
#elif PLATFORM_SWITCH
	return EPlatformType::Switch;
#else
	return EPlatformType::Desktop;
#endif
}

bool UESLibraryBPLibrary::DebugBuild()
{
#if UE_BUILD_DEBUG
	return true;
#else
	return false;
#endif
}

bool UESLibraryBPLibrary::DevelopmentBuild()
{
#if UE_BUILD_DEVELOPMENT
	return true;
#else
	return false;
#endif
}

bool UESLibraryBPLibrary::TestBuild()
{
#if UE_BUILD_TEST
	return true;
#else
	return false;
#endif
}

bool UESLibraryBPLibrary::ShippingBuild()
{
#if UE_BUILD_SHIPPING
	return true;
#else
	return false;
#endif
}

bool UESLibraryBPLibrary::WithEditor()
{
#if WITH_EDITOR
	return true;
#else
	return false;
#endif
}

bool UESLibraryBPLibrary::WindowsPlatform()
{
#if PLATFORM_WINDOWS
	return true;
#else
	return false;
#endif
}

bool UESLibraryBPLibrary::Windows32Platform()
{
#if PLATFORM_WINDOWS
#ifdef _WIN64
	return false;
#else
	return true;
#endif
#else
	return false;
#endif
}

bool UESLibraryBPLibrary::Windows64Platform()
{
#if PLATFORM_WINDOWS
#ifdef _WIN64
	return true;
#else
	return false;
#endif
#else
	return false;
#endif
}

bool UESLibraryBPLibrary::WindowsRtPlatform()
{
#ifdef PLATFORM_WINRT
#if PLATFORM_WINRT
	return true;
#else
	return false;
#endif
#else
	return false;
#endif
}

bool UESLibraryBPLibrary::WindowsRtArmPlatform()
{
#ifdef PLATFORM_WINRT_ARM
#if PLATFORM_WINRT_ARM
	return true;
#else
	return false;
#endif
#else
	return false;
#endif
}

bool UESLibraryBPLibrary::LinuxPlatform()
{
#if PLATFORM_LINUX
	return true;
#else
	return false;
#endif
}

bool UESLibraryBPLibrary::MacPlatform()
{
#if PLATFORM_MAC
	return true;
#else
	return false;
#endif
}

bool UESLibraryBPLibrary::Ps4Platform()
{
#if PLATFORM_PS4
	return true;
#else
	return false;
#endif
}

bool UESLibraryBPLibrary::XboxOnePlatform()
{
#if PLATFORM_XBOXONE
	return true;
#else
	return false;
#endif
}

bool UESLibraryBPLibrary::SwitchPlatform()
{
#if PLATFORM_SWITCH
	return true;
#else
	return false;
#endif
}

bool UESLibraryBPLibrary::AndroidPlatform()
{
#if PLATFORM_ANDROID
	return true;
#else
	return false;
#endif
}

bool UESLibraryBPLibrary::IosPlatform()
{
#if PLATFORM_IOS
	return true;
#else
	return false;
#endif
}

bool UESLibraryBPLibrary::DesktopPlatform()
{
#if PLATFORM_DESKTOP
	return true;
#else
	return false;
#endif
}

#pragma endregion
void UESLibraryBPLibrary::ForceCrash(const FString& CrashMessage)
{
#if !UE_BUILD_SHIPPING
	// Log the error a bunch to know where it happens exactly
	for (int index = 5; index-- > 0;)
	{
		UE_LOG(LogESLibraryBPLibrary, Fatal, TEXT("FORCING CRASH TO HAPPEN: %s"), *CrashMessage);
	}

	// Print that this was intended
	FDebug::AssertFailed("This crash was caused by UESLibraryBPLibrary::ForceCrash and was meant to happen.", __FILE__, __LINE__);
#endif
}

void UESLibraryBPLibrary::RequestExit(bool bForce)
{
	FGenericPlatformMisc::RequestExit(bForce);
}

void UESLibraryBPLibrary::SetGlobalVolume(UObject* WorldContextObject, float InAmount)
{
	if (GEngine)
	{
		if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
		{
			if (FAudioDevice* AudioDevice = World->GetAudioDevice())
			{
				AudioDevice->SetTransientMasterVolume(FMath::Max(InAmount, 0.0f));
			}
		}
	}
}

bool UESLibraryBPLibrary::AreObjectsSameClass(UObject* A, UObject* B)
{
	if (A && B)
	{
		return (A->GetClass() == B->GetClass());
	}
	return false;
}

bool UESLibraryBPLibrary::IsClassSameAs(UObject* A, UClass* ClassToCompare)
{
	if (!A || !ClassToCompare)
	{
		return false;
	}

	return (A->GetClass() == ClassToCompare);
}

void UESLibraryBPLibrary::GetAllLevels(UObject* WorldContextObject, TArray<ULevel*>& Levels)
{
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	Levels = World->GetLevels();
}

UClass* UESLibraryBPLibrary::GetClassFromAssetPath(FString Path)
{
	TSubclassOf<UObject> AssetToCheck = NULL;

	// Attempt to load the asset normally
	{
		FString L, R;
		FString AssetName = Path;
		AssetName.Split(".", &L, &R, ESearchCase::IgnoreCase, ESearchDir::FromEnd);

		if (AssetToCheck = LoadClass<UObject>(NULL, *AssetName, *Path))
		{
			return AssetToCheck.Get();
		}
	}
	// If we failed to load it normally then we try unconventional methods(cue Patrick looking menacing meme)

	// Try loading the object as an asset		
	UObject* Asset = StaticLoadObject(UObject::StaticClass(), nullptr, *Path);
	if (Asset)
	{
		UBlueprint* Bp = Cast<UBlueprint>(Asset->GetClass());
		if (Bp)
		{
			// Found asset
			AssetToCheck = Bp->GetClass();
		}
		else
		{
			UE_LOG(LogESLibraryBPLibrary, Warning, TEXT("Class not valid"));
		}
	}
	else
	{
		UE_LOG(LogESLibraryBPLibrary, Warning, TEXT("Asset is null"));
	}

	return AssetToCheck.Get();
}

void UESLibraryBPLibrary::Conv_CollisionChannelsToObjectTypeQuerys(
	TArray<TEnumAsByte<ECollisionChannel>> Channels, TArray<TEnumAsByte<EObjectTypeQuery>>& ConvertedTypes)
{
	ConvertedTypes.Reset();
	for (ECollisionChannel Channel : Channels)
	{
		ConvertedTypes.Add(UEngineTypes::ConvertToObjectType(Channel));
	}
}

TEnumAsByte<EObjectTypeQuery> UESLibraryBPLibrary::Conv_CollisionChannelToObjectTypeQuery(
	TEnumAsByte<ECollisionChannel> Channel)
{
	return UEngineTypes::ConvertToObjectType(Channel);
}

FString UESLibraryBPLibrary::GetLocalAppDataDirectory()
{
	return (FPaths::ConvertRelativePathToFull(FPaths::ProjectUserDir()));
}

TArray<FString> UESLibraryBPLibrary::GetSubDirectories(FString InDir, bool bDeepSearch)
{
	// Turn it into a wildcard search
	FString FinalPath = InDir / TEXT("*");

	TArray<FString> FoundDir;
	// Gets finds the directories only
	IFileManager::Get().FindFiles(FoundDir, *FinalPath, false, true);

	// Loop through and add the directories path
	for (int index = FoundDir.Num(); index-- > 0;)
	{
		FoundDir[index] = (InDir + FoundDir[index] + "/");
	}

	// If we found directories and we're doing a deep search
	if (FoundDir.Num() > 0 && bDeepSearch)
	{
		// For each directory add each once's sub directories recursively
		for (int index = FoundDir.Num(); index-- > 0;)
		{
			// If that subdirectory has a subdirectory then it will keep going till an end is reached
			TArray<FString> SubDir = GetSubDirectories(FoundDir[index], true);
			FoundDir.Append(SubDir);
		}
	}
	return FoundDir;
}

bool UESLibraryBPLibrary::DeleteDirectory(FString InDir)
{
	if (FPaths::DirectoryExists(InDir))
	{
		return IFileManager::Get().DeleteDirectory(*InDir, false, true);
	}
	UE_LOG(LogESLibraryBPLibrary, Warning, TEXT("Directory: [%s] does not exist, so we're counting this as already deleted!"), *InDir);
	return true;
}

bool UESLibraryBPLibrary::DeleteFile(FString InFileDir)
{
	if (FPaths::FileExists(InFileDir))
	{
		return IFileManager::Get().Delete(*InFileDir, false, true, true);
	}
	UE_LOG(LogESLibraryBPLibrary, Warning, TEXT("File: [%s] does not exist, so we're counting this as already deleted!"), *InFileDir);
	return true;
}

bool UESLibraryBPLibrary::GetObjectsOf(TSubclassOf<UObject> InType,
	TArray<UObject*>& OutputObjects, bool bIsBlueprintClass,
	const FString& InFolder)
{
	// Valid check
	if (!InType || InFolder.IsEmpty())
	{
		UE_LOG(LogESLibraryBPLibrary, Warning, TEXT("Invalid parameters to get objects of."));
		return false;
	}

	// Get the objects in folder
	UObjectLibrary* Library = UObjectLibrary::CreateLibrary(InType, bIsBlueprintClass, GIsEditor);
	// Add the object library to asset registry to get the assets from it
	Library->AddToRoot();

	// Load the assets/blueprints
	if (bIsBlueprintClass)
	{
		Library->LoadBlueprintsFromPath(InFolder);
	}
	else
	{

		Library->LoadAssetsFromPath(InFolder);
	}

	// Get the assets from the object libary to return them
	Library->GetObjects<UObject>(OutputObjects);
	Library->RemoveFromRoot();

	if (OutputObjects.Num() > 0)
	{
		// Log how many we found
		UE_LOG(LogESLibraryBPLibrary, Display, TEXT("Found %d %s's in directory: %s"),
			OutputObjects.Num(), *InType->GetName(), *InFolder);
	}

	return (OutputObjects.Num() > 0);
}
TArray<FString> UESLibraryBPLibrary::SortStrings(const TArray<FString> UnSortedStrings)
{
	TArray<FString> SortedStrings = UnSortedStrings;
	SortedStrings.StableSort();
	return SortedStrings;
}

FString UESLibraryBPLibrary::IncreaseVerbosityOfMessage(FString InMessage, bool bIsError)
{
	return (((bIsError) ? "error:" : "warning:") + InMessage);
}

void UESLibraryBPLibrary::PrintStringWithCategory(UObject* WorldContextObject,
	const FString& InString, FString InCategory,
	bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration)
{
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	FString Prefix;
	if (World)
	{
		if (World->WorldType == EWorldType::PIE)
		{
			switch (World->GetNetMode())
			{
			case NM_Client:
				Prefix = FString::Printf(TEXT("Client %d: "), GPlayInEditorID - 1);
				break;
			case NM_DedicatedServer:
			case NM_ListenServer:
				Prefix = FString::Printf(TEXT("Server: "));
				break;
			case NM_Standalone:
				break;
			}
		}
	}

	if (InCategory.IsEmpty())
	{
		InCategory = "EmptyCustomCategory";
	}

	const FString FinalDisplayString = Prefix + InString;
	FString FinalLogString = FinalDisplayString;

	static const FBoolConfigValueHelper DisplayPrintStringSource(TEXT("Kismet"), TEXT("bLogPrintStringSource"), GEngineIni);
	if (DisplayPrintStringSource)
	{
		const FString SourceObjectPrefix = FString::Printf(TEXT("[%s] "), *GetNameSafe(WorldContextObject));
		FinalLogString = SourceObjectPrefix + FinalLogString;
	}

	if (bPrintToLog)
	{
		UE_LOG(LogCustomBlueprintCategory, Log, TEXT("%s:: %s"), *InCategory, *FinalLogString);

		APlayerController* PC = (WorldContextObject ? UGameplayStatics::GetPlayerController(WorldContextObject, 0) : NULL);
		ULocalPlayer* LocalPlayer = (PC ? Cast<ULocalPlayer>(PC->Player) : NULL);
		if (LocalPlayer && LocalPlayer->ViewportClient && LocalPlayer->ViewportClient->ViewportConsole)
		{
			LocalPlayer->ViewportClient->ViewportConsole->OutputText(FinalDisplayString);
		}
	}
	else
	{
		UE_LOG(LogCustomBlueprintCategory, Verbose, TEXT("%s:: %s"), *InCategory, *FinalLogString);
	}

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST) // Do not Print in Shipping or Test

	// Also output to the screen, if possible
	if (bPrintToScreen)
	{
		if (GAreScreenMessagesEnabled)
		{
			if (GConfig && Duration < 0)
			{
				GConfig->GetFloat(TEXT("Kismet"), TEXT("PrintStringDuration"), Duration, GEngineIni);
			}
			GEngine->AddOnScreenDebugMessage((uint64)-1, Duration, TextColor.ToFColor(true), FinalDisplayString);
		}
		else
		{
			UE_LOG(LogCustomBlueprintCategory, VeryVerbose, TEXT("Screen messages disabled (!GAreScreenMessagesEnabled).  Cannot print to screen."));
		}
	}
#endif
}

FString UESLibraryBPLibrary::ReplaceUnderscore(FString SourceString)
{
	return SourceString.Replace(TEXT("_"), TEXT(" "));
}

FString UESLibraryBPLibrary::RemoveSpaces(FString SourceString)
{
	return SourceString.Replace(TEXT(" "), TEXT(""));
}
TArray<FString> UESLibraryBPLibrary::GetConnectedClientIPs(const UObject* WorldContextObject)
{
	if (UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull))
	{
		if (World->GetNetDriver() && World->GetNetMode() != NM_Client)
		{
			TArray<FString> IPAddresses;
			for (UNetConnection* Client : World->GetNetDriver()->ClientConnections)
			{
				// Clients can be null because they disconnected so we're only showing the currently connected clients
				if (Client)
				{
					IPAddresses.Add(Client->RemoteAddressToString());
				}
			}
			return IPAddresses;
		}
	}
	return TArray<FString>();
}

FString UESLibraryBPLibrary::GetServerIpFromGamemode(AGameMode* InGamemode)
{
	if (InGamemode)
	{
		return InGamemode->GetNetworkNumber();
	}
	return FString();
}

FString UESLibraryBPLibrary::GetServerIP(const UObject* WorldContextObject)
{
	if (UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull))
	{
		if (World->GetNetDriver() && World->GetNetMode() == NM_Client)
		{
			// Incase we're calling this on a client this will be null and fail cleanly
			if (World->GetNetDriver()->ServerConnection)
			{
				return World->GetNetDriver()->ServerConnection->RemoteAddressToString();
			}
		}
	}
	return FString();
}

FString UESLibraryBPLibrary::GetPlayerIP(const APlayerController* InPlayer)
{
	if (InPlayer)
	{
		if (InPlayer->GetNetConnection())
		{
			return InPlayer->GetNetConnection()->RemoteAddressToString();
		}
	}
	return FString();
}

int UESLibraryBPLibrary::GetInputPriority(AActor* InActor)
{
	if (!InActor)
	{
		return 0;
	}

	return InActor->InputPriority;
}

void UESLibraryBPLibrary::SetInputPriority(AActor* InActor, int NewInputPriority)
{
	if (!InActor)
	{
		return;
	}

	InActor->InputPriority = NewInputPriority;
}

bool UESLibraryBPLibrary::TrySetPlayerInputEnabled(APawn* InPawn, const bool bIsEnabled)
{
	if (InPawn)
	{
		if (APlayerController* PC = Cast<APlayerController>(InPawn->GetController()))
		{
			if (bIsEnabled)
			{
				InPawn->EnableInput(PC);
			}
			else
			{
				InPawn->DisableInput(PC);
			}
			return true;
		}
	}

	return false;
}

APlayerController* UESLibraryBPLibrary::TryGetPlayerControllerFromPawn(APawn* InPawn, EExtraSwitch& Result)
{
	Result = EExtraSwitch::OnFailed;
	if (InPawn)
	{
		if (APlayerController* PC = Cast<APlayerController>(InPawn->GetController()))
		{
			Result = EExtraSwitch::OnSucceeded;
			return PC;
		}
	}
	return nullptr;
}

void UESLibraryBPLibrary::AddForceToComponentBody(const UPrimitiveComponent* InComponent,
	const FVector& Force, const bool bAccelChange)
{
	if (!InComponent || !InComponent->IsSimulatingPhysics() || !InComponent->GetBodyInstance())
	{
		return;
	}
	InComponent->GetBodyInstance()->AddForce(Force, false, bAccelChange);
}

void UESLibraryBPLibrary::AddForceAtPositionToComponentBody(const UPrimitiveComponent* InComponent,
	const FVector& Force, const FVector& Position, const bool bLocalSpace)
{
	if (!InComponent || !InComponent->IsSimulatingPhysics() || !InComponent->GetBodyInstance())
	{
		return;
	}
	InComponent->GetBodyInstance()->AddForceAtPosition(Force, Position, false, bLocalSpace);
}

void UESLibraryBPLibrary::AddImpulseAtPositionToComponentBody(const UPrimitiveComponent* InComponent,
	const FVector& Impulse, const FVector& Position)
{
	if (!InComponent || !InComponent->IsSimulatingPhysics() || !InComponent->GetBodyInstance())
	{
		return;
	}
	InComponent->GetBodyInstance()->AddImpulseAtPosition(Impulse, Position);
}

void UESLibraryBPLibrary::AddImpulseToComponentBody(const UPrimitiveComponent* InComponent,
	const FVector& Impulse, const bool bVelChange)
{
	if (!InComponent || !InComponent->IsSimulatingPhysics() || !InComponent->GetBodyInstance())
	{
		return;
	}
	InComponent->GetBodyInstance()->AddImpulse(Impulse, bVelChange);
}

void UESLibraryBPLibrary::AddTorqueInRadiansToComponentBody(const UPrimitiveComponent* InComponent,
	const FVector& Torque, const bool bAccelChange)
{
	if (!InComponent || !InComponent->IsSimulatingPhysics() || !InComponent->GetBodyInstance())
	{
		return;
	}
	InComponent->GetBodyInstance()->AddTorqueInRadians(Torque, false, bAccelChange);
}

void UESLibraryBPLibrary::AddAngularImpulseInRadiansToComponentBody(const UPrimitiveComponent* InComponent,
	const FVector& Impulse, const bool bVelChange)
{
	if (!InComponent || !InComponent->IsSimulatingPhysics() || !InComponent->GetBodyInstance())
	{
		return;
	}
	InComponent->GetBodyInstance()->AddAngularImpulseInRadians(Impulse, bVelChange);
}

void UESLibraryBPLibrary::SetLinearVelocityToComponentBody(const UPrimitiveComponent* InComponent,
	const FVector& NewVel, const bool bAddToCurrent)
{
	if (!InComponent || !InComponent->IsSimulatingPhysics() || !InComponent->GetBodyInstance())
	{
		return;
	}
	InComponent->GetBodyInstance()->SetLinearVelocity(NewVel, bAddToCurrent);
}

void UESLibraryBPLibrary::SetAngularVelocityInRadiansToComponentBody(const UPrimitiveComponent* InComponent,
	const FVector& NewAngVel, const bool bAddToCurrent)
{
	if (!InComponent || !InComponent->IsSimulatingPhysics() || !InComponent->GetBodyInstance())
	{
		return;
	}
	InComponent->GetBodyInstance()->SetAngularVelocityInRadians(NewAngVel, bAddToCurrent);
}

FVector UESLibraryBPLibrary::GetSocketRelativeLocation(USceneComponent* Target, FName InSocketName)
{
	if (Target)
	{
		if (AActor* TargetOwner = Target->GetOwner())
		{
			return TargetOwner->GetActorTransform().InverseTransformPosition(Target->GetSocketLocation(InSocketName));
		}
	}
	return FVector();
}

FRotator UESLibraryBPLibrary::GetSocketRelativeRotation(USceneComponent* Target, FName InSocketName)
{
	if (Target)
	{
		if (AActor* TargetOwner = Target->GetOwner())
		{
			return TargetOwner->GetActorTransform().InverseTransformRotation(Target->GetSocketQuaternion(InSocketName)).Rotator();
		}
	}
	return FRotator();
}

bool UESLibraryBPLibrary::IsRotatorZero(FRotator InRot)
{
	return InRot.IsZero();
}

bool UESLibraryBPLibrary::MarkRenderDirty(USceneComponent* InComp)
{
	if (!InComp)
	{
		return false;
	}

	InComp->MarkRenderDynamicDataDirty();
	InComp->MarkRenderTransformDirty();
	InComp->MarkRenderStateDirty();
	return true;
}

bool UESLibraryBPLibrary::AreObjectsValid(TArray<UObject*> Objects)
{
	if (Objects.Num() == 0)
	{
		return false;
	}

	for (int32 index = Objects.Num(); index-- > 0;)
	{
		// If we run into an invalid object, return that we failed.
		if (!IsValid(Objects[index]))
		{
			return false;
		}
	}

	// If we didnt return then all of them are valid! :D
	return true;
}

bool UESLibraryBPLibrary::IsOverlappingAnyActors(UPrimitiveComponent* InComp, bool bExcludeSelf)
{
	// Valid check
	if (InComp)
	{
		TArray<AActor*> FoundActors;
		InComp->GetOverlappingActors(FoundActors);

		// Remove the component's actor
		if (bExcludeSelf)
		{
			FoundActors.Remove(InComp->GetOwner());
		}

		// Check that the array isn't empty
		return (FoundActors.Num() > 0);
	}
	return false;
}

int UESLibraryBPLibrary::GetNumberOfActorsOfType(const UObject* WorldContextObject, TSubclassOf<AActor> SearchClass)
{
	int FoundAmount = 0;

	if (UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		// Loop through each actor in the world that is the same class as search class
		for (TActorIterator<AActor> ActorItr(World, SearchClass); ActorItr; ++ActorItr)
		{
			AActor* Actor = *ActorItr;
			if (!Actor->IsPendingKill())
			{
				FoundAmount++;
			}
		}
	}

	return FoundAmount;
}

bool UESLibraryBPLibrary::FindFirstInstanceOfActorType(const UObject* WorldContextObject, TSubclassOf<AActor> SearchClass, AActor*& FoundActor)
{
	FoundActor = nullptr;

	// Valid checks
	if (!WorldContextObject || !SearchClass)
	{
		return false;
	}
	// Get the world to iterate through
	else if (UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		// Loop through each actor in the world that is the same class as search class
		for (TActorIterator<AActor> ActorItr(World, SearchClass); ActorItr; ++ActorItr)
		{
			AActor* Actor = *ActorItr;
			if (!Actor->IsPendingKill())
			{
				// When we started the actor iterator we told it to filter only for the search class so all of these actors are of the class we're looking for
				FoundActor = Actor; // So lets return that first one
				break;
			}
		}
	}

	return (FoundActor != nullptr);
}

void UESLibraryBPLibrary::MarkRenderDity_Comps(TArray<USceneComponent*> InComps)
{
	for (USceneComponent* Comp : InComps)
	{
		MarkRenderDirty(Comp);
	}
}

FVector2D UESLibraryBPLibrary::GetDirectionalInputsFromDirectionalKeys(const APlayerController* InPlayerController,
	const FKey UpDirectional, const FKey DownDirectional, const FKey RightDirectional, const FKey LeftDirectional)
{
	if (!InPlayerController)
	{
		return FVector2D();
	}

	const FVector2D FinalInput = FVector2D(
	((float)InPlayerController->IsInputKeyDown(LeftDirectional) * -1.0) + (float)InPlayerController->IsInputKeyDown(RightDirectional), // X
		((float)InPlayerController->IsInputKeyDown(DownDirectional) * -1.0f) + (float)InPlayerController->IsInputKeyDown(UpDirectional) // Y
		);

	return FinalInput;
}

float UESLibraryBPLibrary::GetAxisValueOfInputs(const APlayerController* InPlayerController, const FKey PositiveKey, const FKey NegativeKey)
{
	if (!InPlayerController)
	{
		return 0.0f;
	}

	return ((float)InPlayerController->IsInputKeyDown(NegativeKey) * -1.0) + (float)InPlayerController->IsInputKeyDown(PositiveKey);
}

int UESLibraryBPLibrary::GetLastMaterialIndex(UPrimitiveComponent* Target)
{
	if (!Target)
	{
		return -1;
	}

	return (Target->GetNumMaterials() - 1);
}

TArray<UMaterialInterface*> UESLibraryBPLibrary::GetStaticMaterials(UStaticMesh* InMesh)
{
	if (!InMesh)
	{
		return TArray<UMaterialInterface*>();
	}

	TArray<UMaterialInterface*> Mats;
	for (FStaticMaterial SMat : InMesh->StaticMaterials)
	{
		Mats.Add(SMat.MaterialInterface);
	}
	return Mats;
}

void UESLibraryBPLibrary::ClearInputMappings(UInputSettings* const InSettings, bool bForceRebuildKeymaps, bool bSaveKeyMappings)
{
	// Dont continue if invalid
	if (!InSettings)
	{
		return;
	}

	// Clear action mappings
	for (const FInputActionKeyMapping& Action : InSettings->GetActionMappings())
	{
		InSettings->RemoveActionMapping(Action, false);
	}
	// Clear axis mappings
	for (const FInputAxisKeyMapping& Axis : InSettings->GetAxisMappings())
	{
		InSettings->RemoveAxisMapping(Axis, false);
	}

	if (bForceRebuildKeymaps)
	{
		InSettings->ForceRebuildKeymaps();
	}

	if (bSaveKeyMappings)
	{
		InSettings->SaveKeyMappings();
	}
}

bool UESLibraryBPLibrary::Equals_InputAxisKeyMapping(FInputAxisKeyMapping A, FInputAxisKeyMapping B, bool bNameOnly)
{
	if (bNameOnly)
	{
		return (A.AxisName == B.AxisName);
	}
	return (A == B);
}

bool UESLibraryBPLibrary::Equals_InputActionKeyMapping(FInputActionKeyMapping A, FInputActionKeyMapping B, bool bNameOnly)
{
	if (bNameOnly)
	{
		return (A.ActionName == B.ActionName);
	}
	return (A == B);
}

UWidget* UESLibraryBPLibrary::GetWidgetInFocus()
{
	/** Iterates through all Widgets and checks for which one has user focus */
	for (TObjectIterator<UWidget> Itr; Itr; ++Itr)
	{
		if (Itr->HasAnyUserFocus())
		{
			return *Itr;
		}
	}
	return nullptr;
}

TArray<UWidget*> UESLibraryBPLibrary::GetAllSubWidgetsInParent(UUserWidget* ParentWidget)
{
	TArray<UWidget*> SubWidgets;
	if (ParentWidget)
	{
		UWidgetTree::GetChildWidgets(ParentWidget, SubWidgets);
	}
	return SubWidgets;
}

void UESLibraryBPLibrary::ClearAllUserFocus()
{
	if (!FSlateApplication::IsInitialized())
	{
		return;
	}
	FSlateApplication::Get().ClearAllUserFocus();
}

void UESLibraryBPLibrary::GetAllWidgetsOfTypeInUserWidget(UUserWidget* ParentWidget, TSubclassOf<UWidget> WidgetClass, TArray<UWidget*>& FoundWidgets)
{
	FoundWidgets.Reset(); // Wipe the Found Widgets array
	if (!ParentWidget)
	{
		return;
	}

	// Loop through each widget in the widget tree
	ParentWidget->WidgetTree->ForEachWidget([&](UWidget* Widget)
		{
			check(Widget); // If this widget is valid(which it should be) then we can continue

			// If the widget's class is of type WidgetClass
			if (Widget->IsA(WidgetClass))
			{
				// Then we found one of those widget's we're looking for
				FoundWidgets.Add(Widget);
			}
		});
}

void UESLibraryBPLibrary::SetFontFamily(UTextBlock* Target, UObject* NewFamily)
{
	if (Target)
	{
		FSlateFontInfo TempFont = Target->Font;
		TempFont.FontObject = NewFamily;
		Target->SetFont(TempFont);
	}
}

void UESLibraryBPLibrary::SetFontMaterial(UTextBlock* Target, UObject* NewMaterial)
{
	if (Target)
	{
		FSlateFontInfo TempFont = Target->Font;
		TempFont.FontMaterial = NewMaterial;
		Target->SetFont(TempFont);
	}
}

void UESLibraryBPLibrary::SetFontOutline(UTextBlock* Target, FFontOutlineSettings NewOutline)
{
	if (Target)
	{
		FSlateFontInfo TempFont = Target->Font;
		TempFont.OutlineSettings = NewOutline;
		Target->SetFont(TempFont);
	}
}

void UESLibraryBPLibrary::SetFontTypeface(UTextBlock* Target, FName NewTypeface)
{
	if (Target && !NewTypeface.IsNone())
	{
		FSlateFontInfo TempFont = Target->Font;
		TempFont.TypefaceFontName = NewTypeface;
		Target->SetFont(TempFont);
	}
}

void UESLibraryBPLibrary::SetFontSize(UTextBlock* Target, int NewSize)
{
	if (Target)
	{
		FSlateFontInfo TempFont = Target->Font;
		// Keeps it within the allowed bounds
		TempFont.Size = FMath::Clamp(NewSize, 1, 1000);
		Target->SetFont(TempFont);
	}
}

int UESLibraryBPLibrary::GetLastChildIndex(UPanelWidget* Target)
{
	if (!Target)
	{
		return -1;
	}

	return Target->GetChildrenCount() - 1;
}

bool UESLibraryBPLibrary::IsValidChildIndexInPanel(UPanelWidget* Target, int InIndexToCheck)
{
	if (!Target)
	{
		return false;
	}

	const int ChildCount = (Target->GetChildrenCount() - 1);
	return (ChildCount >= InIndexToCheck && InIndexToCheck >= 0); // As long as child count is greater than/equal to Index AND Index is greater than/equal to zero
}

FCheckBoxStyle UESLibraryBPLibrary::SetCheckboxStyleToImage(FCheckBoxStyle InStyle, UObject* InImage, ECheckBoxState StateToSet)
{
	if (!InImage)
	{
		return InStyle;
	}

	FSlateBrush Brush;
	Brush.SetResourceObject(InImage);

	switch (StateToSet)
	{
	case ECheckBoxState::Unchecked:
	{
		InStyle.SetUncheckedHoveredImage(Brush);
		InStyle.SetUncheckedImage(Brush);
		InStyle.SetUncheckedPressedImage(Brush);
		break;
	}
	case ECheckBoxState::Checked:
	{
		InStyle.SetCheckedHoveredImage(Brush);
		InStyle.SetCheckedImage(Brush);
		InStyle.SetCheckedPressedImage(Brush);
		break;
	}
	case ECheckBoxState::Undetermined:
	default:
	{
		InStyle.SetUndeterminedHoveredImage(Brush);
		InStyle.SetUndeterminedImage(Brush);
		InStyle.SetUndeterminedPressedImage(Brush);
		break;
	}
	}

	return InStyle;
}

UObject* UESLibraryBPLibrary::GetCurrentCheckboxImage(UCheckBox* InCheckbox)
{
	if (!InCheckbox)
	{
		return nullptr;
	}

	UObject* FoundImage = nullptr;
	switch (InCheckbox->GetCheckedState())
	{
	case ECheckBoxState::Unchecked:
	{
		if (InCheckbox->IsHovered())
		{
			FoundImage = InCheckbox->WidgetStyle.UncheckedHoveredImage.GetResourceObject();
		}
		else if (InCheckbox->IsPressed())
		{
			FoundImage = InCheckbox->WidgetStyle.UncheckedPressedImage.GetResourceObject();
		}
		else
		{
			FoundImage = InCheckbox->WidgetStyle.UncheckedImage.GetResourceObject();
		}
		break;
	}
	case ECheckBoxState::Checked:
	{
		if (InCheckbox->IsHovered())
		{
			FoundImage = InCheckbox->WidgetStyle.CheckedHoveredImage.GetResourceObject();
		}
		else if (InCheckbox->IsPressed())
		{
			FoundImage = InCheckbox->WidgetStyle.CheckedPressedImage.GetResourceObject();
		}
		else
		{
			FoundImage = InCheckbox->WidgetStyle.CheckedImage.GetResourceObject();
		}
		break;
	}
	case ECheckBoxState::Undetermined:
	default:
	{
		if (InCheckbox->IsHovered())
		{
			FoundImage = InCheckbox->WidgetStyle.UndeterminedHoveredImage.GetResourceObject();
		}
		else if (InCheckbox->IsPressed())
		{
			FoundImage = InCheckbox->WidgetStyle.UndeterminedPressedImage.GetResourceObject();
		}
		else
		{
			FoundImage = InCheckbox->WidgetStyle.UndeterminedImage.GetResourceObject();
		}
		break;
	}
	}

	return FoundImage;
}

bool UESLibraryBPLibrary::FindSceneComponentByName(AActor* ActorToSearchIn,
	const FString& CompName, USceneComponent*& FoundComp)
{
	if (ActorToSearchIn && !CompName.IsEmpty())
	{
		for (UActorComponent* Comp : ActorToSearchIn->GetComponents())
		{
			if (USceneComponent* SComp = Cast<USceneComponent>(Comp))
			{
				if (GetNameSafe(SComp) == CompName)
				{
					FoundComp = SComp;
					return true;
				}
			}
		}
	}
	return false;
}

bool UESLibraryBPLibrary::FindActorComponentByName(AActor* ActorToSearchIn,
	const FString& CompName, UActorComponent*& FoundComp)
{
	if (ActorToSearchIn && !CompName.IsEmpty())
	{
		for (UActorComponent* Comp : ActorToSearchIn->GetComponents())
		{
			if (GetNameSafe(Comp) == CompName)
			{
				FoundComp = Comp;
				return true;
			}
		}
	}
	return false;
}

UPrimitiveComponent* UESLibraryBPLibrary::GetClosestComponentToPoint(TArray<UPrimitiveComponent*> Comps,
	FVector Point, bool Inverse)
{
	UPrimitiveComponent* ClosestComp = nullptr;
	float ClosestDistance = (Inverse) ? 0.0f : MAX_flt;

	for (UPrimitiveComponent* Comp : Comps)
	{
		float CurrentDistance = (Comp->GetComponentLocation() - Point).SizeSquared();
		if (Inverse)
		{
			if (CurrentDistance > ClosestDistance)
			{
				ClosestDistance = CurrentDistance;
				ClosestComp = Comp;
			}
		}
		else
		{
			if (CurrentDistance < ClosestDistance)
			{
				ClosestDistance = CurrentDistance;
				ClosestComp = Comp;
			}
		}
	}

	return ClosestComp;
}

AActor* UESLibraryBPLibrary::GetClosestActorToPoint(TArray<AActor*> Actors,
	FVector Point, bool Inverse)
{
	AActor* ClosestActor = nullptr;
	float ClosestDistance = (Inverse) ? 0.0f : MAX_flt;

	for (AActor* Actor : Actors)
	{
		float CurrentDistance = (Actor->GetActorLocation() - Point).SizeSquared();

		if (Inverse)
		{
			if (CurrentDistance > ClosestDistance)
			{
				ClosestDistance = CurrentDistance;
				ClosestActor = Actor;
			}
		}
		else
		{
			if (CurrentDistance < ClosestDistance)
			{
				ClosestDistance = CurrentDistance;
				ClosestActor = Actor;
			}
		}
	}

	return ClosestActor;
}

void UESLibraryBPLibrary::DrawDebugCoordinateArrowsAtComponent(USceneComponent* InComponent, FVector Offset, float ArrowLength, float ArrowSize, float ArrowThickness,
	float DebugDisplayTime, FLinearColor ForwardColor, FLinearColor RightColor, FLinearColor UpColor)
{
#if ENABLE_DRAW_DEBUG
	if (!InComponent)
	{
		return;
	}
	else if (UWorld* World = GEngine->GetWorldFromContextObject(InComponent, EGetWorldErrorMode::LogAndReturnNull))
	{
		const FVector StartLoc = (InComponent->GetComponentLocation() + Offset);

		// X
		DrawDebugDirectionalArrow(World, StartLoc, StartLoc + (InComponent->GetForwardVector() * ArrowLength),
			ArrowSize, ForwardColor.ToFColor(true), false, DebugDisplayTime, SDPG_World, ArrowThickness);
		// Y
		DrawDebugDirectionalArrow(World, StartLoc, StartLoc + (InComponent->GetRightVector() * ArrowLength),
			ArrowSize, RightColor.ToFColor(true), false, DebugDisplayTime, SDPG_World, ArrowThickness);
		// Z
		DrawDebugDirectionalArrow(World, StartLoc, StartLoc + (InComponent->GetUpVector() * ArrowLength),
			ArrowSize, UpColor.ToFColor(true), false, DebugDisplayTime, SDPG_World, ArrowThickness);
	}
#endif
}

bool UESLibraryBPLibrary::SnapActorToGround(AActor* InActor, float TraceDistance, bool bTraceComplex, ETraceTypeQuery GroundChannel,
	const TArray<AActor*>& ActorsToIgnore, FVector OptionalOffset, bool bDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawDebugTime)
{
	if (InActor)
	{
		if (UWorld* World = GEngine->GetWorldFromContextObject(InActor, EGetWorldErrorMode::LogAndReturnNull))
		{
			// Setup the variables to use for the trace
			ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(GroundChannel);
			FCollisionQueryParams Params;
			Params.AddIgnoredActors(ActorsToIgnore);
			Params.AddIgnoredActor(InActor); // Ignore the inputted actor
			Params.bTraceComplex = bTraceComplex;

			FVector StartLoc = InActor->GetActorLocation();
			FVector EndLoc = (StartLoc + (FVector(0.0f, 0.0f, -1.0f) * TraceDistance));
			FHitResult Hit;

			// Trace
			if (World->LineTraceSingleByChannel(Hit, StartLoc, EndLoc, CollisionChannel, Params))
			{
				// If it hit, update the location of that actor
				InActor->SetActorLocation(Hit.ImpactPoint + OptionalOffset);

#if ENABLE_DRAW_DEBUG
				if (bDrawDebug)
				{
					DrawDebugLine(World, StartLoc, Hit.ImpactPoint, TraceColor.ToFColor(true), false, DrawDebugTime); // Start to ImpactPoint
					DrawDebugLine(World, Hit.ImpactPoint, EndLoc, TraceHitColor.ToFColor(true), false, DrawDebugTime); // ImpactPoint to End
					DrawDebugPoint(World, Hit.ImpactPoint, 16.0f, TraceColor.ToFColor(true), false, DrawDebugTime); // ImpactPoint
				}
#endif
				return true;
			}
			else
			{
#if ENABLE_DRAW_DEBUG
				if (bDrawDebug)
				{
					DrawDebugLine(World, StartLoc, EndLoc, TraceColor.ToFColor(true), false, DrawDebugTime); // Start to End			
				}
#endif			
			}
		}
	}
	return false;
}

bool UESLibraryBPLibrary::IsValidSplinePoint(USplineComponent* SplineComp, int32 InPoint)
{
	if (SplineComp)
	{
		return UKismetMathLibrary::InRange_IntInt(InPoint, 0, (SplineComp->GetNumberOfSplinePoints() - 1));
	}
	return false;
}

int32 UESLibraryBPLibrary::GetLastSplinePoint(USplineComponent* SplineComp)
{
	if (SplineComp)
	{
		return (SplineComp->GetNumberOfSplinePoints() - 1);
	}
	return int32();
}

void UESLibraryBPLibrary::SnapAllSplinePointsToGround(USplineComponent* SplineComp, float TraceDistance, bool bTraceComplex,
	ETraceTypeQuery TraceChannel, const TArray<AActor*>& ActorsToIgnore, bool bDrawDebug,
	FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawDebugTime)
{
	if (!SplineComp)
	{
		return;
	}
	else if (UWorld* World = GEngine->GetWorldFromContextObject(SplineComp, EGetWorldErrorMode::LogAndReturnNull))
	{
		// Setup the variables to use in the for loop so we're not creating some of these variables for each loop iteration
		ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(TraceChannel);
		FCollisionQueryParams Params;
		Params.AddIgnoredActors(ActorsToIgnore);
		Params.AddIgnoredActor(SplineComp->GetOwner()); // Ignore spline components actor
		Params.bTraceComplex = bTraceComplex;

		FVector StartLoc = SplineComp->GetComponentLocation();
		FVector EndLoc = (StartLoc + (FVector(0.0f, 0.0f, -1.0f) * TraceDistance));
		FHitResult Hit;

		// Reverse for loop, because its faster than forward for loops
		for (int32 index = (SplineComp->GetNumberOfSplinePoints()); index-- > 0;)
		{
			// Update the trace locations
			StartLoc = SplineComp->GetLocationAtSplinePoint(index, ESplineCoordinateSpace::World);
			EndLoc = (StartLoc + (FVector(0.0f, 0.0f, -1.0f) * TraceDistance));

			// Trace
			if (World->LineTraceSingleByChannel(Hit, StartLoc, EndLoc, CollisionChannel, Params))
			{
				// If it hit, update the location of that spline point
				SplineComp->SetLocationAtSplinePoint(index, Hit.ImpactPoint, ESplineCoordinateSpace::World);

#if ENABLE_DRAW_DEBUG
				if (bDrawDebug)
				{
					DrawDebugLine(World, StartLoc, Hit.ImpactPoint, TraceColor.ToFColor(true), false, DrawDebugTime); // Start to ImpactPoint
					DrawDebugLine(World, Hit.ImpactPoint, EndLoc, TraceHitColor.ToFColor(true), false, DrawDebugTime); // ImpactPoint to End
					DrawDebugPoint(World, Hit.ImpactPoint, 16.0f, TraceColor.ToFColor(true), false, DrawDebugTime); // ImpactPoint
				}
#endif
			}
			else
			{
#if ENABLE_DRAW_DEBUG
				if (bDrawDebug)
				{
					DrawDebugLine(World, StartLoc, EndLoc, TraceColor.ToFColor(true), false, DrawDebugTime); // Start to End			
				}
#endif
			}
		}
	}
}

void UESLibraryBPLibrary::SnapSingleSplinePointToGround(USplineComponent* SplineComp,
	int32 SplinePointToSnap, float TraceDistance, bool bTraceComplex, ETraceTypeQuery TraceChannel,
	const TArray<AActor*>& ActorsToIgnore, bool bDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawDebugTime)
{
	if (!SplineComp)
	{
		return;
	}
	else if (IsValidSplinePoint(SplineComp, SplinePointToSnap))
	{
		if (UWorld* World = GEngine->GetWorldFromContextObject(SplineComp, EGetWorldErrorMode::LogAndReturnNull))
		{
			// Setup the variables to use in the for loop so we're not creating some of these variables for each loop iteration
			ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(TraceChannel);
			FCollisionQueryParams Params;
			Params.AddIgnoredActors(ActorsToIgnore);
			Params.AddIgnoredActor(SplineComp->GetOwner()); // Ignore spline components actor
			Params.bTraceComplex = bTraceComplex;

			FVector StartLoc = SplineComp->GetLocationAtSplinePoint(SplinePointToSnap, ESplineCoordinateSpace::World);
			FVector EndLoc = (StartLoc + (FVector(0.0f, 0.0f, -1.0f) * TraceDistance));
			FHitResult Hit;
			// Trace
			if (World->LineTraceSingleByChannel(Hit, StartLoc, EndLoc, CollisionChannel, Params))
			{
				// If it hit, update the location of that spline point
				SplineComp->SetLocationAtSplinePoint(SplinePointToSnap, Hit.ImpactPoint, ESplineCoordinateSpace::World);

#if ENABLE_DRAW_DEBUG
				if (bDrawDebug)
				{
					DrawDebugLine(World, StartLoc, Hit.ImpactPoint, TraceColor.ToFColor(true), false, DrawDebugTime); // Start to ImpactPoint
					DrawDebugLine(World, Hit.ImpactPoint, EndLoc, TraceHitColor.ToFColor(true), false, DrawDebugTime); // ImpactPoint to End
					DrawDebugPoint(World, Hit.ImpactPoint, 16.0f, TraceColor.ToFColor(true), false, DrawDebugTime); // ImpactPoint
				}
#endif
			}
			else
			{
#if ENABLE_DRAW_DEBUG
				if (bDrawDebug)
				{
					DrawDebugLine(World, StartLoc, EndLoc, TraceColor.ToFColor(true), false, DrawDebugTime); // Start to End			
				}
#endif
			}
		}
	}
}

FVector UESLibraryBPLibrary::FindLocationAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace)
{
	if (SplineComp)
	{
		return SplineComp->GetLocationAtSplineInputKey(InKey, CoordinateSpace);
	}
	return FVector();
}

FVector UESLibraryBPLibrary::FindTangentAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace)
{
	if (SplineComp)
	{
		return SplineComp->GetTangentAtSplineInputKey(InKey, CoordinateSpace);
	}
	return FVector();
}

FVector UESLibraryBPLibrary::FindDirectionAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace)
{
	if (SplineComp)
	{
		return SplineComp->GetDirectionAtSplineInputKey(InKey, CoordinateSpace);
	}
	return FVector();
}

FRotator UESLibraryBPLibrary::FindRotationAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace)
{
	if (SplineComp)
	{
		return SplineComp->GetRotationAtSplineInputKey(InKey, CoordinateSpace);
	}
	return FRotator();
}

FVector UESLibraryBPLibrary::FindUpVectorAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace)
{
	if (SplineComp)
	{
		return SplineComp->GetUpVectorAtSplineInputKey(InKey, CoordinateSpace);
	}
	return FVector();
}

FVector UESLibraryBPLibrary::FindRightVectorAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace)
{
	if (SplineComp)
	{
		return SplineComp->GetRightVectorAtSplineInputKey(InKey, CoordinateSpace);
	}
	return FVector();
}

FTransform UESLibraryBPLibrary::FindTransformAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseScale)
{
	if (SplineComp)
	{
		return SplineComp->GetTransformAtSplineInputKey(InKey, CoordinateSpace);
	}
	return FTransform();
}

float UESLibraryBPLibrary::FindRollAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace)
{
	if (SplineComp)
	{
		return SplineComp->GetRollAtSplineInputKey(InKey, CoordinateSpace);
	}
	return 0.0f;
}

FVector UESLibraryBPLibrary::FindScaleAtSplineInputKey(USplineComponent* SplineComp, float InKey)
{
	if (SplineComp)
	{
		return SplineComp->GetScaleAtSplineInputKey(InKey);
	}
	return FVector();
}

void UESLibraryBPLibrary::FindLocationAndRotationAtSplineInputKey(FVector& Location, FRotator& Rotation, USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace)
{
	if (SplineComp)
	{
		Location = SplineComp->GetLocationAtSplineInputKey(InKey, CoordinateSpace);
		Rotation = SplineComp->GetRotationAtSplineInputKey(InKey, CoordinateSpace);
	}
}

TArray<USplineMeshComponent*> UESLibraryBPLibrary::BuildSplineMeshesAlongSpline(
	USplineComponent* SplineComp, UStaticMesh* SplineMesh,
	TArray<UMaterialInterface*> OptionalMaterials,
	UPARAM(ref) const FTransform& RelativeTransform,
	TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis,
	bool bAffectNavigation, bool bGenerateOverlapEvents,
	TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled,
	TEnumAsByte<EObjectTypeQuery> ObjectType,
	EComponentMobility::Type Mobility,
	FVector2D StartScale, FVector2D EndScale)
{
	if (!SplineComp || !SplineMesh)
	{
		return TArray<USplineMeshComponent*>();
	}
	TArray<USplineMeshComponent*> SplineMeshes;

	if (UWorld* const World = SplineComp->GetWorld())
	{
		const ESplineCoordinateSpace::Type CoordinateSpace = ESplineCoordinateSpace::Local;
		const int MaxSplines = (SplineComp->GetNumberOfSplinePoints() - 1);
		for (int index = 0;
			index < MaxSplines; index++)
		{
			if (!IsValidSplinePoint(SplineComp, index))
			{
				break;
			}
			USplineMeshComponent* MeshComp = NewObject<USplineMeshComponent>(SplineComp);
			MeshComp->SetMobility(Mobility);
			if (MeshComp->GetAttachParent() != SplineComp)
			{
				MeshComp->SetupAttachment(SplineComp);
			}
			MeshComp->SetRelativeTransform(RelativeTransform);
			MeshComp->SetStartScale(StartScale);
			MeshComp->SetEndScale(EndScale);
			MeshComp->SetCanEverAffectNavigation(bAffectNavigation);
			MeshComp->SetGenerateOverlapEvents(bGenerateOverlapEvents);
			MeshComp->SetCollisionObjectType(UEngineTypes::ConvertToCollisionChannel(ObjectType));
			MeshComp->SetCollisionEnabled(CollisionEnabled);
			MeshComp->SetForwardAxis(ForwardAxis);
			MeshComp->SetStaticMesh(SplineMesh);

			// Apply the materials
			{
				TArray<UMaterialInterface*> SplineMaterials = (OptionalMaterials.Num() > 0) ?
					OptionalMaterials : GetStaticMaterials(SplineMesh);

				if (SplineMaterials.Num() > 0)
				{
					for (int MatIndex = SplineMaterials.Num(); MatIndex-- > 0;)
					{
						// Valid check
						if (SplineMaterials[MatIndex])
						{
							MeshComp->SetMaterial(MatIndex, SplineMaterials[MatIndex]);
						}
					}
				}
			}
			const int NextIndex = (index + 1) % SplineComp->GetNumberOfSplinePoints();
			MeshComp->SetStartAndEnd(
				SplineComp->GetLocationAtSplinePoint(index, CoordinateSpace),
				SplineComp->GetArriveTangentAtSplinePoint(index, CoordinateSpace),
				SplineComp->GetLocationAtSplinePoint(NextIndex, CoordinateSpace),
				SplineComp->GetArriveTangentAtSplinePoint(NextIndex, CoordinateSpace));

			MeshComp->RegisterComponentWithWorld(World);
			SplineMeshes.Add(MeshComp);
		}
	}

	return SplineMeshes;
}

void UESLibraryBPLibrary::StartRecordingReplay(const UObject* WorldContextObject, const FString& ReplayName,
	const FString& FriendlyName)
{
	if (UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		if (UGameInstance* const Gi = World->GetGameInstance())
		{
			UE_LOG(LogESLibraryBPLibrary, Display, TEXT("Started recording replay, ReplayName : [%s], FriendlyName : [%s]"), *ReplayName, *FriendlyName);
			Gi->StartRecordingReplay(ReplayName, FriendlyName);
		}
		else
		{
			UE_LOG(LogESLibraryBPLibrary, Warning, TEXT("Failed to get game instance to start recording replay"));
		}
	}
}

void UESLibraryBPLibrary::StopRecordingReplay(const UObject* WorldContextObject)
{
	if (UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		if (UGameInstance* const Gi = World->GetGameInstance())
		{
			UE_LOG(LogESLibraryBPLibrary, Display, TEXT("Generically stopping recording of replay"));
			Gi->StopRecordingReplay();
		}
		else
		{
			UE_LOG(LogESLibraryBPLibrary, Warning, TEXT("Failed to get game instance to stop recording replay"));
		}
	}
}

void UESLibraryBPLibrary::SaveReplayCheckpoint(const UObject* WorldContextObject)
{
	if (UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		if (World->DemoNetDriver)
		{
			if (!World->DemoNetDriver->IsSavingCheckpoint())
			{
				UE_LOG(LogESLibraryBPLibrary, Display, TEXT("Started saving checkpoint at recording time: [%f]"), World->DemoNetDriver->GetDemoCurrentTime());
				World->DemoNetDriver->SaveCheckpoint();
			}
			else
			{
				UE_LOG(LogESLibraryBPLibrary, Display, TEXT("Failed to save checkpoint: currently saving checkpoint already"));
			}
		}
		else
		{
			UE_LOG(LogESLibraryBPLibrary, Display, TEXT("Failed to save checkpoint: Replay is not currently active"));
		}
	}
	return;
}

bool UESLibraryBPLibrary::PlayReplay(const UObject* WorldContextObject, const FString& ReplayName)
{
	if (UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		if (UGameInstance* const Gi = World->GetGameInstance())
		{
			UE_LOG(LogESLibraryBPLibrary, Display, TEXT("Playing replay : [%s]"), *ReplayName);
			return Gi->PlayReplay(ReplayName);
		}
	}
	return false;
}

void UESLibraryBPLibrary::AddUserToReplay(const UObject* WorldContextObject, const FString& UserString)
{
	if (UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		if (UGameInstance* const Gi = World->GetGameInstance())
		{
			UE_LOG(LogESLibraryBPLibrary, Display, TEXT("Added [%s] to replay"), *UserString);
			Gi->AddUserToReplay(UserString);
		}
	}
}

void UESLibraryBPLibrary::JumpToTimeInReplay(float ReplayTime, const UObject* WorldContextObject)
{
	if (UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{

	}
}

static int32 PreviousAASetting = 0;
static int32 PreviousMBSetting = 0;

void UESLibraryBPLibrary::SetReplayPausedState(bool NewState, const UObject* WorldContextObject)
{
	if (UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		AWorldSettings* const Settings = World->GetWorldSettings();

		const bool IsPaused = false;// Settings->Pauser;
		if (IsPaused != NewState)
		{
			UE_LOG(LogESLibraryBPLibrary, Display, TEXT("Changing replay pause state to: [%s]"), (NewState) ? TEXT("PAUSED") : TEXT("UN-PAUSED"));

			// Set MotionBlur off and Anti Aliasing to FXAA in order to bypass the pause-bug of both
			static IConsoleVariable* const CVarAA = IConsoleManager::Get().FindConsoleVariable(TEXT("r.DefaultFeature.AntiAliasing"));
			static IConsoleVariable* const CVarMB = IConsoleManager::Get().FindConsoleVariable(TEXT("r.DefaultFeature.MotionBlur"));

			// If we are pausing
			if (NewState)
			{
				PreviousAASetting = CVarAA->GetInt();
				PreviousMBSetting = CVarMB->GetInt();

				// Turn off motion blur and set anti-aliasing to fxaa
				CVarAA->Set(1);
				CVarMB->Set(0);

				Settings->SetPauserPlayerState(World->GetFirstPlayerController()->PlayerState);
			}
			// If we're unpausing
			else
			{
				// Reset motion blur and AA
				CVarAA->Set(PreviousAASetting);
				CVarMB->Set(PreviousMBSetting);

				Settings->SetPauserPlayerState(NULL);
			}
		}
	}
}

void UESLibraryBPLibrary::SetReplayPlaybackSpeed(const UObject* WorldContextObject, float NewReplaySpeed)
{
	if (UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		World->GetWorldSettings()->DemoPlayTimeDilation = NewReplaySpeed;
	}
}

float UESLibraryBPLibrary::GetReplayPlaybackSpeed(const UObject* WorldContextObject)
{
	if (UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		return World->GetWorldSettings()->DemoPlayTimeDilation;
	}
	return 0.0f;
}

float UESLibraryBPLibrary::GetCurrentReplayTotalTimeInSeconds(const UObject* WorldContextObject)
{
	if (UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		if (World->DemoNetDriver)
		{
			return World->DemoNetDriver->DemoTotalTime;
		}
	}
	return 0.0f;
}

float UESLibraryBPLibrary::GetCurrentReplayCurrentTimeInSeconds(const UObject* WorldContextObject)
{
	if (UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		if (World->DemoNetDriver)
		{
			return World->DemoNetDriver->DemoCurrentTime;
		}
	}
	return 0.0f;
}

UPhysicalMaterial* UESLibraryBPLibrary::GetHitPhysMat(const FHitResult& Hit)
{
	return Hit.PhysMaterial.Get();
}

static const int SCP_UE4_SAVEGAME_FILE_TYPE_TAG = 0x53415643;		// "SAVC", not SAVG
static const int SCP_UE4_SAVEGAME_FILE_VERSION = 1;

bool UESLibraryBPLibrary::SaveGameToSlotCompressed(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex) {

	bool bSuccess = false;

	ISaveGameSystem* SaveSystem = IPlatformFeaturesModule::Get().GetSaveGameSystem();
	// If we have a system and an object to save and a save name...
	if (SaveSystem && (SaveGameObject != NULL) && (SlotName.Len() > 0))
	{
		TArray<uint8> ObjectBytes;
		FMemoryWriter MemoryWriter(ObjectBytes, true);

		// write file type tag. identifies this file type and indicates it's using proper versioning
		// since older UE4 versions did not version this data.
		int32 FileTypeTag = SCP_UE4_SAVEGAME_FILE_TYPE_TAG;
		MemoryWriter << FileTypeTag;

		// Write version for this file format
		int32 SavegameFileVersion = SCP_UE4_SAVEGAME_FILE_VERSION;
		MemoryWriter << SavegameFileVersion;

		// Write the class name so we know what class to load to
		FString SaveGameClassName = SaveGameObject->GetClass()->GetName();
		MemoryWriter << SaveGameClassName;

		// Then save the object state, replacing object refs and names with strings
		//FObjectAndNameAsStringProxyArchive Ar(MemoryWriter, false);
		//SaveGameObject->Serialize(Ar);

		// Save Compressed Data
		TArray<uint8> CompressedData;
		FArchiveSaveCompressedProxy Compressor =
			FArchiveSaveCompressedProxy(CompressedData, ECompressionFlags::COMPRESS_ZLIB);
		SaveGameObject->Serialize(Compressor);
		Compressor.Flush();

		// Output Compressed Data
		MemoryWriter << CompressedData;

		// Stuff that data into the save system with the desired file name
		bSuccess = SaveSystem->SaveGame(false, *SlotName, UserIndex, ObjectBytes);

		Compressor.FlushCache();
		CompressedData.Empty();
		MemoryWriter.FlushCache();
		MemoryWriter.Close();
	}

	return bSuccess;
}

USaveGame* UESLibraryBPLibrary::LoadGameFromSlotCompressed(const FString& SlotName, const int32 UserIndex)
{
	USaveGame* OutSaveGameObject = NULL;

	ISaveGameSystem* SaveSystem = IPlatformFeaturesModule::Get().GetSaveGameSystem();
	// If we have a save system and a valid name..
	if (SaveSystem && (SlotName.Len() > 0))
	{
		// Load raw data from slot
		TArray<uint8> ObjectBytes;
		bool bSuccess = SaveSystem->LoadGame(false, *SlotName, UserIndex, ObjectBytes);
		if (bSuccess)
		{
			FMemoryReader MemoryReader(ObjectBytes, true);

			int32 FileTypeTag;
			MemoryReader << FileTypeTag;

			int32 SavegameFileVersion;
			if (FileTypeTag != SCP_UE4_SAVEGAME_FILE_TYPE_TAG)
			{
				// this is an old saved game, back up the file pointer to the beginning and assume version 1
				MemoryReader.Seek(0);
				SavegameFileVersion = 1;

				// Note for 4.8 and beyond: if you get a crash loading a pre-4.8 version of your savegame file and 
				// you don't want to delete it, try uncommenting these lines and changing them to use the version 
				// information from your previous build. Then load and resave your savegame file.
				//MemoryReader.SetUE4Ver(MyPreviousUE4Version);				// @see GPackageFileUE4Version
				//MemoryReader.SetEngineVer(MyPreviousEngineVersion);		// @see GEngineVersion
			}
			else
			{
				// Read version for this file format
				MemoryReader << SavegameFileVersion;

				// Read engine and UE4 version information
				int32 SavedUE4Version;
				MemoryReader << SavedUE4Version;

				FEngineVersion SavedEngineVersion;
				MemoryReader << SavedEngineVersion;

				MemoryReader.SetUE4Ver(SavedUE4Version);
				MemoryReader.SetEngineVer(SavedEngineVersion);
			}

			// Get the class name
			FString SaveGameClassName;
			MemoryReader << SaveGameClassName;

			// Try and find it, and failing that, load it
			UClass* SaveGameClass = FindObject<UClass>(ANY_PACKAGE, *SaveGameClassName);
			if (SaveGameClass == NULL)
			{
				SaveGameClass = LoadObject<UClass>(NULL, *SaveGameClassName);
			}

			// If we have a class, try and load it.
			if (SaveGameClass != NULL)
			{
				OutSaveGameObject = NewObject<USaveGame>(GetTransientPackage(), SaveGameClass);

				//FObjectAndNameAsStringProxyArchive Ar(MemoryReader, true);
				//OutSaveGameObject->Serialize(Ar);

				// slice tail
				TArray<uint8> CompressedData;
				MemoryReader << CompressedData;

				FArchiveLoadCompressedProxy Decompressor =
					FArchiveLoadCompressedProxy(CompressedData, ECompressionFlags::COMPRESS_ZLIB);
				if (Decompressor.GetError())
				{
					return nullptr;
				}
				OutSaveGameObject->Serialize(Decompressor);
				Decompressor.Flush();

				Decompressor.FlushCache();
				CompressedData.Empty();
				MemoryReader.FlushCache();
				MemoryReader.Close();
			}
		}
	}

	return OutSaveGameObject;
}

bool UESLibraryBPLibrary::IsVaildPath(const FString ImagePath)
{

	if (!FPaths::FileExists(ImagePath))
	{
		return false;
	}

	// Load the compressed byte data from the file
	TArray<uint8> FileData;
	if (!FFileHelper::LoadFileToArray(FileData, *ImagePath))
	{
		return false;
	}

	return true;
}

FString UESLibraryBPLibrary::GetFullPath(FString FilePath)
{
	//Check Relative Or absolute path
	FString FullFilePath;
	if (FilePath.StartsWith(".", ESearchCase::CaseSensitive))
	{

		FullFilePath = *FPaths::Combine(FPaths::ProjectContentDir(), FilePath);

		FullFilePath = *FPaths::ConvertRelativePathToFull(FullFilePath);

	}
	else
	{

		FullFilePath = FilePath;
	}

	return FullFilePath;
}

//Discern Texture Type
static TSharedPtr<IImageWrapper> GetImageWrapperByExtention(const FString InImagePath)
{
	IImageWrapperModule& ImageWrapperModule = FModuleManager::GetModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));



	if (InImagePath.EndsWith(".png"))
	{
		return ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);
	}
	else if (InImagePath.EndsWith(".jpg") || InImagePath.EndsWith(".jpeg"))
	{
		return ImageWrapperModule.CreateImageWrapper(EImageFormat::JPEG);
	}
	else if (InImagePath.EndsWith(".bmp"))
	{
		return ImageWrapperModule.CreateImageWrapper(EImageFormat::BMP);
	}
	else if (InImagePath.EndsWith(".ico"))
	{
		return ImageWrapperModule.CreateImageWrapper(EImageFormat::ICO);
	}
	else if (InImagePath.EndsWith(".exr"))
	{
		return ImageWrapperModule.CreateImageWrapper(EImageFormat::EXR);
	}
	else if (InImagePath.EndsWith(".icns"))
	{
		return ImageWrapperModule.CreateImageWrapper(EImageFormat::ICNS);
	}
	return nullptr;
}

UTexture2D* UESLibraryBPLibrary::LoadTexture2DFromFile(const FString& FilePath,
	bool& IsValid, int32& Width, int32& Height)
{

	FString FullFilePath = GetFullPath(FilePath);

	if (!IsVaildPath(FullFilePath))
	{
		return NULL;
	}


	IsValid = false;
	UTexture2D* LoadedT2D = NULL;

	//

	//IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	TSharedPtr<IImageWrapper> ImageWrapper = GetImageWrapperByExtention(FullFilePath);

	//Load From File
	TArray<uint8> RawFileData;
	if (!FFileHelper::LoadFileToArray(RawFileData, *FullFilePath, 0)) return NULL;

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	//Create T2D!
	if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
	{
		const TArray<uint8>* UncompressedBGRA = NULL;
		if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
		{

			LoadedT2D = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);

			//Valid?
			if (!LoadedT2D) return NULL;
			//~~~~~~~~~~~~~~

			//Out!
			Width = ImageWrapper->GetWidth();
			Height = ImageWrapper->GetHeight();

			//Copy!
			void* TextureData = LoadedT2D->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
			FMemory::Memcpy(TextureData, UncompressedBGRA->GetData(), UncompressedBGRA->Num());
			LoadedT2D->PlatformData->Mips[0].BulkData.Unlock();

			//Update!
			LoadedT2D->UpdateResource();
		}
	}

	// Success!
	IsValid = true;
	return LoadedT2D;
	//return NULL;
}

void UESLibraryBPLibrary::ReadConfig(const FString& SectionName, const FString& ValueName, FString &ReturnValue)
{

	//GConfig->Flush(true, GGameIni);

	bool succeed = false;

	 succeed = GConfig->GetString(
		*SectionName,
		*ValueName,
		ReturnValue,
		GGameIni
	);


	UE_LOG(LogTemp, Warning, TEXT("Read Config %s "),succeed ? TEXT("Succeed") : TEXT("Fail"));
	
}


void UESLibraryBPLibrary::WriteConfig(const FString& SectionName, const FString& ValueName, const FString &ReturnValue)
{

	//FString newSection = "/Script/CommunicationSetting";
	//FString TA = "DefaultMyConfig";
	GConfig->SetString(
		*SectionName,
		*ValueName,
		*ReturnValue,
		GGameIni
	);

	GConfig->Flush(false, GGameIni);
	/*
		FString log;
		ReadConfig(ReturnValue, ValueName, log);
		UE_LOG(LogTemp, Warning, TEXT("Set Config As %s "), *log);*/

}


bool UESLibraryBPLibrary::ReadCustomPathConfig(const FString&FilePath, const FString& SectionName, const FString& ValueName, FString &ReturnString)
{
	FString FullPath = GetFullPath(FilePath);

	GConfig->Flush(true, FullPath);
	bool succeed = GConfig->GetString(*SectionName, *ValueName, ReturnString, FullPath);
	return succeed;

}


 void UESLibraryBPLibrary::WriteCustomPathConfig(const FString&FilePath, const FString& SectionName, const FString& ValueName, const FString &WriteString)
{
	FString FullPath = GetFullPath(FilePath);

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	// Does the file exist?
	if (!PlatformFile.FileExists(*FullPath))
	{
		// File doesn't exist; (Attempt to) create a new one.
		FFileHelper::SaveStringToFile(TEXT(""), *FullPath);
	}


	GConfig->SetString(*SectionName, *ValueName, *WriteString, FullPath);

	GConfig->Flush(false, FullPath);

}

 bool UESLibraryBPLibrary::ReadFile(const FString FilePath, FString& ReturnString)
 {
	 FString FullPath = GetFullPath(FilePath);

	 FString Cache = "";
	 bool Sucess = false;
	 Sucess = FFileHelper::LoadFileToString(Cache, FullPath.GetCharArray().GetData());
	 ReturnString = Cache;
	 return Sucess;
 }

 bool UESLibraryBPLibrary::WriteFile(const FString FilePath, const FString ReturnString)
 {
	 FString FullPath = GetFullPath(FilePath);

	 bool Sucess;
	 Sucess = FFileHelper::SaveStringToFile(ReturnString, *FullPath);
	 return Sucess;
 }

 bool UESLibraryBPLibrary::DeleteFileII(const FString FilePath)
 {
	 FString FullPath = GetFullPath(FilePath);

	 IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	 if (PlatformFile.DeleteFile(*FullPath))
	 {
		 UE_LOG(LogTemp, Warning, TEXT("deleteFile: Delete the flie successfully!"));

		 return true;
	 }
	 else
	 {
		 UE_LOG(LogTemp, Warning, TEXT("deleteFile: Not delete the flie!"));

		 return false;
	 }

 }

 FString UESLibraryBPLibrary::GetGamePath(DirType E)
 {
	 if (E == DirType::GameDir)
	 {
		 return FPaths::ProjectDir();
	 }
	 return FPaths::ProjectContentDir();

 }

 AExeActor* UESLibraryBPLibrary::OpenExe(UObject* SomeInWorldObject, const FString Path, const FString Args)
 {
	 UWorld* world = SomeInWorldObject->GetWorld();

	 FVector pos(150, 0, 20);

	 AExeActor* Temp = world->SpawnActor<AExeActor>(pos, FRotator::ZeroRotator); ;

	 //AExeActor *Temp = NewObject<AExeActor>();
	 //EE->GetWorld()->AddNetworkActor(Temp);
	 Temp->SetActorTickEnabled(true);
	 Temp->ActorToWorld();

	 Temp->CheckProc = FPlatformProcess::CreateProc(*Path, *Args, true, false, false, nullptr, 0, nullptr, nullptr);


	 return Temp;

 }

 void UESLibraryBPLibrary::VictorySetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, FVector2D Value)
 {
	 if (!GConfig) return;
	 //~~~~~~~~~~~

	 GConfig->SetVector(
		 *SectionName,
		 *VariableName,
		 FVector(Value.X, Value.Y, 0),
		 GGameIni
	 );
 }

 void UESLibraryBPLibrary::VictorySetCustomConfigVar_Bool(FString SectionName, FString VariableName, bool Value)
 {
	 if (!GConfig) return;
	 //~~~~~~~~~~~

	 GConfig->SetBool(
		 *SectionName,
		 *VariableName,
		 Value,
		 GGameIni
	 );
 }
 void UESLibraryBPLibrary::VictorySetCustomConfigVar_Int(FString SectionName, FString VariableName, int32 Value)
 {
	 if (!GConfig) return;
	 //~~~~~~~~~~~

	 GConfig->SetInt(
		 *SectionName,
		 *VariableName,
		 Value,
		 GGameIni
	 );
 }
 void UESLibraryBPLibrary::VictorySetCustomConfigVar_Float(FString SectionName, FString VariableName, float Value)
 {
	 if (!GConfig) return;
	 //~~~~~~~~~~~

	 GConfig->SetFloat(
		 *SectionName,
		 *VariableName,
		 Value,
		 GGameIni
	 );
 }
 void UESLibraryBPLibrary::VictorySetCustomConfigVar_Vector(FString SectionName, FString VariableName, FVector Value)
 {
	 if (!GConfig) return;
	 //~~~~~~~~~~~

	 GConfig->SetVector(
		 *SectionName,
		 *VariableName,
		 Value,
		 GGameIni
	 );
 }
 void UESLibraryBPLibrary::VictorySetCustomConfigVar_Rotator(FString SectionName, FString VariableName, FRotator Value)
 {
	 if (!GConfig) return;
	 //~~~~~~~~~~~

	 GConfig->SetRotator(
		 *SectionName,
		 *VariableName,
		 Value,
		 GGameIni
	 );
 }
 void UESLibraryBPLibrary::VictorySetCustomConfigVar_Color(FString SectionName, FString VariableName, FLinearColor Value)
 {
	 if (!GConfig) return;
	 //~~~~~~~~~~~

	 GConfig->SetColor(
		 *SectionName,
		 *VariableName,
		 Value.ToFColor(true),
		 GGameIni
	 );
 }
 void UESLibraryBPLibrary::VictorySetCustomConfigVar_String(FString SectionName, FString VariableName, FString Value)
 {
	 if (!GConfig) return;
	 //~~~~~~~~~~~

	 GConfig->SetString(
		 *SectionName,
		 *VariableName,
		 *Value,
		 GGameIni
	 );
 }

 FRotator UESLibraryBPLibrary::TransformVectorToActorSpaceAngle(AActor* Actor, const FVector& InVector)
 {
	 if (!Actor) return FRotator::ZeroRotator;
	 return Actor->ActorToWorld().InverseTransformVector(InVector).Rotation();
 }
 FVector UESLibraryBPLibrary::TransformVectorToActorSpace(AActor* Actor, const FVector& InVector)
 {
	 if (!Actor) return FVector::ZeroVector;
	 return Actor->ActorToWorld().InverseTransformVector(InVector);
 }

 UObject* UESLibraryBPLibrary::LoadObjectFromAssetPath(TSubclassOf<UObject> ObjectClass, FName Path, bool& IsValid)
 {
	 IsValid = false;

	 if (Path == NAME_None) return NULL;
	 //~~~~~~~~~~~~~~~~~~~~~

	 UObject* LoadedObj = StaticLoadObject(ObjectClass, NULL, *Path.ToString());

	 IsValid = LoadedObj != nullptr;

	 return LoadedObj;
 }
 FName UESLibraryBPLibrary::GetObjectPath(UObject* Obj)
 {
	 if (!Obj) return NAME_None;
	 if (!Obj->IsValidLowLevel()) return NAME_None;
	 //~~~~~~~~~~~~~~~~~~~~~~~~~

	 FStringAssetReference ThePath = FStringAssetReference(Obj);

	 if (!ThePath.IsValid()) return "";

	 //The Class FString Name For This Object
	 FString str = Obj->GetClass()->GetDescription();

	 //Remove spaces in Material Instance Constant class description!
	 str = str.Replace(TEXT(" "), TEXT(""));

	 str += "'";
	 str += ThePath.ToString();
	 str += "'";

	 return FName(*str);
 }

 void UESLibraryBPLibrary::OperatingSystem__GetCurrentPlatform(
	 bool& Windows_, 		//some weird bug of making it all caps engine-side
	 bool& Mac,
	 bool& Linux,
	 bool& iOS,
	 bool& Android,
	 bool& Android_ARM,
	 bool& Android_Vulkan,
	 bool& PS4,
	 bool& XBoxOne,
	 bool& HTML5,
	 bool& Apple
 ) {
	 //#define's in UE4 source code
	 Windows_ = PLATFORM_WINDOWS;
	 Mac = PLATFORM_MAC;
	 Linux = PLATFORM_LINUX;

	 PS4 = PLATFORM_PS4;
	 XBoxOne = PLATFORM_XBOXONE;

	 iOS = PLATFORM_IOS;
	 Android = PLATFORM_ANDROID;
	 Android_ARM = PLATFORM_ANDROID_ARM;
	 Android_Vulkan = PLATFORM_ANDROID_VULKAN;
	 HTML5 = false;//PLATFORM_HTML5;

	 Apple = PLATFORM_APPLE;
 }

 FString UESLibraryBPLibrary::RealWorldTime__GetCurrentOSTime(
	 int32& MilliSeconds,
	 int32& Seconds,
	 int32& Minutes,
	 int32& Hours12,
	 int32& Hours24,
	 int32& Day,
	 int32& Month,
	 int32& Year
 ) {
	 const FDateTime Now = FDateTime::Now();

	 MilliSeconds = Now.GetMillisecond();
	 Seconds = Now.GetSecond();
	 Minutes = Now.GetMinute();
	 Hours12 = Now.GetHour12();
	 Hours24 = Now.GetHour(); //24
	 Day = Now.GetDay();
	 Month = Now.GetMonth();
	 Year = Now.GetYear();

	 //MS are not included in FDateTime::ToString(), so adding it
	 //The Parse function accepts if MS are present.
	 FString NowWithMS = Now.ToString();
	 NowWithMS += "." + FString::FromInt(MilliSeconds);
	 return NowWithMS;
 }

 void UESLibraryBPLibrary::RealWorldTime__GetTimePassedSincePreviousTime(
	 const FString& PreviousTime,
	 float& Milliseconds,
	 float& Seconds,
	 float& Minutes,
	 float& Hours
 ) {
	 FDateTime ParsedDateTime;
	 FDateTime::Parse(PreviousTime, ParsedDateTime);
	 const FTimespan TimeDiff = FDateTime::Now() - ParsedDateTime;

	 Milliseconds = TimeDiff.GetTotalMilliseconds();
	 Seconds = TimeDiff.GetTotalSeconds();
	 Minutes = TimeDiff.GetTotalMinutes();
	 Hours = TimeDiff.GetTotalHours();
 }

 void UESLibraryBPLibrary::RealWorldTime__GetDifferenceBetweenTimes(
	 const FString& PreviousTime1,
	 const FString& PreviousTime2,
	 float& Milliseconds,
	 float& Seconds,
	 float& Minutes,
	 float& Hours
 ) {
	 FDateTime ParsedDateTime1;
	 FDateTime::Parse(PreviousTime1, ParsedDateTime1);

	 FDateTime ParsedDateTime2;
	 FDateTime::Parse(PreviousTime2, ParsedDateTime2);

	 FTimespan TimeDiff;

	 if (PreviousTime1 < PreviousTime2)
	 {
		 TimeDiff = ParsedDateTime2 - ParsedDateTime1;
	 }
	 else
	 {
		 TimeDiff = ParsedDateTime1 - ParsedDateTime2;
	 }

	 Milliseconds = TimeDiff.GetTotalMilliseconds();
	 Seconds = TimeDiff.GetTotalSeconds();
	 Minutes = TimeDiff.GetTotalMinutes();
	 Hours = TimeDiff.GetTotalHours();
 }

 void UESLibraryBPLibrary::Open_URL_In_Web_Browser(FString TheURL)
 {
	 FPlatformProcess::LaunchURL(*TheURL, nullptr, nullptr);
 }

 FString UESLibraryBPLibrary::VictoryPaths__Win64Dir_BinaryLocation()
 {
	 return FString(FPlatformProcess::BaseDir());
 }

 FString UESLibraryBPLibrary::VictoryPaths__WindowsNoEditorDir()
 {
	 return FPaths::ConvertRelativePathToFull(FPaths::RootDir());
 }

 FString UESLibraryBPLibrary::VictoryPaths__GameRootDirectory()
 {
	 return FPaths::ConvertRelativePathToFull(FPaths::ProjectDir());
 }

 FString UESLibraryBPLibrary::VictoryPaths__SavedDir()
 {
	 return FPaths::ConvertRelativePathToFull(FPaths::ProjectSavedDir());
 }
 FString UESLibraryBPLibrary::VictoryPaths__ConfigDir()
 {
	 return FPaths::ConvertRelativePathToFull(FPaths::ProjectConfigDir());
 }

 FString UESLibraryBPLibrary::VictoryPaths__ScreenShotsDir()
 {
	 return FPaths::ConvertRelativePathToFull(FPaths::ScreenShotDir());
 }

 FString UESLibraryBPLibrary::VictoryPaths__LogsDir()
 {
	 return FPaths::ConvertRelativePathToFull(FPaths::ProjectLogDir());
 }

 static bool FolderExists(const FString& Dir)
 {
	 return FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*Dir);
 }

 static bool VCreateDirectory(FString FolderToMake) //not const so split can be used, and does not damage input
 {
	 if (FolderExists(FolderToMake))
	 {
		 return true;
	 }

	 // Normalize all / and \ to TEXT("/") and remove any trailing TEXT("/") if the character before that is not a TEXT("/") or a colon
	 FPaths::NormalizeDirectoryName(FolderToMake);

	 //Normalize removes the last "/", but is needed by algorithm
	 //  Guarantees While loop will end in a timely fashion.
	 FolderToMake += "/";

	 FString Base;
	 FString Left;
	 FString Remaining;

	 //Split off the Root
	 FolderToMake.Split(TEXT("/"), &Base, &Remaining);
	 Base += "/"; //add root text and Split Text to Base

	 while (Remaining != "")
	 {
		 Remaining.Split(TEXT("/"), &Left, &Remaining);

		 //Add to the Base
		 Base += Left + FString("/"); //add left and split text to Base

		 //Create Incremental Directory Structure!
		 if (!FPlatformFileManager::Get().GetPlatformFile().CreateDirectory(*Base) &&
			 !FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*Base))
		 {
			 return false;
			 //~~~~~
		 }
	 }

	 return true;
 }

 UTexture2D* UESLibraryBPLibrary::LoadTexture2D_FromDDSFile(const FString& FullFilePath)
 {
	 UTexture2D* Texture = NULL;

	 FString TexturePath = FullFilePath;//FPaths::GameContentDir( ) + TEXT( "../Data/" ) + TextureFilename;
	 TArray<uint8> FileData;

	 /* Load DDS texture */
	 if (FFileHelper::LoadFileToArray(FileData, *TexturePath, 0))
	 {
		 FDDSLoadHelper DDSLoadHelper(&FileData[0], FileData.Num());
		 if (DDSLoadHelper.IsValid2DTexture())
		 {
			 int32 NumMips = DDSLoadHelper.ComputeMipMapCount();
			 EPixelFormat Format = DDSLoadHelper.ComputePixelFormat();
			 int32 BlockSize = 16;

			 if (NumMips == 0)
			 {
				 NumMips = 1;
			 }

			 if (Format == PF_DXT1)
			 {
				 BlockSize = 8;
			 }

			 /* Create transient texture */
			 Texture = UTexture2D::CreateTransient(DDSLoadHelper.DDSHeader->dwWidth, DDSLoadHelper.DDSHeader->dwHeight, Format);
			 if (!Texture) return NULL;
			 //Texture->PlatformData->NumSlices = 1;
			 Texture->NeverStream = true;

			 /* Get pointer to actual data */
			 uint8* DataPtr = (uint8*)DDSLoadHelper.GetDDSDataPointer();

			 uint32 CurrentWidth = DDSLoadHelper.DDSHeader->dwWidth;
			 uint32 CurrentHeight = DDSLoadHelper.DDSHeader->dwHeight;

			 /* Iterate through mips */
			 for (int32 i = 0; i < NumMips; i++)
			 {
				 /* Lock to 1x1 as smallest size */
				 CurrentWidth = (CurrentWidth < 1) ? 1 : CurrentWidth;
				 CurrentHeight = (CurrentHeight < 1) ? 1 : CurrentHeight;

				 /* Get number of bytes to read */
				 int32 NumBytes = CurrentWidth * CurrentHeight * 4;
				 if (Format == PF_DXT1 || Format == PF_DXT3 || Format == PF_DXT5)
				 {
					 /* Compressed formats */
					 NumBytes = ((CurrentWidth + 3) / 4) * ((CurrentHeight + 3) / 4) * BlockSize;
				 }

				 /* Write to existing mip */
				 if (i < Texture->PlatformData->Mips.Num())
				 {
					 FTexture2DMipMap& Mip = Texture->PlatformData->Mips[i];

					 void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);
					 FMemory::Memcpy(Data, DataPtr, NumBytes);
					 Mip.BulkData.Unlock();
				 }

				 /* Add new mip */
				 else
				 {
					 FTexture2DMipMap* Mip = new(Texture->PlatformData->Mips) FTexture2DMipMap();
					 Mip->SizeX = CurrentWidth;
					 Mip->SizeY = CurrentHeight;

					 Mip->BulkData.Lock(LOCK_READ_WRITE);
					 Mip->BulkData.Realloc(NumBytes);
					 Mip->BulkData.Unlock();

					 void* Data = Mip->BulkData.Lock(LOCK_READ_WRITE);
					 FMemory::Memcpy(Data, DataPtr, NumBytes);
					 Mip->BulkData.Unlock();
				 }

				 /* Set next mip level */
				 CurrentWidth /= 2;
				 CurrentHeight /= 2;

				 DataPtr += NumBytes;
			 }

			 Texture->UpdateResource();
		 }
	 }

	 return Texture;
 }

 static EImageFormat GetJoyImageFormat(EJoyImageFormats JoyFormat)
 {
	 /*
	 ImageWrapper.h
	 namespace EImageFormat
	 {

	 Enumerates the types of image formats this class can handle

	 enum Type
	 {
		 //Portable Network Graphics
		 PNG,
		 //Joint Photographic Experts Group
		 JPEG,
		 //Single channel jpeg
		 GrayscaleJPEG,
		 //Windows Bitmap
		 BMP,
		 //Windows Icon resource
		 ICO,
		 //OpenEXR (HDR) image file format
		 EXR,
		 //Mac icon
		 ICNS
	 };
 };
	 */
	 switch (JoyFormat)
	 {
	 case EJoyImageFormats::JPG: return EImageFormat::JPEG;
	 case EJoyImageFormats::PNG: return EImageFormat::PNG;
	 case EJoyImageFormats::BMP: return EImageFormat::BMP;
	 case EJoyImageFormats::ICO: return EImageFormat::ICO;
	 case EJoyImageFormats::EXR: return EImageFormat::EXR;
	 case EJoyImageFormats::ICNS: return EImageFormat::ICNS;
	 }
	 return EImageFormat::JPEG;
 }

 UTexture2D* UESLibraryBPLibrary::Victory_LoadTexture2D_FromFile(const FString& FullFilePath, EJoyImageFormats ImageFormat, bool& IsValid, int32& Width, int32& Height)
 {


	 IsValid = false;
	 UTexture2D* LoadedT2D = NULL;

	 IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	 TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(GetJoyImageFormat(ImageFormat));

	 //Load From File
	 TArray<uint8> RawFileData;
	 if (!FFileHelper::LoadFileToArray(RawFileData, *FullFilePath)) return NULL;
	 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	 //Create T2D!
	 if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
	 {
		 const TArray<uint8>* UncompressedBGRA = NULL;
		 if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
		 {
			 LoadedT2D = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);

			 //Valid?
			 if (!LoadedT2D) return NULL;
			 //~~~~~~~~~~~~~~

			 //Out!
			 Width = ImageWrapper->GetWidth();
			 Height = ImageWrapper->GetHeight();

			 //Copy!
			 void* TextureData = LoadedT2D->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
			 FMemory::Memcpy(TextureData, UncompressedBGRA->GetData(), UncompressedBGRA->Num());
			 LoadedT2D->PlatformData->Mips[0].BulkData.Unlock();

			 //Update!
			 LoadedT2D->UpdateResource();
		 }
	 }

	 // Success!
	 IsValid = true;
	 return LoadedT2D;
 }
 UTexture2D* UESLibraryBPLibrary::Victory_LoadTexture2D_FromFile_Pixels(const FString& FullFilePath, EJoyImageFormats ImageFormat, bool& IsValid, int32& Width, int32& Height, TArray<FLinearColor>& OutPixels)
 {
	 //Clear any previous data
	 OutPixels.Empty();

	 IsValid = false;
	 UTexture2D* LoadedT2D = NULL;

	 IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	 TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(GetJoyImageFormat(ImageFormat));

	 //Load From File
	 TArray<uint8> RawFileData;
	 if (!FFileHelper::LoadFileToArray(RawFileData, *FullFilePath)) return NULL;
	 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	 //Create T2D!
	 if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
	 {
		 const TArray<uint8>* UncompressedRGBA = NULL;
		 if (ImageWrapper->GetRaw(ERGBFormat::RGBA, 8, UncompressedRGBA))
		 {
			 LoadedT2D = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_R8G8B8A8);

			 //Valid?
			 if (!LoadedT2D) return NULL;
			 //~~~~~~~~~~~~~~

			 //Out!
			 Width = ImageWrapper->GetWidth();
			 Height = ImageWrapper->GetHeight();

			 const TArray<uint8>& ByteArray = *UncompressedRGBA;
			 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

			 for (int32 v = 0; v < ByteArray.Num(); v += 4)
			 {
				 if (!ByteArray.IsValidIndex(v + 3))
				 {
					 break;
				 }

				 OutPixels.Add(
					 FLinearColor(
						 ByteArray[v],		//R
						 ByteArray[v + 1],		//G
						 ByteArray[v + 2],		//B
						 ByteArray[v + 3] 		//A
					 )
				 );
			 }
			 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

			 //Copy!
			 void* TextureData = LoadedT2D->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
			 FMemory::Memcpy(TextureData, UncompressedRGBA->GetData(), UncompressedRGBA->Num());
			 LoadedT2D->PlatformData->Mips[0].BulkData.Unlock();

			 //Update!
			 LoadedT2D->UpdateResource();
		 }
	 }

	 // Success!
	 IsValid = true;
	 return LoadedT2D;

 }
 bool UESLibraryBPLibrary::Victory_Get_Pixel(const TArray<FLinearColor>& Pixels, int32 ImageHeight, int32 x, int32 y, FLinearColor& FoundColor)
 {
	 int32 Index = y * ImageHeight + x;
	 if (!Pixels.IsValidIndex(Index))
	 {
		 return false;
	 }

	 FoundColor = Pixels[Index];
	 return true;
 }


 bool UESLibraryBPLibrary::Victory_SavePixels(
	 const FString& FullFilePath
	 , int32 Width, int32 Height
	 , const TArray<FLinearColor>& ImagePixels
	 , bool SaveAsBMP
	 , bool sRGB
	 , FString& ErrorString
 ) {
	 if (FullFilePath.Len() < 1)
	 {
		 ErrorString = "No file path";
		 return false;
	 }
	 //~~~~~~~~~~~~~~~~~

	 //Ensure target directory exists, 
	 //		_or can be created!_ <3 Rama
	 FString NewAbsoluteFolderPath = FPaths::GetPath(FullFilePath);
	 FPaths::NormalizeDirectoryName(NewAbsoluteFolderPath);
	 if (!VCreateDirectory(NewAbsoluteFolderPath))
	 {
		 ErrorString = "Folder could not be created, check read/write permissions~ " + NewAbsoluteFolderPath;
		 return false;
	 }

	 //Create FColor version
	 TArray<FColor> ColorArray;
	 for (const FLinearColor& Each : ImagePixels)
	 {
		 ColorArray.Add(Each.ToFColor(sRGB));
	 }

	 if (ColorArray.Num() != Width * Height)
	 {
		 ErrorString = "Error ~ height x width is not equal to the total pixel array length!";
		 return false;
	 }

	 //Remove any supplied file extension and/or add accurate one
	 FString FinalFilename = FPaths::GetBaseFilename(FullFilePath, false); //false = dont remove path
	 FinalFilename += (SaveAsBMP) ? ".bmp" : ".png";

	 //~~~

	 if (SaveAsBMP)
	 {
		 ErrorString = "Success! or if returning false, the saving of file to disk did not succeed for File IO reasons";
		 return FFileHelper::CreateBitmap(
			 *FinalFilename,
			 Width,
			 Height,
			 ColorArray.GetData(), //const struct FColor* Data, 
			 nullptr,//struct FIntRect* SubRectangle = NULL, 
			 &IFileManager::Get(),
			 nullptr, //out filename info only 
			 true //bool bInWriteAlpha 
		 );
	 }
	 else
	 {
		 TArray<uint8> CompressedPNG;
		 FImageUtils::CompressImageArray(
			 Width,
			 Height,
			 ColorArray,
			 CompressedPNG
		 );

		 ErrorString = "Success! or if returning false, the saving of file to disk did not succeed for File IO reasons";
		 return FFileHelper::SaveArrayToFile(CompressedPNG, *FinalFilename);
	 }

	 /*
	 //Crashed for JPG, worked great for PNG
	 //Maybe also works for BMP so could offer those two as save options?

	 const int32 x = Width;
	 const int32 y = Height;
	 if(ColorArray.Num() != x * y)
	 {
		 ErrorString = "Error ~ height x width is not equal to the total pixel array length!";
		 return false;
	 }

	 //Image Wrapper Module
	 IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));

	 //Create Compressor
	 IImageWrapperPtr ImageWrapper = ImageWrapperModule.CreateImageWrapper(GetJoyImageFormat(ImageFormat));

	 if(!ImageWrapper.IsValid())
	 {
		 ErrorString = "Error ~ Image wrapper could not be created!";
		 return false;
	 }
	 //~~~~~~~~~~~~~~~~~~~~~~

	 if ( ! ImageWrapper->SetRaw(
			 (void*)&ColorArray[0], 			//mem address of array start
			 sizeof(FColor) * x * y, 			//total size
			 x, y, 								//dimensions
			 ERGBFormat::BGRA,				//LinearColor == RGBA
			 (sizeof(FColor) / 4) * 8			//Bits per pixel
	 )) {
		 ErrorString = "ImageWrapper::SetRaw() did not succeed";
		 return false;
	 }

	 ErrorString = "Success! or if returning false, the saving of file to disk did not succeed for File IO reasons";
	 return FFileHelper::SaveArrayToFile(ImageWrapper->GetCompressed(), *FinalFilename);
	 */
 }

 bool UESLibraryBPLibrary::Victory_GetPixelFromT2D(UTexture2D* T2D, int32 X, int32 Y, FLinearColor& PixelColor)
 {
	 if (!T2D)
	 {
		 return false;
	 }

	 if (X <= -1 || Y <= -1)
	 {
		 return false;
	 }

	 T2D->SRGB = false;
	 T2D->CompressionSettings = TC_VectorDisplacementmap;

	 //Update settings
	 T2D->UpdateResource();

	 FTexture2DMipMap& MipsMap = T2D->PlatformData->Mips[0];
	 int32 TextureWidth = MipsMap.SizeX;
	 int32 TextureHeight = MipsMap.SizeY;

	 FByteBulkData* RawImageData = &MipsMap.BulkData;

	 if (!RawImageData)
	 {
		 return false;
	 }

	 FColor* RawColorArray = static_cast<FColor*>(RawImageData->Lock(LOCK_READ_ONLY));

	 //Safety check!
	 if (X >= TextureWidth || Y >= TextureHeight)
	 {
		 return false;
	 }

	 //Get!, converting FColor to FLinearColor 
	 PixelColor = RawColorArray[Y * TextureWidth + X];

	 RawImageData->Unlock();
	 return true;
 }
 bool UESLibraryBPLibrary::Victory_GetPixelsArrayFromT2DDynamic(UTexture2DDynamic* T2D, int32& TextureWidth, int32& TextureHeight, TArray<FLinearColor>& PixelArray)
 {
	 if (!T2D)
	 {
		 return false;
	 }

	 //To prevent overflow in BP if used in a loop
	 PixelArray.Empty();

	 //~~~~~~~~~~~~~~~~~~~~~~
	 // Modifying original here
	 T2D->SRGB = false;
	 T2D->CompressionSettings = TC_VectorDisplacementmap;

	 //Update settings
	 T2D->UpdateResource();
	 //~~~~~~~~~~~~~~~~~~~~~~

	 //Confused, DDC / platform data is invalid for dynamic, how to get its byte data?
	 //FTextureResource from UTexture base class?
	 return false;

	 /*
	 FTexturePlatformData** PtrPtr = T2D->GetRunningPlatformData();
	 if(!PtrPtr) return false;
	 FTexturePlatformData* Ptr = *PtrPtr;
	 if(!Ptr) return false;

	 FTexture2DMipMap& MyMipMap 	= Ptr->Mips[0];
	 TextureWidth = MyMipMap.SizeX;
	 TextureHeight = MyMipMap.SizeY;

	 FByteBulkData* RawImageData 	= &MyMipMap.BulkData;

	 if(!RawImageData)
	 {
		 return false;
	 }

	 FColor* RawColorArray = static_cast<FColor*>(RawImageData->Lock(LOCK_READ_ONLY));

	 UE_LOG(LogTemp,Warning,TEXT("Victory Plugin, Get Pixels, tex width for mip %d"), TextureWidth);
	 UE_LOG(LogTemp,Warning,TEXT("Victory Plugin, Get Pixels, tex width from T2D ptr %d"), T2D->GetSurfaceWidth());

	 for(int32 x = 0; x < TextureWidth; x++)
	 {
		 for(int32 y = 0; y < TextureHeight; y++)
		 {
			 PixelArray.Add(RawColorArray[x * TextureWidth + y]);
		 }
	 }

	 RawImageData->Unlock();
	 */

	 return true;
 }

 bool UESLibraryBPLibrary::Victory_GetPixelsArrayFromT2D(UTexture2D* T2D, int32& TextureWidth, int32& TextureHeight, TArray<FLinearColor>& PixelArray)
 {
	 if (!T2D)
	 {
		 return false;
	 }

	 //To prevent overflow in BP if used in a loop
	 PixelArray.Empty();

	 T2D->SRGB = false;
	 T2D->CompressionSettings = TC_VectorDisplacementmap;

	 //Update settings
	 T2D->UpdateResource();

	 FTexture2DMipMap& MyMipMap = T2D->PlatformData->Mips[0];
	 TextureWidth = MyMipMap.SizeX;
	 TextureHeight = MyMipMap.SizeY;

	 FByteBulkData* RawImageData = &MyMipMap.BulkData;

	 if (!RawImageData)
	 {
		 return false;
	 }

	 FColor* RawColorArray = static_cast<FColor*>(RawImageData->Lock(LOCK_READ_ONLY));

	 for (int32 x = 0; x < TextureWidth; x++)
	 {
		 for (int32 y = 0; y < TextureHeight; y++)
		 {
			 PixelArray.Add(RawColorArray[x * TextureWidth + y]);
		 }
	 }

	 RawImageData->Unlock();
	 return true;
 }

 bool UESLibraryBPLibrary::ReadOggWaveData(class USoundWave* sw, TArray<uint8>* rawFile)
 {
	 FSoundQualityInfo info;
	 FVorbisAudioInfo vorbis_obj;
	 if (!vorbis_obj.ReadCompressedInfo(rawFile->GetData(), rawFile->Num(), &info))
	 {
		 //Debug("Can't load header");
		 return true;
	 }

	 if (!sw) return true;
	 sw->SoundGroup = ESoundGroup::SOUNDGROUP_Default;
	 sw->NumChannels = info.NumChannels;
	 sw->Duration = info.Duration;
	 sw->RawPCMDataSize = info.SampleDataSize;
	 sw->SetSampleRate(info.SampleRate);
	 sw->RawData;

	 return false;
 }

 class USoundWave* UESLibraryBPLibrary::LoadOggDataFromFile(const FString& FilePath)
 {

	 USoundWave* sw = NewObject<USoundWave>(USoundWave::StaticClass());

	 if (!sw)
		 return NULL;

	 //* If true the song was successfully loaded
	 bool loaded = false;

	 FString FullPath = GetFullPath(FilePath);


	 //* loaded song file (binary, encoded)
	 TArray < uint8 > rawFile;

	 loaded = FFileHelper::LoadFileToArray(rawFile, FullPath.GetCharArray().GetData());

	 if (loaded)
	 {
		 FByteBulkData* bulkData = &sw->CompressedFormatData.GetFormat(TEXT("OGG"));
		 //sw->RawData = sw->CompressedFormatData.GetFormat(TEXT("OGG"));

		 bulkData->Lock(LOCK_READ_WRITE);
		 FMemory::Memcpy(bulkData->Realloc(rawFile.Num()), rawFile.GetData(), rawFile.Num());
		 bulkData->Unlock();

		 sw->RawData = *bulkData;

		 loaded = ReadOggWaveData(sw, &rawFile) == 0 ? true : false;
	 }

	 if (!loaded)
		 return NULL;

	 return sw;

 }

 class USoundWave* UESLibraryBPLibrary::LoadWaveDataFromFile(const FString& FilePath)
 {
	 USoundWave* sw = NewObject<USoundWave>(USoundWave::StaticClass());

	 if (!sw)
		 return nullptr;

	 FString FullPath = GetFullPath(FilePath);

	 TArray < uint8 > rawFile;

	 FFileHelper::LoadFileToArray(rawFile, FullPath.GetCharArray().GetData());
	 FWaveModInfo WaveInfo;

	 if (WaveInfo.ReadWaveInfo(rawFile.GetData(), rawFile.Num()))
	 {
		 sw->InvalidateCompressedData();

		 sw->RawData.Lock(LOCK_READ_WRITE);
		 void* LockedData = sw->RawData.Realloc(rawFile.Num());
		 FMemory::Memcpy(LockedData, rawFile.GetData(), rawFile.Num());
		 sw->RawData.Unlock();

		 int32 DurationDiv = *WaveInfo.pChannels * *WaveInfo.pBitsPerSample * *WaveInfo.pSamplesPerSec;
		 if (DurationDiv)
		 {
			 sw->Duration = *WaveInfo.pWaveDataSize * 8.0f / DurationDiv;
		 }
		 else
		 {
			 sw->Duration = 0.0f;
		 }

		 sw->SetSampleRate(*WaveInfo.pSamplesPerSec);
		 sw->NumChannels = *WaveInfo.pChannels;
		 sw->RawPCMDataSize = WaveInfo.SampleDataSize;
		 sw->SoundGroup = ESoundGroup::SOUNDGROUP_Default;
	 }
	 else {
		 return nullptr;
	 }

	 return sw;
 }

 EPathFollowingRequestResult::Type UESLibraryBPLibrary::Victory_AI_MoveToWithFilter(
	 APawn* Pawn,
	 const FVector& Dest,
	 TSubclassOf<UNavigationQueryFilter> FilterClass,
	 float AcceptanceRadius,
	 bool bProjectDestinationToNavigation,
	 bool bStopOnOverlap,
	 bool bCanStrafe
	 ) {
	 if (!Pawn)
	 {
		 return EPathFollowingRequestResult::Failed;
	 }

	 AAIController* AIControl = Cast<AAIController>(Pawn->GetController());
	 if (!AIControl)
	 {
		 return EPathFollowingRequestResult::Failed;
	 }

	 return AIControl->MoveToLocation(
		 Dest,
		 AcceptanceRadius,
		 bStopOnOverlap, 	//bStopOnOverlap
		 true,						//bUsePathfinding 
		 bProjectDestinationToNavigation,
		 bCanStrafe,			//bCanStrafe
		 FilterClass			//<~~~
		 );
 }

 bool UESLibraryBPLibrary::IsWidgetOfClassInViewport(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass)
 {
	 if (!WidgetClass) return false;
	 if (!WorldContextObject) return false;

	 UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	 if (!World) return false;
	 //~~~~~~~~~~~

	 for (TObjectIterator<UUserWidget> Itr; Itr; ++Itr)
	 {
		 if (Itr->GetWorld() != World) continue;
		 //~~~~~~~~~~~~~~~~~~~~~

		 if (!Itr->IsA(WidgetClass)) continue;
		 //~~~~~~~~~~~~~~~~~~~

		 if (Itr->GetIsVisible())			//IsInViewport in 4.6
		 {
			 return true;
		 }
	 }

	 return false;
 }

 UObject* UESLibraryBPLibrary::CreateObject(UObject* WorldContextObject, UClass* TheObjectClass)
 {
	 //See deprecation warning
	 //	Deprecation warning makes it no longer appear in context menu as a new node to add
	 return nullptr;
	 /*
	 if(!TheObjectClass) return NULL;
	 //~~~~~~~~~~~~~~~~~

	 //using a context object to get the world!
	 UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	 if(!World) return NULL;
	 //~~~~~~~~~~~

	 //Need to submit pull request for custom name and custom class both
	 return NewObject<UObject>(World,TheObjectClass);
	 */
 }

 UPrimitiveComponent* UESLibraryBPLibrary::CreatePrimitiveComponent(
	 UObject* WorldContextObject,
	 TSubclassOf<UPrimitiveComponent> CompClass,
	 FName Name,
	 FVector Location,
	 FRotator Rotation
	 ) {
	 if (!CompClass) return NULL;
	 //~~~~~~~~~~~~~~~~~

	 //using a context object to get the world!
	 UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	 if (!World) return NULL;
	 //~~~~~~~~~~~

	 UPrimitiveComponent* NewComp = NewObject<UPrimitiveComponent>(World, Name);
	 if (!NewComp) return NULL;
	 //~~~~~~~~~~~~~

	 NewComp->SetWorldLocation(Location);
	 NewComp->SetWorldRotation(Rotation);
	 NewComp->RegisterComponentWithWorld(World);

	 return NewComp;
 }

 void UESLibraryBPLibrary::AddToStreamingLevels(UObject* WorldContextObject, const FLevelStreamInstanceInfo& LevelInstanceInfo)
 {
	 bool bResult = true;

	 UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);

	 if (World != nullptr)
	 {
		 bool bAlreadyExists = false;

		 for (auto StreamingLevel : World->GetStreamingLevels())
		 {
			 if (StreamingLevel->GetWorldAssetPackageFName() == LevelInstanceInfo.PackageName)
			 {
				 bAlreadyExists = true;
				 // KRIS : Would normally log a warning here! Is there a LogVictory?
				 break;
			 }
		 }

		 if (!bAlreadyExists)
		 {
			 FName PackageName = LevelInstanceInfo.PackageName;

			 // For PIE Networking: remap the packagename to our local PIE packagename
			 FString PackageNameStr = PackageName.ToString();
			 if (GEngine->NetworkRemapPath(World->GetNetDriver(), PackageNameStr, true))
			 {
				 PackageName = FName(*PackageNameStr);
			 }

			 GEngine->DelayGarbageCollection();

			 // Setup streaming level object that will load specified map
			 ULevelStreamingDynamic* StreamingLevel = NewObject<ULevelStreamingDynamic>(World, ULevelStreamingDynamic::StaticClass(), NAME_None, RF_Transient, nullptr);
			 StreamingLevel->SetWorldAssetByPackageName(PackageName);
			 StreamingLevel->LevelColor = FColor::MakeRandomColor();
			 StreamingLevel->SetShouldBeLoaded(LevelInstanceInfo.bShouldBeLoaded);
			 StreamingLevel->SetShouldBeVisible(LevelInstanceInfo.bShouldBeVisible);
			 StreamingLevel->bShouldBlockOnLoad = LevelInstanceInfo.bShouldBlockOnLoad;
			 StreamingLevel->bInitiallyLoaded = true;
			 StreamingLevel->bInitiallyVisible = true;

			 // Transform
			 StreamingLevel->LevelTransform = FTransform(LevelInstanceInfo.Rotation, LevelInstanceInfo.Location);

			 // Map to Load
			 StreamingLevel->PackageNameToLoad = LevelInstanceInfo.PackageNameToLoad;

			 // Add the new level to world.
			 World->AddStreamingLevel(StreamingLevel);

			 World->FlushLevelStreaming(EFlushLevelStreamingType::Full);
		 }
	 }
 }


 void UESLibraryBPLibrary::RemoveFromStreamingLevels(UObject* WorldContextObject, const FLevelStreamInstanceInfo& LevelInstanceInfo)
 {

	 UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);

	 // Check if the world exists and we have a level to unload
	 if (World != nullptr && !LevelInstanceInfo.PackageName.IsNone())
	 {

#if WITH_EDITOR
		 // If we are using the editor we will use this lambda to remove the play in editor string
		 auto GetCorrectPackageName = [&](FName PackageName) {
			 FString PackageNameStr = PackageName.ToString();
			 if (GEngine->NetworkRemapPath(World->GetNetDriver(), PackageNameStr, true))
			 {
				 PackageName = FName(*PackageNameStr);
			 }

			 return PackageName;
		 };
#endif

		 // Get the package name that we want to check
		 FName PackageNameToCheck = LevelInstanceInfo.PackageName;

#if WITH_EDITOR
		 // Remove the play in editor string and client id to be able to use it with replication
		 PackageNameToCheck = GetCorrectPackageName(PackageNameToCheck);
#endif

		 // Find the level to unload
		 for (auto StreamingLevel : World->GetStreamingLevels())
		 {

			 FName LoadedPackageName = StreamingLevel->GetWorldAssetPackageFName();

#if WITH_EDITOR
			 // Remove the play in editor string and client id to be able to use it with replication
			 LoadedPackageName = GetCorrectPackageName(LoadedPackageName);
#endif

			 // If we find the level unload it and break
			 if (PackageNameToCheck == LoadedPackageName)
			 {
				 // This unload the level
				 StreamingLevel->SetShouldBeLoaded(false);
				 StreamingLevel->SetShouldBeVisible(false);
				 // This removes the level from the streaming level list
				 StreamingLevel->SetIsRequestingUnloadAndRemoval(true);
				 // Force a refresh of the world
				 World->FlushLevelStreaming(EFlushLevelStreamingType::Full);
				 break;
			 }
		 }
	 }
 }

 //
 void UESLibraryBPLibrary::ShuffleArrayWithStream_impl(void* TargetArray, const UArrayProperty* ArrayProperty, const FRandomStream& Stream)
 {
	 if (TargetArray)
	 {
		 FScriptArrayHelper ArrayHelper(ArrayProperty, TargetArray);
		 int32 LastIndex = ArrayHelper.Num() - 1;

		 for (int32 i = 0; i < LastIndex; ++i)
		 {
			 int32 Index = Stream.RandRange(0, LastIndex);
			 if (i != Index)
			 {
				 ArrayHelper.SwapValues(i, Index);
			 }
		 }
	 }
 }

 bool UESLibraryBPLibrary::SetMousePosition(APlayerController* PC, const float& PosX, const float& PosY)
 {
	 if (!PC) return false;

	 ULocalPlayer* LPlayer = Cast<ULocalPlayer>(PC->Player);

	 if (!LPlayer) return false;

	 UGameViewportClient* ViewportClient = Cast<UGameViewportClient>(LPlayer->ViewportClient);

	 if (!ViewportClient) return false;

	 FViewport* Viewport = ViewportClient->Viewport;

	 if (!Viewport) return false;

	 Viewport->SetMouse(int32(PosX), int32(PosY));

	 return true;
 }

 float UESLibraryBPLibrary::GetActorLastRenderTime(AActor* RefActor)
 {
	 return RefActor->GetLastRenderTime();
 }

 bool UESLibraryBPLibrary::WasActorRenderedRecently(AActor* RefActor, float MaxRecentTime)
 {
	 float RenderTime = GetActorLastRenderTime(RefActor) + MaxRecentTime;
	 float TimeSinceStartup = UGameplayStatics::GetTimeSeconds(RefActor->GetWorld());
	 return (RenderTime >= TimeSinceStartup);
 }

 bool UESLibraryBPLibrary::IsActorWithinFrustum(AActor* RefActor)
 {
	 FVector ActorBoundsOrigin;
	 FVector ActorBoundsExtents;
	 RefActor->GetActorBounds(false, ActorBoundsOrigin, ActorBoundsExtents);

	 ULocalPlayer* LocalPlayer = RefActor->GetWorld()->GetFirstLocalPlayerFromController();

	 FSceneViewFamilyContext ViewFamily(FSceneViewFamily::ConstructionValues(
		 LocalPlayer->ViewportClient->Viewport,
		 RefActor->GetWorld()->Scene,
		 LocalPlayer->ViewportClient->EngineShowFlags
		 ).SetRealtimeUpdate(true));

	 FVector ViewLocation;
	 FRotator ViewRotation;
	 FSceneView* SceneView = LocalPlayer->CalcSceneView(
		 &ViewFamily,
		 ViewLocation,
		 ViewRotation,
		 LocalPlayer->ViewportClient->Viewport
		 );

	 return SceneView->ViewFrustum.IntersectBox(ActorBoundsOrigin, ActorBoundsExtents);
 }

 TArray<FColor> UESLibraryBPLibrary::ConvertLinearColors(const TArray<FLinearColor>& LinearColors)
 {
	 TArray<FColor> OutColors = TArray<FColor>();

	 for (int32 i = 0; i < LinearColors.Num(); i++)
	 {
		 OutColors.Add(LinearColors[i].ToFColor(true));
	 }

	 return OutColors;
 }

 bool UESLibraryBPLibrary::HasRuntimeCooking()
 {
#ifdef WITH_RUNTIME_PHYSICS_COOKING
	 return true;
#else
	 return false;
#endif
 }

 FVector UESLibraryBPLibrary::MoveTowardsVector(FVector From, FVector To, float MaxDistanceDelta)
 {
	 FVector DiffVector = To - From;
	 float Length = DiffVector.Size();

	 if (Length <= 0.0f || (double)Length <= (double)MaxDistanceDelta)
	 {
		 return To;
	 }

	 return From + DiffVector / Length * MaxDistanceDelta;
 }

 FRotator UESLibraryBPLibrary::MoveTowardsRotator(FRotator From, FRotator To, float MaxDistanceDelta)
 {
	 // NOTE: There is probably a better implementation for this
	 float X, Y, Z;
	 X = MoveTowardsAngle(From.Pitch, To.Pitch, MaxDistanceDelta);
	 Y = MoveTowardsAngle(From.Yaw, To.Yaw, MaxDistanceDelta);
	 Z = MoveTowardsAngle(From.Roll, To.Roll, MaxDistanceDelta);
	 return FRotator(X, Y, Z);
 }

 float UESLibraryBPLibrary::MoveTowardsAngle(float From, float To, float MaxDelta)
 {
	 To = From + DeltaAngle(From, To);
	 return MoveTowards(From, To, MaxDelta);
 }

 float UESLibraryBPLibrary::MoveTowards(float From, float To, float MaxDelta)
 {
	 if ((double)FMath::Abs(To - From) <= (double)MaxDelta)
		 return To;
	 return From + FMath::Sign(To - From) * MaxDelta;
 }

 float UESLibraryBPLibrary::DeltaAngle(float From, float To)
 {
	 float Num = RepeatFloat(To - From, 360.0f);
	 if ((double)Num > 180.0)
		 Num -= 360.0f;
	 return Num;
 }

 float UESLibraryBPLibrary::RepeatFloat(float T, float Length)
 {
	 return T - FMath::FloorToInt(T / Length) * Length;
 }

 bool UESLibraryBPLibrary::PointIsInsideBox(const FBox2D& Box, const FVector2D& Point)
 {
	 return Box.IsInside(Point);
 }

 bool UESLibraryBPLibrary::BoxIsInsideBox(const FBox2D& Box, const FBox2D& OtherBox)
 {
	 return Box.IsInside(OtherBox);
 }

 bool UESLibraryBPLibrary::BoxIntersectsBox(const FBox2D& Box, const FBox2D& OtherBox)
 {
	 return Box.Intersect(OtherBox);
 }

 void UESLibraryBPLibrary::MinAndMaxOfFloatArray(const TArray<float>& Floats, float& Min, float& Max)
 {
	 check(Floats.Num() > 0);

	 Min = Floats[0];
	 Max = Floats[0];

	 if (Floats.Num() > 1)
	 {
		 for (int32 i = 1; i < Floats.Num(); i++)
		 {
			 Min = FMath::Min(Floats[i], Min);
			 Max = FMath::Max(Floats[i], Max);
		 }
	 }
 }

 FBox2D UESLibraryBPLibrary::MakeLiteralFBox2D(FVector2D Min, FVector2D Max)
 {
	 return FBox2D(Min, Max);
 }

 bool UESLibraryBPLibrary::VectorIsNearlyZero(const FVector& Vector)
 {
	 return Vector.IsNearlyZero();
 }

 void UESLibraryBPLibrary::GetActorScreenBox(const APlayerController* Controller, const AActor* TargetActor, bool bOnlyCollidingComponents, bool bScaleByDPI, FBox2D& Box, bool& bAllProjectedSuccessfully)
 {
	 ensure(Controller != NULL);
	 ensure(TargetActor != NULL);


	 // Get Actor Bounds
	 FVector ActorOrigin;
	 FVector ActorExtents;
	 TargetActor->GetActorBounds(bOnlyCollidingComponents, ActorOrigin, ActorExtents);

	 // Make box vertices
	 FVector Top_Left_Forward = ActorOrigin + FVector(-ActorExtents.X, ActorExtents.Y, ActorExtents.Z);	// -++
	 FVector Top_Right_Forward = ActorOrigin + FVector(ActorExtents.X, ActorExtents.Y, ActorExtents.Z);	// +++
	 FVector Top_Right_Back = ActorOrigin + FVector(-ActorExtents.X, -ActorExtents.Y, ActorExtents.Z);	// +-+
	 FVector Top_Left_Back = ActorOrigin + FVector(-ActorExtents.X, -ActorExtents.Y, ActorExtents.Z);	// --+

	 FVector Bottom_Left_Forward = ActorOrigin + FVector(-ActorExtents.X, ActorExtents.Y, -ActorExtents.Z);	// -+-
	 FVector Bottom_Right_Forward = ActorOrigin + FVector(ActorExtents.X, ActorExtents.Y, -ActorExtents.Z);	// ++-
	 FVector Bottom_Right_Back = ActorOrigin + FVector(ActorExtents.X, -ActorExtents.Y, -ActorExtents.Z);	// +--
	 FVector Bottom_Left_Back = ActorOrigin + FVector(-ActorExtents.X, -ActorExtents.Y, -ActorExtents.Z);	// ---

																											 // Convert to screen space
	 FVector2D TLF;
	 FVector2D TRF;
	 FVector2D TRB;
	 FVector2D TLB;

	 FVector2D BLF;
	 FVector2D BRF;
	 FVector2D BRB;
	 FVector2D BLB;

	 bool bTLF = Controller->ProjectWorldLocationToScreen(Top_Left_Forward, TLF);
	 bool bTRF = Controller->ProjectWorldLocationToScreen(Top_Right_Forward, TRF);
	 bool bTRB = Controller->ProjectWorldLocationToScreen(Top_Right_Back, TRB);
	 bool bTLB = Controller->ProjectWorldLocationToScreen(Top_Left_Back, TLB);

	 bool bBLF = Controller->ProjectWorldLocationToScreen(Bottom_Left_Forward, BLF);
	 bool bBRF = Controller->ProjectWorldLocationToScreen(Bottom_Right_Forward, BRF);
	 bool bBRB = Controller->ProjectWorldLocationToScreen(Bottom_Right_Back, BRB);
	 bool bBLB = Controller->ProjectWorldLocationToScreen(Bottom_Left_Back, BLB);

	 bAllProjectedSuccessfully = (bTLF && bTRF && bTRB && bTLB && bBLF && bBRF && bBRB && bBLB);

	 TArray<float> Xs;

	 Xs.Add(TLF.X);
	 Xs.Add(TRF.X);
	 Xs.Add(TRB.X);
	 Xs.Add(TLB.X);

	 Xs.Add(BLF.X);
	 Xs.Add(BRF.X);
	 Xs.Add(BRB.X);
	 Xs.Add(BLB.X);

	 TArray<float> Ys;

	 Ys.Add(TLF.Y);
	 Ys.Add(TRF.Y);
	 Ys.Add(TRB.Y);
	 Ys.Add(TLB.Y);

	 Ys.Add(BLF.Y);
	 Ys.Add(BRF.Y);
	 Ys.Add(BRB.Y);
	 Ys.Add(BLB.Y);

	 // Optionally scale by DPI
	 if (bScaleByDPI)
	 {
		 float DPIScale = UWidgetLayoutLibrary::GetViewportScale((UObject*)Controller);

		 for (int32 i = 0; i < Xs.Num(); i++)
		 {
			 Xs[i] = Xs[i] / DPIScale;
		 }

		 for (int32 i = 0; i < Ys.Num(); i++)
		 {
			 Ys[i] = Ys[i] / DPIScale;
		 }
	 }

	 // Get the extremes
	 float Xmin, Xmax, Ymin, Ymax;
	 MinAndMaxOfFloatArray(Xs, Xmin, Xmax);
	 MinAndMaxOfFloatArray(Ys, Ymin, Ymax);

	 // Construct final screen box
	 FVector2D MinValues = FVector2D(Xmin, Ymin);
	 FVector2D MaxValues = FVector2D(Xmax, Ymax);

	 Box = FBox2D(MinValues, MaxValues);
 }

 void UESLibraryBPLibrary::RemoveAllChildren(USceneComponent* parentComp)
 {
	 if (parentComp == nullptr)
	 {
		 return;
	 }

	 while (parentComp->GetNumChildrenComponents() > 0)
	 {
		 parentComp->GetChildComponent(0)->DestroyComponent();
	 }
 }

 bool UESLibraryBPLibrary::WorldPointIsInsideBox(const FVector& WorldPoint, const FVector& BoxCenter, const FVector& BoxExtents)
 {
	 return
		 (WorldPoint.X >= BoxCenter.X - BoxExtents.X) && (WorldPoint.X <= BoxCenter.X + BoxExtents.X) &&
		 (WorldPoint.Y >= BoxCenter.Y - BoxExtents.Y) && (WorldPoint.Y <= BoxCenter.Y + BoxExtents.Y) &&
		 (WorldPoint.Z >= BoxCenter.Z - BoxExtents.Z) && (WorldPoint.Z <= BoxCenter.Z + BoxExtents.Z);
 }


 /** Easing functions */
 const float UESLibraryBPLibrary::EaseInterpolate(const EEasingType EaseType, const float NormalizedTime, const float From, const float To)
 {
	 switch (EaseType)
	 {
	 default:
	 case EEasingType::Linear: return EaseLinear(NormalizedTime, From, To);
	 case EEasingType::SineIn: return EaseSineIn(NormalizedTime, From, To);
	 case EEasingType::SineOut: return EaseSineOut(NormalizedTime, From, To);
	 case EEasingType::SineInOut: return EaseSineInOut(NormalizedTime, From, To);
	 case EEasingType::QuadIn: return EaseQuadIn(NormalizedTime, From, To);
	 case EEasingType::QuadOut: return EaseQuadOut(NormalizedTime, From, To);
	 case EEasingType::QuadInOut: return EaseQuadInOut(NormalizedTime, From, To);
	 case EEasingType::CubicIn: return EaseCubicIn(NormalizedTime, From, To);
	 case EEasingType::CubicOut: return EaseCubicOut(NormalizedTime, From, To);
	 case EEasingType::CubicInOut: return EaseCubicInOut(NormalizedTime, From, To);
	 case EEasingType::QuartIn: return EaseQuartIn(NormalizedTime, From, To);
	 case EEasingType::QuartOut: return EaseQuartOut(NormalizedTime, From, To);
	 case EEasingType::QuartInOut: return EaseQuartInOut(NormalizedTime, From, To);
	 case EEasingType::QuintIn: return EaseQuintIn(NormalizedTime, From, To);
	 case EEasingType::QuintOut: return EaseQuintOut(NormalizedTime, From, To);
	 case EEasingType::QuintInOut: return EaseQuintInOut(NormalizedTime, From, To);
	 case EEasingType::ExpoIn: return EaseExpoIn(NormalizedTime, From, To);
	 case EEasingType::ExpoOut: return EaseExpoOut(NormalizedTime, From, To);
	 case EEasingType::ExpoInOut: return EaseExpoInOut(NormalizedTime, From, To);
	 case EEasingType::CircIn: return EaseCircIn(NormalizedTime, From, To);
	 case EEasingType::CircOut: return EaseCircOut(NormalizedTime, From, To);
	 case EEasingType::CircInOut: return EaseCircInOut(NormalizedTime, From, To);
	 case EEasingType::BackIn: return EaseBackIn(NormalizedTime, From, To);
	 case EEasingType::BackOut: return EaseBackOut(NormalizedTime, From, To);
	 case EEasingType::BackInOut: return EaseBackInOut(NormalizedTime, From, To);
	 case EEasingType::ElasticIn: return EaseElasticIn(NormalizedTime, From, To);
	 case EEasingType::ElasticOut: return EaseElasticOut(NormalizedTime, From, To);
	 case EEasingType::ElasticInOut: return EaseElasticInOut(NormalizedTime, From, To);
	 case EEasingType::BounceIn: return EaseBounceIn(NormalizedTime, From, To);
	 case EEasingType::BounceOut: return EaseBounceOut(NormalizedTime, From, To);
	 case EEasingType::BounceInOut: return EaseBounceInOut(NormalizedTime, From, To);
	 case EEasingType::SineOutIn: return EaseSineOutIn(NormalizedTime, From, To);
	 case EEasingType::QuadOutIn: return EaseQuadOutIn(NormalizedTime, From, To);
	 case EEasingType::CubicOutIn: return EaseCubicOutIn(NormalizedTime, From, To);
	 case EEasingType::QuartOutIn: return EaseQuartOutIn(NormalizedTime, From, To);
	 case EEasingType::QuintOutIn: return EaseQuintOutIn(NormalizedTime, From, To);
	 case EEasingType::ExpoOutIn: return EaseExpoOutIn(NormalizedTime, From, To);
	 case EEasingType::CircOutIn: return EaseCircOutIn(NormalizedTime, From, To);
	 case EEasingType::BackOutIn: return EaseBackOutIn(NormalizedTime, From, To);
	 case EEasingType::ElasticOutIn: return EaseElasticOutIn(NormalizedTime, From, To);
	 case EEasingType::BounceOutIn: return EaseBounceOutIn(NormalizedTime, From, To);
	 }
 }

 const float UESLibraryBPLibrary::EaseLinear(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * NormalizedTime;
 }

 const float UESLibraryBPLibrary::EaseSineIn(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * (FPlatformMath::Sin((NormalizedTime - 1) * HALF_PI) + 1);
 }

 const float UESLibraryBPLibrary::EaseSineOut(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * (FPlatformMath::Sin(NormalizedTime * HALF_PI));
 }

 const float UESLibraryBPLibrary::EaseSineInOut(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * (0.5f * (1 - FPlatformMath::Cos(NormalizedTime * PI)));
 }

 const float UESLibraryBPLibrary::EaseQuadIn(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * (NormalizedTime * NormalizedTime);
 }

 const float UESLibraryBPLibrary::EaseQuadOut(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * (-(NormalizedTime * (NormalizedTime - 2)));
 }

 const float UESLibraryBPLibrary::EaseQuadInOut(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * ((NormalizedTime < 0.5f) ? (2 * NormalizedTime * NormalizedTime) : ((-2 * NormalizedTime * NormalizedTime) + (4 * NormalizedTime) - 1));
 }

 const float UESLibraryBPLibrary::EaseCubicIn(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * (NormalizedTime * NormalizedTime * NormalizedTime);
 }

 const float UESLibraryBPLibrary::EaseCubicOut(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * ((NormalizedTime - 1) * (NormalizedTime - 1) * (NormalizedTime - 1) + 1);
 }

 const float UESLibraryBPLibrary::EaseCubicInOut(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * ((NormalizedTime < 0.5f) ? (4 * NormalizedTime * NormalizedTime * NormalizedTime) : (0.5f * ((2 * NormalizedTime) - 2) * ((2 * NormalizedTime) - 2) * ((2 * NormalizedTime) - 2) + 1));
 }

 const float UESLibraryBPLibrary::EaseQuartIn(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * (NormalizedTime * NormalizedTime * NormalizedTime * NormalizedTime);
 }

 const float UESLibraryBPLibrary::EaseQuartOut(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * ((NormalizedTime - 1) * (NormalizedTime - 1) * (NormalizedTime - 1) * (1 - NormalizedTime) + 1);
 }

 const float UESLibraryBPLibrary::EaseQuartInOut(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * ((NormalizedTime < 0.5f) ? (8 * NormalizedTime * NormalizedTime * NormalizedTime * NormalizedTime) : (-8 * (NormalizedTime - 1) * (NormalizedTime - 1) * (NormalizedTime - 1) * (NormalizedTime - 1) + 1));
 }

 const float UESLibraryBPLibrary::EaseQuintIn(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * (NormalizedTime * NormalizedTime * NormalizedTime * NormalizedTime * NormalizedTime);
 }

 const float UESLibraryBPLibrary::EaseQuintOut(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * ((NormalizedTime - 1) * (NormalizedTime - 1) * (NormalizedTime - 1) * (NormalizedTime - 1) * (NormalizedTime - 1) + 1);
 }

 const float UESLibraryBPLibrary::EaseQuintInOut(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * ((NormalizedTime < 0.5f) ? (16 * NormalizedTime * NormalizedTime * NormalizedTime * NormalizedTime * NormalizedTime) : (0.5f * ((2 * NormalizedTime) - 2) * ((2 * NormalizedTime) - 2) * ((2 * NormalizedTime) - 2) * ((2 * NormalizedTime) - 2) * ((2 * NormalizedTime) - 2) + 1));
 }

 const float UESLibraryBPLibrary::EaseExpoIn(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * ((NormalizedTime <= 0.0f) ? (NormalizedTime) : (FPlatformMath::Pow(2, 10 * (NormalizedTime - 1))));
 }

 const float UESLibraryBPLibrary::EaseExpoOut(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * ((NormalizedTime >= 1.0f) ? (NormalizedTime) : (1 - FPlatformMath::Pow(2, -10 * NormalizedTime)));
 }

 const float UESLibraryBPLibrary::EaseExpoInOut(const float NormalizedTime, const float From, const float To)
 {
	 if (NormalizedTime == 1.0f || NormalizedTime == 0.0f) return NormalizedTime;
	 return From + (To - From) *
		 ((NormalizedTime < 0.5f) ?
			 (0.5f * FPlatformMath::Pow(2, (20 * NormalizedTime) - 10)) :
			 (-0.5f * FPlatformMath::Pow(2, (-20 * NormalizedTime) + 10) + 1)
			 );
 }

 const float UESLibraryBPLibrary::EaseCircIn(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * (1 - FPlatformMath::Sqrt(1 - (NormalizedTime * NormalizedTime)));
 }

 const float UESLibraryBPLibrary::EaseCircOut(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * (FPlatformMath::Sqrt((2 - NormalizedTime) * NormalizedTime));
 }

 const float UESLibraryBPLibrary::EaseCircInOut(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * ((NormalizedTime < 0.5f) ? (0.5f * (1 - FPlatformMath::Sqrt(1 - 4 * (NormalizedTime * NormalizedTime)))) : (0.5f * (FPlatformMath::Sqrt(-((2 * NormalizedTime) - 3) * ((2 * NormalizedTime) - 1)) + 1)));
 }

 const float UESLibraryBPLibrary::EaseBackIn(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * (NormalizedTime * NormalizedTime * NormalizedTime - NormalizedTime * FPlatformMath::Sin(NormalizedTime * PI));
 }

 const float UESLibraryBPLibrary::EaseBackOut(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * (1 - ((1 - NormalizedTime) * (1 - NormalizedTime) * (1 - NormalizedTime) - (1 - NormalizedTime) * FPlatformMath::Sin((1 - NormalizedTime) * PI)));
 }

 const float UESLibraryBPLibrary::EaseBackInOut(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * ((NormalizedTime < 0.5f) ? (0.5f * ((2 * NormalizedTime) * (2 * NormalizedTime) * (2 * NormalizedTime) - (2 * NormalizedTime) * FPlatformMath::Sin((2 * NormalizedTime) * PI))) : (0.5f * (1 - ((1 - (2 * NormalizedTime - 1)) * (1 - (2 * NormalizedTime - 1)) * (1 - (2 * NormalizedTime - 1)) - (1 - (2 * NormalizedTime - 1)) * FPlatformMath::Sin((1 - (2 * NormalizedTime - 1)) * PI))) + 0.5f));
 }

 const float UESLibraryBPLibrary::EaseElasticIn(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * (FPlatformMath::Sin(13 * HALF_PI * NormalizedTime) * FPlatformMath::Pow(2, 10 * (NormalizedTime - 1)));
 }

 const float UESLibraryBPLibrary::EaseElasticOut(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * (FPlatformMath::Sin(-13 * HALF_PI * (NormalizedTime + 1)) * FPlatformMath::Pow(2, -10 * NormalizedTime) + 1);
 }

 const float UESLibraryBPLibrary::EaseElasticInOut(const float NormalizedTime, const float From, const float To)
 {
	 return From + (To - From) * (
		 (NormalizedTime < 0.5f) ?
		 (0.5f * FPlatformMath::Sin(13 * HALF_PI * (2 * NormalizedTime)) * FPlatformMath::Pow(2, 10 * ((2 * NormalizedTime) - 1))) :
		 (0.5f * (FPlatformMath::Sin(-13 * HALF_PI * ((2 * NormalizedTime - 1) + 1)) * FPlatformMath::Pow(2, -10 * (2 * NormalizedTime - 1)) + 2)
			 ));
 }

 const float UESLibraryBPLibrary::EaseBounceIn(const float NormalizedTime, const float From, const float To)
 {
	 float p = (1 - NormalizedTime);
	 float x;
	 if (p < 4 / 11.0f)
	 {
		 x = (121 * p * p) / 16.0f;
	 }
	 else if (p < 8 / 11.0f)
	 {
		 x = (363 / 40.0f * p * p) - (99 / 10.0f * p) + 17 / 5.0f;
	 }
	 else if (p < 9 / 10.0f)
	 {
		 x = (4356 / 361.0f * p * p) - (35442 / 1805.0f * p) + 16061 / 1805.0f;
	 }
	 else
	 {
		 x = (54 / 5.0f * p * p) - (513 / 25.0f * p) + 268 / 25.0f;
	 }

	 return From + (To - From) * (1 - (1 - x));
 }

 const float UESLibraryBPLibrary::EaseBounceOut(const float NormalizedTime, const float From, const float To)
 {
	 float p = NormalizedTime;
	 float x;
	 if (p < 4 / 11.0f)
	 {
		 x = (121 * p * p) / 16.0f;
	 }
	 else if (p < 8 / 11.0f)
	 {
		 x = (363 / 40.0f * p * p) - (99 / 10.0f * p) + 17 / 5.0f;
	 }
	 else if (p < 9 / 10.0f)
	 {
		 x = (4356 / 361.0f * p * p) - (35442 / 1805.0f * p) + 16061 / 1805.0f;
	 }
	 else
	 {
		 x = (54 / 5.0f * p * p) - (513 / 25.0f * p) + 268 / 25.0f;
	 }
	 return From + (To - From) * (x);
 }

 const float UESLibraryBPLibrary::EaseBounceInOut(const float NormalizedTime, const float From, const float To)
 {
	 float x;

	 if (NormalizedTime < 0.5f)
	 {
		 float p = (NormalizedTime * 2);
		 if (p < 4 / 11.0f)
		 {
			 x = (121 * p * p) / 16.0f;
		 }
		 else if (p < 8 / 11.0f)
		 {
			 x = (363 / 40.0f * p * p) - (99 / 10.0f * p) + 17 / 5.0f;
		 }
		 else if (p < 9 / 10.0f)
		 {
			 x = (4356 / 361.0f * p * p) - (35442 / 1805.0f * p) + 16061 / 1805.0f;
		 }
		 else
		 {
			 x = (54 / 5.0f * p * p) - (513 / 25.0f * p) + 268 / 25.0f;
		 }
		 x = 0.5f * x;
	 }
	 else
	 {
		 float p = (NormalizedTime * 2 - 1);
		 if (p < 4 / 11.0f)
		 {
			 x = (121 * p * p) / 16.0f;
		 }
		 else if (p < 8 / 11.0f)
		 {
			 x = (363 / 40.0f * p * p) - (99 / 10.0f * p) + 17 / 5.0f;
		 }
		 else if (p < 9 / 10.0f)
		 {
			 x = (4356 / 361.0f * p * p) - (35442 / 1805.0f * p) + 16061 / 1805.0f;
		 }
		 else
		 {
			 x = (54 / 5.0f * p * p) - (513 / 25.0f * p) + 268 / 25.0f;
		 }
		 x = 0.5f * x + 0.5f;
	 }

	 return From + (To - From) * x;
 }


 const float UESLibraryBPLibrary::EaseSineOutIn(const float NormalizedTime, const float From, const float To)
 {
	 return NormalizedTime < 0.5f ? EaseSineOut(NormalizedTime * 2, From, FMath::Lerp(From, To, 0.5f)) : EaseSineIn((NormalizedTime - 0.5f) * 2, FMath::Lerp(From, To, 0.5f), To);
 }

 const float UESLibraryBPLibrary::EaseQuadOutIn(const float NormalizedTime, const float From, const float To)
 {
	 return NormalizedTime < 0.5f ? EaseQuadOut(NormalizedTime * 2, From, FMath::Lerp(From, To, 0.5f)) : EaseQuadIn((NormalizedTime - 0.5f) * 2, FMath::Lerp(From, To, 0.5f), To);
 }

 const float UESLibraryBPLibrary::EaseCubicOutIn(const float NormalizedTime, const float From, const float To)
 {
	 return NormalizedTime < 0.5f ? EaseCubicOut(NormalizedTime * 2, From, FMath::Lerp(From, To, 0.5f)) : EaseCubicIn((NormalizedTime - 0.5f) * 2, FMath::Lerp(From, To, 0.5f), To);
 }

 const float UESLibraryBPLibrary::EaseQuartOutIn(const float NormalizedTime, const float From, const float To)
 {
	 return NormalizedTime < 0.5f ? EaseQuartOut(NormalizedTime * 2, From, FMath::Lerp(From, To, 0.5f)) : EaseQuartIn((NormalizedTime - 0.5f) * 2, FMath::Lerp(From, To, 0.5f), To);
 }

 const float UESLibraryBPLibrary::EaseQuintOutIn(const float NormalizedTime, const float From, const float To)
 {
	 return NormalizedTime < 0.5f ? EaseQuintOut(NormalizedTime * 2, From, FMath::Lerp(From, To, 0.5f)) : EaseQuintIn((NormalizedTime - 0.5f) * 2, FMath::Lerp(From, To, 0.5f), To);
 }

 const float UESLibraryBPLibrary::EaseExpoOutIn(const float NormalizedTime, const float From, const float To)
 {
	 return NormalizedTime < 0.5f ? EaseExpoOut(NormalizedTime * 2, From, FMath::Lerp(From, To, 0.5f)) : EaseExpoIn((NormalizedTime - 0.5f) * 2, FMath::Lerp(From, To, 0.5f), To);
 }

 const float UESLibraryBPLibrary::EaseCircOutIn(const float NormalizedTime, const float From, const float To)
 {
	 return NormalizedTime < 0.5f ? EaseCircOut(NormalizedTime * 2, From, FMath::Lerp(From, To, 0.5f)) : EaseCircIn((NormalizedTime - 0.5f) * 2, FMath::Lerp(From, To, 0.5f), To);
 }

 const float UESLibraryBPLibrary::EaseBackOutIn(const float NormalizedTime, const float From, const float To)
 {
	 return NormalizedTime < 0.5f ? EaseBackOut(NormalizedTime * 2, From, FMath::Lerp(From, To, 0.5f)) : EaseBackIn((NormalizedTime - 0.5f) * 2, FMath::Lerp(From, To, 0.5f), To);
 }

 const float UESLibraryBPLibrary::EaseElasticOutIn(const float NormalizedTime, const float From, const float To)
 {
	 return NormalizedTime < 0.5f ? EaseElasticOut(NormalizedTime * 2, From, FMath::Lerp(From, To, 0.5f)) : EaseElasticIn((NormalizedTime - 0.5f) * 2, FMath::Lerp(From, To, 0.5f), To);
 }

 const float UESLibraryBPLibrary::EaseBounceOutIn(const float NormalizedTime, const float From, const float To)
 {
	 return NormalizedTime < 0.5f ? EaseBounceOut(NormalizedTime * 2, From, FMath::Lerp(From, To, 0.5f)) : EaseBounceIn((NormalizedTime - 0.5f) * 2, FMath::Lerp(From, To, 0.5f), To);
 }

 UUnrealTinyXmlDocument* UESLibraryBPLibrary::NewXmlDocument()
 {
	 UUnrealTinyXmlDocument* TXMLInstance = NewObject<UUnrealTinyXmlDocument>();
	 TXMLInstance->XmlFilePtr = new tinyxml2::TinyXMLDocument();
	 return TXMLInstance;
 }
 
