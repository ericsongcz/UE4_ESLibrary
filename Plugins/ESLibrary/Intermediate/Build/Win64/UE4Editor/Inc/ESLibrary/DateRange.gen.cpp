// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ESLibrary/Public/DateRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDateRange() {}
// Cross Module References
	ESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FDateRange();
	UPackage* Z_Construct_UPackage__Script_ESLibrary();
	ESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FDateRangeBound();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ERangeBoundTypes();
// End Cross Module References
	struct Z_Construct_UScriptStruct_FDateRange_Statics
	{
		struct FDateRangeBound
		{
			TEnumAsByte<ERangeBoundTypes::Type> Type;
			FDateTime Value;
		};

		struct FDateRange
		{
			FDateRangeBound LowerBound;
			FDateRangeBound UpperBound;
		};

#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpperBound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowerBound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDateRange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A contiguous set of floats described by lower and upper bound values.\n * @note This is a mirror of TRange<float>, defined in Range.h\n */" },
		{ "ModuleRelativePath", "Public/DateRange.h" },
		{ "ToolTip", "A contiguous set of floats described by lower and upper bound values.\n@note This is a mirror of TRange<float>, defined in Range.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDateRange_Statics::NewProp_UpperBound_MetaData[] = {
		{ "Category", "Range" },
		{ "Comment", "/** Holds the range's upper bound. */" },
		{ "ModuleRelativePath", "Public/DateRange.h" },
		{ "ToolTip", "Holds the range's upper bound." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDateRange_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDateRange, UpperBound), Z_Construct_UScriptStruct_FDateRangeBound, METADATA_PARAMS(Z_Construct_UScriptStruct_FDateRange_Statics::NewProp_UpperBound_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDateRange_Statics::NewProp_UpperBound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDateRange_Statics::NewProp_LowerBound_MetaData[] = {
		{ "Category", "Range" },
		{ "Comment", "/** Holds the range's lower bound. */" },
		{ "ModuleRelativePath", "Public/DateRange.h" },
		{ "ToolTip", "Holds the range's lower bound." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDateRange_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDateRange, LowerBound), Z_Construct_UScriptStruct_FDateRangeBound, METADATA_PARAMS(Z_Construct_UScriptStruct_FDateRange_Statics::NewProp_LowerBound_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDateRange_Statics::NewProp_LowerBound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDateRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDateRange_Statics::NewProp_UpperBound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDateRange_Statics::NewProp_LowerBound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDateRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
		nullptr,
		nullptr,
		"DateRange",
		sizeof(FDateRange),
		alignof(FDateRange),
		Z_Construct_UScriptStruct_FDateRange_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDateRange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDateRange_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDateRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDateRange()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDateRange_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ESLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DateRange"), sizeof(Z_Construct_UScriptStruct_FDateRange_Statics::FDateRange), Get_Z_Construct_UScriptStruct_FDateRange_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDateRange_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDateRange_Hash() { return 2300482041U; }
	struct Z_Construct_UScriptStruct_FDateRangeBound_Statics
	{
		struct FDateRangeBound
		{
			TEnumAsByte<ERangeBoundTypes::Type> Type;
			FDateTime Value;
		};

#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDateRangeBound_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines a single bound for a range of values.\n * @note This is a mirror of TRangeBound<float>, defined in RangeBound.h\n */" },
		{ "ModuleRelativePath", "Public/DateRange.h" },
		{ "ToolTip", "Defines a single bound for a range of values.\n@note This is a mirror of TRangeBound<float>, defined in RangeBound.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDateRangeBound_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Range" },
		{ "Comment", "/** Holds the bound's value. */" },
		{ "ModuleRelativePath", "Public/DateRange.h" },
		{ "ToolTip", "Holds the bound's value." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDateRangeBound_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDateRangeBound, Value), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FDateRangeBound_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDateRangeBound_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDateRangeBound_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Range" },
		{ "Comment", "/** Holds the type of the bound. */" },
		{ "ModuleRelativePath", "Public/DateRange.h" },
		{ "ToolTip", "Holds the type of the bound." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDateRangeBound_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDateRangeBound, Type), Z_Construct_UEnum_CoreUObject_ERangeBoundTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FDateRangeBound_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDateRangeBound_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDateRangeBound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDateRangeBound_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDateRangeBound_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDateRangeBound_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
		nullptr,
		nullptr,
		"DateRangeBound",
		sizeof(FDateRangeBound),
		alignof(FDateRangeBound),
		Z_Construct_UScriptStruct_FDateRangeBound_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDateRangeBound_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDateRangeBound_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDateRangeBound_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDateRangeBound()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDateRangeBound_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ESLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DateRangeBound"), sizeof(Z_Construct_UScriptStruct_FDateRangeBound_Statics::FDateRangeBound), Get_Z_Construct_UScriptStruct_FDateRangeBound_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDateRangeBound_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDateRangeBound_Hash() { return 2958890361U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
