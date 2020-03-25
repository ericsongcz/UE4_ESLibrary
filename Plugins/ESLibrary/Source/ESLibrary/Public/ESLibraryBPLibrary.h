// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "Math/Quat.h"
#include "GameFramework/PlayerInput.h"
#include "Styling/SlateColor.h"
#include "InputCoreTypes.h"
#include "Components/Widget.h"
#include "Components/SplineMeshComponent.h"
#include "Styling/SlateTypes.h"
#include "Components/SplineComponent.h"
#include "GameFramework/SaveGame.h"
#include "DDSLoader.h"
#include "DynamicLoader.h"
#include "Navigation/PathFollowingComponent.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "Math/RangeBound.h"
#include "Engine/LevelStreamingDynamic.h"
#include "Engine/LevelStreaming.h"
#include "SlateCore\Public\Styling\SlateBrush.h"
#include "tinyxml2.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESLibraryBPLibrary.generated.h"

using namespace tinyxml2;

UENUM(BlueprintType)
enum class EN_IsValid : uint8 
{
	IsValid UMETA(DisplayName = "IsValid"),
	IsNot	UMETA(DisplayName = "IsNot")
};

UENUM(BlueprintType)
enum class EN_Equals : uint8 
{
	IfEquals UMETA(DisplayName = "IfEquals"),
	IfNot	 UMETA(DisplayName = "IfNot")
};

UENUM(BlueprintType)
enum class EN_NotEqual : uint8 
{
	IfNotEqual UMETA(DisplayName = "IfNotEqual"),
	IfSo	   UMETA(DisplayName = "IfSo")
};

UENUM(BlueprintType)
enum class EN_Match : uint8 
{
	IfMatch UMETA(DisplayName = "IfMatch"),
	IfNot	UMETA(DisplayName = "IfNot")
};

UENUM(BlueprintType)
enum class EN_IfThenElse : uint8 
{
	IfTrue,
	ElseDo
};

UENUM(BlueprintType)
enum class EPlatformType : uint8
{
	/** Xbox One */
	XboxOne UMETA(DisplayName = "Xbox One"),
	/** Playstation 4*/
	PS4 UMETA(DisplayName = "PS4"),
	/** Nintendo Switch */
	Switch UMETA(DisplayName = "Switch"),
	/** Windows, Mac, or Linux */
	Desktop UMETA(DisplayName = "Desktop")
};

UENUM()
enum class EExtraSwitch : uint8
{
	// On Success
	OnSucceeded,
	// On Failure
	OnFailed

	// meta = (ExpandEnumAsExecs = "Result")
	// EExtraSwitch &Result
};

UENUM(BlueprintType)
enum class EFocusCausedBy : uint8
{
	/** Focus was changed because of a mouse action. */
	Mouse					UMETA(DisplayName = "Mouse"),

	/** Focus was changed in response to a navigation, such as the arrow keys, TAB key, controller DPad, ... */
	Navigation				UMETA(DisplayName = "Navigation"),

	/** Focus was changed because someone asked the application to change it. */
	SetDirectly				UMETA(DisplayName = "Set Directly"),

	/** Focus was explicitly cleared via the escape key or other similar action. */
	Cleared					UMETA(DisplayName = "Cleared"),

	/** Focus was changed because another widget lost focus, and focus moved to a new widget. */
	OtherWidgetLostFocus	UMETA(DisplayName = "Other Widget Lost Focus"),

	/** Focus was set in response to the owning window being activated. */
	WindowActivate			UMETA(DisplayName = "Window Activate")
};

UENUM(BlueprintType)
enum class DirType : uint8
{
	GameDir,
	ContentDir
};

UENUM(BlueprintType)
enum class EJoyImageFormats : uint8
{
	JPG		UMETA(DisplayName = "JPG        "),
	PNG		UMETA(DisplayName = "PNG        "),
	BMP		UMETA(DisplayName = "BMP        "),
	ICO		UMETA(DisplayName = "ICO        "),
	EXR		UMETA(DisplayName = "EXR        "),
	ICNS	UMETA(DisplayName = "ICNS        ")
};

USTRUCT(BlueprintType)
struct FLevelStreamInstanceInfo
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(Category = "ES|LevelStreaming", BlueprintReadWrite)
		FName PackageName;

	UPROPERTY(Category = "ES|LevelStreaming", BlueprintReadWrite)
		FName PackageNameToLoad;

	UPROPERTY(Category = "ES|LevelStreaming", BlueprintReadWrite)
		FVector Location;

	UPROPERTY(Category = "ES|LevelStreaming", BlueprintReadWrite)
		FRotator Rotation;

	UPROPERTY(Category = "ES|LevelStreaming", BlueprintReadWrite)
		uint8 bShouldBeLoaded : 1;

	UPROPERTY(Category = "ES|LevelStreaming", BlueprintReadWrite)
		uint8 bShouldBeVisible : 1;

	UPROPERTY(Category = "ES|LevelStreaming", BlueprintReadWrite)
		uint8 bShouldBlockOnLoad : 1;

	UPROPERTY(Category = "ES|LevelStreaming", BlueprintReadWrite)
		int32 LODIndex;

	FLevelStreamInstanceInfo() {}

	FLevelStreamInstanceInfo(ULevelStreamingDynamic* LevelInstance);

	FString ToString() const
	{
		return FString::Printf(TEXT("PackageName: %s\nPackageNameToLoad:%s\nLocation:%s\nRotation:%s\nbShouldBeLoaded:%s\nbShouldBeVisible:%s\nbShouldBlockOnLoad:%s\nLODIndex:%i")
			, *PackageName.ToString()
			, *PackageNameToLoad.ToString()
			, *Location.ToString()
			, *Rotation.ToString()
			, (bShouldBeLoaded) ? TEXT("True") : TEXT("False")
			, (bShouldBeVisible) ? TEXT("True") : TEXT("False")
			, (bShouldBlockOnLoad) ? TEXT("True") : TEXT("False")
			, LODIndex);
	}
};

UENUM(BlueprintType)
enum class EEasingType : uint8
{
	Linear UMETA(DisplayName = "Linear"),
	SineIn UMETA(DisplayName = "Sine In"),
	SineOut UMETA(DisplayName = "Sine Out"),
	SineInOut UMETA(DisplayName = "Sine In Out"),
	QuadIn UMETA(DisplayName = "Quad In"),
	QuadOut UMETA(DisplayName = "Quad Out"),
	QuadInOut UMETA(DisplayName = "Quad In Out"),
	CubicIn UMETA(DisplayName = "Cubic In"),
	CubicOut UMETA(DisplayName = "Cubic Out"),
	CubicInOut UMETA(DisplayName = "Cubic In Out"),
	QuartIn UMETA(DisplayName = "Quartic In"),
	QuartOut UMETA(DisplayName = "Quartic Out"),
	QuartInOut UMETA(DisplayName = "Quartic In Out"),
	QuintIn UMETA(DisplayName = "Quintic In"),
	QuintOut UMETA(DisplayName = "Quintic Out"),
	QuintInOut UMETA(DisplayName = "Quintic In Out"),
	ExpoIn UMETA(DisplayName = "Exponential In"),
	ExpoOut UMETA(DisplayName = "Exponential Out"),
	ExpoInOut UMETA(DisplayName = "Exponential In Out"),
	CircIn UMETA(DisplayName = "Circular In"),
	CircOut UMETA(DisplayName = "Circular Out"),
	CircInOut UMETA(DisplayName = "Circular In Out"),
	BackIn UMETA(DisplayName = "Back In"),
	BackOut UMETA(DisplayName = "Back Out"),
	BackInOut UMETA(DisplayName = "Back In Out"),
	ElasticIn UMETA(DisplayName = "Elastic In"),
	ElasticOut UMETA(DisplayName = "Elastic Out"),
	ElasticInOut UMETA(DisplayName = "Elastic In Out"),
	BounceIn UMETA(DisplayName = "Bounce In"),
	BounceOut UMETA(DisplayName = "Bounce Out"),
	BounceInOut UMETA(DisplayName = "Bounce In Out"),

	SineOutIn UMETA(DisplayName = "Sine Out In"),
	QuadOutIn UMETA(DisplayName = "Quad Out In"),
	CubicOutIn UMETA(DisplayName = "Cubic Out In"),
	QuartOutIn UMETA(DisplayName = "Quartic Out In"),
	QuintOutIn UMETA(DisplayName = "Quintic Out In"),
	ExpoOutIn UMETA(DisplayName = "Exponential Out In"),
	CircOutIn UMETA(DisplayName = "Circular Out In"),
	BackOutIn UMETA(DisplayName = "Back Out In"),
	ElasticOutIn UMETA(DisplayName = "Elastic Out In"),
	BounceOutIn UMETA(DisplayName = "Bounce Out In"),
};

DECLARE_DELEGATE_OneParam(FMKTweenDelegate, float);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMKTweenDynamicDelegate, float, TweenedValue);

struct FMKUnifiedDelegate
{
	FMKTweenDelegate FuncDelegate;
	FMKTweenDynamicDelegate FuncDynDelegate;

	FMKUnifiedDelegate() {};
	FMKUnifiedDelegate(FMKTweenDelegate const& D) : FuncDelegate(D) {};
	FMKUnifiedDelegate(FMKTweenDynamicDelegate const& D) : FuncDynDelegate(D) {};

	inline void Execute(float val)
	{
		if (FuncDelegate.IsBound())
		{
			FuncDelegate.Execute(val);
		}
		else if (FuncDynDelegate.IsBound())
		{
			FuncDynDelegate.Execute(val);
		}
	}

	inline bool IsBound() const
	{
		return (FuncDelegate.IsBound() || FuncDynDelegate.IsBound());
	}

	inline void Unbind()
	{
		FuncDelegate.Unbind();
		FuncDynDelegate.Unbind();
	}
};

class AGameMode;
class USplineMeshComponent;
class UCheckBox;
class UUserWidget;
class UWidget;
class UPanelWidget;
class UTextBlock;
class UInputSettings;
class UStaticMesh;

DECLARE_LOG_CATEGORY_EXTERN(LogESLibraryBPLibrary, Log, All);

UCLASS()
class UESLibraryBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	static void GetCSVRowDataAndProperty(UDataTable* Table, FName InRowName, FName InColumnName, uint8*& OutRowData, UProperty*& OutProperty);

public:
	//--------------------datatable lb--------------------
	UFUNCTION(BlueprintCallable, Category = "ES|DataTable")
		static void GetCSVTableString(UDataTable* DataTable, FString& OutResult);

	UFUNCTION(BlueprintCallable, Category = "ES|DataTable")
		static void GetCSVRowNames(UDataTable* Table, TArray<FName>& OutRowNames);

	/** Get a Row from a DataTable given a RowName */
	UFUNCTION(BlueprintCallable, Category = "ES|DataTable")
		static int32 GetIntValueFromDataTable(UDataTable* Table, FName InRowName, FName InColumnName);

	/** Get a Row from a DataTable given a RowName */
	UFUNCTION(BlueprintCallable, Category = "ES|DataTable")
		static float GetFloatValueFromDataTable(UDataTable* Table, FName InRowName, FName InColumnName);

	/** Get a Row from a DataTable given a RowName */
	UFUNCTION(BlueprintCallable, Category = "ES|DataTable")
		static FString GetStringValueFromDataTable(UDataTable* Table, FName InRowName, FName InColumnName);

	/** Get a Row from a DataTable given a RowName */
	UFUNCTION(BlueprintCallable, Category = "ES|DataTable")
		static TAssetPtr<UTexture> GetTextureFromDataTable(UDataTable* Table, FName InRowName, FName InColumnName);

	//--------------------mathlib ABdetect、Judgment and contrast--------------------
	//
	//
	/////////////////////////////////////////////////////////
	//     ::BRANCHES::                                      //
	/////////////////////////////////////////////////////////
	//
	//
	/** Branch:: Checks if object 'A' is equal to object 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Object A equals B?", Keywords = "bxbl object equal", ExpandEnumAsExecs = "Branches"))
		static void Branch_OEquals(UObject* Check, UObject* Against, EN_Equals Branches);
	//
	/** Branch:: Checks if object 'A' is not equal to object 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Object A not equal to B?", Keywords = "bxbl object not equal", ExpandEnumAsExecs = "Branches"))
		static void Branch_ONotEqual(UObject* Check, UObject* Against, EN_NotEqual Branches);
	//
	//
	/** Branch:: Checks if string 'A' is equal to string 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "==", DisplayName = "A equals B?", Keywords = "bxbl string equal", ExpandEnumAsExecs = "Branches"))
		static void Branch_STEquals(FString Check, FString Against, EN_Equals Branches);
	//
	/** Branch:: Checks if text 'A' is equal to text 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "==", DisplayName = "A equals B?", Keywords = "bxbl text equal", ExpandEnumAsExecs = "Branches"))
		static void Branch_TXEquals(FText Check, FText Against, EN_Equals Branches);
	//
	//
	/** Branch:: Checks if int 'A' is equal to int 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "==", DisplayName = "A equals B?", Keywords = "bxbl int equal", ExpandEnumAsExecs = "Branches"))
		static void Branch_INTEquals(int32 Check, int32 Against, EN_Equals Branches);
	//
	/** Branch:: Checks if int 'A' is not equal to int 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "!=", DisplayName = "A not equal to B?", Keywords = "bxbl int not equal", ExpandEnumAsExecs = "Branches"))
		static void Branch_INTNotEqual(int32 Check, int32 Against, EN_NotEqual Branches);
	//
	/** Branch:: Checks if int 'A' is less than int 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "<", DisplayName = "A less than B?", Keywords = "bxbl int less", ExpandEnumAsExecs = "Branches"))
		static void Branch_INTLessThan(int32 Check, int32 Against, EN_IfThenElse Branches);
	//
	/** Branch:: Checks if int 'A' is greater than int 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = ">", DisplayName = "A greater than B?", Keywords = "bxbl int greater", ExpandEnumAsExecs = "Branches"))
		static void Branch_INTGreaterThan(int32 Check, int32 Against, EN_IfThenElse Branches);
	//
	/** Branch:: Checks if int 'A' is less or equal to int 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "<=", DisplayName = "A less or equal to B?", Keywords = "bxbl int less equal", ExpandEnumAsExecs = "Branches"))
		static void Branch_INTLessOREqual(int32 Check, int32 Against, EN_IfThenElse Branches);
	//
	/** Branch:: Checks if int 'A' is greater or equal to int 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = ">=", DisplayName = "A greater pr equal to B?", Keywords = "bxbl int greater equal", ExpandEnumAsExecs = "Branches"))
		static void Branch_INTGreaterOREqual(int32 Check, int32 Against, EN_IfThenElse Branches);
	//
	//
	/** Branch:: Checks if float 'A' is equal to float 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "==", DisplayName = "A equals B?", Keywords = "bxbl float equal", ExpandEnumAsExecs = "Branches"))
		static void Branch_FEquals(float Check, float Against, EN_Equals Branches);
	//
	/** Branch:: Checks if float 'A' is not equal to float 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "!=", DisplayName = "A not equal to B?", Keywords = "bxbl float not equal", ExpandEnumAsExecs = "Branches"))
		static void Branch_FNotEqual(float Check, float Against, EN_NotEqual Branches);
	//
	/** Branch:: Checks if float 'A' is less than float 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "<", DisplayName = "A less than B?", Keywords = "bxbl float less", ExpandEnumAsExecs = "Branches"))
		static void Branch_FLessThan(float Check, float Against, EN_IfThenElse Branches);
	//
	/** Branch:: Checks if float 'A' is greater than float 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = ">", DisplayName = "A greater than B?", Keywords = "bxbl float greater", ExpandEnumAsExecs = "Branches"))
		static void Branch_FGreaterThan(float Check, float Against, EN_IfThenElse Branches);
	//
	/** Branch:: Checks if float 'A' is less or equal to float 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "<=", DisplayName = "A less or equal to B?", Keywords = "bxbl float less equal", ExpandEnumAsExecs = "Branches"))
		static void Branch_FLessOREqual(float Check, float Against, EN_IfThenElse Branches);
	//
	/** Branch:: Checks if float 'A' is greater or equal to float 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = ">=", DisplayName = "A greater pr equal to B?", Keywords = "bxbl float greater equal", ExpandEnumAsExecs = "Branches"))
		static void Branch_FGreaterOREqual(float Check, float Against, EN_IfThenElse Branches);
	//
	//
	/** Branch:: Checks if Color 'A' matches Color 'B' by given Tolerance factor. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Does Colors Match?", Keywords = "bxbl color match equals", ExpandEnumAsExecs = "Branches"))
		static void Branch_Color(FLinearColor Check, FLinearColor Against, EN_Match Branches, float Tolerance = 0.01f);
	//
	//
	/** Branch:: Checks if actor 'A' is equal to actor 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Actor A equals B?", Keywords = "bxbl actor equal", ExpandEnumAsExecs = "Branches"))
		static void Branch_AEquals(AActor* Check, AActor* Against, EN_Equals Branches);
	//
	/** Branch:: Checks if actor 'A' is not equal to actor 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Actor A not equal to B?", Keywords = "bxbl actor not equal", ExpandEnumAsExecs = "Branches"))
		static void Branch_ANotEqual(AActor* Check, AActor* Against, EN_NotEqual Branches);
	//
	//
	/** Branch:: Checks if component 'A' is equal to component 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Component A equals B?", Keywords = "bxbl component equal", ExpandEnumAsExecs = "Branches"))
		static void Branch_SCEquals(USceneComponent* Check, USceneComponent* Against, EN_Equals Branches);
	//
	/** Branch:: Checks if component 'A' is not equal to component 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Component A not equal to B?", Keywords = "bxbl component not equal", ExpandEnumAsExecs = "Branches"))
		static void Branch_SCNotEqual(USceneComponent* Check, USceneComponent* Against, EN_NotEqual Branches);
	//
	//
	/** Branch:: Checks if primitive 'A' is equal to primitive 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Primitive A equals B?", Keywords = "bxbl primitive equal", ExpandEnumAsExecs = "Branches"))
		static void Branch_PCEquals(UPrimitiveComponent* Check, UPrimitiveComponent* Against, EN_Equals Branches);
	//
	/** Branch:: Checks if primitive 'A' is not equal to primitive 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Primitive A not equal to B?", Keywords = "bxbl primitive not equal", ExpandEnumAsExecs = "Branches"))
		static void Branch_PCNotEqual(UPrimitiveComponent* Check, UPrimitiveComponent* Against, EN_NotEqual Branches);
	//
	//
	/** Branch:: Checks if Enum 'A' matches Enum 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Does Enums Match?", Keywords = "bxbl enum match equals", ExpandEnumAsExecs = "Branches"))
		static void Branch_Trace(TEnumAsByte<ETraceTypeQuery>Check, TEnumAsByte<ETraceTypeQuery>Against, EN_Match Branches);
	//
	/** Branch:: Checks if Enum 'A' matches Enum 'B'. */
	UFUNCTION(BlueprintCallable, Category = "ES|Branches", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", DisplayName = "Does Enums Match?", Keywords = "bxbl enum match equals", ExpandEnumAsExecs = "Branches"))
		static void Branch_PhysMat(TEnumAsByte<EObjectTypeQuery>Check, TEnumAsByte<EObjectTypeQuery>Against, EN_Match Branches);
	//
	//
	/////////////////////////////////////////////////////////
	//     ::ARITHMETICS::                                  //
	/////////////////////////////////////////////////////////
	//
	//
	/** Math:: (Pos)increments Value. (Value+1) */
	UFUNCTION(BlueprintPure, Category = "ES|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "++", DisplayName = "(Pos)increment", Keywords = "bxbl int increment ++"))
		static int32 INTPosIncrement(int32 Value);
	//
	/** Math:: (Pre)increments Value. (Value+1) */
	UFUNCTION(BlueprintPure, Category = "ES|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "++", DisplayName = "(Pre)increment", Keywords = "bxbl int increment ++"))
		static int32 INTPreIncrement(int32 Value);
	//
	/** Math:: (Pos)decrements Value. (Value-1) */
	UFUNCTION(BlueprintPure, Category = "ES|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "--", DisplayName = "(Pos)decrement", Keywords = "bxbl int increment --"))
		static int32 INTPosDecrement(int32 Value);
	//
	/** Math:: (Pre)decrements Value. (Value+1) */
	UFUNCTION(BlueprintPure, Category = "ES|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "--", DisplayName = "(Pre)decrement", Keywords = "bxbl int increment --"))
		static int32 INTPreDecrement(int32 Value);
	//
	/** Math:: Increments Value. (Value+Value). */
	UFUNCTION(BlueprintPure, Category = "ES|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "+=", DisplayName = "Increment", Keywords = "bxbl int increment +="))
		static int32 INTIncrement(int32 Value);
	/** Math:: Decrements Value. (Value-Value). */
	UFUNCTION(BlueprintPure, Category = "ES|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "-=", DisplayName = "Decrement", Keywords = "bxbl int decrement -="))
		static int32 INTDecrement(int32 Value);
	//
	/** Math:: Multiply Value. (Value*Value). */
	UFUNCTION(BlueprintPure, Category = "ES|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "*=", DisplayName = "Multiply", Keywords = "bxbl int multiply *="))
		static int32 INTMultiply(int32 Value);
	//
	/** Math:: Divide Value. (Value/Value*i). */
	UFUNCTION(BlueprintPure, Category = "ES|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "/=", DisplayName = "Divide", Keywords = "bxbl int divide /="))
		static int32 INTDivide(int32 Value, int32 i);
	//
	/** Math:: Mod. (Value=Value%i). */
	UFUNCTION(BlueprintPure, Category = "ES|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "%=", DisplayName = "Modulo", Keywords = "bxbl int modulo %="))
		static int32 INTModulo(int32 Value, int32 i);
	//
	/** Math:: Percent (Value=Value*i/100). */
	UFUNCTION(BlueprintPure, Category = "ES|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "%%", DisplayName = "Percent", Keywords = "bxbl int percent %%"))
		static int32 INTPercent(int32 Value, int32 i);
	//
	//
	/** Math:: (Pos)increments Value. (Value+1) */
	UFUNCTION(BlueprintPure, Category = "ES|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "++", DisplayName = "(Pos)increment", Keywords = "bxbl float increment ++"))
		static float FPosIncrement(float Value);
	//
	/** Math:: (Pre)increments Value. (Value+1) */
	UFUNCTION(BlueprintPure, Category = "ES|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "++", DisplayName = "(Pre)increment", Keywords = "bxbl float increment ++"))
		static float FPreIncrement(float Value);
	//
	/** Math:: (Pos)decrements Value. (Value-1) */
	UFUNCTION(BlueprintPure, Category = "ES|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "--", DisplayName = "(Pos)decrement", Keywords = "bxbl float increment --"))
		static float FPosDecrement(float Value);
	//
	/** Math:: (Pre)decrements Value. (Value+1) */
	UFUNCTION(BlueprintPure, Category = "ES|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "--", DisplayName = "(Pre)decrement", Keywords = "bxbl float increment --"))
		static float FPreDecrement(float Value);
	//
	/** Math:: Increments Value. (Value+Value). */
	UFUNCTION(BlueprintPure, Category = "ES|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "+=", DisplayName = "Increment", Keywords = "bxbl float increment +="))
		static float FIncrement(float Value);
	/** Math:: Decrements Value. (Value-Value). */
	UFUNCTION(BlueprintPure, Category = "ES|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "-=", DisplayName = "Decrement", Keywords = "bxbl float decrement -="))
		static float FDecrement(float Value);
	//
	/** Math:: Multiply Value. (Value*Value). */
	UFUNCTION(BlueprintPure, Category = "ES|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "*=", DisplayName = "Multiply", Keywords = "bxbl float multiply *="))
		static float FMultiply(float Value);
	//
	/** Math:: Divide Value. (Value/Value*i). */
	UFUNCTION(BlueprintPure, Category = "ES|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "/=", DisplayName = "Divide", Keywords = "bxbl int divide /="))
		static float FDivide(float Value, float f);
	//
	/** Math:: Percent (Value=Value*i/100). */
	UFUNCTION(BlueprintPure, Category = "ES|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "%%", DisplayName = "Percent", Keywords = "bxbl int percent %%"))
		static float FPercent(float Value, float f);

	//--------------------rotation lib--------------------
	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot", meta = (DisplayName = "Lerp (Quat)"))
		static FQuat Lerp(const FQuat& A, const FQuat& B, const float& Alpha);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot", meta = (DisplayName = "Fast Lerp (Quat)"))
		static FQuat FastLerp(const FQuat& A, const FQuat& B, const float& Alpha);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot", meta = (DisplayName = "BiLerp (Quat)"))
		static FQuat BiLerp(
			const FQuat& P00,
			const FQuat& P10,
			const FQuat& P01,
			const FQuat& P11,
			const float& FracX,
			const float& FracY
			);
	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot", meta = (DisplayName = "Fast BiLerp (Quat)"))
		static FQuat FastBiLerp(
			const FQuat& P00,
			const FQuat& P10,
			const FQuat& P01,
			const FQuat& P11,
			const float& FracX,
			const float& FracY
			);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot", meta = (DisplayName = "Slerp (Quat)"))
		static FQuat Slerp(const FQuat& A, const FQuat& B, const float& Slerp);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot", meta = (DisplayName = "Slerp (Not Normalized) (Quat)"))
		static FQuat Slerp_NotNormalized(const FQuat& A, const FQuat& B, const float& Slerp);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot", meta = (DisplayName = "Dot (Quat)", CompactNodeTitle = "dot"))
		static float Dot(const FQuat& A, const FQuat& B);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot")
		static FQuat VectorToOrientationQuat(const FVector Vector);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot", meta = (BlueprintAutocast))
		static FRotator VectorToOrientationRotator(const FVector Vector);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot")
		static FQuat RotatorToQuat(const FRotator Rotator);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot", meta = (BlueprintAutocast))
		static FRotator QuatToRotator(const FQuat& Quat);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot")
		static float AngleBetweenDirectionVectorsRad(FVector A, FVector B);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot")
		static float AngleBetweenDirectionVectorsDeg(FVector A, FVector B);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot")
		static float AngleBetweenQuatsRad(FQuat A, FQuat B);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot")
		static float AngleBetweenQuatsDeg(FQuat A, FQuat B);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot")
		static FQuat EulerDegToQuat(const FVector Euler);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot")
		static FVector QuatToEulerDeg(const FQuat& Quat);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot", meta = (DisplayName = "Quat + Quat", CompactNodeTitle = "+"))
		static FQuat QuatPlusQuat(const FQuat& A, const FQuat& B);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot", meta = (DisplayName = "Quat - Quat", CompactNodeTitle = "-"))
		static FQuat QuatMinusQuat(const FQuat& A, const FQuat& B);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot", meta = (DisplayName = "Quat * Quat", CompactNodeTitle = "*"))
		static FQuat QuatMultiplyQuat(const FQuat& A, const FQuat& B);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot", meta = (DisplayName = "Quat * Float (Scale)", CompactNodeTitle = "* (Scale)"))
		static FQuat QuatMultiplyFloatScale(const FQuat& A, const float B);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot", meta = (DisplayName = "Quat / Float (Scale)", CompactNodeTitle = "/ (Scale)"))
		static FQuat QuatDivFloatScale(const FQuat& A, const float B);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot", meta = (DisplayName = "Quat == Quat", CompactNodeTitle = "=="))
		static bool AreQuatsEqual(const FQuat& A, const FQuat& B);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot", meta = (BlueprintAutocast))
		static FString QuatToString(const FQuat& Quat);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Rot")
		static void AddActorLocalRotation(AActor* Actor, const FQuat& Quat, bool bSweep, FHitResult& OutSweepHitResult, bool bTeleport);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Rot")
		static void AddActorWorldRotation(AActor* Actor, const FQuat& Quat, bool bSweep, FHitResult& OutSweepHitResult, bool bTeleport);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Rot")
		static void AddComponentLocalRotation(USceneComponent* Component, const FQuat& Quat, bool bSweep, FHitResult& OutSweepHitResult, bool bTeleport);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Rot")
		static void AddComponentRelativeRotation(USceneComponent* Component, const FQuat& Quat, bool bSweep, FHitResult& OutSweepHitResult, bool bTeleport);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Rot")
		static void AddComponentWorldRotation(USceneComponent* Component, const FQuat& Quat, bool bSweep, FHitResult& OutSweepHitResult, bool bTeleport);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Rot")
		static void SetActorRelativeRotation(AActor* Actor, const FQuat& Quat, bool bSweep, FHitResult& OutSweepHitResult, bool bTeleport);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Rot")
		static void SetActorRotation(AActor* Actor, const FQuat& Quat, bool bTeleport);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Rot")
		static void SetComponentRelativeRotation(USceneComponent* Component, const FQuat& Quat, bool bSweep, FHitResult& OutSweepHitResult, bool bTeleport);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Rot")
		static void SetComponentWorldRotation(USceneComponent* Component, const FQuat& Quat, bool bSweep, FHitResult& OutSweepHitResult, bool bTeleport);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot")
		static FQuat GetTransformQuat(const FTransform Transform);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot")
		static void BreakTransformQuat(const FTransform Transform, FVector& Location, FQuat& RotationQuat, FVector& Scale);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot")
		static void QuatAxisAngleRad(const FQuat& Quat, float& OutAngleRad, FVector& OutAxis);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot")
		static void QuatAxisAngleDeg(const FQuat& Quat, float& OutAngleDeg, FVector& OutAxis);

	/**
	 * @brief Generates the 'smallest' (geodesic) rotation between two normals (assumed to be unit length).
	 *
	 * Copied from C++ docs
	 */
	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot")
		static FQuat FindBetweenNormals(const FVector& Normal1, const FVector& Normal2);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot")
		static FVector GetForwardVector(const FQuat& Quat);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot")
		static FVector GetRightVector(const FQuat& Quat);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot")
		static FVector GetUpVector(const FQuat& Quat);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot")
		static FQuat Inverse(const FQuat& Quat);

	/**
	 * @brief Convert a rotation into a unit vector facing in its direction.
	 *
	 * Copied from C++ docs
	 */
	UFUNCTION(BlueprintPure, Category = "ES|Math|Rot")
		static FVector QuatToVector(const FQuat& Quat);

	//--------------------noise lib--------------------
	UFUNCTION(BluePrintCallable, Category = "ES|Math|Noise")
		static void OctavePerlinNoise1D(float& Out, float X = 0.0f,
			int Octaves = 1, float Persistence = 1.0f);

	UFUNCTION(BluePrintCallable, Category = "ES|Math|Noise")
		static void OctavePerlinNoise2D(float& Out, float X = 0.0f, float Y = 0.0f,
			int Octaves = 1, float Persistence = 1.0f);

	UFUNCTION(BluePrintCallable, Category = "ES|Math|Noise")
		static void OctavePerlinNoise3D(float& Out, float X = 0.0f, float Y = 0.0f, float Z = 0.0f,
			int Octaves = 1, float Persistence = 1.0f);

	UFUNCTION(BluePrintCallable, Category = "ES|Math|Noise")
		static void PerlinNoise1D(float& Out, float X = 0.0f,
			float Frequency = 1.0f, float Amplitude = 1.0f);

	UFUNCTION(BluePrintCallable, Category = "ES|Math|Noise")
		static void PerlinNoise2D(float& Out, float X = 0.0f, float Y = 0.0f,
			float Frequency = 1.0f, float Amplitude = 1.0f);

	UFUNCTION(BluePrintCallable, Category = "ES|Math|Noise")
		static void PerlinNoise3D(float& Out, float X = 0.0f, float Y = 0.0f, float Z = 0.0f,
			float Frequency = 1, float Amplitude = 1.0f);

	UFUNCTION(BluePrintCallable, Category = "ES|Math|Noise")
		static void AccumulatedPerlinNoise1D(float& Out,
			const TArray<float>& Frequencies,
			const TArray<float>& Amplitudes,
			float X = 0.0f);

	UFUNCTION(BluePrintCallable, Category = "ES|Math|Noise")
		static void AccumulatedPerlinNoise2D(float& Out,
			const TArray<float>& Frequencies,
			const TArray<float>& Amplitudes,
			float X = 0.0f, float Y = 0.0f);

	UFUNCTION(BluePrintCallable, Category = "ES|Math|Noise")
		static void AccumulatedPerlinNoise3D(float& Out,
			const TArray<float>& Frequencies,
			const TArray<float>& Amplitudes,
			float X = 0.0f, float Y = 0.0f, float Z = 0.0f);

	//--------------------procedural lib--------------------
#pragma region Integer Math

/**
* Handles looping InValue between zero and LoopAt only really works with positive values.
* EX: InValue = (1 + -2)[so really it inputted -1], LoopAt = 5, return = 4.
* EX: InValue = (4 + 2)[so really it inputted 6], LoopAt = 5, return = 1.
* @param LoopAt If InValue is equal to this value then it will loop back to zero so if your using a last index in an array its recommended to add 1 to have it loop after it hits the last index.
*/
	UFUNCTION(BlueprintPure, Category = "ES|Math|Integer",
		meta = (DisplayName = "Loop To Range (int)"))
		static int LoopToRange_Int(int InValue, int LoopAt);

	/** Generate a random number between X(Min) and Y(Max) */
	UFUNCTION(BlueprintPure, Category = "ES|Math|Integer",
		meta = (DisplayName = "Random Integer In Range (int point)"))
		static int RandomIntegerInRange_IntPoint(FIntPoint InIntPoint);

	/**
	* Handles sorting an array of integers, the direction is based on IsReversed
	* @param IsReversed If true will sort from lowest to highest where Lowest is index 0 and Highest is last index. False is the inverse of what true outputs.
	* @return Returns a copy of InArray but sorted so its nondestructive.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Math|Integer",
		meta = (DisplayName = "Sort (int)"))
		static TArray<int> Sort_Int(TArray<int> InArray, bool IsReversed);

	/**
	* Returns a negated copy of InValue, if already negative then turns it into a positive value.
	* To ensure the return value is always negative then make sure the InValue is positive using the Absolute function.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Math|Integer",
		meta = (DisplayName = "Negative (integer)", CompactNodeTitle = "-i"))
		static int Negate_Int(int InValue);

#pragma endregion

#pragma region Float Math

	/** Performs the operation 1 - InValue, meant to be a shorthand function. */
	UFUNCTION(BlueprintPure, Category = "ES|Math|Float",
		meta = (CompactNodeTitle = "1-", Keywords = "-1"))
		static float OneMinus(float InValue);

	/**
	* Handles looping InValue between zero and LoopAt only really works with positive values.
	* EX: InValue = (1 + -2)[so really it inputted -1], LoopAt = 5, return = 4.
	* EX: InValue = (4 + 2)[so really it inputted 6], LoopAt = 5, return = 1.
	* @param LoopAt If InValue is equal to this value then it will loop back to zero so if your using a last index in an array its recommended to add 1 to have it loop after it hits the last index.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Math|Float",
		meta = (DisplayName = "Loop To Range (float)"))
		static float LoopToRange_Float(float InValue, float LoopAt);

	/** Generate a random number between X(Min) and Y(Max) */
	UFUNCTION(BlueprintPure, Category = "ES|Math|Float",
		meta = (DisplayName = "Random Float In Range (vector2d)"))
		static float RandomFloatInRange_Vector2D(FVector2D InVector2D);

	/**
	* Handles sorting an array of floats, the direction is based on IsReversed
	* @param IsReversed If true will sort from lowest to highest where Lowest is index 0 and Highest is last index. False is the inverse of what true outputs.
	* @return Returns a copy of InArray but sorted so its nondestructive.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Math|Float",
		meta = (DisplayName = "Sort (float)"))
		static TArray<float> Sort_Float(TArray<float> InArray, bool IsReversed);

	/**
	* Returns a negated copy of InValue, if already negative then turns it into a positive value.
	* To ensure the return value is always negative then make sure the InValue is positive using the Absolute function.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Math|Float",
		meta = (DisplayName = "Negative (float)", CompactNodeTitle = "-f"))
		static float Negate_Float(float InValue);

#pragma endregion

#pragma region Vector2D Stuff

	/** Handles rounding each component of the 2D vector and returning that rounded 2D vector. */
	UFUNCTION(BlueprintPure, Category = "ES|Math|Vector2D")
		static FVector2D Round2DVector(FVector2D Value);

	/** Returns true if Value is in range of Min and Max. Compares each component of vector(so if X is in range of Min.X and Max.X and same for Y). */
	UFUNCTION(BlueprintPure, Category = "ES|Math|Vector2D")
		static bool InRange(FVector2D Value, FVector2D Min, FVector2D Max);

	/** Returns the center point between 2 vector2D points */
	UFUNCTION(BlueprintPure, Category = "ES|Math|Vector2D")
		static FVector2D GetCenterBetweenPoints2D(FVector2D V1, FVector2D V2);

	/** Returns the lowest components of A and B. */
	UFUNCTION(BlueprintPure, Category = "ES|Math|Vector2D",
		meta = (DisplayName = "Min (vector2d)", CompactNodeTitle = "MIN"))
		static FVector2D Vector2D_Min(FVector2D A, FVector2D B);

	/** Returns the highest components of A and B. */
	UFUNCTION(BlueprintPure, Category = "ES|Math|Vector2D",
		meta = (DisplayName = "Max (vector2d)", CompactNodeTitle = "MAX"))
		static FVector2D Vector2D_Max(FVector2D A, FVector2D B);

	/** Clamps each component of Value between Min and Max(so clamps X to Min.X and Max.X, same for Y). */
	UFUNCTION(BlueprintPure, Category = "ES|Math|Vector2D")
		static FVector2D ClampVector2D(FVector2D Value, FVector2D Min, FVector2D Max);

#pragma endregion

#pragma region Vector Stuff

	/** Handles rounding each component of the vector and returning that rounded vector. */
	UFUNCTION(BlueprintPure, Category = "ES|Math|Vector")
		static FVector RoundVector(FVector Value);

	/** Returns the center point between 2 vector points */
	UFUNCTION(BlueprintPure, Category = "ES|Math|Vector")
		static FVector GetCenterBetweenPoints(FVector V1, FVector V2);

	/** Clamps all components of Vector to Min and Max(so clamps X to Min.X and Max.X and same for Y & Z). */
	UFUNCTION(BlueprintPure, Category = "ES|Math|Vector")
		static FVector ClampToBounds(FVector Point, FVector Min, FVector Max);

#pragma endregion

#pragma region Rotator Stuff

	/** A-B */
	UFUNCTION(BlueprintPure, Category = "ES|Math|Rotator",
		meta = (DisplayName = "Difference (Rotator)", ScriptMethod = "Diff", Keywords = "Delta",
			CompactNodeTitle = "A - B"))
		static FRotator RotatorDifference(FRotator A, FRotator B);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Rotator")
		static FRotator GridSnapRotation(FRotator Rotator, float GridDeg);

#pragma endregion

	//--------------------PlatformType、ArraySqrt、ServerIP、Audio、physics、UMG lib--------------------
#pragma region Platform Checks

/** Shorthand function for checking what platform type this application is currently running on. */
	UFUNCTION(BlueprintCallable, Category = "ES|Platform",
		meta = (Keywords = "type platform", ExpandEnumAsExecs = "Result"))
		static void SwitchOnPlatformType(EPlatformType& Result);

	/**
	* Returns the current platform type.
	* Defaults to Desktop if on a platform that isn't accounted for.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Platform",
		meta = (Keywords = "type platform"))
		static EPlatformType GetPlatformType();

	/**
	* Returns true if this is a debug build (UE_BUILD_DEBUG), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Platform|Build",
		meta = (DisplayName = "Is Debug Build",
			Keywords = "compile export mode version type build platform"))
		static bool DebugBuild();

	/**
	* Returns true if this is a debug build (UE_BUILD_DEVELOPMENT), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Platform|Build",
		meta = (DisplayName = "Is Development Build",
			Keywords = "compile export mode version type build platform"))
		static bool DevelopmentBuild();

	/**
	* Returns true if this is a debug build (UE_BUILD_TEST), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Platform|Build",
		meta = (DisplayName = "Is Test Build",
			Keywords = "compile export mode version type build platform"))
		static bool TestBuild();

	/**
	* Returns true if this is a debug build (UE_BUILD_SHIPPING), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Platform|Build",
		meta = (DisplayName = "Is Shipping Build",
			Keywords = "compile export mode version type build platform"))
		static bool ShippingBuild();

	/**
	* Returns true if this is inside the editor (WITH_EDITOR), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Platform|Build",
		meta = (DisplayName = "With Editor",
			Keywords = "compile export mode version type build platform in inside using"))
		static bool WithEditor();

	/**
	* Returns true if this is the Windows platform (PLATFORM_WINDOWS), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Platform",
		meta = (DisplayName = "Is Windows Platform",
			Keywords = "compile export mode version type build platform"))
		static bool WindowsPlatform();

	/**
	* Returns true if this is the Windows platform running on 32 bit (PLATFORM_WINDOWS and not _WIN64), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Platform",
		meta = (DisplayName = "Is Windows Platform (32 bit)",
			Keywords = "compile export mode version type build platform"))
		static bool Windows32Platform();

	/**
	* Returns true if this is the Windows platform running on 64 bit (PLATFORM_WINDOWS and _WIN64), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Platform",
		meta = (DisplayName = "Is Windows Platform (64 bit)",
			Keywords = "compile export mode version type build platform"))
		static bool Windows64Platform();

	/**
	* Returns true if this is the Windows RT platform (PLATFORM_WINRT), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Platform",
		meta = (DisplayName = "Is Windows Rt Platform",
			Keywords = "compile export mode version type build platform"))
		static bool WindowsRtPlatform();

	/**
	* Returns true if this is the Windows RT ARM platform (PLATFORM_WINRT_ARM), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Platform",
		meta = (DisplayName = "Is Windows Rt Arm Platform",
			Keywords = "compile export mode version type build platform"))
		static bool WindowsRtArmPlatform();

	/**
	* Returns true if this is the Linux platform (PLATFORM_LINUX), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Platform",
		meta = (DisplayName = "Is Linux Platform",
			Keywords = "compile export mode version type build platform"))
		static bool LinuxPlatform();

	/**
	* Returns true if this is the Mac platform (PLATFORM_MAC), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Platform",
		meta = (DisplayName = "Is Mac Platform",
			Keywords = "compile export mode version type build platform"))
		static bool MacPlatform();

	/**
	* Returns true if this is the PS4 platform (PLATFORM_PS4), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Platform",
		meta = (DisplayName = "Is Ps4 Platform",
			Keywords = "compile export mode version type build platform"))
		static bool Ps4Platform();

	/**
	* Returns true if this is the Xbox One platform (PLATFORM_XBOXONE), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Platform",
		meta = (DisplayName = "Is Xbox One Platform",
			Keywords = "compile export mode version type build platform"))
		static bool XboxOnePlatform();

	/**
	* Returns true if this is the Switch platform (PLATFORM_SWITCH), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Platform",
		meta = (DisplayName = "Is Switch Platform",
			Keywords = "compile export mode version type build platform"))
		static bool SwitchPlatform();

	/**
	* Returns true if this is the Android platform (PLATFORM_ANDROID), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Platform",
		meta = (DisplayName = "Is Android Platform",
			Keywords = "compile export mode version type build platform"))
		static bool AndroidPlatform();

	/**
	* Returns true if this is the IOS platform (PLATFORM_IOS), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Platform",
		meta = (DisplayName = "Is Ios Platform",
			Keywords = "compile export mode version type build platform"))
		static bool IosPlatform();

	/**
	* Returns true if this is a desktop (PLATFORM_DESKTOP), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Platform",
		meta = (DisplayName = "Is Desktop",
			Keywords = "compile export mode version type build platform"))
		static bool DesktopPlatform();

#pragma endregion
	/**
		* Forces the game to crash, this is intended for debugging purposes and should not be used in packaged builds.
		* This will print a log message before the crash as a heads up.
		*/
	UFUNCTION(BlueprintCallable, Category = "ES|Test", meta = (DevelopmentOnly))
		static void ForceCrash(const FString& CrashMessage = "Generic Testing Purposes");

	/** Requests this application to close itself. */
	UFUNCTION(BlueprintCallable, Category = "ES",
		meta = (DisplayName = "Shutdown", Keywords = "Shutdown"))
		static void RequestExit(bool bForce);

	/** Handles updating the global audio device's volume ingame. DO NOT USE FOR SETTINGS */
	UFUNCTION(BlueprintCallable, Category = "ES", meta = (WorldContext = "WorldContextObject"))
		static void SetGlobalVolume(UObject* WorldContextObject, float InAmount);

	/** Returns true if both objects are the same class, false if otherwise(or if either or null) */
	UFUNCTION(BlueprintPure, Category = "ES")
		static bool AreObjectsSameClass(UObject* A, UObject* B);

	UFUNCTION(BlueprintPure, Category = "ES")
		static bool IsClassSameAs(UObject* A, UClass* ClassToCompare);

	UFUNCTION(BlueprintCallable, Category = "ES",
		meta = (WorldContext = "WorldContextObject", CallableWithoutWorldContext,
			DisplayName = "Get All Levels", Keywords = "Get All Levels"))
		static void GetAllLevels(UObject* WorldContextObject, TArray<ULevel*>& Levels);

	UFUNCTION(BlueprintPure, Category = "ES")
		static UClass* GetClassFromAssetPath(FString Path);

	/** Converts a linear color to a slate color */
	UFUNCTION(BlueprintPure, Category = "ES|Conversions",
		meta = (DisplayName = "ToSlateColor (Linear Color)",
			CompactNodeTitle = "->", BlueprintAutocast))
		static FSlateColor Conv_LinearColorToSlateColor(FLinearColor InLinearColor) { return FSlateColor(InLinearColor); }

	/** Converts an array of collision channel's to object type query's */
	UFUNCTION(BlueprintPure, Category = "ES|Conversions",
		meta = (DisplayName = "ToObjectTypeQuery's (Collision Channel's)",
			CompactNodeTitle = "->"))
		static void Conv_CollisionChannelsToObjectTypeQuerys(
			TArray<TEnumAsByte<ECollisionChannel>> Channels, TArray<TEnumAsByte<EObjectTypeQuery>>& ConvertedTypes);

	/** Converts an collision channel to object type query */
	UFUNCTION(BlueprintPure, Category = "ES|Conversions",
		meta = (DisplayName = "ToObjectTypeQuery (Collision Channel)",
			CompactNodeTitle = "->", BlueprintAutocast))
		static TEnumAsByte<EObjectTypeQuery> Conv_CollisionChannelToObjectTypeQuery(TEnumAsByte<ECollisionChannel> Channel);

#pragma region Directory Stuff

	/** Handles getting the local app data directory, in editor will return the entire project directory(IF USING DELETE DIRECTORY WITH THIS ONE, MAKE SURE ITS NOT IN EDITOR) */
	UFUNCTION(BlueprintPure, Category = "ES|Files")
		static FString GetLocalAppDataDirectory();

	/**
	* Gets the sub directories within the inputted directory,
	* *NOTE* this can cause hitches!
	* @param bDeepSearch Recursively loop through each directory searching for them, will increase hitch time.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Files")
		static TArray<FString> GetSubDirectories(FString InDir, bool bDeepSearch);

	/** Deletes the inputted directory if found. */
	UFUNCTION(BlueprintCallable, Category = "ES|Files")
		static bool DeleteDirectory(FString InDir);

	/** Deletes the inputted file at the directory if found. */
	UFUNCTION(BlueprintCallable, Category = "ES|Files")
		static bool DeleteFile(FString InFileDir);

	UFUNCTION(BlueprintCallable, Category = "ES|Files", meta =
	(UnsafeDuringActorConstruction = "true",
		DeterminesOutputType = "InType", DynamicOutputParam = "OutputObjects"))
		static bool GetObjectsOf(TSubclassOf<UObject> InType,
			TArray<UObject*>& OutputObjects, bool bIsBlueprintClass,
			const FString& InFolder = "/Game/");

#pragma endregion
#pragma region String Stuff

	/** Handles sorting an array of strings to be alphabetical */
	UFUNCTION(BlueprintPure, Category = "ES|String|Strings")
		static TArray<FString> SortStrings(const TArray<FString> UnSortedStrings);

	/**
	* Increases the verbosity of the inputted message for printing a string in blueprint to be either a warning or error by adding a blueprint friendly prefix.
	* Example: printing out "This is a test" as a warning will print in the log "warning:This is a test" and the prefix for an error would be "error:"
	* @param bIsError If true will return a version of the message that will be an error, false will return a version of the message that will be a warning.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|String")
		static FString IncreaseVerbosityOfMessage(FString InMessage, bool bIsError = false);

	/**
	 * Prints a string to the log with a custom category type incase you want to search for that, and optionally, to the screen
	 * If Print To Log is true, it will be visible in the Output Log window.  Otherwise it will be logged only as 'Verbose', so it generally won't show up.
	 * So a example log would be: [LogCustomBlueprintCategory: Custom Category:: Hello]
	 *
	 * @param	InString		The string to log out
	 * @param	InCategory		The custom category that gets appended ontu the LogCustomBlueprintCategory category. If empty will use "EmptyCustomCategory".
	 * @param	bPrintToScreen	Whether or not to print the output to the screen. Will not print to the screen in shipping or test builds.
	 * @param	bPrintToLog		Whether or not to print the output to the log
	 * @param	TextColor		Whether or not to print the output to the log
	 * @param	Duration		The display duration (if Print to Screen is True). Using negative number will result in loading the duration time from the config.
	 */
	UFUNCTION(BlueprintCallable, Category = "ES|String",
		meta = (WorldContext = "WorldContextObject", CallableWithoutWorldContext,
			Keywords = "log print", AdvancedDisplay = "3", DevelopmentOnly))
		static void PrintStringWithCategory(UObject* WorldContextObject,
			const FString& InString = FString(TEXT("Hello")),
			FString InCategory = FString(TEXT("Custom Category")),
			bool bPrintToScreen = true, bool bPrintToLog = true,
			FLinearColor TextColor = FLinearColor(0.0, 0.66, 1.0), float Duration = 2.f);


	/** Returns a non destructive copy of SourceString with all underscores replaced with a space. */
	UFUNCTION(BlueprintPure, Category = "ES|String")
		static FString ReplaceUnderscore(FString SourceString);

	/** Returns a non destructive copy of SourceString with all spaces removed. */
	UFUNCTION(BlueprintPure, Category = "ES|String")
		static FString RemoveSpaces(FString SourceString);

	/** Returns true if SourceString is empty. */
	UFUNCTION(BlueprintPure, Category = "ES|String",
		meta = (DisplayName = "Is Empty (String)", BlueprintAutocast))
		static bool IsEmpty_String(const FString& SourceString) { return SourceString.IsEmpty(); }

#pragma endregion
	/** Returns true if SourceName is empty. */
	UFUNCTION(BlueprintPure, Category = "ES|Name",
		meta = (DisplayName = "Is Empty (Name)", BlueprintAutocast))
		static bool IsEmpty_Name(const FName& SourceName) { return SourceName == NAME_None; }

#pragma region IP stuff

	/**
	* Should only occur on the server(regardless of dedicated or listen servers), gets the currently connected client IP's addresses
	* @return The currently connected IP's Addresses
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Networking",
		meta = (WorldContext = "WorldContextObject", DisplayName = "Get Connected Client IP's", Keywords = "ip"))
		static TArray<FString> GetConnectedClientIPs(const UObject* WorldContextObject);

	UFUNCTION(BlueprintPure, Category = "ES|Networking", meta = (Keywords = "ip"))
		static FString GetServerIpFromGamemode(AGameMode* InGamemode);

	/**
	* Should only occur on clients(listen server will not count), gets the server's IP address
	* @return The server's IP Address
	*/
	UFUNCTION(BlueprintPure, Category = "ES|Networking",
		meta = (WorldContext = "WorldContextObject", DisplayName = "Get Server IP", Keywords = "ip"))
		static FString GetServerIP(const UObject* WorldContextObject);

	UFUNCTION(BlueprintPure, Category = "ES|Networking",
		meta = (DisplayName = "Get Player's IP", Keywords = "ip"))
		static FString GetPlayerIP(const APlayerController* InPlayer);

#pragma endregion
#pragma region Player Stuff

	/** Returns the input priority of the inputted actor, returns zero if actor is invalid. */
	UFUNCTION(BlueprintPure, Category = "ES")
		static int GetInputPriority(AActor* InActor);

	/** Handles setting the input priority for the inputted actor. */
	UFUNCTION(BlueprintCallable, Category = "ES")
		static void SetInputPriority(AActor* InActor, int NewInputPriority);

	/**
	* Shorthand function for easily enabling/disabling input for a pawn if its possessed by a player controller.
	* @return Returns if successfully set or not.
	*/
	UFUNCTION(BlueprintCallable, Category = "ES")
		static bool TrySetPlayerInputEnabled(APawn* InPawn, const bool bIsEnabled);

	/** Attempts to get the player controller from the inputted pawn. */
	UFUNCTION(BlueprintCallable, Category = "ES", meta = (ExpandEnumAsExecs = "Result"))
		static APlayerController* TryGetPlayerControllerFromPawn(APawn* InPawn, EExtraSwitch& Result);

#pragma endregion

#pragma region Physics Stuff

	/** Adds force to a components rigid body instance(intended for when substepping) */
	UFUNCTION(BlueprintCallable, Category = "ES|Physics")
		static void AddForceToComponentBody(const UPrimitiveComponent* InComponent,
			const FVector& Force, const bool bAccelChange);

	/**
	* Adds force at a position to a components rigid body instance(intended for when substepping)
	* @param bLocalSpace If true applies the force in local space of the object, false will apply in world space.
	*/
	UFUNCTION(BlueprintCallable, Category = "ES|Physics")
		static void AddForceAtPositionToComponentBody(const UPrimitiveComponent* InComponent,
			const FVector& Force, const FVector& Position, const bool bLocalSpace);

	/** Adds impulse at position to a components rigid body instance(intended for when substepping) */
	UFUNCTION(BlueprintCallable, Category = "ES|Physics")
		static void AddImpulseAtPositionToComponentBody(const UPrimitiveComponent* InComponent,
			const FVector& Impulse, const FVector& Position);

	/** Adds impulse to a components rigid body instance(intended for when substepping) */
	UFUNCTION(BlueprintCallable, Category = "ES|Physics")
		static void AddImpulseToComponentBody(const UPrimitiveComponent* InComponent,
			const FVector& Impulse, const bool bVelChange);

	/** Adds torque(in radians) to a components rigid body instance(intended for when substepping) */
	UFUNCTION(BlueprintCallable, Category = "ES|Physics")
		static void AddTorqueInRadiansToComponentBody(const UPrimitiveComponent* InComponent,
			const FVector& Torque, const bool bAccelChange);

	/** Adds an angular impulse(in radians) to a components rigid body instance(intended for when substepping) */
	UFUNCTION(BlueprintCallable, Category = "ES|Physics")
		static void AddAngularImpulseInRadiansToComponentBody(const UPrimitiveComponent* InComponent,
			const FVector& Impulse, const bool bVelChange);

	/** Handles setting the velocity of a components rigid body instance(intended for when substepping) */
	UFUNCTION(BlueprintCallable, Category = "ES|Physics")
		static void SetLinearVelocityToComponentBody(const UPrimitiveComponent* InComponent,
			const FVector& NewVel, const bool bAddToCurrent);

	/** Handles setting the angular velocity of a components rigid body instance(intended for when substepping) */
	UFUNCTION(BlueprintCallable, Category = "ES|Physics")
		static void SetAngularVelocityInRadiansToComponentBody(const UPrimitiveComponent* InComponent,
			const FVector& NewAngVel, const bool bAddToCurrent);

#pragma endregion

	/** Returns the relative location of a socket. */
	UFUNCTION(BlueprintPure, Category = "ES|Transformation")
		static FVector GetSocketRelativeLocation(USceneComponent* Target, FName InSocketName);

	/** Returns the relative rotation of a socket. */
	UFUNCTION(BlueprintPure, Category = "ES|Transformation")
		static FRotator GetSocketRelativeRotation(USceneComponent* Target, FName InSocketName);

	/** Returns true if the inputted rotator is equal to zero. */
	UFUNCTION(BlueprintPure, Category = "ES|Transformation")
		static bool IsRotatorZero(FRotator InRot);

	/** Marks the inputted component's render state dirty in all aspects possible. */
	UFUNCTION(BlueprintCallable, Category = "ES")
		static bool MarkRenderDirty(USceneComponent* InComp);

	/** Checks if all objects inputted into the array are valid. False if empty, True if all objects are valid. */
	UFUNCTION(BlueprintPure, Category = "ES", meta = (Keywords = "valid isvalid"))
		static bool AreObjectsValid(TArray<UObject*> Objects);

	/** Returns true if any actors are overlapping this component, will return false if component is invalid. */
	UFUNCTION(BlueprintPure, Category = "ES")
		static bool IsOverlappingAnyActors(UPrimitiveComponent* InComp, bool bExcludeSelf = true);

	/** Returns the amount of actors in the world that are of type SearchClass */
	UFUNCTION(BlueprintCallable, Category = "ES",
		meta = (WorldContext = "WorldContextObject"))
		static int GetNumberOfActorsOfType(const UObject* WorldContextObject, TSubclassOf<AActor> SearchClass);

	/**
	* Attempts to return the first valid instance of an actor with SearchClass.)
	* @return Returns true if found first valid instance of actor. False if otherwise.
	*/
	UE_DEPRECATED(4.23, "This function is deprecated. Please use GetActorOfClass instead.")
		UFUNCTION(BlueprintCallable, Category = "ES",
			meta = (WorldContext = "WorldContextObject",
				DeterminesOutputType = "SearchClass", DynamicOutputParam = "FoundActor",
				Keywords = "first"))
		static bool FindFirstInstanceOfActorType(const UObject* WorldContextObject,
			TSubclassOf<AActor> SearchClass, AActor*& FoundActor);

	/** Marks multiple inputted component's render state dirty. */
	UFUNCTION(BlueprintCallable, Category = "ES", meta = (DisplayName = "Mark Render Dirty (Array)"))
		static void MarkRenderDity_Comps(TArray<USceneComponent*> InComps);

	/**
	* Returns axis values based on if inputs are pressed/released within InPlayerController.
	* Having to specify each directional input allows for agnostic values.
	* EX: UpDirectional = Up on DPad is pressed = 1 on Y, DownDirectional = Down on DPad is pressed = -1 on Y. And same for Left(-1 on X) and Right(1 on X).
	* @param UpDirectional Will be positive Y value when pressed.
	* @param DownDirectional Will be negative Y value when pressed.
	* @param RightDirectional Will be positive X value when pressed.
	* @param LeftDirectional Will be negative X value when pressed.
	*/
	UFUNCTION(BlueprintPure, Category = "ES")
		static FVector2D GetDirectionalInputsFromDirectionalKeys(const APlayerController* InPlayerController, const FKey UpDirectional, const FKey DownDirectional,
			const FKey RightDirectional, const FKey LeftDirectional);

	/**
	* Returns a axis value based on if inputs are pressed/released within InPlayerController.
	* Having to specify each input allows for agnostic values.
	*/
	UFUNCTION(BlueprintPure, Category = "ES")
		static float GetAxisValueOfInputs(const APlayerController* InPlayerController,
			const FKey PositiveKey, const FKey NegativeKey);

	/** Shorthand function for getting the last index of material array in Primitive Component. RETURNS -1 IF TARGET IS INVALID */
	UFUNCTION(BlueprintPure, Category = "ES", meta = (CompactNodeTitle = "LAST INDEX"))
		static int GetLastMaterialIndex(UPrimitiveComponent* Target);

	/** Returns the static(default) material instances for the inputted static mesh. */
	UFUNCTION(BlueprintPure, Category = "ES")
		static TArray<UMaterialInterface*> GetStaticMaterials(UStaticMesh* InMesh);

#pragma region Input Settings Stuff						

	UFUNCTION(BlueprintCallable, Category = "ES|Input")
		static void ClearInputMappings(UInputSettings* const InSettings, bool bForceRebuildKeymaps, bool bSaveKeyMappings);

	UFUNCTION(BlueprintPure, Category = "ES|Input", meta = (DisplayName = "Equal (Input Axis Key Mapping)", CompactNodeTitle = "==", Keywords = "== equal"))
		static bool Equals_InputAxisKeyMapping(FInputAxisKeyMapping A, FInputAxisKeyMapping B, bool bNameOnly);

	UFUNCTION(BlueprintPure, Category = "ES|Input", meta = (DisplayName = "Equal (Input Action Key Mapping)", CompactNodeTitle = "==", Keywords = "== equal"))
		static bool Equals_InputActionKeyMapping(FInputActionKeyMapping A, FInputActionKeyMapping B, bool bNameOnly);

#pragma endregion

#pragma region Widget Stuff

	/** Returns which widget is in focus. */
	UFUNCTION(BlueprintPure, Category = "ES|UI")
		static UWidget* GetWidgetInFocus();

	UFUNCTION(BlueprintPure, Category = "ES|UI")
		static TArray<UWidget*> GetAllSubWidgetsInParent(UUserWidget* ParentWidget);

	UFUNCTION(BlueprintCallable, Category = "ES|UI")
		static void ClearAllUserFocus();

	/**
	* Finds all widgets of type Widget Class in Parent Widget.
	* @param ParentWidget The widget to use as a parent, will look inside this widget's tree if it contains any widgets of WidgetClass.
	* @param WidgetClass The widget class to search for inside ParentWidget's widget tree. Can return an empty array if none found.
	*/
	UFUNCTION(BlueprintCallable, Category = "ES|UI",
		meta = (DeterminesOutputType = "WidgetClass", DynamicOutputParam = "FoundWidgets"))
		static void GetAllWidgetsOfTypeInUserWidget(UUserWidget* ParentWidget, TSubclassOf<UWidget> WidgetClass, TArray<UWidget*>& FoundWidgets);

	UFUNCTION(BlueprintCallable, Category = "ES|UI|Textblock")
		static void SetFontFamily(UTextBlock* Target, UObject* NewFamily);

	UFUNCTION(BlueprintCallable, Category = "ES|UI|Textblock")
		static void SetFontMaterial(UTextBlock* Target, UObject* NewMaterial);

	UFUNCTION(BlueprintCallable, Category = "ES|UI|Textblock")
		static void SetFontOutline(UTextBlock* Target, FFontOutlineSettings NewOutline);

	UFUNCTION(BlueprintCallable, Category = "ES|UI|Textblock")
		static void SetFontTypeface(UTextBlock* Target, FName NewTypeface);

	UFUNCTION(BlueprintCallable, Category = "ES|UI|Textblock")
		static void SetFontSize(UTextBlock* Target, int NewSize);

	/** Shorthand for getting the last child index in Target, returns -1 if no children in panel */
	UFUNCTION(BlueprintPure, Category = "ES|UI|Panel", meta = (CompactNodeTitle = "LAST INDEX"))
		static int GetLastChildIndex(UPanelWidget* Target);

	/** Returns true if Target is valid and InIndexToCheck is a valid index in Target's children */
	UFUNCTION(BlueprintPure, Category = "ES|UI|Panel")
		static bool IsValidChildIndexInPanel(UPanelWidget* Target, int InIndexToCheck);

	/**
	* Sets all images in the checkbox style state to InImage.
	* @param StateToSet The state to modify. EX: If StateToSet = Checked, then sets Checked Image, Checked Hovered Image, and Checked Pressed Image's to InImage.
	* @return Returns the modified style.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|UI")
		static FCheckBoxStyle SetCheckboxStyleToImage(FCheckBoxStyle InStyle, UObject* InImage, ECheckBoxState StateToSet = ECheckBoxState::Checked);

	/** Returns the current image being used in this checkbox. */
	UFUNCTION(BlueprintPure, Category = "ES|UI")
		static UObject* GetCurrentCheckboxImage(UCheckBox* InCheckbox);

#pragma endregion

	/** Searches for an scene component that's name is matching the inputted search name. Returns true if success, and false if otherwise. */
	UFUNCTION(BlueprintPure, Category = "ES")
		static bool FindSceneComponentByName(AActor* ActorToSearchIn,
			const FString& CompName, USceneComponent*& FoundComp);

	/** Searches for an actor component that's name is matching the inputted search name. Returns true if success, and false if otherwise. */
	UFUNCTION(BlueprintPure, Category = "ES")
		static bool FindActorComponentByName(AActor* ActorToSearchIn,
			const FString& CompName, UActorComponent*& FoundComp);

	/** Gets the closest component to the inputted point(in world space) from the inputted array of components */
	UFUNCTION(BlueprintPure, Category = "ES")
		static UPrimitiveComponent* GetClosestComponentToPoint(TArray<UPrimitiveComponent*> Comps,
			FVector Point, bool Inverse);

	/** Gets the closest actor to the inputted point(in world space) from the inputted array of actors */
	UFUNCTION(BlueprintPure, Category = "ES")
		static AActor* GetClosestActorToPoint(TArray<AActor*> Actors, FVector Point, bool Inverse);

	/**
	* Draws coordinate arrows at InComponent's world location for DebugDisplayTime's seconds if InComponent is valid.
	* @param ForwardColor Forward Vector of InComponent(X).
	* @param RightColor Right Vector of InComponent(Y).
	* @param UpColor Up Vector of InComponent(Z).
	*/
	UFUNCTION(BlueprintCallable, Category = "ES|Debug",
		meta = (DevelopmentOnly, ArrowLength = "200.0", ArrowSize = "100.0", ArrowThickness = "5.0", AdvancedDisplay = "ForwardColor,RightColor,UpColor"))
		static void DrawDebugCoordinateArrowsAtComponent(USceneComponent* InComponent, FVector Offset,
			float ArrowLength, float ArrowSize, float ArrowThickness, float DebugDisplayTime = 5.0f,
			FLinearColor ForwardColor = FLinearColor::Red, FLinearColor RightColor = FLinearColor::Green, FLinearColor UpColor = FLinearColor::Blue);

	/**
	* Attempts to snap the inputted actor (using the pivot point) to the ground(which is really just a down direction)
	* @param TraceDistance The distance to trace for
	* @param GroundChannel The ground collision channel to trace against and will snap to
	* @param ActorsToIgnore Automatically adds the Spline Component's actor(ignores self)
	* @param OptionalOffset -Optional- Offsets the actor's snap to point on the ground by this value
	* @param bDrawDebug When true will show the trace using debug lines for DrawDebugTime's duration using the colors from TraceColor(Start to ImpactPoint or end if no hit) and TraceHitColor(ImpactPoint to End)
	* @return Returns true if successfully snapped actor to ground, false if actor is invalid or hit nothing to snap to.
	*/
	UFUNCTION(BlueprintCallable, Category = "ES",
		meta = (TraceDistance = "1000.0", AutoCreateRefTerm = "ActorsToIgnore", AdvancedDisplay = "TraceColor,TraceHitColor,DrawDebugTime"))
		static bool SnapActorToGround(AActor* InActor, float TraceDistance, bool bTraceComplex,
			ETraceTypeQuery GroundChannel, const TArray<AActor*>& ActorsToIgnore, FVector OptionalOffset, bool bDrawDebug = false,
			FLinearColor TraceColor = FLinearColor::Red, FLinearColor TraceHitColor = FLinearColor::Green, float DrawDebugTime = 5.0f);

#pragma region Spline Component Stuff

	/** Returns true if InPoint is a valid spline point. False if otherwise. */
	UFUNCTION(BlueprintPure, Category = "ES|Spline")
		static bool IsValidSplinePoint(USplineComponent* SplineComp, int32 InPoint);

	UFUNCTION(BlueprintPure, Category = "ES|Spline")
		static int32 GetLastSplinePoint(USplineComponent* SplineComp);

	/**
	* Attempts to snap all spline points in the inputted spline component to the ground(which is really just a down direction).
	* @param TraceDistance The distance to trace for
	* @param TraceChannel The collision channels to trace against and will snap to
	* @param ActorsToIgnore Automatically adds the Spline Component's actor(ignores self)
	* @param bDrawDebug When true will show the trace using debug lines for DrawDebugTime's duration using the colors from TraceColor(Start to ImpactPoint or end if no hit) and TraceHitColor(ImpactPoint to End)
	*/
	UFUNCTION(BlueprintCallable, Category = "ES|Spline",
		meta = (TraceDistance = "1000.0", AutoCreateRefTerm = "ActorsToIgnore", AdvancedDisplay = "TraceColor,TraceHitColor,DrawDebugTime"))
		static void SnapAllSplinePointsToGround(USplineComponent* SplineComp, float TraceDistance, bool bTraceComplex,
			ETraceTypeQuery TraceChannel, const TArray<AActor*>& ActorsToIgnore, bool bDrawDebug = false,
			FLinearColor TraceColor = FLinearColor::Red, FLinearColor TraceHitColor = FLinearColor::Green, float DrawDebugTime = 5.0f);

	/**
	* Attempts to snap a single spline point in the inputted spline component to the ground(which is really just a down direction).
	* @param TraceDistance The distance to trace for
	* @param TraceChannel The collision channels to trace against and will snap to
	* @param ActorsToIgnore Automatically adds the Spline Component's actor(ignores self)
	* @param bDrawDebug When true will show the trace using debug lines for DrawDebugTime's duration using the colors from TraceColor(Start to ImpactPoint or end if no hit) and TraceHitColor(ImpactPoint to End)
	*/
	UFUNCTION(BlueprintCallable, Category = "ES|Spline",
		meta = (TraceDistance = "1000.0", AutoCreateRefTerm = "ActorsToIgnore", AdvancedDisplay = "TraceColor,TraceHitColor,DrawDebugTime"))
		static void SnapSingleSplinePointToGround(USplineComponent* SplineComp, int32 SplinePointToSnap, float TraceDistance, bool bTraceComplex,
			ETraceTypeQuery TraceChannel, const TArray<AActor*>& ActorsToIgnore, bool bDrawDebug = false,
			FLinearColor TraceColor = FLinearColor::Red, FLinearColor TraceHitColor = FLinearColor::Green, float DrawDebugTime = 5.0f);

	/** Get location along spline at the provided input key value */
	UFUNCTION(BlueprintPure, Category = "ES|Spline")
		static FVector FindLocationAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace);

	/** Get tangent along spline at the provided input key value */
	UFUNCTION(BlueprintPure, Category = "ES|Spline")
		static FVector FindTangentAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace);

	/** Get unit direction along spline at the provided input key value */
	UFUNCTION(BlueprintPure, Category = "ES|Spline")
		static FVector FindDirectionAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace);

	/** Get rotator corresponding to rotation along spline at the provided input key value */
	UFUNCTION(BlueprintPure, Category = "ES|Spline")
		static FRotator FindRotationAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace);

	/** Get up vector at the provided input key value along spline */
	UFUNCTION(BlueprintPure, Category = "ES|Spline")
		static FVector FindUpVectorAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace);

	/** Get up vector at the provided input key value along spline */
	UFUNCTION(BlueprintPure, Category = "ES|Spline")
		static FVector FindRightVectorAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace);

	/** Get transform at the provided input key value along spline */
	UFUNCTION(BlueprintPure, Category = "ES|Spline")
		static FTransform FindTransformAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseScale = false);

	/** Get roll in degrees at the provided input key value along spline */
	UFUNCTION(BlueprintPure, Category = "ES|Spline")
		static float FindRollAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace);

	/** Get scale at the provided input key value along spline */
	UFUNCTION(BlueprintPure, Category = "ES|Spline")
		static FVector FindScaleAtSplineInputKey(USplineComponent* SplineComp, float InKey);

	/** Gets the location and rotation along spline, both at the provided input key value */
	UFUNCTION(BlueprintPure, Category = "ES|Spline")
		static void FindLocationAndRotationAtSplineInputKey(FVector& Location, FRotator& Rotation, USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace);

	UFUNCTION(BlueprintCallable, Category = "ES|Spline",
		meta = (AutoCreateRefTerm = "OptionalMaterials, RelativeTransform"))
		static TArray<USplineMeshComponent*> BuildSplineMeshesAlongSpline(
			USplineComponent* SplineComp, UStaticMesh* SplineMesh,
			TArray<UMaterialInterface*> OptionalMaterials,
			UPARAM(ref) const FTransform& RelativeTransform,
			TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis,
			bool bAffectNavigation, bool bGenerateOverlapEvents,
			TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled,
			TEnumAsByte<EObjectTypeQuery> ObjectType,
			EComponentMobility::Type Mobility,
			FVector2D StartScale = FVector2D(1.0f, 1.0f), FVector2D EndScale = FVector2D(1.0f, 1.0f));

#pragma endregion

#pragma region Replay System Stuff

	/**
	* Start recording a replay with the given custom name and friendly name.
	*
	* @param InName If not empty, the unique name to use as an identifier for the replay. If empty, a name will be automatically generated by the replay streamer implementation.
	* @param FriendlyName An optional (may be empty) descriptive name for the replay. Does not have to be unique.
	* @param AdditionalOptions Additional URL options to append to the URL that will be processed by the replay net driver. Will usually remain empty.
	*/
	UFUNCTION(BlueprintCallable, Category = "ES|Replay", meta = (WorldContext = "WorldContextObject"))
		static void StartRecordingReplay(const UObject* WorldContextObject, const FString& ReplayName,
			const FString& FriendlyName);

	/** Stop recording a replay if one is currently in progress */
	UFUNCTION(BlueprintCallable, Category = "ES|Replay", meta = (WorldContext = "WorldContextObject"))
		static void StopRecordingReplay(const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "ES|Replay", meta = (WorldContext = "WorldContextObject"))
		static void SaveReplayCheckpoint(const UObject* WorldContextObject);

	/**
	* Start playing back a previously recorded replay.
	* Return false if it fails to play.
	*
	* @param InName If not empty, the unique name to use as an identifier for the replay. If empty, a name will be automatically generated by the replay streamer implementation.
	* @param AdditionalOptions Additional URL options to append to the URL that will be processed by the replay net driver. Will usually remain empty.
	*/
	UFUNCTION(BlueprintCallable, Category = "ES|Replay", meta = (WorldContext = "WorldContextObject"))
		static bool PlayReplay(const UObject* WorldContextObject, const FString& ReplayName);

	/**
	* Adds a join-in-progress user to the set of users associated with the currently recording replay (if any)
	*
	* @param UserString a string that uniquely identifies the user, usually the UniqueNetId
	*/
	UFUNCTION(BlueprintCallable, Category = "ES|Replay", meta = (WorldContext = "WorldContextObject"))
		static void AddUserToReplay(const UObject* WorldContextObject, const FString& UserString);

	/** Handles jumping the replay to the specified time */
	UFUNCTION(BlueprintCallable, Category = "ES|Replay", meta = (WorldContext = "WorldContextObject"))
		static void JumpToTimeInReplay(float ReplayTime, const UObject* WorldContextObject);

	/** Handles setting the current replay to paused or not */
	UFUNCTION(BlueprintCallable, Category = "ES|Replay", meta = (WorldContext = "WorldContextObject"))
		static void SetReplayPausedState(bool NewState, const UObject* WorldContextObject);

	/** Handles setting the replay playback speed in the world settings */
	UFUNCTION(BlueprintCallable, Category = "ES|Replay", meta = (WorldContext = "WorldContextObject"))
		static void SetReplayPlaybackSpeed(const UObject* WorldContextObject, float NewReplaySpeed = 1.0f);

	/** Gets the current recorded replay speed */
	UFUNCTION(BlueprintPure, Category = "ES|Replay", meta = (WorldContext = "WorldContextObject"))
		static float GetReplayPlaybackSpeed(const UObject* WorldContextObject);

	/** Gets the Total Number of Seconds that were recorded in the current Replay */
	UFUNCTION(BlueprintPure, Category = "ES|Replay", meta = (WorldContext = "WorldContextObject"))
		static float GetCurrentReplayTotalTimeInSeconds(const UObject* WorldContextObject);

	/** Gets the Second we are currently recording/watching in the Replay */
	UFUNCTION(BlueprintPure, Category = "ES|Replay", meta = (WorldContext = "WorldContextObject"))
		static float GetCurrentReplayCurrentTimeInSeconds(const UObject* WorldContextObject);

#pragma endregion

#pragma region Hit Result Breaking

	UFUNCTION(BlueprintPure, Category = "ES|Hit Result", meta = (BlueprintAutocast))
		static bool GetHitBlockingHit(const FHitResult& Hit) { return Hit.bBlockingHit; }

	UFUNCTION(BlueprintPure, Category = "ES|Hit Result")
		static bool GetHitInitialOverlap(const FHitResult& Hit) { return Hit.bStartPenetrating; }

	UFUNCTION(BlueprintPure, Category = "ES|Hit Result", meta = (BlueprintAutocast))
		static float GetHitTime(const FHitResult& Hit) { return Hit.Time; }

	UFUNCTION(BlueprintPure, Category = "ES|Hit Result")
		static float GetHitDistance(const FHitResult& Hit) { return Hit.Distance; }

	UFUNCTION(BlueprintPure, Category = "ES|Hit Result")
		static FVector GetHitLocation(const FHitResult& Hit) { return Hit.Location; }

	UFUNCTION(BlueprintPure, Category = "ES|Hit Result", meta = (BlueprintAutocast))
		static FVector GetHitImpactPoint(const FHitResult& Hit) { return Hit.ImpactPoint; }

	UFUNCTION(BlueprintPure, Category = "ES|Hit Result")
		static FVector GetHitNormal(const FHitResult& Hit) { return Hit.Normal; }

	UFUNCTION(BlueprintPure, Category = "ES|Hit Result")
		static FVector GetHitImpactNormal(const FHitResult& Hit) { return Hit.ImpactNormal; }

	UFUNCTION(BlueprintPure, Category = "ES|Hit Result", meta = (BlueprintAutocast))
		static UPhysicalMaterial* GetHitPhysMat(const FHitResult& Hit);

	UFUNCTION(BlueprintPure, Category = "ES|Hit Result", meta = (BlueprintAutocast))
		static AActor* GetHitActor(const FHitResult& Hit) { return Hit.GetActor(); }

	UFUNCTION(BlueprintPure, Category = "ES|Hit Result", meta = (BlueprintAutocast))
		static UPrimitiveComponent* GetHitComponent(const FHitResult& Hit) { return Hit.GetComponent(); }

	UFUNCTION(BlueprintPure, Category = "ES|Hit Result", meta = (BlueprintAutocast))
		static FName GetHitBoneName(const FHitResult& Hit) { return Hit.BoneName; }

	UFUNCTION(BlueprintPure, Category = "ES|Hit Result")
		static int32 GetHitItem(const FHitResult& Hit) { return Hit.Item; }

	UFUNCTION(BlueprintPure, Category = "ES|Hit Result", meta = (BlueprintAutocast))
		static int32 GetHitFaceIndex(const FHitResult& Hit) { return Hit.FaceIndex; }

	UFUNCTION(BlueprintPure, Category = "ES|Hit Result")
		static FVector GetHitTraceStart(const FHitResult& Hit) { return Hit.TraceStart; }

	UFUNCTION(BlueprintPure, Category = "ES|Hit Result")
		static FVector GetHitTraceEnd(const FHitResult& Hit) { return Hit.TraceEnd; }

#pragma endregion

	//--------------------save lb--------------------
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Save Game to Slot Compressed", Keywords = "Save Compressed Slot"), Category = "ES|Save")
		static bool SaveGameToSlotCompressed(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Load Game from Slot Compressed", Keywords = "Load Compressed Slot"), Category = "ES|Save")
		static USaveGame* LoadGameFromSlotCompressed(const FString& SlotName, const int32 UserIndex);
	
	//--------------------utility--------------------
	/** Load Texture2D */
	UFUNCTION(BlueprintPure, Category = "ES|Loader", meta = (Keywords = "image png jpg jpeg bmp bitmap ico icon exr icns"))
		static UTexture2D* LoadTexture2DFromFile(const FString& FilePath, bool& IsValid, int32& Width, int32& Height);
	UFUNCTION(BlueprintPure, Category = "ES|Files", meta = (Keywords = ""))
		static bool IsVaildPath(const FString FilePath);
	static FString GetFullPath(FString FilePath);

	/**                  Config                           */

	UFUNCTION(BlueprintCallable, Category = "ES|Config", meta = (Keywords = ""))
		static void ReadConfig(const FString& SectionName, const FString& ValueName, FString& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "ES|Config", meta = (Keywords = ""))
		static void WriteConfig(const FString& SectionName, const FString& ValueName, const FString& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "ES|Config", meta = (Keywords = ""))
		static bool ReadCustomPathConfig(const FString& FilePath, const FString& SectionName, const FString& ValueName, FString& ReturnString);

	UFUNCTION(BlueprintCallable, Category = "ES|Config", meta = (Keywords = ""))
		static void WriteCustomPathConfig(const FString& FilePath, const FString& SectionName, const FString& ValueName, const FString& WriteString);

	/**                   File                           */

	/** Read Or Write Custom Text */
	UFUNCTION(BlueprintCallable, Category = "ES|Files", meta = (Keywords = ""))
		static bool ReadFile(const FString FilePath, FString& ReturnString);

	UFUNCTION(BlueprintCallable, Category = "ES|Files", meta = (Keywords = ""))
		static bool WriteFile(const FString FilePath, const FString ReturnString);

	UFUNCTION(BlueprintCallable, Category = "ES|Files", meta = (Keywords = ""))
		static bool DeleteFileII(const FString FilePath);

	/** Get Path */
	UFUNCTION(BlueprintPure, Category = "ES|Files", meta = (Keywords = ""))
		static FString GetGamePath(DirType E);

	UFUNCTION(BlueprintCallable, Category = "ES|OS", meta = (Keywords = "exe"))
		static AExeActor* OpenExe(UObject* SomeInWorldObject, const FString Path, const FString Args);

	//--------------------vir lb--------------------

	//~~~~~~~~~~~~~~~~~~~~

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Custom Config Vars")
		static void VictorySetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, FVector2D Value);

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Custom Config Vars")
		static void VictorySetCustomConfigVar_Bool(FString SectionName, FString VariableName, bool Value);

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Custom Config Vars")
		static void VictorySetCustomConfigVar_Int(FString SectionName, FString VariableName, int32 Value);

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Custom Config Vars")
		static void VictorySetCustomConfigVar_Float(FString SectionName, FString VariableName, float Value);

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Custom Config Vars")
		static void VictorySetCustomConfigVar_Vector(FString SectionName, FString VariableName, FVector Value);

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Custom Config Vars")
		static void VictorySetCustomConfigVar_Rotator(FString SectionName, FString VariableName, FRotator Value);

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Custom Config Vars")
		static void VictorySetCustomConfigVar_Color(FString SectionName, FString VariableName, FLinearColor Value);


	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Custom Config Vars")
		static void VictorySetCustomConfigVar_String(FString SectionName, FString VariableName, FString Value);

	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Transform")
		FRotator TransformVectorToActorSpaceAngle(AActor* Actor, const FVector& InVector);

	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Transform")
		FVector TransformVectorToActorSpace(AActor* Actor, const FVector& InVector);

	/** The FName that is expected is the exact same format as when you right click on asset -> Copy Reference! You can directly paste copied references into this node! IsValid lets you know if the path was correct or not and I was able to load the object. MAKE SURE TO SAVE THE RETURNED OBJECT AS A VARIABLE. Otherwise your shiny new asset will get garbage collected. I recommend you cast the return value to the appropriate object and then promote it to a variable :)  -Rama */
	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Misc")
		static UObject* LoadObjectFromAssetPath(TSubclassOf<UObject> ObjectClass, FName Path, bool& IsValid);

	/** Uses the same format as I use for LoadObjectFromAssetPath! Use this node to get the asset path of objects in the world! -Rama */
	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Misc")
		static FName GetObjectPath(UObject* Obj);

	/** Returns which platform the game code is running in.*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "ES|VictoryBP|System")
		static void OperatingSystem__GetCurrentPlatform(
			bool& Windows_,
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
		);

	//~~~

	/** Retrieves the OS system Date and Time as a string at the instant this BP node runs. Use my other RealWorldTime node to get the time passed since the return value of this node! You can use this to record milliseconds/seconds/minutes/hours between events in game logic! */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "ES|VictoryBP|System")
		static FString RealWorldTime__GetCurrentOSTime(
			int32& MilliSeconds,
			int32& Seconds,
			int32& Minutes,
			int32& Hours12,
			int32& Hours24,
			int32& Day,
			int32& Month,
			int32& Year
		);

	/** Get the amount of seconds/minutes/hours since the the supplied DateTime string! You can use this to record milliseconds/seconds/minutes/hours between events in game logic! */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "ES|VictoryBP|System")
		static void RealWorldTime__GetTimePassedSincePreviousTime(
			const FString& PreviousTime,
			float& Milliseconds,
			float& Seconds,
			float& Minutes,
			float& Hours
		);

	/** Get the difference between two recorded times! You can use this to record milliseconds/seconds/minutes/hours between events in game logic! */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "ES|VictoryBP|System")
		static void RealWorldTime__GetDifferenceBetweenTimes(
			const FString& PreviousTime1,
			const FString& PreviousTime2,
			float& Milliseconds,
			float& Seconds,
			float& Minutes,
			float& Hours
		);

	/** Launches the specified URL in the OS default web browser :) <3 Rama */
	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|System")
		static void Open_URL_In_Web_Browser(FString TheURL);

	//			  			Paths

	/** InstallDir/GameName/Binaries/Win64 */
	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Paths")
		static FString VictoryPaths__Win64Dir_BinaryLocation();

	/** InstallDir/WindowsNoEditor/ */
	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Paths")
		static FString VictoryPaths__WindowsNoEditorDir();

	/** InstallDir/GameName */
	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Paths")
		static FString VictoryPaths__GameRootDirectory();

	/** InstallDir/GameName/Saved */
	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Paths")
		static FString VictoryPaths__SavedDir();

	/** InstallDir/GameName/Saved/Config/ */
	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Paths")
		static FString VictoryPaths__ConfigDir();

	/** InstallDir/GameName/Saved/Screenshots/Windows */
	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Paths")
		static FString VictoryPaths__ScreenShotsDir();

	/** InstallDir/GameName/Saved/Logs */
	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Paths")
		static FString VictoryPaths__LogsDir();

	/** Load a Texture 2D from a DDS file! Contributed by UE4 forum member n00854180t! */
	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Load Texture From File", meta = (Keywords = "image DDS"))
		static UTexture2D* LoadTexture2D_FromDDSFile(const FString& FullFilePath);

	/** Load a Texture2D from a JPG,PNG,BMP,ICO,EXR,ICNS file! IsValid tells you if file path was valid or not. Enjoy! -Rama */
	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Load Texture From File", meta = (Keywords = "image png jpg jpeg bmp bitmap ico icon exr icns"))
		static UTexture2D* Victory_LoadTexture2D_FromFile(const FString& FullFilePath, EJoyImageFormats ImageFormat, bool& IsValid, int32& Width, int32& Height);

	/** Load a Texture2D from a JPG,PNG,BMP,ICO,EXR,ICNS file! IsValid tells you if file path was valid or not. Enjoy! -Rama */
	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Load Texture From File", meta = (Keywords = "image png jpg jpeg bmp bitmap ico icon exr icns"))
		static UTexture2D* Victory_LoadTexture2D_FromFile_Pixels(const FString& FullFilePath, EJoyImageFormats ImageFormat, bool& IsValid, int32& Width, int32& Height, TArray<FLinearColor>& OutPixels);

	/** Retrieve a pixel color value given the pixel array, the image height, and the coordinates. Returns false if the coordinates were not valid. Pixel coordinates start from upper left corner as 0,0. X= horizontal, Y = vertical */
	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Load Texture From File", meta = (Keywords = "image coordinate index map value"))
		static bool Victory_Get_Pixel(const TArray<FLinearColor>& Pixels, int32 ImageHeight, int32 x, int32 y, FLinearColor& FoundColor);

	/** Save an array of pixels to disk as a PNG! It is very important that you supply the curret width and height of the image! Returns false if Width * Height != Array length or file could not be saved to the location specified. I return an ErrorString to clarify what the exact issue was. -Rama */
	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Load Texture From File", meta = (Keywords = "create image png jpg jpeg bmp bitmap ico icon exr icns"))
		static bool Victory_SavePixels(const FString& FullFilePath, int32 Width, int32 Height, const TArray<FLinearColor>& ImagePixels, bool SaveAsBMP, bool sRGB, FString& ErrorString);

	/** This will modify the original T2D to remove sRGB and change compression to VectorDisplacementMap to ensure accurate pixel reading. -Rama*/
	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Load Texture From File", meta = (Keywords = "create image png jpg jpeg bmp bitmap ico icon exr icns"))
		static bool Victory_GetPixelFromT2D(UTexture2D* T2D, int32 X, int32 Y, FLinearColor& PixelColor);

	/** This will modify the original T2D to remove sRGB and change compression to VectorDisplacementMap to ensure accurate pixel reading. -Rama*/
	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Load Texture From File", meta = (Keywords = "create image png jpg jpeg bmp bitmap ico icon exr icns"))
		static bool Victory_GetPixelsArrayFromT2D(UTexture2D* T2D, int32& TextureWidth, int32& TextureHeight, TArray<FLinearColor>& PixelArray);

	/** This will modify the original T2D to remove sRGB and change compression to VectorDisplacementMap to ensure accurate pixel reading. -Rama*/
	//UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Load Texture From File",meta=(Keywords="create image png jpg jpeg bmp bitmap ico icon exr icns"))
	static bool Victory_GetPixelsArrayFromT2DDynamic(UTexture2DDynamic* T2D, int32& TextureWidth, int32& TextureHeight, TArray<FLinearColor>& PixelArray);

	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Misc")
		static UTextureRenderTarget2D* CreateTextureRenderTarget2D(int32 Width = 256, int32 Height = 256, FLinearColor ClearColor = FLinearColor::White, float Gamma = 1)
	{
		UTextureRenderTarget2D* NewRenderTarget2D = NewObject<UTextureRenderTarget2D>();
		if (!NewRenderTarget2D)
		{
			return nullptr;
		}
		NewRenderTarget2D->ClearColor = FLinearColor::White;
		NewRenderTarget2D->TargetGamma = Gamma;
		NewRenderTarget2D->InitAutoFormat(Width, Height);
		return NewRenderTarget2D;
	}

	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|AI")
		static EPathFollowingRequestResult::Type Victory_AI_MoveToWithFilter(
			APawn* Pawn,
			const FVector& Dest,
			TSubclassOf<UNavigationQueryFilter> FilterClass = NULL,
			float AcceptanceRadius = 0,
			bool bProjectDestinationToNavigation = false,
			bool bStopOnOverlap = false,
			bool bCanStrafe = false
			);

	/** Make sure to save off the return value as a global variable in one of your BPs or else it will get garbage collected! */
	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Misc", meta = (DeprecatedFunction, DeprecationMessage = "Epic has introduced Construct Object as of 4.9.0, I recommend you use that instead! -Rama", HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
		static UObject* CreateObject(UObject* WorldContextObject, UClass* TheObjectClass);

	/** Make sure to save off the return value as a global variable in one of your BPs or else it will get garbage collected! */
	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Misc", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
		static UPrimitiveComponent* CreatePrimitiveComponent(UObject* WorldContextObject, TSubclassOf<UPrimitiveComponent> CompClass, FName Name, FVector Location, FRotator Rotation);

	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|UMG", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
		static bool IsWidgetOfClassInViewport(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass);

	UFUNCTION(Category = "ES|VictoryBP|LevelStreaming", BlueprintCallable, Meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
		static void AddToStreamingLevels(UObject* WorldContextObject, const FLevelStreamInstanceInfo& LevelInstanceInfo);

	UFUNCTION(Category = "ES|VictoryBP|LevelStreaming", BlueprintCallable, Meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
		static void RemoveFromStreamingLevels(UObject* WorldContextObject, const FLevelStreamInstanceInfo& LevelInstanceInfo);

	UFUNCTION(Category = "ES|VictoryBP|LevelStreaming", BlueprintCallable, Meta = (keywords = "remove"))
		static void HideStreamingLevel(ULevelStreamingDynamic* LevelInstance)
	{
		if (LevelInstance) LevelInstance->SetShouldBeVisible(false);
	}

	UFUNCTION(Category = "ES|VictoryBP|LevelStreaming", BlueprintCallable, Meta = (keywords = "remove"))
		static void UnloadStreamingLevel(ULevelStreamingDynamic* LevelInstance)
	{
		if (LevelInstance) LevelInstance->SetShouldBeLoaded(false);
	}

	/** Implementation of a Selection Marquee / Selection Box as a BP Node. AnchorPoint is the first clicked point, which user then drags from to make the box. Class filter is optional way to narrow the scope of actors that can be selected by the selection box! -Rama*/
	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Misc", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
		static void Selection_SelectionBox(UObject* WorldContextObject, TArray<AActor*>& SelectedActors, FVector2D AnchorPoint, FVector2D DraggedPoint, TSubclassOf<AActor> ClassFilter);

	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Misc")
		static FVector2D ProjectWorldToScreenPosition(const FVector& WorldLocation);

	UFUNCTION(BlueprintPure, Category = "ES|GPU")
		static void Victory_GetGPUInfo(FString& DeviceDescription, FString& Provider, FString& DriverVersion, FString& DriverDate);

	/** Retrieves command line arguments that were passed into unreal */
	UFUNCTION(BlueprintPure, Category = "ES|System")
		static const FString GetCommandLine()
	{
		return FCommandLine::Get();
	}

	UFUNCTION(Category = "ES|VictoryBP|Game|Viewport", BlueprintPure)
		static float HorizontalFOV(float VerticalFOV, float AspectRatio);

	UFUNCTION(Category = "ES|VictoryBP|Game|Viewport", BlueprintPure)
		static float VerticalFOV(float HorizontalFOV, float AspectRatio);

	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Input")
		static void VictorySimulateMouseWheel(const float& Delta);

	/** Loads a text file from hard disk and parses it into a String array, where each entry in the string array is 1 line from the text file. Option to exclude lines that are only whitespace characters or '\n'. Returns the size of the final String Array that was created. Returns false if the file could be loaded from hard disk. */
	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|File IO")
		static bool LoadStringArrayFromFile(TArray<FString>& StringArray, int32& ArraySize, FString FullFilePath = "Enter Full File Path", bool ExcludeEmptyLines = false);

	/** Load a text file to a single string that you can use ParseIntoArray on newline characters if you want same format as LoadStringArrayFromFile. This version supports unicode characters! */
	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|File IO")
		static bool LoadStringFromFile(FString& Result, FString FullFilePath = "Enter Full File Path")
	{
		return FFileHelper::LoadFileToString(Result, *FullFilePath);
	}

	/** AnimBPOwner - Must be a Character, Conversion Internally For Convenience.\n\nRetrieves the Aim Offsets Pitch & Yaw Based On the Rotation of the Controller of The Character Owning The Anim Instance.\n\nThe Pitch and Yaw are meant to be used with a Blend Space going from -90,-90 to 90,90.\n   Returns true if function filled the pitch and yaw vars successfully */
	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Aim Offset")
		static bool Animation__GetAimOffsets(AActor* AnimBPOwner, float& Pitch, float& Yaw);

	/** AnimBPOwner - Must be a Character, Conversion Internally For Convenience.\n\nRetrieves the Aim Offsets Pitch & Yaw for the AnimBPOwner Based On the supplied Rotation.\n\nThe Pitch and Yaw are meant to be used with a Blend Space going from -90,-90 to 90,90.\n    Returns true if function filled the pitch and yaw vars successfully */
	UFUNCTION(BlueprintCallable, Category = "ES|VictoryBP|Aim Offset")
		static bool Animation__GetAimOffsetsFromRotation(AActor* AnimBPOwner, const FRotator& TheRotation, float& Pitch, float& Yaw);


	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Custom Config Vars")
		static bool VictoryGetCustomConfigVar_Bool(FString SectionName, FString VariableName, bool& IsValid);

	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Custom Config Vars")
		static int32 VictoryGetCustomConfigVar_Int(FString SectionName, FString VariableName, bool& IsValid);

	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Custom Config Vars")
		static float VictoryGetCustomConfigVar_Float(FString SectionName, FString VariableName, bool& IsValid);

	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Custom Config Vars")
		static FVector VictoryGetCustomConfigVar_Vector(FString SectionName, FString VariableName, bool& IsValid);

	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Custom Config Vars")
		static FRotator VictoryGetCustomConfigVar_Rotator(FString SectionName, FString VariableName, bool& IsValid);

	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Custom Config Vars")
		static FLinearColor VictoryGetCustomConfigVar_Color(FString SectionName, FString VariableName, bool& IsValid);

	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Custom Config Vars")
		static FString VictoryGetCustomConfigVar_String(FString SectionName, FString VariableName, bool& IsValid);

	UFUNCTION(BlueprintPure, Category = "ES|VictoryBP|Custom Config Vars")
		static FVector2D VictoryGetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, bool& IsValid);

	/** Load a Sound from a file!  */
	UFUNCTION(BlueprintCallable, Category = "ES|Loader", meta = (Keywords = ""))
		static class USoundWave* LoadOggDataFromFile(const FString& FilePath);

	UFUNCTION(BlueprintCallable, Category = "ES|Loader", meta = (Keywords = ""))
		static class USoundWave* LoadWaveDataFromFile(const FString& FilePath);

	static bool ReadOggWaveData(USoundWave* sw, TArray<uint8>* rawFile);

	/** bp ux  */
	static void ShuffleArrayWithStream_impl(void* TargetArray, const UArrayProperty* ArrayProperty, const FRandomStream& Stream); // Real implementation

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Mouse Position", Keywords = "Set Mouse Position"), Category = "ES|Utilities")
		static bool SetMousePosition(APlayerController* PC, const float& PosX, const float& PosY);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Actor Last Render Time", Keywords = "Actor Render Time"), Category = "ES|Utilities")
		static float GetActorLastRenderTime(AActor* RefActor);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Was Actor Rendered Recently", Keywords = "Actor Rendered Recently"), Category = "ES|Utilities")
		static bool WasActorRenderedRecently(AActor* RefActor, float MaxRecentTime = 0.1f);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Is Actor Within Frustum", Keywords = "Actor Within Frustum"), Category = "ES|Utilities")
		static bool IsActorWithinFrustum(AActor* RefActor);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Convert Linear Colors", Keywords = "Color Convert Linear"), Category = "ES|Utilities")
		static TArray<FColor> ConvertLinearColors(const TArray<FLinearColor>& LinearColors);

	UFUNCTION(BlueprintPure, Category = "ES|Utilities|Testing")
		static bool HasRuntimeCooking();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Move Towards (Vector)", Keywords = "Vector FVector Move Towards"), Category = "ES|Utilities")
		static FVector MoveTowardsVector(FVector From, FVector To, float MaxDistanceDelta);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Move Towards (Rotator)", Keywords = "Rotator FRotator Move Towards"), Category = "ES|Utilities")
		static FRotator MoveTowardsRotator(FRotator From, FRotator To, float MaxDistanceDelta);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Move Towards (Angle)", Keywords = "Angle Move Towards"), Category = "ES|Utilities")
		static float MoveTowardsAngle(float From, float To, float MaxDelta);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Move Towards (Float)", Keywords = "Float Move Towards"), Category = "ES|Utilities")
		static float MoveTowards(float From, float To, float MaxDelta);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Delta Angle", Keywords = "Angle Delta"), Category = "ES|Utilities")
		static float DeltaAngle(float From, float To);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Repeat Float", Keywords = "Repeat Float"), Category = "ES|Utilities")
		static float RepeatFloat(float T, float Length);

	UFUNCTION(BluePrintPure, meta = (DisplayName = "Point Is Inside Box", Keywords = "Point Inside Box"), Category = "ES|Utilities")
		static bool PointIsInsideBox(const FBox2D& Box, const FVector2D& Point);

	UFUNCTION(BluePrintPure, meta = (DisplayName = "Box Is Inside Box", Keywords = "Box Inside Box2D FBox2D"), Category = "ES|Utilities")
		static bool BoxIsInsideBox(const FBox2D& Box, const FBox2D& OtherBox);

	UFUNCTION(BluePrintPure, meta = (DisplayName = "Box Intersects Box", Keywords = "Box Intersect Box2D FBox2D"), Category = "ES|Utilities")
		static bool BoxIntersectsBox(const FBox2D& Box, const FBox2D& OtherBox);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Min and Max of Array (float)"), Category = "ES|Utilities")
		static void MinAndMaxOfFloatArray(const TArray<float>& Floats, float& Min, float& Max);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Make Literal Box2D"), Category = "ES|Utilities")
		static FBox2D MakeLiteralFBox2D(FVector2D Min, FVector2D Max);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Vector is nearly zero", Keywords = "Vector FVector Zero Nearly"), Category = "ES|Utilities")
		static bool VectorIsNearlyZero(const FVector& Vector);

	UFUNCTION(BluePrintPure, meta = (DisplayName = "Get Actor Screen Box", Keywords = "Actor Screen Box FBox2D"), Category = "ES|Utilities")
		static void GetActorScreenBox(const APlayerController* Controller, const AActor* TargetActor, bool bOnlyCollidingComponents, bool bScaleByDPI, FBox2D& Box, bool& bAllProjectedSuccessfully);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Remove All Children", Keywords = "Clear Destroy Remove Kill Child Children"), Category = "ES|Utilities")
		static void RemoveAllChildren(USceneComponent* parentComp);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Is World Point Inside Box", Keywords = "World Point Inside Within Intersect Box"), Category = "ES|Utilities")
		static bool WorldPointIsInsideBox(const FVector& WorldPoint, const FVector& BoxCenter, const FVector& BoxExtents);


	/** Easing functions */

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseInterpolate(const EEasingType EaseType, const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseLinear(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseSineIn(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseSineOut(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseSineInOut(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseQuadIn(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseQuadOut(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseQuadInOut(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseCubicIn(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseCubicOut(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseCubicInOut(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseQuartIn(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseQuartOut(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseQuartInOut(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseQuintIn(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseQuintOut(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseQuintInOut(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseExpoIn(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseExpoOut(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseExpoInOut(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseCircIn(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseCircOut(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseCircInOut(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseBackIn(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseBackOut(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseBackInOut(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseElasticIn(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseElasticOut(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseElasticInOut(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseBounceIn(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseBounceOut(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseBounceInOut(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseSineOutIn(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseQuadOutIn(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseCubicOutIn(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseQuartOutIn(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseQuintOutIn(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseExpoOutIn(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseCircOutIn(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseBackOutIn(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseElasticOutIn(const float NormalizedTime, const float From, const float To);

	UFUNCTION(BlueprintPure, Category = "ES|Math|Easing")
		static const float EaseBounceOutIn(const float NormalizedTime, const float From, const float To);

	/** C++ only functions */

	template<typename T>
	static FString EnumToString(const FString& enumName, const T value)
	{
		UEnum* pEnum = FindObject<UEnum>(ANY_PACKAGE, *enumName, true);
		return pEnum
			? pEnum->GetDisplayNameTextByIndex(static_cast<uint8>(value)).ToString()
			: TEXT("<invalid>");
	}

	/**
	* Create a instance of TinyXmlDocument which can load xml,or close xml.
	*/
	UFUNCTION(BlueprintCallable, Category = "ES|TinyXml", Meta = (DisplayName = "Create New XmlDocument"))
		static UUnrealTinyXmlDocument* NewXmlDocument();
	
	//Math compute
	// Integer
	UFUNCTION(BlueprintCallable, Category = "ES|Math|Integer", meta = (DisplayName = "integer += integer", CompactNodeTitle = "+="))
		static int32& Add_i(UPARAM(ref) int32& In, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Integer", meta = (DisplayName = "integer -= integer", CompactNodeTitle = "-="))
		static int32& Subtract_i(UPARAM(ref)int32& In, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Integer", meta = (DisplayName = "integer *= integer", CompactNodeTitle = "*="))
		static int32& Multiply_i(UPARAM(ref)int32& In, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Integer", meta = (DisplayName = "integer /= integer", CompactNodeTitle = "/="))
		static int32& Divide_i(UPARAM(ref)int32& In, int32 Value);

	// Integer & Float
	UFUNCTION(BlueprintCallable, Category = "ES|Math|Integer", meta = (DisplayName = "integer += float", CompactNodeTitle = "+="))
		static int32& Add_if(UPARAM(ref) int32& In, float Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Integer", meta = (DisplayName = "integer -= float", CompactNodeTitle = "-="))
		static int32& Subtract_if(UPARAM(ref)int32& In, float Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Integer", meta = (DisplayName = "integer *= float", CompactNodeTitle = "*="))
		static int32& Multiply_if(UPARAM(ref)int32& In, float Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Integer", meta = (DisplayName = "integer /= float", CompactNodeTitle = "/="))
		static int32& Divide_if(UPARAM(ref)int32& In, float Value);

	// Float
	UFUNCTION(BlueprintCallable, Category = "ES|Math|Float", meta = (DisplayName = "float += float", CompactNodeTitle = "+="))
		static float& Add_f(UPARAM(ref)float& In, float Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Float", meta = (DisplayName = "float -= float", CompactNodeTitle = "-="))
		static float& Subtract_f(UPARAM(ref)float& In, float Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Float", meta = (DisplayName = "float *= float", CompactNodeTitle = "*="))
		static float& Multiply_f(UPARAM(ref)float& In, float Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Float", meta = (DisplayName = "float /= float", CompactNodeTitle = "/="))
		static float& Divide_f(UPARAM(ref)float& In, float Value);

	// Float & Integer
	UFUNCTION(BlueprintCallable, Category = "ES|Math|Float", meta = (DisplayName = "float += integer", CompactNodeTitle = "+="))
		static float& Add_fi(UPARAM(ref)float& In, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Float", meta = (DisplayName = "float -= integer", CompactNodeTitle = "-="))
		static float& Subtract_fi(UPARAM(ref)float& In, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Float", meta = (DisplayName = "float *= integer", CompactNodeTitle = "*="))
		static float& Multiply_fi(UPARAM(ref)float& In, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Float", meta = (DisplayName = "float /= integer", CompactNodeTitle = "/="))
		static float& Divide_fi(UPARAM(ref)float& In, int32 Value);

	// Vector
	UFUNCTION(BlueprintCallable, Category = "ES|Math|Vector", meta = (DisplayName = "Vector += Vector", CompactNodeTitle = "+="))
		static FVector& Add_v(UPARAM(ref)FVector& In, FVector Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Vector", meta = (DisplayName = "Vector -= Vector", CompactNodeTitle = "-="))
		static FVector& Subtract_v(UPARAM(ref)FVector& In, FVector Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Vector", meta = (DisplayName = "Vector *= Vector", CompactNodeTitle = "*="))
		static FVector& Multiply_v(UPARAM(ref)FVector& In, FVector Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Vector", meta = (DisplayName = "Vector /= Vector", CompactNodeTitle = "/="))
		static FVector& Divide_v(UPARAM(ref)FVector& In, FVector Value);

	// Vector & Integer
	UFUNCTION(BlueprintCallable, Category = "ES|Math|Vector", meta = (DisplayName = "Vector += integer", CompactNodeTitle = "+="))
		static FVector& Add_vi(UPARAM(ref)FVector& In, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Vector", meta = (DisplayName = "Vector -= integer", CompactNodeTitle = "-="))
		static FVector& Subtract_vi(UPARAM(ref)FVector& In, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Vector", meta = (DisplayName = "Vector *= integer", CompactNodeTitle = "*="))
		static FVector& Multiply_vi(UPARAM(ref)FVector& In, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Vector", meta = (DisplayName = "Vector /= integer", CompactNodeTitle = "/="))
		static FVector& Divide_vi(UPARAM(ref)FVector& In, int32 Value);

	// Vector & Float
	UFUNCTION(BlueprintCallable, Category = "ES|Math|Vector", meta = (DisplayName = "Vector += float", CompactNodeTitle = "+="))
		static FVector& Add_vf(UPARAM(ref)FVector& In, float Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Vector", meta = (DisplayName = "Vector -= float", CompactNodeTitle = "-="))
		static FVector& Subtract_vf(UPARAM(ref)FVector& In, float Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Vector", meta = (DisplayName = "Vector *= float", CompactNodeTitle = "*="))
		static FVector& Multiply_vf(UPARAM(ref)FVector& In, float Value);

	UFUNCTION(BlueprintCallable, Category = "ES|Math|Vector", meta = (DisplayName = "Vector /= float", CompactNodeTitle = "/="))
		static FVector& Divide_vf(UPARAM(ref)FVector& In, float Value);

	//range lib
#pragma region Float
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Float", meta = (DisplayName = "Get Lower Bound Value (Float)"))
		static float GetLowerBoundValue_Float(FFloatRange const& Range) { return Range.GetLowerBoundValue(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Float", meta = (DisplayName = "Get Upper Bound Value (Float)"))
		static float GetUpperBoundValue_Float(FFloatRange const& Range) { return Range.GetUpperBoundValue(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Float", meta = (DisplayName = "Contains (Float)"))
		static bool Contains_Float(FFloatRange const& Range, FFloatRange OtherRange) { return Range.Contains(OtherRange); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Float", meta = (DisplayName = "Contigous (Float)"))
		static bool Contiguous_Float(FFloatRange const& Range, FFloatRange OtherRange) { return Range.Contiguous(OtherRange); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Float", meta = (DisplayName = "Has Lower Bound (Float)"))
		static bool HasLowerBound_Float(FFloatRange const& Range) { return Range.HasLowerBound(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Float", meta = (DisplayName = "Has Upper Bound (Float)"))
		static bool HasUpperBound_Float(FFloatRange const& Range) { return Range.HasUpperBound(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Float", meta = (DisplayName = "Is Degenerate (Float)"))
		static bool IsDegenerate_Float(FFloatRange const& Range) { return Range.IsDegenerate(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Float", meta = (DisplayName = "Is Empty (Float)"))
		static bool IsEmpty_Float(FFloatRange const& Range) { return Range.IsEmpty(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Float", meta = (DisplayName = "Size (Float)"))
		static float Size_Float(FFloatRange const& Range) { return Range.Size<float>(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Float", meta = (DisplayName = "Split (Float)"))
		static TArray<FFloatRange> Split_Float(FFloatRange const& Range, float InElement) { return Range.Split(InElement); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Float", meta = (DisplayName = "Difference( Float)"))
		static TArray<FFloatRange> Difference_Float(FFloatRange const& Range, FFloatRange OtherRange) { return FFloatRange::Difference(Range, OtherRange); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Float", meta = (DisplayName = "Hull (Float)"))
		static FFloatRange Hull_Float(FFloatRange const& Range, FFloatRange OtherRange) { return FFloatRange::Hull(Range, OtherRange); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Float", meta = (DisplayName = "Intersection (Float)"))
		static FFloatRange Intersection_Float(TArray<FFloatRange> const& Ranges) { return FFloatRange::Intersection(Ranges); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Float", meta = (DisplayName = "Union (Float)"))
		static TArray<FFloatRange> Union_Float(FFloatRange const& Range, FFloatRange OtherRange) { return FFloatRange::Union(Range, OtherRange); }
#pragma endregion 
#pragma region int32
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Int", meta = (DisplayName = "Get Lower Bound Value (Int)"))
		static int32 GetLowerBoundValue_Int(FInt32Range const& Range) { return Range.GetLowerBoundValue(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Int", meta = (DisplayName = "Get Upper Bound Value (Int)"))
		static int32 GetUpperBoundValue_Int(FInt32Range const& Range) { return Range.GetUpperBoundValue(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Int", meta = (DisplayName = "Contains (Int)"))
		static bool Contains_Int(FInt32Range const& Range, FInt32Range OtherRange) { return Range.Contains(OtherRange); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Int", meta = (DisplayName = "Contigous (Int)"))
		static bool Contiguous_Int(FInt32Range const& Range, FInt32Range OtherRange) { return Range.Contiguous(OtherRange); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Int", meta = (DisplayName = "Has Lower Bound (Int)"))
		static bool HasLowerBound_Int(FInt32Range const& Range) { return Range.HasLowerBound(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Int", meta = (DisplayName = "Has Upper Bound (Int)"))
		static bool HasUpperBound_Int(FInt32Range const& Range) { return Range.HasUpperBound(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Int", meta = (DisplayName = "Is Degenerate (Int)"))
		static bool IsDegenerate_Int(FInt32Range const& Range) { return Range.IsDegenerate(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Int", meta = (DisplayName = "Is Empty (Int)"))
		static bool IsEmpty_Int(FInt32Range const& Range) { return Range.IsEmpty(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Int", meta = (DisplayName = "Size (Int)"))
		static int32 Size_Int(FInt32Range const& Range) { return Range.Size<int32>(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Int", meta = (DisplayName = "Split (Int)"))
		static TArray<FInt32Range> Split_Int(FInt32Range const& Range, int32 InElement) { return Range.Split(InElement); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Int", meta = (DisplayName = "Difference (Int)"))
		static TArray<FInt32Range> Difference_Int(FInt32Range const& Range, FInt32Range OtherRange) { return FInt32Range::Difference(Range, OtherRange); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Int", meta = (DisplayName = "Hull (Int)"))
		static FInt32Range Hull_Int(FInt32Range const& Range, FInt32Range OtherRange) { return FInt32Range::Hull(Range, OtherRange); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Int", meta = (DisplayName = "Intersection (Int)"))
		static FInt32Range Intersection_Int(TArray<FInt32Range> const& Ranges) { return FInt32Range::Intersection(Ranges); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Int", meta = (DisplayName = "Union (Int)"))
		static TArray<FInt32Range> Union_Int(FInt32Range const& Range, FInt32Range OtherRange) { return FInt32Range::Union(Range, OtherRange); }
#pragma endregion 
#pragma region FDateTime
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Date", meta = (DisplayName = "Get Lower Bound Value (Date)"))
		static FDateTime GetLowerBoundValue_Date(FDateRange const& Range) { return Range.GetLowerBoundValue(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Date", meta = (DisplayName = "Get Upper Bound Value (Date)"))
		static FDateTime GetUpperBoundValue_Date(FDateRange const& Range) { return Range.GetUpperBoundValue(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Date", meta = (DisplayName = "Contains (Date)"))
		static bool Contains_Date(FDateRange const& Range, FDateRange OtherRange) { return Range.Contains(OtherRange); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Date", meta = (DisplayName = "Contigous (Date)"))
		static bool Contiguous_Date(FDateRange const& Range, FDateRange OtherRange) { return Range.Contiguous(OtherRange); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Date", meta = (DisplayName = "Has Lower Bound (Date)"))
		static bool HasLowerBound_Date(FDateRange const& Range) { return Range.HasLowerBound(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Date", meta = (DisplayName = "Has Upper Bound (Date)"))
		static bool HasUpperBound_Date(FDateRange const& Range) { return Range.HasUpperBound(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Date", meta = (DisplayName = "Is Degenerate (Date)"))
		static bool IsDegenerate_Date(FDateRange const& Range) { return Range.IsDegenerate(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Date", meta = (DisplayName = "Is Empty (Date)"))
		static bool IsEmpty_Date(FDateRange const& Range) { return Range.IsEmpty(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Date", meta = (DisplayName = "Size (Date)"))
		static FTimespan Size_Date(FDateRange const& Range) { return Range.Size<FTimespan>(); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Date", meta = (DisplayName = "Split (Date)"))
		static TArray<FDateRange> Split_Date(FDateRange const& Range, FDateTime InElement) { return Range.Split(InElement); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Date", meta = (DisplayName = "Difference (Date)"))
		static TArray<FDateRange> Difference_Date(FDateRange const& Range, FDateRange OtherRange) { return FDateRange::Difference(Range, OtherRange); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Date", meta = (DisplayName = "Hull (Date)"))
		static FDateRange Hull_Date(FDateRange const& Range, FDateRange OtherRange) { return FDateRange::Hull(Range, OtherRange); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Date", meta = (DisplayName = "Intersection (Date)"))
		static FDateRange Intersection_Date(TArray<FDateRange> const& Ranges) { return FDateRange::Intersection(Ranges); }
	UFUNCTION(BlueprintPure, Category = "ES|Utils|Range|Date", meta = (DisplayName = "Union (Date)"))
		static TArray<FDateRange> Union_Date(FDateRange const& Range, FDateRange OtherRange) { return FDateRange::Union(Range, OtherRange); }
#pragma endregion 



};
