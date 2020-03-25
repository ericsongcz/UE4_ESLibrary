// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ESLibrary/Public/MySQLConnectorStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySQLConnectorStructs() {}
// Cross Module References
	ESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorTable();
	UPackage* Z_Construct_UPackage__Script_ESLibrary();
	ESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorTableField();
	ESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey();
// End Cross Module References
class UScriptStruct* FMySQLConnectorTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ESLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FMySQLConnectorTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLConnectorTable, Z_Construct_UPackage__Script_ESLibrary(), TEXT("MySQLConnectorTable"), sizeof(FMySQLConnectorTable), Get_Z_Construct_UScriptStruct_FMySQLConnectorTable_Hash());
	}
	return Singleton;
}
template<> ESLIBRARY_API UScriptStruct* StaticStruct<FMySQLConnectorTable>()
{
	return FMySQLConnectorTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMySQLConnectorTable(FMySQLConnectorTable::StaticStruct, TEXT("/Script/ESLibrary"), TEXT("MySQLConnectorTable"), false, nullptr, nullptr);
static struct FScriptStruct_ESLibrary_StaticRegisterNativesFMySQLConnectorTable
{
	FScriptStruct_ESLibrary_StaticRegisterNativesFMySQLConnectorTable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MySQLConnectorTable")),new UScriptStruct::TCppStructOps<FMySQLConnectorTable>);
	}
} ScriptStruct_ESLibrary_StaticRegisterNativesFMySQLConnectorTable;
	struct Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[];
#endif
		static void NewProp_Created_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Created;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Fields;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Fields_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLConnectorTable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Created_MetaData[] = {
		{ "Category", "ES|MySQLConnector|Tables|Fields" },
		{ "Comment", "/** Created Key */" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
		{ "ToolTip", "Created Key" },
	};
#endif
	void Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Created_SetBit(void* Obj)
	{
		((FMySQLConnectorTable*)Obj)->Created = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMySQLConnectorTable), &Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Created_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Created_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Created_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Fields_MetaData[] = {
		{ "Category", "ES|MySQLConnector|Tables|Fields" },
		{ "Comment", "/** Array with Fields*/" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
		{ "ToolTip", "Array with Fields" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorTable, Fields), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Fields_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Fields_Inner = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMySQLConnectorTableField, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_TableName_MetaData[] = {
		{ "Category", "ES|MySQLConnector|Tables|Fields" },
		{ "Comment", "/** Table name*/" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
		{ "ToolTip", "Table name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorTable, TableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_TableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_TableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_DatabaseName_MetaData[] = {
		{ "Category", "ES|MySQLConnector|Tables|Fields" },
		{ "Comment", "/** Database name*/" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
		{ "ToolTip", "Database name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorTable, DatabaseName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_DatabaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_DatabaseName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Created,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Fields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Fields_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_TableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_DatabaseName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
		nullptr,
		&NewStructOps,
		"MySQLConnectorTable",
		sizeof(FMySQLConnectorTable),
		alignof(FMySQLConnectorTable),
		Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMySQLConnectorTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ESLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MySQLConnectorTable"), sizeof(FMySQLConnectorTable), Get_Z_Construct_UScriptStruct_FMySQLConnectorTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMySQLConnectorTable_Hash() { return 1786075442U; }
class UScriptStruct* FMySQLConnectorPrimaryKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ESLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey, Z_Construct_UPackage__Script_ESLibrary(), TEXT("MySQLConnectorPrimaryKey"), sizeof(FMySQLConnectorPrimaryKey), Get_Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Hash());
	}
	return Singleton;
}
template<> ESLIBRARY_API UScriptStruct* StaticStruct<FMySQLConnectorPrimaryKey>()
{
	return FMySQLConnectorPrimaryKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMySQLConnectorPrimaryKey(FMySQLConnectorPrimaryKey::StaticStruct, TEXT("/Script/ESLibrary"), TEXT("MySQLConnectorPrimaryKey"), false, nullptr, nullptr);
static struct FScriptStruct_ESLibrary_StaticRegisterNativesFMySQLConnectorPrimaryKey
{
	FScriptStruct_ESLibrary_StaticRegisterNativesFMySQLConnectorPrimaryKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MySQLConnectorPrimaryKey")),new UScriptStruct::TCppStructOps<FMySQLConnectorPrimaryKey>);
	}
} ScriptStruct_ESLibrary_StaticRegisterNativesFMySQLConnectorPrimaryKey;
	struct Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResultStr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLConnectorPrimaryKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::NewProp_ResultStr_MetaData[] = {
		{ "Category", "ES|MySQLConnector|Tables|Fields" },
		{ "Comment", "/** String with piece if SQL script*/" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
		{ "ToolTip", "String with piece if SQL script" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::NewProp_ResultStr = { "ResultStr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorPrimaryKey, ResultStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::NewProp_ResultStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::NewProp_ResultStr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::NewProp_ResultStr,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
		nullptr,
		&NewStructOps,
		"MySQLConnectorPrimaryKey",
		sizeof(FMySQLConnectorPrimaryKey),
		alignof(FMySQLConnectorPrimaryKey),
		Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ESLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MySQLConnectorPrimaryKey"), sizeof(FMySQLConnectorPrimaryKey), Get_Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Hash() { return 4154222729U; }
class UScriptStruct* FMySQLConnectorTableField::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ESLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FMySQLConnectorTableField_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLConnectorTableField, Z_Construct_UPackage__Script_ESLibrary(), TEXT("MySQLConnectorTableField"), sizeof(FMySQLConnectorTableField), Get_Z_Construct_UScriptStruct_FMySQLConnectorTableField_Hash());
	}
	return Singleton;
}
template<> ESLIBRARY_API UScriptStruct* StaticStruct<FMySQLConnectorTableField>()
{
	return FMySQLConnectorTableField::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMySQLConnectorTableField(FMySQLConnectorTableField::StaticStruct, TEXT("/Script/ESLibrary"), TEXT("MySQLConnectorTableField"), false, nullptr, nullptr);
static struct FScriptStruct_ESLibrary_StaticRegisterNativesFMySQLConnectorTableField
{
	FScriptStruct_ESLibrary_StaticRegisterNativesFMySQLConnectorTableField()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MySQLConnectorTableField")),new UScriptStruct::TCppStructOps<FMySQLConnectorTableField>);
	}
} ScriptStruct_ESLibrary_StaticRegisterNativesFMySQLConnectorTableField;
	struct Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResultStr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLConnectorTableField>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "Category", "ES|MySQLConnector|Tables|Fields" },
		{ "Comment", "/** Field value*/" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
		{ "ToolTip", "Field value" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorTableField, FieldValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldType_MetaData[] = {
		{ "Category", "ES|MySQLConnector|Tables|Fields" },
		{ "Comment", "/** Field type*/" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
		{ "ToolTip", "Field type" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldType = { "FieldType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorTableField, FieldType), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldName_MetaData[] = {
		{ "Category", "ES|MySQLConnector|Tables|Fields" },
		{ "Comment", "/** Field name*/" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
		{ "ToolTip", "Field name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorTableField, FieldName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_ResultStr_MetaData[] = {
		{ "Category", "ES|MySQLConnector|Tables|Fields" },
		{ "Comment", "/** String with piece if SQL script*/" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
		{ "ToolTip", "String with piece if SQL script" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_ResultStr = { "ResultStr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorTableField, ResultStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_ResultStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_ResultStr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_ResultStr,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
		nullptr,
		&NewStructOps,
		"MySQLConnectorTableField",
		sizeof(FMySQLConnectorTableField),
		alignof(FMySQLConnectorTableField),
		Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorTableField()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMySQLConnectorTableField_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ESLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MySQLConnectorTableField"), sizeof(FMySQLConnectorTableField), Get_Z_Construct_UScriptStruct_FMySQLConnectorTableField_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMySQLConnectorTableField_Hash() { return 2364061387U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
