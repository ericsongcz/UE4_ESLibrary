// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateRange;
struct FDateTime;
struct FTimespan;
struct FInt32Range;
struct FFloatRange;
struct FVector;
class UUnrealTinyXmlDocument;
enum class EEasingType : uint8;
class USceneComponent;
class APlayerController;
class AActor;
struct FBox2D;
struct FVector2D;
struct FRotator;
struct FLinearColor;
struct FColor;
class USoundWave;
class ULevelStreamingDynamic;
class UObject;
struct FLevelStreamInstanceInfo;
class UUserWidget;
class UPrimitiveComponent;
class APawn;
class UNavigationQueryFilter;
class UTextureRenderTarget2D;
class UTexture2D;
enum class EJoyImageFormats : uint8;
class AExeActor;
enum class DirType : uint8;
class USaveGame;
struct FHitResult;
class UPhysicalMaterial;
class USplineComponent;
class UStaticMesh;
class UMaterialInterface;
struct FTransform;
class USplineMeshComponent;
class UActorComponent;
class UCheckBox;
struct FCheckBoxStyle;
enum class ECheckBoxState : uint8;
class UPanelWidget;
class UTextBlock;
struct FFontOutlineSettings;
class UWidget;
struct FInputActionKeyMapping;
struct FInputAxisKeyMapping;
class UInputSettings;
struct FKey;
enum class EExtraSwitch : uint8;
class AGameMode;
struct FSlateColor;
class ULevel;
enum class EPlatformType : uint8;
struct FIntPoint;
struct FQuat;
enum class EN_Match : uint8;
enum class EN_NotEqual : uint8;
enum class EN_Equals : uint8;
enum class EN_IfThenElse : uint8;
class UDataTable;
class UTexture;
#ifdef ESLIBRARY_ESLibraryBPLibrary_generated_h
#error "ESLibraryBPLibrary.generated.h already included, missing '#pragma once' in ESLibraryBPLibrary.h"
#endif
#define ESLIBRARY_ESLibraryBPLibrary_generated_h

#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_135_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelStreamInstanceInfo_Statics; \
	ESLIBRARY_API static class UScriptStruct* StaticStruct();


template<> ESLIBRARY_API UScriptStruct* StaticStruct<struct FLevelStreamInstanceInfo>();

#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_227_DELEGATE \
struct _Script_ESLibrary_eventMKTweenDynamicDelegate_Parms \
{ \
	float TweenedValue; \
}; \
static inline void FMKTweenDynamicDelegate_DelegateWrapper(const FScriptDelegate& MKTweenDynamicDelegate, float TweenedValue) \
{ \
	_Script_ESLibrary_eventMKTweenDynamicDelegate_Parms Parms; \
	Parms.TweenedValue=TweenedValue; \
	MKTweenDynamicDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnion_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FDateRange,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FDateRange>*)Z_Param__Result=UESLibraryBPLibrary::Union_Date(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntersection_Date) \
	{ \
		P_GET_TARRAY_REF(FDateRange,Z_Param_Out_Ranges); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateRange*)Z_Param__Result=UESLibraryBPLibrary::Intersection_Date(Z_Param_Out_Ranges); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHull_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FDateRange,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateRange*)Z_Param__Result=UESLibraryBPLibrary::Hull_Date(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDifference_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FDateRange,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FDateRange>*)Z_Param__Result=UESLibraryBPLibrary::Difference_Date(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplit_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FDateTime,Z_Param_InElement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FDateRange>*)Z_Param__Result=UESLibraryBPLibrary::Split_Date(Z_Param_Out_Range,Z_Param_InElement); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSize_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UESLibraryBPLibrary::Size_Date(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEmpty_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsEmpty_Date(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDegenerate_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsDegenerate_Date(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasUpperBound_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::HasUpperBound_Date(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasLowerBound_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::HasLowerBound_Date(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContiguous_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FDateRange,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Contiguous_Date(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContains_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FDateRange,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Contains_Date(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpperBoundValue_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UESLibraryBPLibrary::GetUpperBoundValue_Date(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLowerBoundValue_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UESLibraryBPLibrary::GetLowerBoundValue_Date(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnion_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_GET_STRUCT(FInt32Range,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FInt32Range>*)Z_Param__Result=UESLibraryBPLibrary::Union_Int(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntersection_Int) \
	{ \
		P_GET_TARRAY_REF(FInt32Range,Z_Param_Out_Ranges); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInt32Range*)Z_Param__Result=UESLibraryBPLibrary::Intersection_Int(Z_Param_Out_Ranges); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHull_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_GET_STRUCT(FInt32Range,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInt32Range*)Z_Param__Result=UESLibraryBPLibrary::Hull_Int(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDifference_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_GET_STRUCT(FInt32Range,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FInt32Range>*)Z_Param__Result=UESLibraryBPLibrary::Difference_Int(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplit_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InElement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FInt32Range>*)Z_Param__Result=UESLibraryBPLibrary::Split_Int(Z_Param_Out_Range,Z_Param_InElement); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSize_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::Size_Int(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEmpty_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsEmpty_Int(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDegenerate_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsDegenerate_Int(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasUpperBound_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::HasUpperBound_Int(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasLowerBound_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::HasLowerBound_Int(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContiguous_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_GET_STRUCT(FInt32Range,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Contiguous_Int(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContains_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_GET_STRUCT(FInt32Range,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Contains_Int(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpperBoundValue_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::GetUpperBoundValue_Int(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLowerBoundValue_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::GetLowerBoundValue_Int(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnion_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FFloatRange,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FFloatRange>*)Z_Param__Result=UESLibraryBPLibrary::Union_Float(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntersection_Float) \
	{ \
		P_GET_TARRAY_REF(FFloatRange,Z_Param_Out_Ranges); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFloatRange*)Z_Param__Result=UESLibraryBPLibrary::Intersection_Float(Z_Param_Out_Ranges); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHull_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FFloatRange,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFloatRange*)Z_Param__Result=UESLibraryBPLibrary::Hull_Float(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDifference_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FFloatRange,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FFloatRange>*)Z_Param__Result=UESLibraryBPLibrary::Difference_Float(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplit_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InElement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FFloatRange>*)Z_Param__Result=UESLibraryBPLibrary::Split_Float(Z_Param_Out_Range,Z_Param_InElement); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSize_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Size_Float(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEmpty_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsEmpty_Float(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDegenerate_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsDegenerate_Float(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasUpperBound_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::HasUpperBound_Float(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasLowerBound_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::HasLowerBound_Float(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContiguous_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FFloatRange,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Contiguous_Float(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContains_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FFloatRange,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Contains_Float(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpperBoundValue_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::GetUpperBoundValue_Float(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLowerBoundValue_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::GetLowerBoundValue_Float(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_vf) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Divide_vf(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_vf) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Multiply_vf(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_vf) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Subtract_vf(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_vf) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Add_vf(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_vi) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Divide_vi(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_vi) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Multiply_vi(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_vi) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Subtract_vi(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_vi) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Add_vi(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_v) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Divide_v(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_v) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Multiply_v(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_v) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Subtract_v(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_v) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Add_v(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_fi) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Divide_fi(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_fi) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Multiply_fi(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_fi) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Subtract_fi(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_fi) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Add_fi(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_f) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Divide_f(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_f) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Multiply_f(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_f) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Subtract_f(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_f) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Add_f(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_if) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::Divide_if(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_if) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::Multiply_if(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_if) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::Subtract_if(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_if) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::Add_if(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_i) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::Divide_i(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_i) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::Multiply_i(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_i) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::Subtract_i(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_i) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::Add_i(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewXmlDocument) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUnrealTinyXmlDocument**)Z_Param__Result=UESLibraryBPLibrary::NewXmlDocument(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseBounceOutIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseBounceOutIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseElasticOutIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseElasticOutIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseBackOutIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseBackOutIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseCircOutIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseCircOutIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseExpoOutIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseExpoOutIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuintOutIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuintOutIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuartOutIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuartOutIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseCubicOutIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseCubicOutIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuadOutIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuadOutIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseSineOutIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseSineOutIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseBounceInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseBounceInOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseBounceOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseBounceOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseBounceIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseBounceIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseElasticInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseElasticInOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseElasticOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseElasticOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseElasticIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseElasticIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseBackInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseBackInOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseBackOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseBackOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseBackIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseBackIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseCircInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseCircInOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseCircOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseCircOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseCircIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseCircIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseExpoInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseExpoInOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseExpoOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseExpoOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseExpoIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseExpoIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuintInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuintInOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuintOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuintOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuintIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuintIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuartInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuartInOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuartOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuartOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuartIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuartIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseCubicInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseCubicInOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseCubicOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseCubicOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseCubicIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseCubicIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuadInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuadInOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuadOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuadOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuadIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuadIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseSineInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseSineInOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseSineOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseSineOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseSineIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseSineIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseLinear) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseLinear(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseInterpolate) \
	{ \
		P_GET_ENUM(EEasingType,Z_Param_EaseType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseInterpolate(EEasingType(Z_Param_EaseType),Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWorldPointIsInsideBox) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxCenter); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::WorldPointIsInsideBox(Z_Param_Out_WorldPoint,Z_Param_Out_BoxCenter,Z_Param_Out_BoxExtents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllChildren) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_parentComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::RemoveAllChildren(Z_Param_parentComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorScreenBox) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Controller); \
		P_GET_OBJECT(AActor,Z_Param_TargetActor); \
		P_GET_UBOOL(Z_Param_bOnlyCollidingComponents); \
		P_GET_UBOOL(Z_Param_bScaleByDPI); \
		P_GET_STRUCT_REF(FBox2D,Z_Param_Out_Box); \
		P_GET_UBOOL_REF(Z_Param_Out_bAllProjectedSuccessfully); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::GetActorScreenBox(Z_Param_Controller,Z_Param_TargetActor,Z_Param_bOnlyCollidingComponents,Z_Param_bScaleByDPI,Z_Param_Out_Box,Z_Param_Out_bAllProjectedSuccessfully); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVectorIsNearlyZero) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::VectorIsNearlyZero(Z_Param_Out_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralFBox2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Min); \
		P_GET_STRUCT(FVector2D,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBox2D*)Z_Param__Result=UESLibraryBPLibrary::MakeLiteralFBox2D(Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMinAndMaxOfFloatArray) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_Floats); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Min); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::MinAndMaxOfFloatArray(Z_Param_Out_Floats,Z_Param_Out_Min,Z_Param_Out_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxIntersectsBox) \
	{ \
		P_GET_STRUCT_REF(FBox2D,Z_Param_Out_Box); \
		P_GET_STRUCT_REF(FBox2D,Z_Param_Out_OtherBox); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::BoxIntersectsBox(Z_Param_Out_Box,Z_Param_Out_OtherBox); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxIsInsideBox) \
	{ \
		P_GET_STRUCT_REF(FBox2D,Z_Param_Out_Box); \
		P_GET_STRUCT_REF(FBox2D,Z_Param_Out_OtherBox); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::BoxIsInsideBox(Z_Param_Out_Box,Z_Param_Out_OtherBox); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointIsInsideBox) \
	{ \
		P_GET_STRUCT_REF(FBox2D,Z_Param_Out_Box); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Point); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::PointIsInsideBox(Z_Param_Out_Box,Z_Param_Out_Point); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRepeatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_T); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Length); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::RepeatFloat(Z_Param_T,Z_Param_Length); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeltaAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::DeltaAngle(Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveTowards) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::MoveTowards(Z_Param_From,Z_Param_To,Z_Param_MaxDelta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveTowardsAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::MoveTowardsAngle(Z_Param_From,Z_Param_To,Z_Param_MaxDelta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveTowardsRotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_From); \
		P_GET_STRUCT(FRotator,Z_Param_To); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDistanceDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UESLibraryBPLibrary::MoveTowardsRotator(Z_Param_From,Z_Param_To,Z_Param_MaxDistanceDelta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveTowardsVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_From); \
		P_GET_STRUCT(FVector,Z_Param_To); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDistanceDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::MoveTowardsVector(Z_Param_From,Z_Param_To,Z_Param_MaxDistanceDelta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasRuntimeCooking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::HasRuntimeCooking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertLinearColors) \
	{ \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_LinearColors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FColor>*)Z_Param__Result=UESLibraryBPLibrary::ConvertLinearColors(Z_Param_Out_LinearColors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActorWithinFrustum) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_RefActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsActorWithinFrustum(Z_Param_RefActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasActorRenderedRecently) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_RefActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRecentTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::WasActorRenderedRecently(Z_Param_RefActor,Z_Param_MaxRecentTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorLastRenderTime) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_RefActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::GetActorLastRenderTime(Z_Param_RefActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMousePosition) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PosX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PosY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::SetMousePosition(Z_Param_PC,Z_Param_Out_PosX,Z_Param_Out_PosY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadWaveDataFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundWave**)Z_Param__Result=UESLibraryBPLibrary::LoadWaveDataFromFile(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadOggDataFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundWave**)Z_Param__Result=UESLibraryBPLibrary::LoadOggDataFromFile(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadStreamingLevel) \
	{ \
		P_GET_OBJECT(ULevelStreamingDynamic,Z_Param_LevelInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::UnloadStreamingLevel(Z_Param_LevelInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideStreamingLevel) \
	{ \
		P_GET_OBJECT(ULevelStreamingDynamic,Z_Param_LevelInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::HideStreamingLevel(Z_Param_LevelInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFromStreamingLevels) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FLevelStreamInstanceInfo,Z_Param_Out_LevelInstanceInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::RemoveFromStreamingLevels(Z_Param_WorldContextObject,Z_Param_Out_LevelInstanceInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToStreamingLevels) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FLevelStreamInstanceInfo,Z_Param_Out_LevelInstanceInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddToStreamingLevels(Z_Param_WorldContextObject,Z_Param_Out_LevelInstanceInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWidgetOfClassInViewport) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_WidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsWidgetOfClassInViewport(Z_Param_WorldContextObject,Z_Param_WidgetClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatePrimitiveComponent) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_CompClass); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=UESLibraryBPLibrary::CreatePrimitiveComponent(Z_Param_WorldContextObject,Z_Param_CompClass,Z_Param_Name,Z_Param_Location,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_TheObjectClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UESLibraryBPLibrary::CreateObject(Z_Param_WorldContextObject,Z_Param_TheObjectClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_AI_MoveToWithFilter) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Dest); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AcceptanceRadius); \
		P_GET_UBOOL(Z_Param_bProjectDestinationToNavigation); \
		P_GET_UBOOL(Z_Param_bStopOnOverlap); \
		P_GET_UBOOL(Z_Param_bCanStrafe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EPathFollowingRequestResult::Type>*)Z_Param__Result=UESLibraryBPLibrary::Victory_AI_MoveToWithFilter(Z_Param_Pawn,Z_Param_Out_Dest,Z_Param_FilterClass,Z_Param_AcceptanceRadius,Z_Param_bProjectDestinationToNavigation,Z_Param_bStopOnOverlap,Z_Param_bCanStrafe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTextureRenderTarget2D) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Gamma); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTextureRenderTarget2D**)Z_Param__Result=UESLibraryBPLibrary::CreateTextureRenderTarget2D(Z_Param_Width,Z_Param_Height,Z_Param_ClearColor,Z_Param_Gamma); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_GetPixelsArrayFromT2D) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_T2D); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_TextureWidth); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_TextureHeight); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_PixelArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Victory_GetPixelsArrayFromT2D(Z_Param_T2D,Z_Param_Out_TextureWidth,Z_Param_Out_TextureHeight,Z_Param_Out_PixelArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_GetPixelFromT2D) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_T2D); \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_PixelColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Victory_GetPixelFromT2D(Z_Param_T2D,Z_Param_X,Z_Param_Y,Z_Param_Out_PixelColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_SavePixels) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_ImagePixels); \
		P_GET_UBOOL(Z_Param_SaveAsBMP); \
		P_GET_UBOOL(Z_Param_sRGB); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Victory_SavePixels(Z_Param_FullFilePath,Z_Param_Width,Z_Param_Height,Z_Param_Out_ImagePixels,Z_Param_SaveAsBMP,Z_Param_sRGB,Z_Param_Out_ErrorString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_Get_Pixel) \
	{ \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Pixels); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ImageHeight); \
		P_GET_PROPERTY(UIntProperty,Z_Param_x); \
		P_GET_PROPERTY(UIntProperty,Z_Param_y); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_FoundColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Victory_Get_Pixel(Z_Param_Out_Pixels,Z_Param_ImageHeight,Z_Param_x,Z_Param_y,Z_Param_Out_FoundColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFile_Pixels) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_GET_ENUM(EJoyImageFormats,Z_Param_ImageFormat); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Width); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Height); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_OutPixels); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UESLibraryBPLibrary::Victory_LoadTexture2D_FromFile_Pixels(Z_Param_FullFilePath,EJoyImageFormats(Z_Param_ImageFormat),Z_Param_Out_IsValid,Z_Param_Out_Width,Z_Param_Out_Height,Z_Param_Out_OutPixels); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_GET_ENUM(EJoyImageFormats,Z_Param_ImageFormat); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Width); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UESLibraryBPLibrary::Victory_LoadTexture2D_FromFile(Z_Param_FullFilePath,EJoyImageFormats(Z_Param_ImageFormat),Z_Param_Out_IsValid,Z_Param_Out_Width,Z_Param_Out_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTexture2D_FromDDSFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UESLibraryBPLibrary::LoadTexture2D_FromDDSFile(Z_Param_FullFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__LogsDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::VictoryPaths__LogsDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__ScreenShotsDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::VictoryPaths__ScreenShotsDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__ConfigDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::VictoryPaths__ConfigDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__SavedDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::VictoryPaths__SavedDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__GameRootDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::VictoryPaths__GameRootDirectory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__WindowsNoEditorDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::VictoryPaths__WindowsNoEditorDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__Win64Dir_BinaryLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::VictoryPaths__Win64Dir_BinaryLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpen_URL_In_Web_Browser) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TheURL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Open_URL_In_Web_Browser(Z_Param_TheURL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRealWorldTime__GetDifferenceBetweenTimes) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PreviousTime1); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PreviousTime2); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Milliseconds); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Seconds); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Minutes); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Hours); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::RealWorldTime__GetDifferenceBetweenTimes(Z_Param_PreviousTime1,Z_Param_PreviousTime2,Z_Param_Out_Milliseconds,Z_Param_Out_Seconds,Z_Param_Out_Minutes,Z_Param_Out_Hours); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRealWorldTime__GetTimePassedSincePreviousTime) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PreviousTime); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Milliseconds); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Seconds); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Minutes); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Hours); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::RealWorldTime__GetTimePassedSincePreviousTime(Z_Param_PreviousTime,Z_Param_Out_Milliseconds,Z_Param_Out_Seconds,Z_Param_Out_Minutes,Z_Param_Out_Hours); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRealWorldTime__GetCurrentOSTime) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_MilliSeconds); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Seconds); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Minutes); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Hours12); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Hours24); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Day); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Month); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Year); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::RealWorldTime__GetCurrentOSTime(Z_Param_Out_MilliSeconds,Z_Param_Out_Seconds,Z_Param_Out_Minutes,Z_Param_Out_Hours12,Z_Param_Out_Hours24,Z_Param_Out_Day,Z_Param_Out_Month,Z_Param_Out_Year); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOperatingSystem__GetCurrentPlatform) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_Windows_); \
		P_GET_UBOOL_REF(Z_Param_Out_Mac); \
		P_GET_UBOOL_REF(Z_Param_Out_Linux); \
		P_GET_UBOOL_REF(Z_Param_Out_iOS); \
		P_GET_UBOOL_REF(Z_Param_Out_Android); \
		P_GET_UBOOL_REF(Z_Param_Out_Android_ARM); \
		P_GET_UBOOL_REF(Z_Param_Out_Android_Vulkan); \
		P_GET_UBOOL_REF(Z_Param_Out_PS4); \
		P_GET_UBOOL_REF(Z_Param_Out_XBoxOne); \
		P_GET_UBOOL_REF(Z_Param_Out_HTML5); \
		P_GET_UBOOL_REF(Z_Param_Out_Apple); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::OperatingSystem__GetCurrentPlatform(Z_Param_Out_Windows_,Z_Param_Out_Mac,Z_Param_Out_Linux,Z_Param_Out_iOS,Z_Param_Out_Android,Z_Param_Out_Android_ARM,Z_Param_Out_Android_Vulkan,Z_Param_Out_PS4,Z_Param_Out_XBoxOne,Z_Param_Out_HTML5,Z_Param_Out_Apple); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectPath) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UESLibraryBPLibrary::GetObjectPath(Z_Param_Obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadObjectFromAssetPath) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ObjectClass); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Path); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UESLibraryBPLibrary::LoadObjectFromAssetPath(Z_Param_ObjectClass,Z_Param_Path,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformVectorToActorSpace) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->TransformVectorToActorSpace(Z_Param_Actor,Z_Param_Out_InVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformVectorToActorSpaceAngle) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->TransformVectorToActorSpaceAngle(Z_Param_Actor,Z_Param_Out_InVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_String) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::VictorySetCustomConfigVar_String(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Color) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT(FLinearColor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::VictorySetCustomConfigVar_Color(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Rotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT(FRotator,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::VictorySetCustomConfigVar_Rotator(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Vector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::VictorySetCustomConfigVar_Vector(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Float) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::VictorySetCustomConfigVar_Float(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Int) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::VictorySetCustomConfigVar_Int(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Bool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::VictorySetCustomConfigVar_Bool(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Vector2D) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT(FVector2D,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::VictorySetCustomConfigVar_Vector2D(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenExe) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_SomeInWorldObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AExeActor**)Z_Param__Result=UESLibraryBPLibrary::OpenExe(Z_Param_SomeInWorldObject,Z_Param_Path,Z_Param_Args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamePath) \
	{ \
		P_GET_ENUM(DirType,Z_Param_E); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::GetGamePath(DirType(Z_Param_E)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteFileII) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::DeleteFileII(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReturnString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::WriteFile(Z_Param_FilePath,Z_Param_ReturnString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ReturnString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::ReadFile(Z_Param_FilePath,Z_Param_Out_ReturnString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteCustomPathConfig) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ValueName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_WriteString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::WriteCustomPathConfig(Z_Param_FilePath,Z_Param_SectionName,Z_Param_ValueName,Z_Param_WriteString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadCustomPathConfig) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ValueName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ReturnString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::ReadCustomPathConfig(Z_Param_FilePath,Z_Param_SectionName,Z_Param_ValueName,Z_Param_Out_ReturnString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteConfig) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ValueName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReturnValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::WriteConfig(Z_Param_SectionName,Z_Param_ValueName,Z_Param_ReturnValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadConfig) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ValueName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ReturnValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::ReadConfig(Z_Param_SectionName,Z_Param_ValueName,Z_Param_Out_ReturnValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsVaildPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsVaildPath(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTexture2DFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Width); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UESLibraryBPLibrary::LoadTexture2DFromFile(Z_Param_FilePath,Z_Param_Out_IsValid,Z_Param_Out_Width,Z_Param_Out_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGameFromSlotCompressed) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USaveGame**)Z_Param__Result=UESLibraryBPLibrary::LoadGameFromSlotCompressed(Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGameToSlotCompressed) \
	{ \
		P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::SaveGameToSlotCompressed(Z_Param_SaveGameObject,Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitTraceEnd) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetHitTraceEnd(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitTraceStart) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetHitTraceStart(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitFaceIndex) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::GetHitFaceIndex(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitItem) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::GetHitItem(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitBoneName) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UESLibraryBPLibrary::GetHitBoneName(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitComponent) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=UESLibraryBPLibrary::GetHitComponent(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitActor) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UESLibraryBPLibrary::GetHitActor(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitPhysMat) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPhysicalMaterial**)Z_Param__Result=UESLibraryBPLibrary::GetHitPhysMat(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitImpactNormal) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetHitImpactNormal(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitNormal) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetHitNormal(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitImpactPoint) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetHitImpactPoint(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitLocation) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetHitLocation(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitDistance) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::GetHitDistance(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitTime) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::GetHitTime(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitInitialOverlap) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::GetHitInitialOverlap(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitBlockingHit) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::GetHitBlockingHit(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentReplayCurrentTimeInSeconds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::GetCurrentReplayCurrentTimeInSeconds(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentReplayTotalTimeInSeconds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::GetCurrentReplayTotalTimeInSeconds(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReplayPlaybackSpeed) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::GetReplayPlaybackSpeed(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReplayPlaybackSpeed) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewReplaySpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetReplayPlaybackSpeed(Z_Param_WorldContextObject,Z_Param_NewReplaySpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReplayPausedState) \
	{ \
		P_GET_UBOOL(Z_Param_NewState); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetReplayPausedState(Z_Param_NewState,Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJumpToTimeInReplay) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ReplayTime); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::JumpToTimeInReplay(Z_Param_ReplayTime,Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddUserToReplay) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddUserToReplay(Z_Param_WorldContextObject,Z_Param_UserString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReplay) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::PlayReplay(Z_Param_WorldContextObject,Z_Param_ReplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveReplayCheckpoint) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SaveReplayCheckpoint(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRecordingReplay) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::StopRecordingReplay(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecordingReplay) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FriendlyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::StartRecordingReplay(Z_Param_WorldContextObject,Z_Param_ReplayName,Z_Param_FriendlyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildSplineMeshesAlongSpline) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_OBJECT(UStaticMesh,Z_Param_SplineMesh); \
		P_GET_TARRAY(UMaterialInterface*,Z_Param_OptionalMaterials); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RelativeTransform); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ForwardAxis); \
		P_GET_UBOOL(Z_Param_bAffectNavigation); \
		P_GET_UBOOL(Z_Param_bGenerateOverlapEvents); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CollisionEnabled); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ObjectType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Mobility); \
		P_GET_STRUCT(FVector2D,Z_Param_StartScale); \
		P_GET_STRUCT(FVector2D,Z_Param_EndScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<USplineMeshComponent*>*)Z_Param__Result=UESLibraryBPLibrary::BuildSplineMeshesAlongSpline(Z_Param_SplineComp,Z_Param_SplineMesh,Z_Param_OptionalMaterials,Z_Param_Out_RelativeTransform,ESplineMeshAxis::Type(Z_Param_ForwardAxis),Z_Param_bAffectNavigation,Z_Param_bGenerateOverlapEvents,ECollisionEnabled::Type(Z_Param_CollisionEnabled),EObjectTypeQuery(Z_Param_ObjectType),EComponentMobility::Type(Z_Param_Mobility),Z_Param_StartScale,Z_Param_EndScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindLocationAndRotationAtSplineInputKey) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InKey); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::FindLocationAndRotationAtSplineInputKey(Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_SplineComp,Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindScaleAtSplineInputKey) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::FindScaleAtSplineInputKey(Z_Param_SplineComp,Z_Param_InKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRollAtSplineInputKey) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InKey); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::FindRollAtSplineInputKey(Z_Param_SplineComp,Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindTransformAtSplineInputKey) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InKey); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UESLibraryBPLibrary::FindTransformAtSplineInputKey(Z_Param_SplineComp,Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRightVectorAtSplineInputKey) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InKey); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::FindRightVectorAtSplineInputKey(Z_Param_SplineComp,Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindUpVectorAtSplineInputKey) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InKey); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::FindUpVectorAtSplineInputKey(Z_Param_SplineComp,Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRotationAtSplineInputKey) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InKey); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UESLibraryBPLibrary::FindRotationAtSplineInputKey(Z_Param_SplineComp,Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindDirectionAtSplineInputKey) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InKey); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::FindDirectionAtSplineInputKey(Z_Param_SplineComp,Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindTangentAtSplineInputKey) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InKey); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::FindTangentAtSplineInputKey(Z_Param_SplineComp,Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindLocationAtSplineInputKey) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InKey); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::FindLocationAtSplineInputKey(Z_Param_SplineComp,Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSnapSingleSplinePointToGround) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SplinePointToSnap); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TraceDistance); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_UBOOL(Z_Param_bDrawDebug); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawDebugTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SnapSingleSplinePointToGround(Z_Param_SplineComp,Z_Param_SplinePointToSnap,Z_Param_TraceDistance,Z_Param_bTraceComplex,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_Out_ActorsToIgnore,Z_Param_bDrawDebug,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawDebugTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSnapAllSplinePointsToGround) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TraceDistance); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_UBOOL(Z_Param_bDrawDebug); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawDebugTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SnapAllSplinePointsToGround(Z_Param_SplineComp,Z_Param_TraceDistance,Z_Param_bTraceComplex,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_Out_ActorsToIgnore,Z_Param_bDrawDebug,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawDebugTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastSplinePoint) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::GetLastSplinePoint(Z_Param_SplineComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidSplinePoint) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsValidSplinePoint(Z_Param_SplineComp,Z_Param_InPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSnapActorToGround) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TraceDistance); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_GroundChannel); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_STRUCT(FVector,Z_Param_OptionalOffset); \
		P_GET_UBOOL(Z_Param_bDrawDebug); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawDebugTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::SnapActorToGround(Z_Param_InActor,Z_Param_TraceDistance,Z_Param_bTraceComplex,ETraceTypeQuery(Z_Param_GroundChannel),Z_Param_Out_ActorsToIgnore,Z_Param_OptionalOffset,Z_Param_bDrawDebug,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawDebugTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugCoordinateArrowsAtComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_InComponent); \
		P_GET_STRUCT(FVector,Z_Param_Offset); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ArrowLength); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ArrowSize); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ArrowThickness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DebugDisplayTime); \
		P_GET_STRUCT(FLinearColor,Z_Param_ForwardColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_RightColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_UpColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::DrawDebugCoordinateArrowsAtComponent(Z_Param_InComponent,Z_Param_Offset,Z_Param_ArrowLength,Z_Param_ArrowSize,Z_Param_ArrowThickness,Z_Param_DebugDisplayTime,Z_Param_ForwardColor,Z_Param_RightColor,Z_Param_UpColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestActorToPoint) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_Actors); \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_UBOOL(Z_Param_Inverse); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UESLibraryBPLibrary::GetClosestActorToPoint(Z_Param_Actors,Z_Param_Point,Z_Param_Inverse); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestComponentToPoint) \
	{ \
		P_GET_TARRAY(UPrimitiveComponent*,Z_Param_Comps); \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_UBOOL(Z_Param_Inverse); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=UESLibraryBPLibrary::GetClosestComponentToPoint(Z_Param_Comps,Z_Param_Point,Z_Param_Inverse); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindActorComponentByName) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToSearchIn); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CompName); \
		P_GET_OBJECT_REF(UActorComponent,Z_Param_Out_FoundComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::FindActorComponentByName(Z_Param_ActorToSearchIn,Z_Param_CompName,Z_Param_Out_FoundComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSceneComponentByName) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToSearchIn); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CompName); \
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_FoundComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::FindSceneComponentByName(Z_Param_ActorToSearchIn,Z_Param_CompName,Z_Param_Out_FoundComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentCheckboxImage) \
	{ \
		P_GET_OBJECT(UCheckBox,Z_Param_InCheckbox); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UESLibraryBPLibrary::GetCurrentCheckboxImage(Z_Param_InCheckbox); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCheckboxStyleToImage) \
	{ \
		P_GET_STRUCT(FCheckBoxStyle,Z_Param_InStyle); \
		P_GET_OBJECT(UObject,Z_Param_InImage); \
		P_GET_ENUM(ECheckBoxState,Z_Param_StateToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FCheckBoxStyle*)Z_Param__Result=UESLibraryBPLibrary::SetCheckboxStyleToImage(Z_Param_InStyle,Z_Param_InImage,ECheckBoxState(Z_Param_StateToSet)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidChildIndexInPanel) \
	{ \
		P_GET_OBJECT(UPanelWidget,Z_Param_Target); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InIndexToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsValidChildIndexInPanel(Z_Param_Target,Z_Param_InIndexToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastChildIndex) \
	{ \
		P_GET_OBJECT(UPanelWidget,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::GetLastChildIndex(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFontSize) \
	{ \
		P_GET_OBJECT(UTextBlock,Z_Param_Target); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetFontSize(Z_Param_Target,Z_Param_NewSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFontTypeface) \
	{ \
		P_GET_OBJECT(UTextBlock,Z_Param_Target); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewTypeface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetFontTypeface(Z_Param_Target,Z_Param_NewTypeface); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFontOutline) \
	{ \
		P_GET_OBJECT(UTextBlock,Z_Param_Target); \
		P_GET_STRUCT(FFontOutlineSettings,Z_Param_NewOutline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetFontOutline(Z_Param_Target,Z_Param_NewOutline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFontMaterial) \
	{ \
		P_GET_OBJECT(UTextBlock,Z_Param_Target); \
		P_GET_OBJECT(UObject,Z_Param_NewMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetFontMaterial(Z_Param_Target,Z_Param_NewMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFontFamily) \
	{ \
		P_GET_OBJECT(UTextBlock,Z_Param_Target); \
		P_GET_OBJECT(UObject,Z_Param_NewFamily); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetFontFamily(Z_Param_Target,Z_Param_NewFamily); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllWidgetsOfTypeInUserWidget) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_ParentWidget); \
		P_GET_OBJECT(UClass,Z_Param_WidgetClass); \
		P_GET_TARRAY_REF(UWidget*,Z_Param_Out_FoundWidgets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::GetAllWidgetsOfTypeInUserWidget(Z_Param_ParentWidget,Z_Param_WidgetClass,Z_Param_Out_FoundWidgets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllUserFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::ClearAllUserFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllSubWidgetsInParent) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_ParentWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UWidget*>*)Z_Param__Result=UESLibraryBPLibrary::GetAllSubWidgetsInParent(Z_Param_ParentWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWidgetInFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=UESLibraryBPLibrary::GetWidgetInFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquals_InputActionKeyMapping) \
	{ \
		P_GET_STRUCT(FInputActionKeyMapping,Z_Param_A); \
		P_GET_STRUCT(FInputActionKeyMapping,Z_Param_B); \
		P_GET_UBOOL(Z_Param_bNameOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Equals_InputActionKeyMapping(Z_Param_A,Z_Param_B,Z_Param_bNameOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquals_InputAxisKeyMapping) \
	{ \
		P_GET_STRUCT(FInputAxisKeyMapping,Z_Param_A); \
		P_GET_STRUCT(FInputAxisKeyMapping,Z_Param_B); \
		P_GET_UBOOL(Z_Param_bNameOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Equals_InputAxisKeyMapping(Z_Param_A,Z_Param_B,Z_Param_bNameOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearInputMappings) \
	{ \
		P_GET_OBJECT(UInputSettings,Z_Param_InSettings); \
		P_GET_UBOOL(Z_Param_bForceRebuildKeymaps); \
		P_GET_UBOOL(Z_Param_bSaveKeyMappings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::ClearInputMappings(Z_Param_InSettings,Z_Param_bForceRebuildKeymaps,Z_Param_bSaveKeyMappings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStaticMaterials) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_InMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UMaterialInterface*>*)Z_Param__Result=UESLibraryBPLibrary::GetStaticMaterials(Z_Param_InMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastMaterialIndex) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::GetLastMaterialIndex(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAxisValueOfInputs) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController); \
		P_GET_STRUCT(FKey,Z_Param_PositiveKey); \
		P_GET_STRUCT(FKey,Z_Param_NegativeKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::GetAxisValueOfInputs(Z_Param_InPlayerController,Z_Param_PositiveKey,Z_Param_NegativeKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirectionalInputsFromDirectionalKeys) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController); \
		P_GET_STRUCT(FKey,Z_Param_UpDirectional); \
		P_GET_STRUCT(FKey,Z_Param_DownDirectional); \
		P_GET_STRUCT(FKey,Z_Param_RightDirectional); \
		P_GET_STRUCT(FKey,Z_Param_LeftDirectional); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UESLibraryBPLibrary::GetDirectionalInputsFromDirectionalKeys(Z_Param_InPlayerController,Z_Param_UpDirectional,Z_Param_DownDirectional,Z_Param_RightDirectional,Z_Param_LeftDirectional); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMarkRenderDity_Comps) \
	{ \
		P_GET_TARRAY(USceneComponent*,Z_Param_InComps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::MarkRenderDity_Comps(Z_Param_InComps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindFirstInstanceOfActorType) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_SearchClass); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_FoundActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::FindFirstInstanceOfActorType(Z_Param_WorldContextObject,Z_Param_SearchClass,Z_Param_Out_FoundActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberOfActorsOfType) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_SearchClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::GetNumberOfActorsOfType(Z_Param_WorldContextObject,Z_Param_SearchClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverlappingAnyActors) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComp); \
		P_GET_UBOOL(Z_Param_bExcludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsOverlappingAnyActors(Z_Param_InComp,Z_Param_bExcludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreObjectsValid) \
	{ \
		P_GET_TARRAY(UObject*,Z_Param_Objects); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::AreObjectsValid(Z_Param_Objects); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMarkRenderDirty) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_InComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::MarkRenderDirty(Z_Param_InComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRotatorZero) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_InRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsRotatorZero(Z_Param_InRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSocketRelativeRotation) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Target); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UESLibraryBPLibrary::GetSocketRelativeRotation(Z_Param_Target,Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSocketRelativeLocation) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Target); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetSocketRelativeLocation(Z_Param_Target,Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularVelocityInRadiansToComponentBody) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetAngularVelocityInRadiansToComponentBody(Z_Param_InComponent,Z_Param_Out_NewAngVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearVelocityToComponentBody) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetLinearVelocityToComponentBody(Z_Param_InComponent,Z_Param_Out_NewVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAngularImpulseInRadiansToComponentBody) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Impulse); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddAngularImpulseInRadiansToComponentBody(Z_Param_InComponent,Z_Param_Out_Impulse,Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTorqueInRadiansToComponentBody) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Torque); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddTorqueInRadiansToComponentBody(Z_Param_InComponent,Z_Param_Out_Torque,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddImpulseToComponentBody) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Impulse); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddImpulseToComponentBody(Z_Param_InComponent,Z_Param_Out_Impulse,Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddImpulseAtPositionToComponentBody) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Impulse); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddImpulseAtPositionToComponentBody(Z_Param_InComponent,Z_Param_Out_Impulse,Z_Param_Out_Position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForceAtPositionToComponentBody) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Force); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_GET_UBOOL(Z_Param_bLocalSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddForceAtPositionToComponentBody(Z_Param_InComponent,Z_Param_Out_Force,Z_Param_Out_Position,Z_Param_bLocalSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForceToComponentBody) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Force); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddForceToComponentBody(Z_Param_InComponent,Z_Param_Out_Force,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryGetPlayerControllerFromPawn) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_InPawn); \
		P_GET_ENUM_REF(EExtraSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerController**)Z_Param__Result=UESLibraryBPLibrary::TryGetPlayerControllerFromPawn(Z_Param_InPawn,(EExtraSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTrySetPlayerInputEnabled) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_InPawn); \
		P_GET_UBOOL(Z_Param_bIsEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::TrySetPlayerInputEnabled(Z_Param_InPawn,Z_Param_bIsEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputPriority) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewInputPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetInputPriority(Z_Param_InActor,Z_Param_NewInputPriority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputPriority) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::GetInputPriority(Z_Param_InActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerIP) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_InPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::GetPlayerIP(Z_Param_InPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerIP) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::GetServerIP(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerIpFromGamemode) \
	{ \
		P_GET_OBJECT(AGameMode,Z_Param_InGamemode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::GetServerIpFromGamemode(Z_Param_InGamemode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConnectedClientIPs) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UESLibraryBPLibrary::GetConnectedClientIPs(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEmpty_Name) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_SourceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsEmpty_Name(Z_Param_Out_SourceName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEmpty_String) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsEmpty_String(Z_Param_SourceString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSpaces) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::RemoveSpaces(Z_Param_SourceString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceUnderscore) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::ReplaceUnderscore(Z_Param_SourceString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrintStringWithCategory) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InCategory); \
		P_GET_UBOOL(Z_Param_bPrintToScreen); \
		P_GET_UBOOL(Z_Param_bPrintToLog); \
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::PrintStringWithCategory(Z_Param_WorldContextObject,Z_Param_InString,Z_Param_InCategory,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseVerbosityOfMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InMessage); \
		P_GET_UBOOL(Z_Param_bIsError); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::IncreaseVerbosityOfMessage(Z_Param_InMessage,Z_Param_bIsError); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSortStrings) \
	{ \
		P_GET_TARRAY(FString,Z_Param_UnSortedStrings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UESLibraryBPLibrary::SortStrings(Z_Param_UnSortedStrings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectsOf) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_InType); \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_OutputObjects); \
		P_GET_UBOOL(Z_Param_bIsBlueprintClass); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFolder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::GetObjectsOf(Z_Param_InType,Z_Param_Out_OutputObjects,Z_Param_bIsBlueprintClass,Z_Param_InFolder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFileDir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::DeleteFile(Z_Param_InFileDir); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InDir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::DeleteDirectory(Z_Param_InDir); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubDirectories) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InDir); \
		P_GET_UBOOL(Z_Param_bDeepSearch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UESLibraryBPLibrary::GetSubDirectories(Z_Param_InDir,Z_Param_bDeepSearch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalAppDataDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::GetLocalAppDataDirectory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_CollisionChannelToObjectTypeQuery) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EObjectTypeQuery>*)Z_Param__Result=UESLibraryBPLibrary::Conv_CollisionChannelToObjectTypeQuery(ECollisionChannel(Z_Param_Channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_CollisionChannelsToObjectTypeQuerys) \
	{ \
		P_GET_TARRAY(TEnumAsByte<ECollisionChannel>,Z_Param_Channels); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ConvertedTypes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Conv_CollisionChannelsToObjectTypeQuerys(Z_Param_Channels,Z_Param_Out_ConvertedTypes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_LinearColorToSlateColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InLinearColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateColor*)Z_Param__Result=UESLibraryBPLibrary::Conv_LinearColorToSlateColor(Z_Param_InLinearColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClassFromAssetPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=UESLibraryBPLibrary::GetClassFromAssetPath(Z_Param_Path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllLevels) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(ULevel*,Z_Param_Out_Levels); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::GetAllLevels(Z_Param_WorldContextObject,Z_Param_Out_Levels); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsClassSameAs) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_A); \
		P_GET_OBJECT(UClass,Z_Param_ClassToCompare); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsClassSameAs(Z_Param_A,Z_Param_ClassToCompare); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreObjectsSameClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_A); \
		P_GET_OBJECT(UObject,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::AreObjectsSameClass(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalVolume) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InAmount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetGlobalVolume(Z_Param_WorldContextObject,Z_Param_InAmount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestExit) \
	{ \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::RequestExit(Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceCrash) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CrashMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::ForceCrash(Z_Param_CrashMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDesktopPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::DesktopPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIosPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IosPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAndroidPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::AndroidPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::SwitchPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execXboxOnePlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::XboxOnePlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPs4Platform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Ps4Platform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMacPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::MacPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinuxPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::LinuxPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWindowsRtArmPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::WindowsRtArmPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWindowsRtPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::WindowsRtPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWindows64Platform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Windows64Platform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWindows32Platform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Windows32Platform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWindowsPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::WindowsPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWithEditor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::WithEditor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShippingBuild) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::ShippingBuild(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTestBuild) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::TestBuild(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDevelopmentBuild) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::DevelopmentBuild(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugBuild) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::DebugBuild(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlatformType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EPlatformType*)Z_Param__Result=UESLibraryBPLibrary::GetPlatformType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchOnPlatformType) \
	{ \
		P_GET_ENUM_REF(EPlatformType,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SwitchOnPlatformType((EPlatformType&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGridSnapRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Rotator); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GridDeg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UESLibraryBPLibrary::GridSnapRotation(Z_Param_Rotator,Z_Param_GridDeg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotatorDifference) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UESLibraryBPLibrary::RotatorDifference(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClampToBounds) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_Min); \
		P_GET_STRUCT(FVector,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::ClampToBounds(Z_Param_Point,Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenterBetweenPoints) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_V1); \
		P_GET_STRUCT(FVector,Z_Param_V2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetCenterBetweenPoints(Z_Param_V1,Z_Param_V2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRoundVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::RoundVector(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClampVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Value); \
		P_GET_STRUCT(FVector2D,Z_Param_Min); \
		P_GET_STRUCT(FVector2D,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UESLibraryBPLibrary::ClampVector2D(Z_Param_Value,Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2D_Max) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UESLibraryBPLibrary::Vector2D_Max(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2D_Min) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UESLibraryBPLibrary::Vector2D_Min(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenterBetweenPoints2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_V1); \
		P_GET_STRUCT(FVector2D,Z_Param_V2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UESLibraryBPLibrary::GetCenterBetweenPoints2D(Z_Param_V1,Z_Param_V2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInRange) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Value); \
		P_GET_STRUCT(FVector2D,Z_Param_Min); \
		P_GET_STRUCT(FVector2D,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::InRange(Z_Param_Value,Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRound2DVector) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UESLibraryBPLibrary::Round2DVector(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNegate_Float) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Negate_Float(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSort_Float) \
	{ \
		P_GET_TARRAY(float,Z_Param_InArray); \
		P_GET_UBOOL(Z_Param_IsReversed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=UESLibraryBPLibrary::Sort_Float(Z_Param_InArray,Z_Param_IsReversed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomFloatInRange_Vector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InVector2D); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::RandomFloatInRange_Vector2D(Z_Param_InVector2D); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoopToRange_Float) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InValue); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LoopAt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::LoopToRange_Float(Z_Param_InValue,Z_Param_LoopAt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOneMinus) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::OneMinus(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNegate_Int) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::Negate_Int(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSort_Int) \
	{ \
		P_GET_TARRAY(int32,Z_Param_InArray); \
		P_GET_UBOOL(Z_Param_IsReversed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=UESLibraryBPLibrary::Sort_Int(Z_Param_InArray,Z_Param_IsReversed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomIntegerInRange_IntPoint) \
	{ \
		P_GET_STRUCT(FIntPoint,Z_Param_InIntPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::RandomIntegerInRange_IntPoint(Z_Param_InIntPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoopToRange_Int) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InValue); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LoopAt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::LoopToRange_Int(Z_Param_InValue,Z_Param_LoopAt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAccumulatedPerlinNoise3D) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Out); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Frequencies); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Amplitudes); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AccumulatedPerlinNoise3D(Z_Param_Out_Out,Z_Param_Out_Frequencies,Z_Param_Out_Amplitudes,Z_Param_X,Z_Param_Y,Z_Param_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAccumulatedPerlinNoise2D) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Out); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Frequencies); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Amplitudes); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AccumulatedPerlinNoise2D(Z_Param_Out_Out,Z_Param_Out_Frequencies,Z_Param_Out_Amplitudes,Z_Param_X,Z_Param_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAccumulatedPerlinNoise1D) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Out); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Frequencies); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Amplitudes); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AccumulatedPerlinNoise1D(Z_Param_Out_Out,Z_Param_Out_Frequencies,Z_Param_Out_Amplitudes,Z_Param_X); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerlinNoise3D) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Out); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Frequency); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amplitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::PerlinNoise3D(Z_Param_Out_Out,Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_Frequency,Z_Param_Amplitude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerlinNoise2D) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Out); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Frequency); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amplitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::PerlinNoise2D(Z_Param_Out_Out,Z_Param_X,Z_Param_Y,Z_Param_Frequency,Z_Param_Amplitude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerlinNoise1D) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Out); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Frequency); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amplitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::PerlinNoise1D(Z_Param_Out_Out,Z_Param_X,Z_Param_Frequency,Z_Param_Amplitude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOctavePerlinNoise3D) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Out); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Octaves); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Persistence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::OctavePerlinNoise3D(Z_Param_Out_Out,Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_Octaves,Z_Param_Persistence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOctavePerlinNoise2D) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Out); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Octaves); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Persistence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::OctavePerlinNoise2D(Z_Param_Out_Out,Z_Param_X,Z_Param_Y,Z_Param_Octaves,Z_Param_Persistence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOctavePerlinNoise1D) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Out); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Octaves); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Persistence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::OctavePerlinNoise1D(Z_Param_Out_Out,Z_Param_X,Z_Param_Octaves,Z_Param_Persistence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatToVector) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::QuatToVector(Z_Param_Out_Quat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInverse) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::Inverse(Z_Param_Out_Quat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpVector) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetUpVector(Z_Param_Out_Quat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRightVector) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetRightVector(Z_Param_Out_Quat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForwardVector) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetForwardVector(Z_Param_Out_Quat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindBetweenNormals) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal1); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::FindBetweenNormals(Z_Param_Out_Normal1,Z_Param_Out_Normal2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatAxisAngleDeg) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutAngleDeg); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAxis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::QuatAxisAngleDeg(Z_Param_Out_Quat,Z_Param_Out_OutAngleDeg,Z_Param_Out_OutAxis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatAxisAngleRad) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutAngleRad); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAxis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::QuatAxisAngleRad(Z_Param_Out_Quat,Z_Param_Out_OutAngleRad,Z_Param_Out_OutAxis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakTransformQuat) \
	{ \
		P_GET_STRUCT(FTransform,Z_Param_Transform); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_RotationQuat); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::BreakTransformQuat(Z_Param_Transform,Z_Param_Out_Location,Z_Param_Out_RotationQuat,Z_Param_Out_Scale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransformQuat) \
	{ \
		P_GET_STRUCT(FTransform,Z_Param_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::GetTransformQuat(Z_Param_Transform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetComponentWorldRotation) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Component); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutSweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetComponentWorldRotation(Z_Param_Component,Z_Param_Out_Quat,Z_Param_bSweep,Z_Param_Out_OutSweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetComponentRelativeRotation) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Component); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutSweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetComponentRelativeRotation(Z_Param_Component,Z_Param_Out_Quat,Z_Param_bSweep,Z_Param_Out_OutSweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorRotation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetActorRotation(Z_Param_Actor,Z_Param_Out_Quat,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorRelativeRotation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutSweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetActorRelativeRotation(Z_Param_Actor,Z_Param_Out_Quat,Z_Param_bSweep,Z_Param_Out_OutSweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddComponentWorldRotation) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Component); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutSweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddComponentWorldRotation(Z_Param_Component,Z_Param_Out_Quat,Z_Param_bSweep,Z_Param_Out_OutSweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddComponentRelativeRotation) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Component); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutSweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddComponentRelativeRotation(Z_Param_Component,Z_Param_Out_Quat,Z_Param_bSweep,Z_Param_Out_OutSweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddComponentLocalRotation) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Component); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutSweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddComponentLocalRotation(Z_Param_Component,Z_Param_Out_Quat,Z_Param_bSweep,Z_Param_Out_OutSweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddActorWorldRotation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutSweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddActorWorldRotation(Z_Param_Actor,Z_Param_Out_Quat,Z_Param_bSweep,Z_Param_Out_OutSweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddActorLocalRotation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutSweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddActorLocalRotation(Z_Param_Actor,Z_Param_Out_Quat,Z_Param_bSweep,Z_Param_Out_OutSweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatToString) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::QuatToString(Z_Param_Out_Quat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreQuatsEqual) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::AreQuatsEqual(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatDivFloatScale) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::QuatDivFloatScale(Z_Param_Out_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatMultiplyFloatScale) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::QuatMultiplyFloatScale(Z_Param_Out_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatMultiplyQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::QuatMultiplyQuat(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatMinusQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::QuatMinusQuat(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatPlusQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::QuatPlusQuat(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatToEulerDeg) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::QuatToEulerDeg(Z_Param_Out_Quat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEulerDegToQuat) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Euler); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::EulerDegToQuat(Z_Param_Euler); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAngleBetweenQuatsDeg) \
	{ \
		P_GET_STRUCT(FQuat,Z_Param_A); \
		P_GET_STRUCT(FQuat,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::AngleBetweenQuatsDeg(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAngleBetweenQuatsRad) \
	{ \
		P_GET_STRUCT(FQuat,Z_Param_A); \
		P_GET_STRUCT(FQuat,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::AngleBetweenQuatsRad(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAngleBetweenDirectionVectorsDeg) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::AngleBetweenDirectionVectorsDeg(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAngleBetweenDirectionVectorsRad) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::AngleBetweenDirectionVectorsRad(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatToRotator) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UESLibraryBPLibrary::QuatToRotator(Z_Param_Out_Quat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotatorToQuat) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Rotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::RotatorToQuat(Z_Param_Rotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVectorToOrientationRotator) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UESLibraryBPLibrary::VectorToOrientationRotator(Z_Param_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVectorToOrientationQuat) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::VectorToOrientationQuat(Z_Param_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDot) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Dot(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlerp_NotNormalized) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Slerp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::Slerp_NotNormalized(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_Slerp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlerp) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Slerp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::Slerp(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_Slerp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastBiLerp) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_P00); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_P10); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_P01); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_P11); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FracX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FracY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::FastBiLerp(Z_Param_Out_P00,Z_Param_Out_P10,Z_Param_Out_P01,Z_Param_Out_P11,Z_Param_Out_FracX,Z_Param_Out_FracY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBiLerp) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_P00); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_P10); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_P01); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_P11); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FracX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FracY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::BiLerp(Z_Param_Out_P00,Z_Param_Out_P10,Z_Param_Out_P01,Z_Param_Out_P11,Z_Param_Out_FracX,Z_Param_Out_FracY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastLerp) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::FastLerp(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_Alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLerp) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::Lerp(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_Alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFPercent) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_f); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::FPercent(Z_Param_Value,Z_Param_f); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFDivide) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_f); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::FDivide(Z_Param_Value,Z_Param_f); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFMultiply) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::FMultiply(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFDecrement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::FDecrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFIncrement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::FIncrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFPreDecrement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::FPreDecrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFPosDecrement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::FPosDecrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFPreIncrement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::FPreIncrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFPosIncrement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::FPosIncrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execINTPercent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_i); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::INTPercent(Z_Param_Value,Z_Param_i); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execINTModulo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_i); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::INTModulo(Z_Param_Value,Z_Param_i); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execINTDivide) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_i); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::INTDivide(Z_Param_Value,Z_Param_i); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execINTMultiply) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::INTMultiply(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execINTDecrement) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::INTDecrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execINTIncrement) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::INTIncrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execINTPreDecrement) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::INTPreDecrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execINTPosDecrement) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::INTPosDecrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execINTPreIncrement) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::INTPreIncrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execINTPosIncrement) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::INTPosIncrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_PhysMat) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Check); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Against); \
		P_GET_ENUM(EN_Match,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_PhysMat(EObjectTypeQuery(Z_Param_Check),EObjectTypeQuery(Z_Param_Against),EN_Match(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_Trace) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Check); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Against); \
		P_GET_ENUM(EN_Match,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_Trace(ETraceTypeQuery(Z_Param_Check),ETraceTypeQuery(Z_Param_Against),EN_Match(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_PCNotEqual) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Check); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Against); \
		P_GET_ENUM(EN_NotEqual,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_PCNotEqual(Z_Param_Check,Z_Param_Against,EN_NotEqual(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_PCEquals) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Check); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Against); \
		P_GET_ENUM(EN_Equals,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_PCEquals(Z_Param_Check,Z_Param_Against,EN_Equals(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_SCNotEqual) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Check); \
		P_GET_OBJECT(USceneComponent,Z_Param_Against); \
		P_GET_ENUM(EN_NotEqual,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_SCNotEqual(Z_Param_Check,Z_Param_Against,EN_NotEqual(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_SCEquals) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Check); \
		P_GET_OBJECT(USceneComponent,Z_Param_Against); \
		P_GET_ENUM(EN_Equals,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_SCEquals(Z_Param_Check,Z_Param_Against,EN_Equals(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_ANotEqual) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Check); \
		P_GET_OBJECT(AActor,Z_Param_Against); \
		P_GET_ENUM(EN_NotEqual,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_ANotEqual(Z_Param_Check,Z_Param_Against,EN_NotEqual(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_AEquals) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Check); \
		P_GET_OBJECT(AActor,Z_Param_Against); \
		P_GET_ENUM(EN_Equals,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_AEquals(Z_Param_Check,Z_Param_Against,EN_Equals(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_Color) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_Check); \
		P_GET_STRUCT(FLinearColor,Z_Param_Against); \
		P_GET_ENUM(EN_Match,Z_Param_Branches); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_Color(Z_Param_Check,Z_Param_Against,EN_Match(Z_Param_Branches),Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_FGreaterOREqual) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Check); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Against); \
		P_GET_ENUM(EN_IfThenElse,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_FGreaterOREqual(Z_Param_Check,Z_Param_Against,EN_IfThenElse(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_FLessOREqual) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Check); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Against); \
		P_GET_ENUM(EN_IfThenElse,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_FLessOREqual(Z_Param_Check,Z_Param_Against,EN_IfThenElse(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_FGreaterThan) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Check); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Against); \
		P_GET_ENUM(EN_IfThenElse,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_FGreaterThan(Z_Param_Check,Z_Param_Against,EN_IfThenElse(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_FLessThan) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Check); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Against); \
		P_GET_ENUM(EN_IfThenElse,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_FLessThan(Z_Param_Check,Z_Param_Against,EN_IfThenElse(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_FNotEqual) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Check); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Against); \
		P_GET_ENUM(EN_NotEqual,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_FNotEqual(Z_Param_Check,Z_Param_Against,EN_NotEqual(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_FEquals) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Check); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Against); \
		P_GET_ENUM(EN_Equals,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_FEquals(Z_Param_Check,Z_Param_Against,EN_Equals(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_INTGreaterOREqual) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Check); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Against); \
		P_GET_ENUM(EN_IfThenElse,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_INTGreaterOREqual(Z_Param_Check,Z_Param_Against,EN_IfThenElse(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_INTLessOREqual) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Check); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Against); \
		P_GET_ENUM(EN_IfThenElse,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_INTLessOREqual(Z_Param_Check,Z_Param_Against,EN_IfThenElse(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_INTGreaterThan) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Check); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Against); \
		P_GET_ENUM(EN_IfThenElse,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_INTGreaterThan(Z_Param_Check,Z_Param_Against,EN_IfThenElse(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_INTLessThan) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Check); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Against); \
		P_GET_ENUM(EN_IfThenElse,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_INTLessThan(Z_Param_Check,Z_Param_Against,EN_IfThenElse(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_INTNotEqual) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Check); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Against); \
		P_GET_ENUM(EN_NotEqual,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_INTNotEqual(Z_Param_Check,Z_Param_Against,EN_NotEqual(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_INTEquals) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Check); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Against); \
		P_GET_ENUM(EN_Equals,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_INTEquals(Z_Param_Check,Z_Param_Against,EN_Equals(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_TXEquals) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_Check); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Against); \
		P_GET_ENUM(EN_Equals,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_TXEquals(Z_Param_Check,Z_Param_Against,EN_Equals(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_STEquals) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Check); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Against); \
		P_GET_ENUM(EN_Equals,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_STEquals(Z_Param_Check,Z_Param_Against,EN_Equals(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_ONotEqual) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Check); \
		P_GET_OBJECT(UObject,Z_Param_Against); \
		P_GET_ENUM(EN_NotEqual,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_ONotEqual(Z_Param_Check,Z_Param_Against,EN_NotEqual(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_OEquals) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Check); \
		P_GET_OBJECT(UObject,Z_Param_Against); \
		P_GET_ENUM(EN_Equals,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_OEquals(Z_Param_Check,Z_Param_Against,EN_Equals(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextureFromDataTable) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_Table); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InRowName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InColumnName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSoftObjectPtr<UTexture>*)Z_Param__Result=UESLibraryBPLibrary::GetTextureFromDataTable(Z_Param_Table,Z_Param_InRowName,Z_Param_InColumnName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringValueFromDataTable) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_Table); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InRowName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InColumnName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::GetStringValueFromDataTable(Z_Param_Table,Z_Param_InRowName,Z_Param_InColumnName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatValueFromDataTable) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_Table); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InRowName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InColumnName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::GetFloatValueFromDataTable(Z_Param_Table,Z_Param_InRowName,Z_Param_InColumnName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntValueFromDataTable) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_Table); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InRowName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InColumnName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::GetIntValueFromDataTable(Z_Param_Table,Z_Param_InRowName,Z_Param_InColumnName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCSVRowNames) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_Table); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutRowNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::GetCSVRowNames(Z_Param_Table,Z_Param_Out_OutRowNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCSVTableString) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::GetCSVTableString(Z_Param_DataTable,Z_Param_Out_OutResult); \
		P_NATIVE_END; \
	}


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnion_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FDateRange,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FDateRange>*)Z_Param__Result=UESLibraryBPLibrary::Union_Date(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntersection_Date) \
	{ \
		P_GET_TARRAY_REF(FDateRange,Z_Param_Out_Ranges); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateRange*)Z_Param__Result=UESLibraryBPLibrary::Intersection_Date(Z_Param_Out_Ranges); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHull_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FDateRange,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateRange*)Z_Param__Result=UESLibraryBPLibrary::Hull_Date(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDifference_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FDateRange,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FDateRange>*)Z_Param__Result=UESLibraryBPLibrary::Difference_Date(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplit_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FDateTime,Z_Param_InElement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FDateRange>*)Z_Param__Result=UESLibraryBPLibrary::Split_Date(Z_Param_Out_Range,Z_Param_InElement); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSize_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UESLibraryBPLibrary::Size_Date(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEmpty_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsEmpty_Date(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDegenerate_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsDegenerate_Date(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasUpperBound_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::HasUpperBound_Date(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasLowerBound_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::HasLowerBound_Date(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContiguous_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FDateRange,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Contiguous_Date(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContains_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FDateRange,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Contains_Date(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpperBoundValue_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UESLibraryBPLibrary::GetUpperBoundValue_Date(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLowerBoundValue_Date) \
	{ \
		P_GET_STRUCT_REF(FDateRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UESLibraryBPLibrary::GetLowerBoundValue_Date(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnion_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_GET_STRUCT(FInt32Range,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FInt32Range>*)Z_Param__Result=UESLibraryBPLibrary::Union_Int(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntersection_Int) \
	{ \
		P_GET_TARRAY_REF(FInt32Range,Z_Param_Out_Ranges); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInt32Range*)Z_Param__Result=UESLibraryBPLibrary::Intersection_Int(Z_Param_Out_Ranges); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHull_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_GET_STRUCT(FInt32Range,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInt32Range*)Z_Param__Result=UESLibraryBPLibrary::Hull_Int(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDifference_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_GET_STRUCT(FInt32Range,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FInt32Range>*)Z_Param__Result=UESLibraryBPLibrary::Difference_Int(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplit_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InElement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FInt32Range>*)Z_Param__Result=UESLibraryBPLibrary::Split_Int(Z_Param_Out_Range,Z_Param_InElement); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSize_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::Size_Int(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEmpty_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsEmpty_Int(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDegenerate_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsDegenerate_Int(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasUpperBound_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::HasUpperBound_Int(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasLowerBound_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::HasLowerBound_Int(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContiguous_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_GET_STRUCT(FInt32Range,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Contiguous_Int(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContains_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_GET_STRUCT(FInt32Range,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Contains_Int(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpperBoundValue_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::GetUpperBoundValue_Int(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLowerBoundValue_Int) \
	{ \
		P_GET_STRUCT_REF(FInt32Range,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::GetLowerBoundValue_Int(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnion_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FFloatRange,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FFloatRange>*)Z_Param__Result=UESLibraryBPLibrary::Union_Float(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntersection_Float) \
	{ \
		P_GET_TARRAY_REF(FFloatRange,Z_Param_Out_Ranges); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFloatRange*)Z_Param__Result=UESLibraryBPLibrary::Intersection_Float(Z_Param_Out_Ranges); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHull_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FFloatRange,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFloatRange*)Z_Param__Result=UESLibraryBPLibrary::Hull_Float(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDifference_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FFloatRange,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FFloatRange>*)Z_Param__Result=UESLibraryBPLibrary::Difference_Float(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplit_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InElement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FFloatRange>*)Z_Param__Result=UESLibraryBPLibrary::Split_Float(Z_Param_Out_Range,Z_Param_InElement); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSize_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Size_Float(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEmpty_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsEmpty_Float(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDegenerate_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsDegenerate_Float(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasUpperBound_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::HasUpperBound_Float(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasLowerBound_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::HasLowerBound_Float(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContiguous_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FFloatRange,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Contiguous_Float(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContains_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_GET_STRUCT(FFloatRange,Z_Param_OtherRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Contains_Float(Z_Param_Out_Range,Z_Param_OtherRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpperBoundValue_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::GetUpperBoundValue_Float(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLowerBoundValue_Float) \
	{ \
		P_GET_STRUCT_REF(FFloatRange,Z_Param_Out_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::GetLowerBoundValue_Float(Z_Param_Out_Range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_vf) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Divide_vf(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_vf) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Multiply_vf(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_vf) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Subtract_vf(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_vf) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Add_vf(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_vi) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Divide_vi(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_vi) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Multiply_vi(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_vi) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Subtract_vi(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_vi) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Add_vi(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_v) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Divide_v(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_v) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Multiply_v(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_v) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Subtract_v(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_v) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::Add_v(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_fi) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Divide_fi(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_fi) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Multiply_fi(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_fi) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Subtract_fi(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_fi) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Add_fi(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_f) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Divide_f(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_f) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Multiply_f(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_f) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Subtract_f(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_f) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Add_f(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_if) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::Divide_if(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_if) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::Multiply_if(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_if) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::Subtract_if(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_if) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::Add_if(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_i) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::Divide_i(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_i) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::Multiply_i(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_i) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::Subtract_i(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_i) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_In); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::Add_i(Z_Param_Out_In,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewXmlDocument) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUnrealTinyXmlDocument**)Z_Param__Result=UESLibraryBPLibrary::NewXmlDocument(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseBounceOutIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseBounceOutIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseElasticOutIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseElasticOutIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseBackOutIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseBackOutIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseCircOutIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseCircOutIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseExpoOutIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseExpoOutIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuintOutIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuintOutIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuartOutIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuartOutIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseCubicOutIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseCubicOutIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuadOutIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuadOutIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseSineOutIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseSineOutIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseBounceInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseBounceInOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseBounceOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseBounceOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseBounceIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseBounceIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseElasticInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseElasticInOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseElasticOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseElasticOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseElasticIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseElasticIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseBackInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseBackInOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseBackOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseBackOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseBackIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseBackIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseCircInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseCircInOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseCircOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseCircOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseCircIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseCircIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseExpoInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseExpoInOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseExpoOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseExpoOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseExpoIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseExpoIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuintInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuintInOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuintOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuintOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuintIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuintIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuartInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuartInOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuartOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuartOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuartIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuartIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseCubicInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseCubicInOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseCubicOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseCubicOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseCubicIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseCubicIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuadInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuadInOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuadOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuadOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseQuadIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseQuadIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseSineInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseSineInOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseSineOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseSineOut(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseSineIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseSineIn(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseLinear) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseLinear(Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEaseInterpolate) \
	{ \
		P_GET_ENUM(EEasingType,Z_Param_EaseType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NormalizedTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::EaseInterpolate(EEasingType(Z_Param_EaseType),Z_Param_NormalizedTime,Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWorldPointIsInsideBox) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxCenter); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::WorldPointIsInsideBox(Z_Param_Out_WorldPoint,Z_Param_Out_BoxCenter,Z_Param_Out_BoxExtents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllChildren) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_parentComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::RemoveAllChildren(Z_Param_parentComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorScreenBox) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Controller); \
		P_GET_OBJECT(AActor,Z_Param_TargetActor); \
		P_GET_UBOOL(Z_Param_bOnlyCollidingComponents); \
		P_GET_UBOOL(Z_Param_bScaleByDPI); \
		P_GET_STRUCT_REF(FBox2D,Z_Param_Out_Box); \
		P_GET_UBOOL_REF(Z_Param_Out_bAllProjectedSuccessfully); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::GetActorScreenBox(Z_Param_Controller,Z_Param_TargetActor,Z_Param_bOnlyCollidingComponents,Z_Param_bScaleByDPI,Z_Param_Out_Box,Z_Param_Out_bAllProjectedSuccessfully); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVectorIsNearlyZero) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::VectorIsNearlyZero(Z_Param_Out_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralFBox2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Min); \
		P_GET_STRUCT(FVector2D,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBox2D*)Z_Param__Result=UESLibraryBPLibrary::MakeLiteralFBox2D(Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMinAndMaxOfFloatArray) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_Floats); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Min); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::MinAndMaxOfFloatArray(Z_Param_Out_Floats,Z_Param_Out_Min,Z_Param_Out_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxIntersectsBox) \
	{ \
		P_GET_STRUCT_REF(FBox2D,Z_Param_Out_Box); \
		P_GET_STRUCT_REF(FBox2D,Z_Param_Out_OtherBox); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::BoxIntersectsBox(Z_Param_Out_Box,Z_Param_Out_OtherBox); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxIsInsideBox) \
	{ \
		P_GET_STRUCT_REF(FBox2D,Z_Param_Out_Box); \
		P_GET_STRUCT_REF(FBox2D,Z_Param_Out_OtherBox); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::BoxIsInsideBox(Z_Param_Out_Box,Z_Param_Out_OtherBox); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointIsInsideBox) \
	{ \
		P_GET_STRUCT_REF(FBox2D,Z_Param_Out_Box); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Point); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::PointIsInsideBox(Z_Param_Out_Box,Z_Param_Out_Point); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRepeatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_T); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Length); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::RepeatFloat(Z_Param_T,Z_Param_Length); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeltaAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::DeltaAngle(Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveTowards) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::MoveTowards(Z_Param_From,Z_Param_To,Z_Param_MaxDelta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveTowardsAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_From); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_To); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::MoveTowardsAngle(Z_Param_From,Z_Param_To,Z_Param_MaxDelta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveTowardsRotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_From); \
		P_GET_STRUCT(FRotator,Z_Param_To); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDistanceDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UESLibraryBPLibrary::MoveTowardsRotator(Z_Param_From,Z_Param_To,Z_Param_MaxDistanceDelta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveTowardsVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_From); \
		P_GET_STRUCT(FVector,Z_Param_To); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDistanceDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::MoveTowardsVector(Z_Param_From,Z_Param_To,Z_Param_MaxDistanceDelta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasRuntimeCooking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::HasRuntimeCooking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertLinearColors) \
	{ \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_LinearColors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FColor>*)Z_Param__Result=UESLibraryBPLibrary::ConvertLinearColors(Z_Param_Out_LinearColors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActorWithinFrustum) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_RefActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsActorWithinFrustum(Z_Param_RefActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasActorRenderedRecently) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_RefActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRecentTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::WasActorRenderedRecently(Z_Param_RefActor,Z_Param_MaxRecentTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorLastRenderTime) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_RefActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::GetActorLastRenderTime(Z_Param_RefActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMousePosition) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PosX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PosY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::SetMousePosition(Z_Param_PC,Z_Param_Out_PosX,Z_Param_Out_PosY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadWaveDataFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundWave**)Z_Param__Result=UESLibraryBPLibrary::LoadWaveDataFromFile(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadOggDataFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundWave**)Z_Param__Result=UESLibraryBPLibrary::LoadOggDataFromFile(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadStreamingLevel) \
	{ \
		P_GET_OBJECT(ULevelStreamingDynamic,Z_Param_LevelInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::UnloadStreamingLevel(Z_Param_LevelInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideStreamingLevel) \
	{ \
		P_GET_OBJECT(ULevelStreamingDynamic,Z_Param_LevelInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::HideStreamingLevel(Z_Param_LevelInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFromStreamingLevels) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FLevelStreamInstanceInfo,Z_Param_Out_LevelInstanceInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::RemoveFromStreamingLevels(Z_Param_WorldContextObject,Z_Param_Out_LevelInstanceInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToStreamingLevels) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FLevelStreamInstanceInfo,Z_Param_Out_LevelInstanceInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddToStreamingLevels(Z_Param_WorldContextObject,Z_Param_Out_LevelInstanceInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWidgetOfClassInViewport) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_WidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsWidgetOfClassInViewport(Z_Param_WorldContextObject,Z_Param_WidgetClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatePrimitiveComponent) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_CompClass); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=UESLibraryBPLibrary::CreatePrimitiveComponent(Z_Param_WorldContextObject,Z_Param_CompClass,Z_Param_Name,Z_Param_Location,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_TheObjectClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UESLibraryBPLibrary::CreateObject(Z_Param_WorldContextObject,Z_Param_TheObjectClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_AI_MoveToWithFilter) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Dest); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AcceptanceRadius); \
		P_GET_UBOOL(Z_Param_bProjectDestinationToNavigation); \
		P_GET_UBOOL(Z_Param_bStopOnOverlap); \
		P_GET_UBOOL(Z_Param_bCanStrafe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EPathFollowingRequestResult::Type>*)Z_Param__Result=UESLibraryBPLibrary::Victory_AI_MoveToWithFilter(Z_Param_Pawn,Z_Param_Out_Dest,Z_Param_FilterClass,Z_Param_AcceptanceRadius,Z_Param_bProjectDestinationToNavigation,Z_Param_bStopOnOverlap,Z_Param_bCanStrafe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTextureRenderTarget2D) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Gamma); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTextureRenderTarget2D**)Z_Param__Result=UESLibraryBPLibrary::CreateTextureRenderTarget2D(Z_Param_Width,Z_Param_Height,Z_Param_ClearColor,Z_Param_Gamma); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_GetPixelsArrayFromT2D) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_T2D); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_TextureWidth); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_TextureHeight); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_PixelArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Victory_GetPixelsArrayFromT2D(Z_Param_T2D,Z_Param_Out_TextureWidth,Z_Param_Out_TextureHeight,Z_Param_Out_PixelArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_GetPixelFromT2D) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_T2D); \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_PixelColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Victory_GetPixelFromT2D(Z_Param_T2D,Z_Param_X,Z_Param_Y,Z_Param_Out_PixelColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_SavePixels) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_ImagePixels); \
		P_GET_UBOOL(Z_Param_SaveAsBMP); \
		P_GET_UBOOL(Z_Param_sRGB); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Victory_SavePixels(Z_Param_FullFilePath,Z_Param_Width,Z_Param_Height,Z_Param_Out_ImagePixels,Z_Param_SaveAsBMP,Z_Param_sRGB,Z_Param_Out_ErrorString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_Get_Pixel) \
	{ \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Pixels); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ImageHeight); \
		P_GET_PROPERTY(UIntProperty,Z_Param_x); \
		P_GET_PROPERTY(UIntProperty,Z_Param_y); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_FoundColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Victory_Get_Pixel(Z_Param_Out_Pixels,Z_Param_ImageHeight,Z_Param_x,Z_Param_y,Z_Param_Out_FoundColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFile_Pixels) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_GET_ENUM(EJoyImageFormats,Z_Param_ImageFormat); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Width); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Height); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_OutPixels); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UESLibraryBPLibrary::Victory_LoadTexture2D_FromFile_Pixels(Z_Param_FullFilePath,EJoyImageFormats(Z_Param_ImageFormat),Z_Param_Out_IsValid,Z_Param_Out_Width,Z_Param_Out_Height,Z_Param_Out_OutPixels); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_GET_ENUM(EJoyImageFormats,Z_Param_ImageFormat); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Width); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UESLibraryBPLibrary::Victory_LoadTexture2D_FromFile(Z_Param_FullFilePath,EJoyImageFormats(Z_Param_ImageFormat),Z_Param_Out_IsValid,Z_Param_Out_Width,Z_Param_Out_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTexture2D_FromDDSFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UESLibraryBPLibrary::LoadTexture2D_FromDDSFile(Z_Param_FullFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__LogsDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::VictoryPaths__LogsDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__ScreenShotsDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::VictoryPaths__ScreenShotsDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__ConfigDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::VictoryPaths__ConfigDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__SavedDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::VictoryPaths__SavedDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__GameRootDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::VictoryPaths__GameRootDirectory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__WindowsNoEditorDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::VictoryPaths__WindowsNoEditorDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__Win64Dir_BinaryLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::VictoryPaths__Win64Dir_BinaryLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpen_URL_In_Web_Browser) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TheURL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Open_URL_In_Web_Browser(Z_Param_TheURL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRealWorldTime__GetDifferenceBetweenTimes) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PreviousTime1); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PreviousTime2); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Milliseconds); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Seconds); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Minutes); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Hours); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::RealWorldTime__GetDifferenceBetweenTimes(Z_Param_PreviousTime1,Z_Param_PreviousTime2,Z_Param_Out_Milliseconds,Z_Param_Out_Seconds,Z_Param_Out_Minutes,Z_Param_Out_Hours); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRealWorldTime__GetTimePassedSincePreviousTime) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PreviousTime); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Milliseconds); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Seconds); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Minutes); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Hours); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::RealWorldTime__GetTimePassedSincePreviousTime(Z_Param_PreviousTime,Z_Param_Out_Milliseconds,Z_Param_Out_Seconds,Z_Param_Out_Minutes,Z_Param_Out_Hours); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRealWorldTime__GetCurrentOSTime) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_MilliSeconds); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Seconds); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Minutes); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Hours12); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Hours24); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Day); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Month); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Year); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::RealWorldTime__GetCurrentOSTime(Z_Param_Out_MilliSeconds,Z_Param_Out_Seconds,Z_Param_Out_Minutes,Z_Param_Out_Hours12,Z_Param_Out_Hours24,Z_Param_Out_Day,Z_Param_Out_Month,Z_Param_Out_Year); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOperatingSystem__GetCurrentPlatform) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_Windows_); \
		P_GET_UBOOL_REF(Z_Param_Out_Mac); \
		P_GET_UBOOL_REF(Z_Param_Out_Linux); \
		P_GET_UBOOL_REF(Z_Param_Out_iOS); \
		P_GET_UBOOL_REF(Z_Param_Out_Android); \
		P_GET_UBOOL_REF(Z_Param_Out_Android_ARM); \
		P_GET_UBOOL_REF(Z_Param_Out_Android_Vulkan); \
		P_GET_UBOOL_REF(Z_Param_Out_PS4); \
		P_GET_UBOOL_REF(Z_Param_Out_XBoxOne); \
		P_GET_UBOOL_REF(Z_Param_Out_HTML5); \
		P_GET_UBOOL_REF(Z_Param_Out_Apple); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::OperatingSystem__GetCurrentPlatform(Z_Param_Out_Windows_,Z_Param_Out_Mac,Z_Param_Out_Linux,Z_Param_Out_iOS,Z_Param_Out_Android,Z_Param_Out_Android_ARM,Z_Param_Out_Android_Vulkan,Z_Param_Out_PS4,Z_Param_Out_XBoxOne,Z_Param_Out_HTML5,Z_Param_Out_Apple); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectPath) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UESLibraryBPLibrary::GetObjectPath(Z_Param_Obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadObjectFromAssetPath) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ObjectClass); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Path); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UESLibraryBPLibrary::LoadObjectFromAssetPath(Z_Param_ObjectClass,Z_Param_Path,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformVectorToActorSpace) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->TransformVectorToActorSpace(Z_Param_Actor,Z_Param_Out_InVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformVectorToActorSpaceAngle) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->TransformVectorToActorSpaceAngle(Z_Param_Actor,Z_Param_Out_InVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_String) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::VictorySetCustomConfigVar_String(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Color) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT(FLinearColor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::VictorySetCustomConfigVar_Color(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Rotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT(FRotator,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::VictorySetCustomConfigVar_Rotator(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Vector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::VictorySetCustomConfigVar_Vector(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Float) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::VictorySetCustomConfigVar_Float(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Int) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::VictorySetCustomConfigVar_Int(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Bool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::VictorySetCustomConfigVar_Bool(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Vector2D) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT(FVector2D,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::VictorySetCustomConfigVar_Vector2D(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenExe) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_SomeInWorldObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AExeActor**)Z_Param__Result=UESLibraryBPLibrary::OpenExe(Z_Param_SomeInWorldObject,Z_Param_Path,Z_Param_Args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamePath) \
	{ \
		P_GET_ENUM(DirType,Z_Param_E); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::GetGamePath(DirType(Z_Param_E)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteFileII) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::DeleteFileII(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReturnString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::WriteFile(Z_Param_FilePath,Z_Param_ReturnString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ReturnString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::ReadFile(Z_Param_FilePath,Z_Param_Out_ReturnString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteCustomPathConfig) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ValueName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_WriteString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::WriteCustomPathConfig(Z_Param_FilePath,Z_Param_SectionName,Z_Param_ValueName,Z_Param_WriteString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadCustomPathConfig) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ValueName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ReturnString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::ReadCustomPathConfig(Z_Param_FilePath,Z_Param_SectionName,Z_Param_ValueName,Z_Param_Out_ReturnString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteConfig) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ValueName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReturnValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::WriteConfig(Z_Param_SectionName,Z_Param_ValueName,Z_Param_ReturnValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadConfig) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ValueName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ReturnValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::ReadConfig(Z_Param_SectionName,Z_Param_ValueName,Z_Param_Out_ReturnValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsVaildPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsVaildPath(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTexture2DFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Width); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UESLibraryBPLibrary::LoadTexture2DFromFile(Z_Param_FilePath,Z_Param_Out_IsValid,Z_Param_Out_Width,Z_Param_Out_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGameFromSlotCompressed) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USaveGame**)Z_Param__Result=UESLibraryBPLibrary::LoadGameFromSlotCompressed(Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGameToSlotCompressed) \
	{ \
		P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::SaveGameToSlotCompressed(Z_Param_SaveGameObject,Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitTraceEnd) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetHitTraceEnd(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitTraceStart) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetHitTraceStart(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitFaceIndex) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::GetHitFaceIndex(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitItem) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::GetHitItem(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitBoneName) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UESLibraryBPLibrary::GetHitBoneName(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitComponent) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=UESLibraryBPLibrary::GetHitComponent(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitActor) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UESLibraryBPLibrary::GetHitActor(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitPhysMat) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPhysicalMaterial**)Z_Param__Result=UESLibraryBPLibrary::GetHitPhysMat(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitImpactNormal) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetHitImpactNormal(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitNormal) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetHitNormal(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitImpactPoint) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetHitImpactPoint(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitLocation) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetHitLocation(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitDistance) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::GetHitDistance(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitTime) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::GetHitTime(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitInitialOverlap) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::GetHitInitialOverlap(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitBlockingHit) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::GetHitBlockingHit(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentReplayCurrentTimeInSeconds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::GetCurrentReplayCurrentTimeInSeconds(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentReplayTotalTimeInSeconds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::GetCurrentReplayTotalTimeInSeconds(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReplayPlaybackSpeed) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::GetReplayPlaybackSpeed(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReplayPlaybackSpeed) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewReplaySpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetReplayPlaybackSpeed(Z_Param_WorldContextObject,Z_Param_NewReplaySpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReplayPausedState) \
	{ \
		P_GET_UBOOL(Z_Param_NewState); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetReplayPausedState(Z_Param_NewState,Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJumpToTimeInReplay) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ReplayTime); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::JumpToTimeInReplay(Z_Param_ReplayTime,Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddUserToReplay) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddUserToReplay(Z_Param_WorldContextObject,Z_Param_UserString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReplay) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::PlayReplay(Z_Param_WorldContextObject,Z_Param_ReplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveReplayCheckpoint) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SaveReplayCheckpoint(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRecordingReplay) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::StopRecordingReplay(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecordingReplay) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FriendlyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::StartRecordingReplay(Z_Param_WorldContextObject,Z_Param_ReplayName,Z_Param_FriendlyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildSplineMeshesAlongSpline) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_OBJECT(UStaticMesh,Z_Param_SplineMesh); \
		P_GET_TARRAY(UMaterialInterface*,Z_Param_OptionalMaterials); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RelativeTransform); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ForwardAxis); \
		P_GET_UBOOL(Z_Param_bAffectNavigation); \
		P_GET_UBOOL(Z_Param_bGenerateOverlapEvents); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CollisionEnabled); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ObjectType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Mobility); \
		P_GET_STRUCT(FVector2D,Z_Param_StartScale); \
		P_GET_STRUCT(FVector2D,Z_Param_EndScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<USplineMeshComponent*>*)Z_Param__Result=UESLibraryBPLibrary::BuildSplineMeshesAlongSpline(Z_Param_SplineComp,Z_Param_SplineMesh,Z_Param_OptionalMaterials,Z_Param_Out_RelativeTransform,ESplineMeshAxis::Type(Z_Param_ForwardAxis),Z_Param_bAffectNavigation,Z_Param_bGenerateOverlapEvents,ECollisionEnabled::Type(Z_Param_CollisionEnabled),EObjectTypeQuery(Z_Param_ObjectType),EComponentMobility::Type(Z_Param_Mobility),Z_Param_StartScale,Z_Param_EndScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindLocationAndRotationAtSplineInputKey) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InKey); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::FindLocationAndRotationAtSplineInputKey(Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_SplineComp,Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindScaleAtSplineInputKey) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::FindScaleAtSplineInputKey(Z_Param_SplineComp,Z_Param_InKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRollAtSplineInputKey) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InKey); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::FindRollAtSplineInputKey(Z_Param_SplineComp,Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindTransformAtSplineInputKey) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InKey); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UESLibraryBPLibrary::FindTransformAtSplineInputKey(Z_Param_SplineComp,Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRightVectorAtSplineInputKey) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InKey); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::FindRightVectorAtSplineInputKey(Z_Param_SplineComp,Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindUpVectorAtSplineInputKey) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InKey); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::FindUpVectorAtSplineInputKey(Z_Param_SplineComp,Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRotationAtSplineInputKey) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InKey); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UESLibraryBPLibrary::FindRotationAtSplineInputKey(Z_Param_SplineComp,Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindDirectionAtSplineInputKey) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InKey); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::FindDirectionAtSplineInputKey(Z_Param_SplineComp,Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindTangentAtSplineInputKey) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InKey); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::FindTangentAtSplineInputKey(Z_Param_SplineComp,Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindLocationAtSplineInputKey) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InKey); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::FindLocationAtSplineInputKey(Z_Param_SplineComp,Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSnapSingleSplinePointToGround) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SplinePointToSnap); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TraceDistance); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_UBOOL(Z_Param_bDrawDebug); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawDebugTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SnapSingleSplinePointToGround(Z_Param_SplineComp,Z_Param_SplinePointToSnap,Z_Param_TraceDistance,Z_Param_bTraceComplex,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_Out_ActorsToIgnore,Z_Param_bDrawDebug,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawDebugTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSnapAllSplinePointsToGround) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TraceDistance); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_UBOOL(Z_Param_bDrawDebug); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawDebugTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SnapAllSplinePointsToGround(Z_Param_SplineComp,Z_Param_TraceDistance,Z_Param_bTraceComplex,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_Out_ActorsToIgnore,Z_Param_bDrawDebug,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawDebugTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastSplinePoint) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::GetLastSplinePoint(Z_Param_SplineComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidSplinePoint) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsValidSplinePoint(Z_Param_SplineComp,Z_Param_InPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSnapActorToGround) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TraceDistance); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_GroundChannel); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_STRUCT(FVector,Z_Param_OptionalOffset); \
		P_GET_UBOOL(Z_Param_bDrawDebug); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawDebugTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::SnapActorToGround(Z_Param_InActor,Z_Param_TraceDistance,Z_Param_bTraceComplex,ETraceTypeQuery(Z_Param_GroundChannel),Z_Param_Out_ActorsToIgnore,Z_Param_OptionalOffset,Z_Param_bDrawDebug,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawDebugTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugCoordinateArrowsAtComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_InComponent); \
		P_GET_STRUCT(FVector,Z_Param_Offset); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ArrowLength); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ArrowSize); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ArrowThickness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DebugDisplayTime); \
		P_GET_STRUCT(FLinearColor,Z_Param_ForwardColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_RightColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_UpColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::DrawDebugCoordinateArrowsAtComponent(Z_Param_InComponent,Z_Param_Offset,Z_Param_ArrowLength,Z_Param_ArrowSize,Z_Param_ArrowThickness,Z_Param_DebugDisplayTime,Z_Param_ForwardColor,Z_Param_RightColor,Z_Param_UpColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestActorToPoint) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_Actors); \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_UBOOL(Z_Param_Inverse); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UESLibraryBPLibrary::GetClosestActorToPoint(Z_Param_Actors,Z_Param_Point,Z_Param_Inverse); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestComponentToPoint) \
	{ \
		P_GET_TARRAY(UPrimitiveComponent*,Z_Param_Comps); \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_UBOOL(Z_Param_Inverse); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=UESLibraryBPLibrary::GetClosestComponentToPoint(Z_Param_Comps,Z_Param_Point,Z_Param_Inverse); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindActorComponentByName) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToSearchIn); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CompName); \
		P_GET_OBJECT_REF(UActorComponent,Z_Param_Out_FoundComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::FindActorComponentByName(Z_Param_ActorToSearchIn,Z_Param_CompName,Z_Param_Out_FoundComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSceneComponentByName) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToSearchIn); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CompName); \
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_FoundComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::FindSceneComponentByName(Z_Param_ActorToSearchIn,Z_Param_CompName,Z_Param_Out_FoundComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentCheckboxImage) \
	{ \
		P_GET_OBJECT(UCheckBox,Z_Param_InCheckbox); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UESLibraryBPLibrary::GetCurrentCheckboxImage(Z_Param_InCheckbox); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCheckboxStyleToImage) \
	{ \
		P_GET_STRUCT(FCheckBoxStyle,Z_Param_InStyle); \
		P_GET_OBJECT(UObject,Z_Param_InImage); \
		P_GET_ENUM(ECheckBoxState,Z_Param_StateToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FCheckBoxStyle*)Z_Param__Result=UESLibraryBPLibrary::SetCheckboxStyleToImage(Z_Param_InStyle,Z_Param_InImage,ECheckBoxState(Z_Param_StateToSet)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidChildIndexInPanel) \
	{ \
		P_GET_OBJECT(UPanelWidget,Z_Param_Target); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InIndexToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsValidChildIndexInPanel(Z_Param_Target,Z_Param_InIndexToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastChildIndex) \
	{ \
		P_GET_OBJECT(UPanelWidget,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::GetLastChildIndex(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFontSize) \
	{ \
		P_GET_OBJECT(UTextBlock,Z_Param_Target); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetFontSize(Z_Param_Target,Z_Param_NewSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFontTypeface) \
	{ \
		P_GET_OBJECT(UTextBlock,Z_Param_Target); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewTypeface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetFontTypeface(Z_Param_Target,Z_Param_NewTypeface); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFontOutline) \
	{ \
		P_GET_OBJECT(UTextBlock,Z_Param_Target); \
		P_GET_STRUCT(FFontOutlineSettings,Z_Param_NewOutline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetFontOutline(Z_Param_Target,Z_Param_NewOutline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFontMaterial) \
	{ \
		P_GET_OBJECT(UTextBlock,Z_Param_Target); \
		P_GET_OBJECT(UObject,Z_Param_NewMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetFontMaterial(Z_Param_Target,Z_Param_NewMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFontFamily) \
	{ \
		P_GET_OBJECT(UTextBlock,Z_Param_Target); \
		P_GET_OBJECT(UObject,Z_Param_NewFamily); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetFontFamily(Z_Param_Target,Z_Param_NewFamily); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllWidgetsOfTypeInUserWidget) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_ParentWidget); \
		P_GET_OBJECT(UClass,Z_Param_WidgetClass); \
		P_GET_TARRAY_REF(UWidget*,Z_Param_Out_FoundWidgets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::GetAllWidgetsOfTypeInUserWidget(Z_Param_ParentWidget,Z_Param_WidgetClass,Z_Param_Out_FoundWidgets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllUserFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::ClearAllUserFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllSubWidgetsInParent) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_ParentWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UWidget*>*)Z_Param__Result=UESLibraryBPLibrary::GetAllSubWidgetsInParent(Z_Param_ParentWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWidgetInFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=UESLibraryBPLibrary::GetWidgetInFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquals_InputActionKeyMapping) \
	{ \
		P_GET_STRUCT(FInputActionKeyMapping,Z_Param_A); \
		P_GET_STRUCT(FInputActionKeyMapping,Z_Param_B); \
		P_GET_UBOOL(Z_Param_bNameOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Equals_InputActionKeyMapping(Z_Param_A,Z_Param_B,Z_Param_bNameOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquals_InputAxisKeyMapping) \
	{ \
		P_GET_STRUCT(FInputAxisKeyMapping,Z_Param_A); \
		P_GET_STRUCT(FInputAxisKeyMapping,Z_Param_B); \
		P_GET_UBOOL(Z_Param_bNameOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Equals_InputAxisKeyMapping(Z_Param_A,Z_Param_B,Z_Param_bNameOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearInputMappings) \
	{ \
		P_GET_OBJECT(UInputSettings,Z_Param_InSettings); \
		P_GET_UBOOL(Z_Param_bForceRebuildKeymaps); \
		P_GET_UBOOL(Z_Param_bSaveKeyMappings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::ClearInputMappings(Z_Param_InSettings,Z_Param_bForceRebuildKeymaps,Z_Param_bSaveKeyMappings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStaticMaterials) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_InMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UMaterialInterface*>*)Z_Param__Result=UESLibraryBPLibrary::GetStaticMaterials(Z_Param_InMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastMaterialIndex) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::GetLastMaterialIndex(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAxisValueOfInputs) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController); \
		P_GET_STRUCT(FKey,Z_Param_PositiveKey); \
		P_GET_STRUCT(FKey,Z_Param_NegativeKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::GetAxisValueOfInputs(Z_Param_InPlayerController,Z_Param_PositiveKey,Z_Param_NegativeKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirectionalInputsFromDirectionalKeys) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController); \
		P_GET_STRUCT(FKey,Z_Param_UpDirectional); \
		P_GET_STRUCT(FKey,Z_Param_DownDirectional); \
		P_GET_STRUCT(FKey,Z_Param_RightDirectional); \
		P_GET_STRUCT(FKey,Z_Param_LeftDirectional); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UESLibraryBPLibrary::GetDirectionalInputsFromDirectionalKeys(Z_Param_InPlayerController,Z_Param_UpDirectional,Z_Param_DownDirectional,Z_Param_RightDirectional,Z_Param_LeftDirectional); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMarkRenderDity_Comps) \
	{ \
		P_GET_TARRAY(USceneComponent*,Z_Param_InComps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::MarkRenderDity_Comps(Z_Param_InComps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindFirstInstanceOfActorType) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_SearchClass); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_FoundActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::FindFirstInstanceOfActorType(Z_Param_WorldContextObject,Z_Param_SearchClass,Z_Param_Out_FoundActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberOfActorsOfType) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_SearchClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::GetNumberOfActorsOfType(Z_Param_WorldContextObject,Z_Param_SearchClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverlappingAnyActors) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComp); \
		P_GET_UBOOL(Z_Param_bExcludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsOverlappingAnyActors(Z_Param_InComp,Z_Param_bExcludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreObjectsValid) \
	{ \
		P_GET_TARRAY(UObject*,Z_Param_Objects); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::AreObjectsValid(Z_Param_Objects); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMarkRenderDirty) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_InComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::MarkRenderDirty(Z_Param_InComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRotatorZero) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_InRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsRotatorZero(Z_Param_InRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSocketRelativeRotation) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Target); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UESLibraryBPLibrary::GetSocketRelativeRotation(Z_Param_Target,Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSocketRelativeLocation) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Target); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetSocketRelativeLocation(Z_Param_Target,Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularVelocityInRadiansToComponentBody) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetAngularVelocityInRadiansToComponentBody(Z_Param_InComponent,Z_Param_Out_NewAngVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearVelocityToComponentBody) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetLinearVelocityToComponentBody(Z_Param_InComponent,Z_Param_Out_NewVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAngularImpulseInRadiansToComponentBody) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Impulse); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddAngularImpulseInRadiansToComponentBody(Z_Param_InComponent,Z_Param_Out_Impulse,Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTorqueInRadiansToComponentBody) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Torque); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddTorqueInRadiansToComponentBody(Z_Param_InComponent,Z_Param_Out_Torque,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddImpulseToComponentBody) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Impulse); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddImpulseToComponentBody(Z_Param_InComponent,Z_Param_Out_Impulse,Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddImpulseAtPositionToComponentBody) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Impulse); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddImpulseAtPositionToComponentBody(Z_Param_InComponent,Z_Param_Out_Impulse,Z_Param_Out_Position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForceAtPositionToComponentBody) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Force); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_GET_UBOOL(Z_Param_bLocalSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddForceAtPositionToComponentBody(Z_Param_InComponent,Z_Param_Out_Force,Z_Param_Out_Position,Z_Param_bLocalSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForceToComponentBody) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Force); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddForceToComponentBody(Z_Param_InComponent,Z_Param_Out_Force,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryGetPlayerControllerFromPawn) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_InPawn); \
		P_GET_ENUM_REF(EExtraSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerController**)Z_Param__Result=UESLibraryBPLibrary::TryGetPlayerControllerFromPawn(Z_Param_InPawn,(EExtraSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTrySetPlayerInputEnabled) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_InPawn); \
		P_GET_UBOOL(Z_Param_bIsEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::TrySetPlayerInputEnabled(Z_Param_InPawn,Z_Param_bIsEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputPriority) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewInputPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetInputPriority(Z_Param_InActor,Z_Param_NewInputPriority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputPriority) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::GetInputPriority(Z_Param_InActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerIP) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_InPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::GetPlayerIP(Z_Param_InPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerIP) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::GetServerIP(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerIpFromGamemode) \
	{ \
		P_GET_OBJECT(AGameMode,Z_Param_InGamemode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::GetServerIpFromGamemode(Z_Param_InGamemode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConnectedClientIPs) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UESLibraryBPLibrary::GetConnectedClientIPs(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEmpty_Name) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_SourceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsEmpty_Name(Z_Param_Out_SourceName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEmpty_String) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsEmpty_String(Z_Param_SourceString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSpaces) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::RemoveSpaces(Z_Param_SourceString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceUnderscore) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::ReplaceUnderscore(Z_Param_SourceString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrintStringWithCategory) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InCategory); \
		P_GET_UBOOL(Z_Param_bPrintToScreen); \
		P_GET_UBOOL(Z_Param_bPrintToLog); \
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::PrintStringWithCategory(Z_Param_WorldContextObject,Z_Param_InString,Z_Param_InCategory,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseVerbosityOfMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InMessage); \
		P_GET_UBOOL(Z_Param_bIsError); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::IncreaseVerbosityOfMessage(Z_Param_InMessage,Z_Param_bIsError); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSortStrings) \
	{ \
		P_GET_TARRAY(FString,Z_Param_UnSortedStrings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UESLibraryBPLibrary::SortStrings(Z_Param_UnSortedStrings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectsOf) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_InType); \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_OutputObjects); \
		P_GET_UBOOL(Z_Param_bIsBlueprintClass); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFolder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::GetObjectsOf(Z_Param_InType,Z_Param_Out_OutputObjects,Z_Param_bIsBlueprintClass,Z_Param_InFolder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFileDir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::DeleteFile(Z_Param_InFileDir); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InDir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::DeleteDirectory(Z_Param_InDir); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubDirectories) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InDir); \
		P_GET_UBOOL(Z_Param_bDeepSearch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UESLibraryBPLibrary::GetSubDirectories(Z_Param_InDir,Z_Param_bDeepSearch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalAppDataDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::GetLocalAppDataDirectory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_CollisionChannelToObjectTypeQuery) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EObjectTypeQuery>*)Z_Param__Result=UESLibraryBPLibrary::Conv_CollisionChannelToObjectTypeQuery(ECollisionChannel(Z_Param_Channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_CollisionChannelsToObjectTypeQuerys) \
	{ \
		P_GET_TARRAY(TEnumAsByte<ECollisionChannel>,Z_Param_Channels); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ConvertedTypes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Conv_CollisionChannelsToObjectTypeQuerys(Z_Param_Channels,Z_Param_Out_ConvertedTypes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_LinearColorToSlateColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InLinearColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateColor*)Z_Param__Result=UESLibraryBPLibrary::Conv_LinearColorToSlateColor(Z_Param_InLinearColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClassFromAssetPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=UESLibraryBPLibrary::GetClassFromAssetPath(Z_Param_Path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllLevels) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(ULevel*,Z_Param_Out_Levels); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::GetAllLevels(Z_Param_WorldContextObject,Z_Param_Out_Levels); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsClassSameAs) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_A); \
		P_GET_OBJECT(UClass,Z_Param_ClassToCompare); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IsClassSameAs(Z_Param_A,Z_Param_ClassToCompare); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreObjectsSameClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_A); \
		P_GET_OBJECT(UObject,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::AreObjectsSameClass(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalVolume) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InAmount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetGlobalVolume(Z_Param_WorldContextObject,Z_Param_InAmount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestExit) \
	{ \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::RequestExit(Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceCrash) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CrashMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::ForceCrash(Z_Param_CrashMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDesktopPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::DesktopPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIosPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::IosPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAndroidPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::AndroidPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::SwitchPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execXboxOnePlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::XboxOnePlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPs4Platform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Ps4Platform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMacPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::MacPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinuxPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::LinuxPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWindowsRtArmPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::WindowsRtArmPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWindowsRtPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::WindowsRtPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWindows64Platform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Windows64Platform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWindows32Platform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::Windows32Platform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWindowsPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::WindowsPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWithEditor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::WithEditor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShippingBuild) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::ShippingBuild(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTestBuild) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::TestBuild(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDevelopmentBuild) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::DevelopmentBuild(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugBuild) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::DebugBuild(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlatformType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EPlatformType*)Z_Param__Result=UESLibraryBPLibrary::GetPlatformType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchOnPlatformType) \
	{ \
		P_GET_ENUM_REF(EPlatformType,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SwitchOnPlatformType((EPlatformType&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGridSnapRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Rotator); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GridDeg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UESLibraryBPLibrary::GridSnapRotation(Z_Param_Rotator,Z_Param_GridDeg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotatorDifference) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UESLibraryBPLibrary::RotatorDifference(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClampToBounds) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_Min); \
		P_GET_STRUCT(FVector,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::ClampToBounds(Z_Param_Point,Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenterBetweenPoints) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_V1); \
		P_GET_STRUCT(FVector,Z_Param_V2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetCenterBetweenPoints(Z_Param_V1,Z_Param_V2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRoundVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::RoundVector(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClampVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Value); \
		P_GET_STRUCT(FVector2D,Z_Param_Min); \
		P_GET_STRUCT(FVector2D,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UESLibraryBPLibrary::ClampVector2D(Z_Param_Value,Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2D_Max) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UESLibraryBPLibrary::Vector2D_Max(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2D_Min) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UESLibraryBPLibrary::Vector2D_Min(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenterBetweenPoints2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_V1); \
		P_GET_STRUCT(FVector2D,Z_Param_V2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UESLibraryBPLibrary::GetCenterBetweenPoints2D(Z_Param_V1,Z_Param_V2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInRange) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Value); \
		P_GET_STRUCT(FVector2D,Z_Param_Min); \
		P_GET_STRUCT(FVector2D,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::InRange(Z_Param_Value,Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRound2DVector) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UESLibraryBPLibrary::Round2DVector(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNegate_Float) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Negate_Float(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSort_Float) \
	{ \
		P_GET_TARRAY(float,Z_Param_InArray); \
		P_GET_UBOOL(Z_Param_IsReversed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=UESLibraryBPLibrary::Sort_Float(Z_Param_InArray,Z_Param_IsReversed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomFloatInRange_Vector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InVector2D); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::RandomFloatInRange_Vector2D(Z_Param_InVector2D); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoopToRange_Float) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InValue); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LoopAt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::LoopToRange_Float(Z_Param_InValue,Z_Param_LoopAt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOneMinus) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::OneMinus(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNegate_Int) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::Negate_Int(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSort_Int) \
	{ \
		P_GET_TARRAY(int32,Z_Param_InArray); \
		P_GET_UBOOL(Z_Param_IsReversed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=UESLibraryBPLibrary::Sort_Int(Z_Param_InArray,Z_Param_IsReversed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomIntegerInRange_IntPoint) \
	{ \
		P_GET_STRUCT(FIntPoint,Z_Param_InIntPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::RandomIntegerInRange_IntPoint(Z_Param_InIntPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoopToRange_Int) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InValue); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LoopAt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::LoopToRange_Int(Z_Param_InValue,Z_Param_LoopAt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAccumulatedPerlinNoise3D) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Out); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Frequencies); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Amplitudes); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AccumulatedPerlinNoise3D(Z_Param_Out_Out,Z_Param_Out_Frequencies,Z_Param_Out_Amplitudes,Z_Param_X,Z_Param_Y,Z_Param_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAccumulatedPerlinNoise2D) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Out); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Frequencies); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Amplitudes); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AccumulatedPerlinNoise2D(Z_Param_Out_Out,Z_Param_Out_Frequencies,Z_Param_Out_Amplitudes,Z_Param_X,Z_Param_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAccumulatedPerlinNoise1D) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Out); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Frequencies); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Amplitudes); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AccumulatedPerlinNoise1D(Z_Param_Out_Out,Z_Param_Out_Frequencies,Z_Param_Out_Amplitudes,Z_Param_X); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerlinNoise3D) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Out); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Frequency); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amplitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::PerlinNoise3D(Z_Param_Out_Out,Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_Frequency,Z_Param_Amplitude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerlinNoise2D) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Out); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Frequency); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amplitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::PerlinNoise2D(Z_Param_Out_Out,Z_Param_X,Z_Param_Y,Z_Param_Frequency,Z_Param_Amplitude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerlinNoise1D) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Out); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Frequency); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amplitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::PerlinNoise1D(Z_Param_Out_Out,Z_Param_X,Z_Param_Frequency,Z_Param_Amplitude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOctavePerlinNoise3D) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Out); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Octaves); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Persistence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::OctavePerlinNoise3D(Z_Param_Out_Out,Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_Octaves,Z_Param_Persistence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOctavePerlinNoise2D) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Out); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Octaves); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Persistence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::OctavePerlinNoise2D(Z_Param_Out_Out,Z_Param_X,Z_Param_Y,Z_Param_Octaves,Z_Param_Persistence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOctavePerlinNoise1D) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Out); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Octaves); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Persistence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::OctavePerlinNoise1D(Z_Param_Out_Out,Z_Param_X,Z_Param_Octaves,Z_Param_Persistence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatToVector) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::QuatToVector(Z_Param_Out_Quat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInverse) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::Inverse(Z_Param_Out_Quat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpVector) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetUpVector(Z_Param_Out_Quat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRightVector) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetRightVector(Z_Param_Out_Quat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForwardVector) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::GetForwardVector(Z_Param_Out_Quat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindBetweenNormals) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal1); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::FindBetweenNormals(Z_Param_Out_Normal1,Z_Param_Out_Normal2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatAxisAngleDeg) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutAngleDeg); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAxis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::QuatAxisAngleDeg(Z_Param_Out_Quat,Z_Param_Out_OutAngleDeg,Z_Param_Out_OutAxis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatAxisAngleRad) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutAngleRad); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAxis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::QuatAxisAngleRad(Z_Param_Out_Quat,Z_Param_Out_OutAngleRad,Z_Param_Out_OutAxis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakTransformQuat) \
	{ \
		P_GET_STRUCT(FTransform,Z_Param_Transform); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_RotationQuat); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::BreakTransformQuat(Z_Param_Transform,Z_Param_Out_Location,Z_Param_Out_RotationQuat,Z_Param_Out_Scale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransformQuat) \
	{ \
		P_GET_STRUCT(FTransform,Z_Param_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::GetTransformQuat(Z_Param_Transform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetComponentWorldRotation) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Component); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutSweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetComponentWorldRotation(Z_Param_Component,Z_Param_Out_Quat,Z_Param_bSweep,Z_Param_Out_OutSweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetComponentRelativeRotation) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Component); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutSweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetComponentRelativeRotation(Z_Param_Component,Z_Param_Out_Quat,Z_Param_bSweep,Z_Param_Out_OutSweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorRotation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetActorRotation(Z_Param_Actor,Z_Param_Out_Quat,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorRelativeRotation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutSweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::SetActorRelativeRotation(Z_Param_Actor,Z_Param_Out_Quat,Z_Param_bSweep,Z_Param_Out_OutSweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddComponentWorldRotation) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Component); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutSweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddComponentWorldRotation(Z_Param_Component,Z_Param_Out_Quat,Z_Param_bSweep,Z_Param_Out_OutSweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddComponentRelativeRotation) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Component); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutSweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddComponentRelativeRotation(Z_Param_Component,Z_Param_Out_Quat,Z_Param_bSweep,Z_Param_Out_OutSweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddComponentLocalRotation) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Component); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutSweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddComponentLocalRotation(Z_Param_Component,Z_Param_Out_Quat,Z_Param_bSweep,Z_Param_Out_OutSweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddActorWorldRotation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutSweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddActorWorldRotation(Z_Param_Actor,Z_Param_Out_Quat,Z_Param_bSweep,Z_Param_Out_OutSweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddActorLocalRotation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutSweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::AddActorLocalRotation(Z_Param_Actor,Z_Param_Out_Quat,Z_Param_bSweep,Z_Param_Out_OutSweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatToString) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::QuatToString(Z_Param_Out_Quat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreQuatsEqual) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UESLibraryBPLibrary::AreQuatsEqual(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatDivFloatScale) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::QuatDivFloatScale(Z_Param_Out_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatMultiplyFloatScale) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::QuatMultiplyFloatScale(Z_Param_Out_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatMultiplyQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::QuatMultiplyQuat(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatMinusQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::QuatMinusQuat(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatPlusQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::QuatPlusQuat(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatToEulerDeg) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UESLibraryBPLibrary::QuatToEulerDeg(Z_Param_Out_Quat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEulerDegToQuat) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Euler); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::EulerDegToQuat(Z_Param_Euler); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAngleBetweenQuatsDeg) \
	{ \
		P_GET_STRUCT(FQuat,Z_Param_A); \
		P_GET_STRUCT(FQuat,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::AngleBetweenQuatsDeg(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAngleBetweenQuatsRad) \
	{ \
		P_GET_STRUCT(FQuat,Z_Param_A); \
		P_GET_STRUCT(FQuat,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::AngleBetweenQuatsRad(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAngleBetweenDirectionVectorsDeg) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::AngleBetweenDirectionVectorsDeg(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAngleBetweenDirectionVectorsRad) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::AngleBetweenDirectionVectorsRad(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuatToRotator) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UESLibraryBPLibrary::QuatToRotator(Z_Param_Out_Quat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotatorToQuat) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Rotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::RotatorToQuat(Z_Param_Rotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVectorToOrientationRotator) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UESLibraryBPLibrary::VectorToOrientationRotator(Z_Param_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVectorToOrientationQuat) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::VectorToOrientationQuat(Z_Param_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDot) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::Dot(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlerp_NotNormalized) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Slerp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::Slerp_NotNormalized(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_Slerp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlerp) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Slerp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::Slerp(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_Slerp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastBiLerp) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_P00); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_P10); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_P01); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_P11); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FracX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FracY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::FastBiLerp(Z_Param_Out_P00,Z_Param_Out_P10,Z_Param_Out_P01,Z_Param_Out_P11,Z_Param_Out_FracX,Z_Param_Out_FracY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBiLerp) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_P00); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_P10); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_P01); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_P11); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FracX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FracY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::BiLerp(Z_Param_Out_P00,Z_Param_Out_P10,Z_Param_Out_P01,Z_Param_Out_P11,Z_Param_Out_FracX,Z_Param_Out_FracY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastLerp) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::FastLerp(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_Alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLerp) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UESLibraryBPLibrary::Lerp(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_Alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFPercent) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_f); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::FPercent(Z_Param_Value,Z_Param_f); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFDivide) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_f); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::FDivide(Z_Param_Value,Z_Param_f); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFMultiply) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::FMultiply(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFDecrement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::FDecrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFIncrement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::FIncrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFPreDecrement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::FPreDecrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFPosDecrement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::FPosDecrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFPreIncrement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::FPreIncrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFPosIncrement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::FPosIncrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execINTPercent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_i); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::INTPercent(Z_Param_Value,Z_Param_i); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execINTModulo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_i); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::INTModulo(Z_Param_Value,Z_Param_i); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execINTDivide) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_i); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::INTDivide(Z_Param_Value,Z_Param_i); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execINTMultiply) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::INTMultiply(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execINTDecrement) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::INTDecrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execINTIncrement) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::INTIncrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execINTPreDecrement) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::INTPreDecrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execINTPosDecrement) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::INTPosDecrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execINTPreIncrement) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::INTPreIncrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execINTPosIncrement) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::INTPosIncrement(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_PhysMat) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Check); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Against); \
		P_GET_ENUM(EN_Match,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_PhysMat(EObjectTypeQuery(Z_Param_Check),EObjectTypeQuery(Z_Param_Against),EN_Match(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_Trace) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Check); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Against); \
		P_GET_ENUM(EN_Match,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_Trace(ETraceTypeQuery(Z_Param_Check),ETraceTypeQuery(Z_Param_Against),EN_Match(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_PCNotEqual) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Check); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Against); \
		P_GET_ENUM(EN_NotEqual,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_PCNotEqual(Z_Param_Check,Z_Param_Against,EN_NotEqual(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_PCEquals) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Check); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Against); \
		P_GET_ENUM(EN_Equals,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_PCEquals(Z_Param_Check,Z_Param_Against,EN_Equals(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_SCNotEqual) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Check); \
		P_GET_OBJECT(USceneComponent,Z_Param_Against); \
		P_GET_ENUM(EN_NotEqual,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_SCNotEqual(Z_Param_Check,Z_Param_Against,EN_NotEqual(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_SCEquals) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Check); \
		P_GET_OBJECT(USceneComponent,Z_Param_Against); \
		P_GET_ENUM(EN_Equals,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_SCEquals(Z_Param_Check,Z_Param_Against,EN_Equals(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_ANotEqual) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Check); \
		P_GET_OBJECT(AActor,Z_Param_Against); \
		P_GET_ENUM(EN_NotEqual,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_ANotEqual(Z_Param_Check,Z_Param_Against,EN_NotEqual(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_AEquals) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Check); \
		P_GET_OBJECT(AActor,Z_Param_Against); \
		P_GET_ENUM(EN_Equals,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_AEquals(Z_Param_Check,Z_Param_Against,EN_Equals(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_Color) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_Check); \
		P_GET_STRUCT(FLinearColor,Z_Param_Against); \
		P_GET_ENUM(EN_Match,Z_Param_Branches); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_Color(Z_Param_Check,Z_Param_Against,EN_Match(Z_Param_Branches),Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_FGreaterOREqual) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Check); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Against); \
		P_GET_ENUM(EN_IfThenElse,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_FGreaterOREqual(Z_Param_Check,Z_Param_Against,EN_IfThenElse(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_FLessOREqual) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Check); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Against); \
		P_GET_ENUM(EN_IfThenElse,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_FLessOREqual(Z_Param_Check,Z_Param_Against,EN_IfThenElse(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_FGreaterThan) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Check); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Against); \
		P_GET_ENUM(EN_IfThenElse,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_FGreaterThan(Z_Param_Check,Z_Param_Against,EN_IfThenElse(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_FLessThan) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Check); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Against); \
		P_GET_ENUM(EN_IfThenElse,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_FLessThan(Z_Param_Check,Z_Param_Against,EN_IfThenElse(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_FNotEqual) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Check); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Against); \
		P_GET_ENUM(EN_NotEqual,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_FNotEqual(Z_Param_Check,Z_Param_Against,EN_NotEqual(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_FEquals) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Check); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Against); \
		P_GET_ENUM(EN_Equals,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_FEquals(Z_Param_Check,Z_Param_Against,EN_Equals(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_INTGreaterOREqual) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Check); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Against); \
		P_GET_ENUM(EN_IfThenElse,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_INTGreaterOREqual(Z_Param_Check,Z_Param_Against,EN_IfThenElse(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_INTLessOREqual) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Check); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Against); \
		P_GET_ENUM(EN_IfThenElse,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_INTLessOREqual(Z_Param_Check,Z_Param_Against,EN_IfThenElse(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_INTGreaterThan) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Check); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Against); \
		P_GET_ENUM(EN_IfThenElse,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_INTGreaterThan(Z_Param_Check,Z_Param_Against,EN_IfThenElse(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_INTLessThan) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Check); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Against); \
		P_GET_ENUM(EN_IfThenElse,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_INTLessThan(Z_Param_Check,Z_Param_Against,EN_IfThenElse(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_INTNotEqual) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Check); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Against); \
		P_GET_ENUM(EN_NotEqual,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_INTNotEqual(Z_Param_Check,Z_Param_Against,EN_NotEqual(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_INTEquals) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Check); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Against); \
		P_GET_ENUM(EN_Equals,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_INTEquals(Z_Param_Check,Z_Param_Against,EN_Equals(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_TXEquals) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_Check); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Against); \
		P_GET_ENUM(EN_Equals,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_TXEquals(Z_Param_Check,Z_Param_Against,EN_Equals(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_STEquals) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Check); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Against); \
		P_GET_ENUM(EN_Equals,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_STEquals(Z_Param_Check,Z_Param_Against,EN_Equals(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_ONotEqual) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Check); \
		P_GET_OBJECT(UObject,Z_Param_Against); \
		P_GET_ENUM(EN_NotEqual,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_ONotEqual(Z_Param_Check,Z_Param_Against,EN_NotEqual(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranch_OEquals) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Check); \
		P_GET_OBJECT(UObject,Z_Param_Against); \
		P_GET_ENUM(EN_Equals,Z_Param_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::Branch_OEquals(Z_Param_Check,Z_Param_Against,EN_Equals(Z_Param_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextureFromDataTable) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_Table); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InRowName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InColumnName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSoftObjectPtr<UTexture>*)Z_Param__Result=UESLibraryBPLibrary::GetTextureFromDataTable(Z_Param_Table,Z_Param_InRowName,Z_Param_InColumnName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringValueFromDataTable) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_Table); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InRowName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InColumnName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UESLibraryBPLibrary::GetStringValueFromDataTable(Z_Param_Table,Z_Param_InRowName,Z_Param_InColumnName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatValueFromDataTable) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_Table); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InRowName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InColumnName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UESLibraryBPLibrary::GetFloatValueFromDataTable(Z_Param_Table,Z_Param_InRowName,Z_Param_InColumnName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntValueFromDataTable) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_Table); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InRowName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InColumnName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UESLibraryBPLibrary::GetIntValueFromDataTable(Z_Param_Table,Z_Param_InRowName,Z_Param_InColumnName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCSVRowNames) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_Table); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutRowNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::GetCSVRowNames(Z_Param_Table,Z_Param_Out_OutRowNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCSVTableString) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UESLibraryBPLibrary::GetCSVTableString(Z_Param_DataTable,Z_Param_Out_OutResult); \
		P_NATIVE_END; \
	}


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUESLibraryBPLibrary(); \
	friend struct Z_Construct_UClass_UESLibraryBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UESLibraryBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ESLibrary"), NO_API) \
	DECLARE_SERIALIZER(UESLibraryBPLibrary)


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_INCLASS \
private: \
	static void StaticRegisterNativesUESLibraryBPLibrary(); \
	friend struct Z_Construct_UClass_UESLibraryBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UESLibraryBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ESLibrary"), NO_API) \
	DECLARE_SERIALIZER(UESLibraryBPLibrary)


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UESLibraryBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UESLibraryBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UESLibraryBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UESLibraryBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UESLibraryBPLibrary(UESLibraryBPLibrary&&); \
	NO_API UESLibraryBPLibrary(const UESLibraryBPLibrary&); \
public:


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UESLibraryBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UESLibraryBPLibrary(UESLibraryBPLibrary&&); \
	NO_API UESLibraryBPLibrary(const UESLibraryBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UESLibraryBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UESLibraryBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UESLibraryBPLibrary)


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_PRIVATE_PROPERTY_OFFSET
#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_274_PROLOG
#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_PRIVATE_PROPERTY_OFFSET \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_RPC_WRAPPERS \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_INCLASS \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_PRIVATE_PROPERTY_OFFSET \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_INCLASS_NO_PURE_DECLS \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ESLibraryBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESLIBRARY_API UClass* StaticClass<class UESLibraryBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h


#define FOREACH_ENUM_EEASINGTYPE(op) \
	op(EEasingType::Linear) \
	op(EEasingType::SineIn) \
	op(EEasingType::SineOut) \
	op(EEasingType::SineInOut) \
	op(EEasingType::QuadIn) \
	op(EEasingType::QuadOut) \
	op(EEasingType::QuadInOut) \
	op(EEasingType::CubicIn) \
	op(EEasingType::CubicOut) \
	op(EEasingType::CubicInOut) \
	op(EEasingType::QuartIn) \
	op(EEasingType::QuartOut) \
	op(EEasingType::QuartInOut) \
	op(EEasingType::QuintIn) \
	op(EEasingType::QuintOut) \
	op(EEasingType::QuintInOut) \
	op(EEasingType::ExpoIn) \
	op(EEasingType::ExpoOut) \
	op(EEasingType::ExpoInOut) \
	op(EEasingType::CircIn) \
	op(EEasingType::CircOut) \
	op(EEasingType::CircInOut) \
	op(EEasingType::BackIn) \
	op(EEasingType::BackOut) \
	op(EEasingType::BackInOut) \
	op(EEasingType::ElasticIn) \
	op(EEasingType::ElasticOut) \
	op(EEasingType::ElasticInOut) \
	op(EEasingType::BounceIn) \
	op(EEasingType::BounceOut) \
	op(EEasingType::BounceInOut) \
	op(EEasingType::SineOutIn) \
	op(EEasingType::QuadOutIn) \
	op(EEasingType::CubicOutIn) \
	op(EEasingType::QuartOutIn) \
	op(EEasingType::QuintOutIn) \
	op(EEasingType::ExpoOutIn) \
	op(EEasingType::CircOutIn) \
	op(EEasingType::BackOutIn) \
	op(EEasingType::ElasticOutIn) \
	op(EEasingType::BounceOutIn) 

enum class EEasingType : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<EEasingType>();

#define FOREACH_ENUM_EJOYIMAGEFORMATS(op) \
	op(EJoyImageFormats::JPG) \
	op(EJoyImageFormats::PNG) \
	op(EJoyImageFormats::BMP) \
	op(EJoyImageFormats::ICO) \
	op(EJoyImageFormats::EXR) \
	op(EJoyImageFormats::ICNS) 

enum class EJoyImageFormats : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<EJoyImageFormats>();

#define FOREACH_ENUM_DIRTYPE(op) \
	op(DirType::GameDir) \
	op(DirType::ContentDir) 

enum class DirType : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<DirType>();

#define FOREACH_ENUM_EFOCUSCAUSEDBY(op) \
	op(EFocusCausedBy::Mouse) \
	op(EFocusCausedBy::Navigation) \
	op(EFocusCausedBy::SetDirectly) \
	op(EFocusCausedBy::Cleared) \
	op(EFocusCausedBy::OtherWidgetLostFocus) \
	op(EFocusCausedBy::WindowActivate) 

enum class EFocusCausedBy : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<EFocusCausedBy>();

#define FOREACH_ENUM_EEXTRASWITCH(op) \
	op(EExtraSwitch::OnSucceeded) \
	op(EExtraSwitch::OnFailed) 

enum class EExtraSwitch : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<EExtraSwitch>();

#define FOREACH_ENUM_EPLATFORMTYPE(op) \
	op(EPlatformType::XboxOne) \
	op(EPlatformType::PS4) \
	op(EPlatformType::Switch) \
	op(EPlatformType::Desktop) 

enum class EPlatformType : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<EPlatformType>();

#define FOREACH_ENUM_EN_IFTHENELSE(op) \
	op(EN_IfThenElse::IfTrue) \
	op(EN_IfThenElse::ElseDo) 

enum class EN_IfThenElse : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<EN_IfThenElse>();

#define FOREACH_ENUM_EN_MATCH(op) \
	op(EN_Match::IfMatch) \
	op(EN_Match::IfNot) 

enum class EN_Match : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<EN_Match>();

#define FOREACH_ENUM_EN_NOTEQUAL(op) \
	op(EN_NotEqual::IfNotEqual) \
	op(EN_NotEqual::IfSo) 

enum class EN_NotEqual : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<EN_NotEqual>();

#define FOREACH_ENUM_EN_EQUALS(op) \
	op(EN_Equals::IfEquals) \
	op(EN_Equals::IfNot) 

enum class EN_Equals : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<EN_Equals>();

#define FOREACH_ENUM_EN_ISVALID(op) \
	op(EN_IsValid::IsValid) \
	op(EN_IsValid::IsNot) 

enum class EN_IsValid : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<EN_IsValid>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
