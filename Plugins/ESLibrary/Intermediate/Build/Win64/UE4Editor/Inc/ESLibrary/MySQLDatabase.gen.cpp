// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ESLibrary/Public/MySQLDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySQLDatabase() {}
// Cross Module References
	ESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult();
	UPackage* Z_Construct_UPackage__Script_ESLibrary();
	ESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow();
	ESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair();
	ESLIBRARY_API UClass* Z_Construct_UClass_UMySQLDatabase_NoRegister();
	ESLIBRARY_API UClass* Z_Construct_UClass_UMySQLDatabase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UMySQLDatabase_CreateTable();
	ESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorTable();
	ESLIBRARY_API UClass* Z_Construct_UClass_UMySQLConnection_NoRegister();
	ESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorTableField();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UMySQLDatabase_DropTable();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UMySQLDatabase_TruncateTable();
// End Cross Module References
class UScriptStruct* FMySQLConnectoreQueryResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ESLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult, Z_Construct_UPackage__Script_ESLibrary(), TEXT("MySQLConnectoreQueryResult"), sizeof(FMySQLConnectoreQueryResult), Get_Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Hash());
	}
	return Singleton;
}
template<> ESLIBRARY_API UScriptStruct* StaticStruct<FMySQLConnectoreQueryResult>()
{
	return FMySQLConnectoreQueryResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMySQLConnectoreQueryResult(FMySQLConnectoreQueryResult::StaticStruct, TEXT("/Script/ESLibrary"), TEXT("MySQLConnectoreQueryResult"), false, nullptr, nullptr);
static struct FScriptStruct_ESLibrary_StaticRegisterNativesFMySQLConnectoreQueryResult
{
	FScriptStruct_ESLibrary_StaticRegisterNativesFMySQLConnectoreQueryResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MySQLConnectoreQueryResult")),new UScriptStruct::TCppStructOps<FMySQLConnectoreQueryResult>);
	}
} ScriptStruct_ESLibrary_StaticRegisterNativesFMySQLConnectoreQueryResult;
	struct Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultRows_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultRows;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultRows_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLConnectoreQueryResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "ES|MySQLConnector Query Result" },
		{ "Comment", "/** If the query was unsuccessful a human readable error message will be populated here */" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "If the query was unsuccessful a human readable error message will be populated here" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectoreQueryResult, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_Success_MetaData[] = {
		{ "Category", "ES|MySQLConnector Query Result" },
		{ "Comment", "/** Was the query successful or not */" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "Was the query successful or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FMySQLConnectoreQueryResult*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMySQLConnectoreQueryResult), &Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_Success_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ResultRows_MetaData[] = {
		{ "Category", "ES|MySQLConnector Query Result" },
		{ "Comment", "/** The resulting rows from the query */" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "The resulting rows from the query" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ResultRows = { "ResultRows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectoreQueryResult, ResultRows), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ResultRows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ResultRows_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ResultRows_Inner = { "ResultRows", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ResultRows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ResultRows_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
		nullptr,
		&NewStructOps,
		"MySQLConnectoreQueryResult",
		sizeof(FMySQLConnectoreQueryResult),
		alignof(FMySQLConnectoreQueryResult),
		Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ESLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MySQLConnectoreQueryResult"), sizeof(FMySQLConnectoreQueryResult), Get_Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Hash() { return 3199932310U; }
class UScriptStruct* FMySQLConnectorQueryResultRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ESLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow, Z_Construct_UPackage__Script_ESLibrary(), TEXT("MySQLConnectorQueryResultRow"), sizeof(FMySQLConnectorQueryResultRow), Get_Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Hash());
	}
	return Singleton;
}
template<> ESLIBRARY_API UScriptStruct* StaticStruct<FMySQLConnectorQueryResultRow>()
{
	return FMySQLConnectorQueryResultRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMySQLConnectorQueryResultRow(FMySQLConnectorQueryResultRow::StaticStruct, TEXT("/Script/ESLibrary"), TEXT("MySQLConnectorQueryResultRow"), false, nullptr, nullptr);
static struct FScriptStruct_ESLibrary_StaticRegisterNativesFMySQLConnectorQueryResultRow
{
	FScriptStruct_ESLibrary_StaticRegisterNativesFMySQLConnectorQueryResultRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MySQLConnectorQueryResultRow")),new UScriptStruct::TCppStructOps<FMySQLConnectorQueryResultRow>);
	}
} ScriptStruct_ESLibrary_StaticRegisterNativesFMySQLConnectorQueryResultRow;
	struct Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Fields;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Fields_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLConnectorQueryResultRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::NewProp_Fields_MetaData[] = {
		{ "Category", "ES|MySQLConnector Query Result" },
		{ "Comment", "/** A list of field name, field value pairs */" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "A list of field name, field value pairs" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorQueryResultRow, Fields), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::NewProp_Fields_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::NewProp_Fields_Inner = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::NewProp_Fields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::NewProp_Fields_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
		nullptr,
		&NewStructOps,
		"MySQLConnectorQueryResultRow",
		sizeof(FMySQLConnectorQueryResultRow),
		alignof(FMySQLConnectorQueryResultRow),
		Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ESLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MySQLConnectorQueryResultRow"), sizeof(FMySQLConnectorQueryResultRow), Get_Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Hash() { return 3052210587U; }
class UScriptStruct* FMySQLConnectorKeyValuePair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ESLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair, Z_Construct_UPackage__Script_ESLibrary(), TEXT("MySQLConnectorKeyValuePair"), sizeof(FMySQLConnectorKeyValuePair), Get_Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Hash());
	}
	return Singleton;
}
template<> ESLIBRARY_API UScriptStruct* StaticStruct<FMySQLConnectorKeyValuePair>()
{
	return FMySQLConnectorKeyValuePair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMySQLConnectorKeyValuePair(FMySQLConnectorKeyValuePair::StaticStruct, TEXT("/Script/ESLibrary"), TEXT("MySQLConnectorKeyValuePair"), false, nullptr, nullptr);
static struct FScriptStruct_ESLibrary_StaticRegisterNativesFMySQLConnectorKeyValuePair
{
	FScriptStruct_ESLibrary_StaticRegisterNativesFMySQLConnectorKeyValuePair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MySQLConnectorKeyValuePair")),new UScriptStruct::TCppStructOps<FMySQLConnectorKeyValuePair>);
	}
} ScriptStruct_ESLibrary_StaticRegisterNativesFMySQLConnectorKeyValuePair;
	struct Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLConnectorKeyValuePair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "ES|MySQLConnector Key Value Pair" },
		{ "Comment", "/** The value of the field */" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "The value of the field" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorKeyValuePair, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "ES|MySQLConnector Key Value Pair" },
		{ "Comment", "/** The database table field name */" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "The database table field name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorKeyValuePair, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
		nullptr,
		&NewStructOps,
		"MySQLConnectorKeyValuePair",
		sizeof(FMySQLConnectorKeyValuePair),
		alignof(FMySQLConnectorKeyValuePair),
		Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ESLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MySQLConnectorKeyValuePair"), sizeof(FMySQLConnectorKeyValuePair), Get_Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Hash() { return 3144250909U; }
	void UMySQLDatabase::StaticRegisterNativesUMySQLDatabase()
	{
		UClass* Class = UMySQLDatabase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTable", &UMySQLDatabase::execCreateTable },
			{ "DropTable", &UMySQLDatabase::execDropTable },
			{ "MySQLConnectorExecuteQuery", &UMySQLDatabase::execMySQLConnectorExecuteQuery },
			{ "MySQLConnectorGetData", &UMySQLDatabase::execMySQLConnectorGetData },
			{ "MySQLConnectorGetPlayerControllerIP", &UMySQLDatabase::execMySQLConnectorGetPlayerControllerIP },
			{ "MySQLConnectorInsertTest", &UMySQLDatabase::execMySQLConnectorInsertTest },
			{ "MySQLConnectorINT", &UMySQLDatabase::execMySQLConnectorINT },
			{ "MySQLConnectorVARCHAR", &UMySQLDatabase::execMySQLConnectorVARCHAR },
			{ "MySQLInitConnection", &UMySQLDatabase::execMySQLInitConnection },
			{ "TruncateTable", &UMySQLDatabase::execTruncateTable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics
	{
		struct MySQLDatabase_eventCreateTable_Parms
		{
			FString TableName;
			TArray<FMySQLConnectorTableField> Fields;
			UMySQLConnection* Connection;
			FMySQLConnectorTable ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Fields;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Fields_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventCreateTable_Parms, ReturnValue), Z_Construct_UScriptStruct_FMySQLConnectorTable, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventCreateTable_Parms, Connection), Z_Construct_UClass_UMySQLConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_Fields_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventCreateTable_Parms, Fields), METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_Fields_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_Fields_Inner = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMySQLConnectorTableField, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_TableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventCreateTable_Parms, TableName), METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_TableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_TableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_Connection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_Fields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_Fields_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_TableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector|Query" },
		{ "Comment", "/** Create table in the database. */" },
		{ "DisplayName", "Create Table" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "Create table in the database." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLDatabase, nullptr, "CreateTable", nullptr, nullptr, sizeof(MySQLDatabase_eventCreateTable_Parms), Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLDatabase_CreateTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics
	{
		struct MySQLDatabase_eventDropTable_Parms
		{
			FString TableName;
			UMySQLConnection* Connection;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MySQLDatabase_eventDropTable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLDatabase_eventDropTable_Parms), &Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventDropTable_Parms, Connection), Z_Construct_UClass_UMySQLConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_TableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventDropTable_Parms, TableName), METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_TableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_TableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_Connection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_TableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector|Query" },
		{ "Comment", "/** Drop Table*/" },
		{ "DisplayName", "Drop Table" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "Drop Table" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLDatabase, nullptr, "DropTable", nullptr, nullptr, sizeof(MySQLDatabase_eventDropTable_Parms), Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLDatabase_DropTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics
	{
		struct MySQLDatabase_eventMySQLConnectorExecuteQuery_Parms
		{
			FString Query;
			UMySQLConnection* Connection;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MySQLDatabase_eventMySQLConnectorExecuteQuery_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLDatabase_eventMySQLConnectorExecuteQuery_Parms), &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorExecuteQuery_Parms, Connection), Z_Construct_UClass_UMySQLConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorExecuteQuery_Parms, Query), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::NewProp_Connection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::NewProp_Query,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector|Query" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLDatabase, nullptr, "MySQLConnectorExecuteQuery", nullptr, nullptr, sizeof(MySQLDatabase_eventMySQLConnectorExecuteQuery_Parms), Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics
	{
		struct MySQLDatabase_eventMySQLConnectorGetData_Parms
		{
			FString Query;
			UMySQLConnection* Connection;
			FMySQLConnectoreQueryResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorGetData_Parms, ReturnValue), Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorGetData_Parms, Connection), Z_Construct_UClass_UMySQLConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorGetData_Parms, Query), METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::NewProp_Query_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::NewProp_Connection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::NewProp_Query,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector|Query" },
		{ "Comment", "/** Get data from the database using a select statement and return the rows. */" },
		{ "DisplayName", "Get Data From Table(s) (manual query)" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "Get data from the database using a select statement and return the rows." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLDatabase, nullptr, "MySQLConnectorGetData", nullptr, nullptr, sizeof(MySQLDatabase_eventMySQLConnectorGetData_Parms), Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics
	{
		struct MySQLDatabase_eventMySQLConnectorGetPlayerControllerIP_Parms
		{
			FString IP;
			int32 IP_int;
			APlayerController* PlayerController;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IP_int;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MySQLDatabase_eventMySQLConnectorGetPlayerControllerIP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLDatabase_eventMySQLConnectorGetPlayerControllerIP_Parms), &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorGetPlayerControllerIP_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::NewProp_IP_int = { "IP_int", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorGetPlayerControllerIP_Parms, IP_int), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorGetPlayerControllerIP_Parms, IP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::NewProp_IP_int,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::NewProp_IP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector|Connection" },
		{ "Comment", "/** returns the address or empty String on error, returns address as Integer or -1 on error */" },
		{ "DisplayName", "Get Controller IP-Address" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "returns the address or empty String on error, returns address as Integer or -1 on error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLDatabase, nullptr, "MySQLConnectorGetPlayerControllerIP", nullptr, nullptr, sizeof(MySQLDatabase_eventMySQLConnectorGetPlayerControllerIP_Parms), Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics
	{
		struct MySQLDatabase_eventMySQLConnectorInsertTest_Parms
		{
			FString Query;
			UMySQLConnection* Connection;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MySQLDatabase_eventMySQLConnectorInsertTest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLDatabase_eventMySQLConnectorInsertTest_Parms), &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorInsertTest_Parms, Connection), Z_Construct_UClass_UMySQLConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorInsertTest_Parms, Query), METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_Query_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_Connection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_Query,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector|Query" },
		{ "DisplayName", "InsertTest" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLDatabase, nullptr, "MySQLConnectorInsertTest", nullptr, nullptr, sizeof(MySQLDatabase_eventMySQLConnectorInsertTest_Parms), Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics
	{
		struct MySQLDatabase_eventMySQLConnectorINT_Parms
		{
			FString FieldName;
			bool PK;
			bool AI;
			FMySQLConnectorTableField ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AI_MetaData[];
#endif
		static void NewProp_AI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PK_MetaData[];
#endif
		static void NewProp_PK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PK;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorINT_Parms, ReturnValue), Z_Construct_UScriptStruct_FMySQLConnectorTableField, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_AI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_AI_SetBit(void* Obj)
	{
		((MySQLDatabase_eventMySQLConnectorINT_Parms*)Obj)->AI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_AI = { "AI", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLDatabase_eventMySQLConnectorINT_Parms), &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_AI_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_AI_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_AI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_PK_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_PK_SetBit(void* Obj)
	{
		((MySQLDatabase_eventMySQLConnectorINT_Parms*)Obj)->PK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_PK = { "PK", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLDatabase_eventMySQLConnectorINT_Parms), &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_PK_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_PK_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_PK_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorINT_Parms, FieldName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_AI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_PK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector|Query|DataTypes" },
		{ "DisplayName", "INT (MySQLConnector)" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLDatabase, nullptr, "MySQLConnectorINT", nullptr, nullptr, sizeof(MySQLDatabase_eventMySQLConnectorINT_Parms), Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics
	{
		struct MySQLDatabase_eventMySQLConnectorVARCHAR_Parms
		{
			FString FieldName;
			FString FieldLength;
			bool PK;
			bool Unique;
			bool NotNull;
			FMySQLConnectorTableField ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotNull_MetaData[];
#endif
		static void NewProp_NotNull_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NotNull;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Unique_MetaData[];
#endif
		static void NewProp_Unique_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Unique;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PK_MetaData[];
#endif
		static void NewProp_PK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorVARCHAR_Parms, ReturnValue), Z_Construct_UScriptStruct_FMySQLConnectorTableField, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_NotNull_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_NotNull_SetBit(void* Obj)
	{
		((MySQLDatabase_eventMySQLConnectorVARCHAR_Parms*)Obj)->NotNull = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_NotNull = { "NotNull", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLDatabase_eventMySQLConnectorVARCHAR_Parms), &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_NotNull_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_NotNull_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_NotNull_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_Unique_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_Unique_SetBit(void* Obj)
	{
		((MySQLDatabase_eventMySQLConnectorVARCHAR_Parms*)Obj)->Unique = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_Unique = { "Unique", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLDatabase_eventMySQLConnectorVARCHAR_Parms), &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_Unique_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_Unique_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_Unique_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_PK_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_PK_SetBit(void* Obj)
	{
		((MySQLDatabase_eventMySQLConnectorVARCHAR_Parms*)Obj)->PK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_PK = { "PK", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLDatabase_eventMySQLConnectorVARCHAR_Parms), &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_PK_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_PK_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_PK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_FieldLength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_FieldLength = { "FieldLength", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorVARCHAR_Parms, FieldLength), METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_FieldLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_FieldLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorVARCHAR_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_NotNull,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_Unique,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_PK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_FieldLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector|Query|DataTypes" },
		{ "DisplayName", "VARCHAR (MySQLConnector)" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLDatabase, nullptr, "MySQLConnectorVARCHAR", nullptr, nullptr, sizeof(MySQLDatabase_eventMySQLConnectorVARCHAR_Parms), Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics
	{
		struct MySQLDatabase_eventMySQLInitConnection_Parms
		{
			FString Host;
			FString UserName;
			FString UserPassword;
			FString DatabaseName;
			UMySQLConnection* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserPassword;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Host;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLInitConnection_Parms, ReturnValue), Z_Construct_UClass_UMySQLConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLInitConnection_Parms, DatabaseName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::NewProp_UserPassword = { "UserPassword", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLInitConnection_Parms, UserPassword), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLInitConnection_Parms, UserName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLInitConnection_Parms, Host), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::NewProp_DatabaseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::NewProp_UserPassword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::NewProp_UserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::NewProp_Host,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLDatabase, nullptr, "MySQLInitConnection", nullptr, nullptr, sizeof(MySQLDatabase_eventMySQLInitConnection_Parms), Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics
	{
		struct MySQLDatabase_eventTruncateTable_Parms
		{
			FString TableName;
			UMySQLConnection* Connection;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MySQLDatabase_eventTruncateTable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLDatabase_eventTruncateTable_Parms), &Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventTruncateTable_Parms, Connection), Z_Construct_UClass_UMySQLConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_TableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventTruncateTable_Parms, TableName), METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_TableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_TableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_Connection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_TableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector|Query" },
		{ "Comment", "/** Truncate Table*/" },
		{ "DisplayName", "Truncate Table" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "Truncate Table" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLDatabase, nullptr, "TruncateTable", nullptr, nullptr, sizeof(MySQLDatabase_eventTruncateTable_Parms), Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLDatabase_TruncateTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMySQLDatabase_NoRegister()
	{
		return UMySQLDatabase::StaticClass();
	}
	struct Z_Construct_UClass_UMySQLDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMySQLDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMySQLDatabase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMySQLDatabase_CreateTable, "CreateTable" }, // 4068720113
		{ &Z_Construct_UFunction_UMySQLDatabase_DropTable, "DropTable" }, // 3353505605
		{ &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery, "MySQLConnectorExecuteQuery" }, // 67753587
		{ &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData, "MySQLConnectorGetData" }, // 1122075881
		{ &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP, "MySQLConnectorGetPlayerControllerIP" }, // 3684372166
		{ &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest, "MySQLConnectorInsertTest" }, // 1013187637
		{ &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT, "MySQLConnectorINT" }, // 853050704
		{ &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR, "MySQLConnectorVARCHAR" }, // 3862250830
		{ &Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection, "MySQLInitConnection" }, // 195346187
		{ &Z_Construct_UFunction_UMySQLDatabase_TruncateTable, "TruncateTable" }, // 3958153981
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySQLDatabase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* MySQLConnector main database class.\n*/" },
		{ "IncludePath", "MySQLDatabase.h" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "MySQLConnector main database class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMySQLDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySQLDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMySQLDatabase_Statics::ClassParams = {
		&UMySQLDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMySQLDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMySQLDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMySQLDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMySQLDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMySQLDatabase, 2475429395);
	template<> ESLIBRARY_API UClass* StaticClass<UMySQLDatabase>()
	{
		return UMySQLDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMySQLDatabase(Z_Construct_UClass_UMySQLDatabase, &UMySQLDatabase::StaticClass, TEXT("/Script/ESLibrary"), TEXT("UMySQLDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySQLDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
