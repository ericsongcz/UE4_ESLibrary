// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ESLibrary/Public/MySQLConnection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySQLConnection() {}
// Cross Module References
	ESLIBRARY_API UClass* Z_Construct_UClass_UMySQLConnection_NoRegister();
	ESLIBRARY_API UClass* Z_Construct_UClass_UMySQLConnection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ESLibrary();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UMySQLConnection_MySQLCheckConnection();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UMySQLConnection_MySQLCloseConnection();
// End Cross Module References
	void UMySQLConnection::StaticRegisterNativesUMySQLConnection()
	{
		UClass* Class = UMySQLConnection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MySQLCheckConnection", &UMySQLConnection::execMySQLCheckConnection },
			{ "MySQLCloseConnection", &UMySQLConnection::execMySQLCloseConnection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMySQLConnection_MySQLCheckConnection_Statics
	{
		struct MySQLConnection_eventMySQLCheckConnection_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMySQLConnection_MySQLCheckConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MySQLConnection_eventMySQLCheckConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLConnection_MySQLCheckConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLConnection_eventMySQLCheckConnection_Parms), &Z_Construct_UFunction_UMySQLConnection_MySQLCheckConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLConnection_MySQLCheckConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLConnection_MySQLCheckConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLConnection_MySQLCheckConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector|Connection" },
		{ "ModuleRelativePath", "Public/MySQLConnection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLConnection_MySQLCheckConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLConnection, nullptr, "MySQLCheckConnection", nullptr, nullptr, sizeof(MySQLConnection_eventMySQLCheckConnection_Parms), Z_Construct_UFunction_UMySQLConnection_MySQLCheckConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLConnection_MySQLCheckConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLConnection_MySQLCheckConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLConnection_MySQLCheckConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLConnection_MySQLCheckConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLConnection_MySQLCheckConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLConnection_MySQLCloseConnection_Statics
	{
		struct MySQLConnection_eventMySQLCloseConnection_Parms
		{
			UMySQLConnection* Connection;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMySQLConnection_MySQLCloseConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MySQLConnection_eventMySQLCloseConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLConnection_MySQLCloseConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLConnection_eventMySQLCloseConnection_Parms), &Z_Construct_UFunction_UMySQLConnection_MySQLCloseConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySQLConnection_MySQLCloseConnection_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLConnection_eventMySQLCloseConnection_Parms, Connection), Z_Construct_UClass_UMySQLConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLConnection_MySQLCloseConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLConnection_MySQLCloseConnection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLConnection_MySQLCloseConnection_Statics::NewProp_Connection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLConnection_MySQLCloseConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector|Connection" },
		{ "Comment", "// checks if the connection is valid and closes it, resets the pointers to nullptr on success\n// true on success, false in case the connection is not established or the argument is nullptr\n" },
		{ "ModuleRelativePath", "Public/MySQLConnection.h" },
		{ "ToolTip", "checks if the connection is valid and closes it, resets the pointers to nullptr on success\ntrue on success, false in case the connection is not established or the argument is nullptr" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLConnection_MySQLCloseConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLConnection, nullptr, "MySQLCloseConnection", nullptr, nullptr, sizeof(MySQLConnection_eventMySQLCloseConnection_Parms), Z_Construct_UFunction_UMySQLConnection_MySQLCloseConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLConnection_MySQLCloseConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLConnection_MySQLCloseConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLConnection_MySQLCloseConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLConnection_MySQLCloseConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLConnection_MySQLCloseConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMySQLConnection_NoRegister()
	{
		return UMySQLConnection::StaticClass();
	}
	struct Z_Construct_UClass_UMySQLConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMySQLConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMySQLConnection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMySQLConnection_MySQLCheckConnection, "MySQLCheckConnection" }, // 2101243151
		{ &Z_Construct_UFunction_UMySQLConnection_MySQLCloseConnection, "MySQLCloseConnection" }, // 3504915326
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySQLConnection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* SQLite main database class.\n*/" },
		{ "IncludePath", "MySQLConnection.h" },
		{ "ModuleRelativePath", "Public/MySQLConnection.h" },
		{ "ToolTip", "SQLite main database class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMySQLConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySQLConnection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMySQLConnection_Statics::ClassParams = {
		&UMySQLConnection::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMySQLConnection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMySQLConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMySQLConnection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMySQLConnection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMySQLConnection, 304501982);
	template<> ESLIBRARY_API UClass* StaticClass<UMySQLConnection>()
	{
		return UMySQLConnection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMySQLConnection(Z_Construct_UClass_UMySQLConnection, &UMySQLConnection::StaticClass, TEXT("/Script/ESLibrary"), TEXT("UMySQLConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySQLConnection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
