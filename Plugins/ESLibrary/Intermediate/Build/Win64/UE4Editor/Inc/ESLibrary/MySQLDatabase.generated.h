// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMySQLConnection;
struct FMySQLConnectoreQueryResult;
class APlayerController;
struct FMySQLConnectorTableField;
struct FMySQLConnectorTable;
#ifdef ESLIBRARY_MySQLDatabase_generated_h
#error "MySQLDatabase.generated.h already included, missing '#pragma once' in MySQLDatabase.h"
#endif
#define ESLIBRARY_MySQLDatabase_generated_h

#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics; \
	ESLIBRARY_API static class UScriptStruct* StaticStruct();


template<> ESLIBRARY_API UScriptStruct* StaticStruct<struct FMySQLConnectoreQueryResult>();

#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics; \
	ESLIBRARY_API static class UScriptStruct* StaticStruct();


template<> ESLIBRARY_API UScriptStruct* StaticStruct<struct FMySQLConnectorQueryResultRow>();

#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics; \
	ESLIBRARY_API static class UScriptStruct* StaticStruct();


template<> ESLIBRARY_API UScriptStruct* StaticStruct<struct FMySQLConnectorKeyValuePair>();

#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMySQLConnectorGetData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_OBJECT(UMySQLConnection,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMySQLConnectoreQueryResult*)Z_Param__Result=UMySQLDatabase::MySQLConnectorGetData(Z_Param_Query,Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMySQLConnectorGetPlayerControllerIP) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_IP); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IP_int); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMySQLDatabase::MySQLConnectorGetPlayerControllerIP(Z_Param_Out_IP,Z_Param_Out_IP_int,Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMySQLConnectorInsertTest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_OBJECT(UMySQLConnection,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMySQLDatabase::MySQLConnectorInsertTest(Z_Param_Query,Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMySQLConnectorVARCHAR) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldLength); \
		P_GET_UBOOL(Z_Param_PK); \
		P_GET_UBOOL(Z_Param_Unique); \
		P_GET_UBOOL(Z_Param_NotNull); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMySQLConnectorTableField*)Z_Param__Result=UMySQLDatabase::MySQLConnectorVARCHAR(Z_Param_FieldName,Z_Param_FieldLength,Z_Param_PK,Z_Param_Unique,Z_Param_NotNull); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMySQLConnectorINT) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_UBOOL(Z_Param_PK); \
		P_GET_UBOOL(Z_Param_AI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMySQLConnectorTableField*)Z_Param__Result=UMySQLDatabase::MySQLConnectorINT(Z_Param_FieldName,Z_Param_PK,Z_Param_AI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTable) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TableName); \
		P_GET_TARRAY(FMySQLConnectorTableField,Z_Param_Fields); \
		P_GET_OBJECT(UMySQLConnection,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMySQLConnectorTable*)Z_Param__Result=UMySQLDatabase::CreateTable(Z_Param_TableName,Z_Param_Fields,Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTruncateTable) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TableName); \
		P_GET_OBJECT(UMySQLConnection,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMySQLDatabase::TruncateTable(Z_Param_TableName,Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropTable) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TableName); \
		P_GET_OBJECT(UMySQLConnection,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMySQLDatabase::DropTable(Z_Param_TableName,Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMySQLConnectorExecuteQuery) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_OBJECT(UMySQLConnection,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMySQLDatabase::MySQLConnectorExecuteQuery(Z_Param_Query,Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMySQLInitConnection) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Host); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserPassword); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DatabaseName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMySQLConnection**)Z_Param__Result=UMySQLDatabase::MySQLInitConnection(Z_Param_Host,Z_Param_UserName,Z_Param_UserPassword,Z_Param_DatabaseName); \
		P_NATIVE_END; \
	}


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMySQLConnectorGetData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_OBJECT(UMySQLConnection,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMySQLConnectoreQueryResult*)Z_Param__Result=UMySQLDatabase::MySQLConnectorGetData(Z_Param_Query,Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMySQLConnectorGetPlayerControllerIP) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_IP); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IP_int); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMySQLDatabase::MySQLConnectorGetPlayerControllerIP(Z_Param_Out_IP,Z_Param_Out_IP_int,Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMySQLConnectorInsertTest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_OBJECT(UMySQLConnection,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMySQLDatabase::MySQLConnectorInsertTest(Z_Param_Query,Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMySQLConnectorVARCHAR) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldLength); \
		P_GET_UBOOL(Z_Param_PK); \
		P_GET_UBOOL(Z_Param_Unique); \
		P_GET_UBOOL(Z_Param_NotNull); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMySQLConnectorTableField*)Z_Param__Result=UMySQLDatabase::MySQLConnectorVARCHAR(Z_Param_FieldName,Z_Param_FieldLength,Z_Param_PK,Z_Param_Unique,Z_Param_NotNull); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMySQLConnectorINT) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_UBOOL(Z_Param_PK); \
		P_GET_UBOOL(Z_Param_AI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMySQLConnectorTableField*)Z_Param__Result=UMySQLDatabase::MySQLConnectorINT(Z_Param_FieldName,Z_Param_PK,Z_Param_AI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTable) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TableName); \
		P_GET_TARRAY(FMySQLConnectorTableField,Z_Param_Fields); \
		P_GET_OBJECT(UMySQLConnection,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMySQLConnectorTable*)Z_Param__Result=UMySQLDatabase::CreateTable(Z_Param_TableName,Z_Param_Fields,Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTruncateTable) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TableName); \
		P_GET_OBJECT(UMySQLConnection,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMySQLDatabase::TruncateTable(Z_Param_TableName,Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropTable) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TableName); \
		P_GET_OBJECT(UMySQLConnection,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMySQLDatabase::DropTable(Z_Param_TableName,Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMySQLConnectorExecuteQuery) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_OBJECT(UMySQLConnection,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMySQLDatabase::MySQLConnectorExecuteQuery(Z_Param_Query,Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMySQLInitConnection) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Host); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserPassword); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DatabaseName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMySQLConnection**)Z_Param__Result=UMySQLDatabase::MySQLInitConnection(Z_Param_Host,Z_Param_UserName,Z_Param_UserPassword,Z_Param_DatabaseName); \
		P_NATIVE_END; \
	}


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMySQLDatabase(); \
	friend struct Z_Construct_UClass_UMySQLDatabase_Statics; \
public: \
	DECLARE_CLASS(UMySQLDatabase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ESLibrary"), NO_API) \
	DECLARE_SERIALIZER(UMySQLDatabase)


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_INCLASS \
private: \
	static void StaticRegisterNativesUMySQLDatabase(); \
	friend struct Z_Construct_UClass_UMySQLDatabase_Statics; \
public: \
	DECLARE_CLASS(UMySQLDatabase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ESLibrary"), NO_API) \
	DECLARE_SERIALIZER(UMySQLDatabase)


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMySQLDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMySQLDatabase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySQLDatabase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySQLDatabase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMySQLDatabase(UMySQLDatabase&&); \
	NO_API UMySQLDatabase(const UMySQLDatabase&); \
public:


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMySQLDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMySQLDatabase(UMySQLDatabase&&); \
	NO_API UMySQLDatabase(const UMySQLDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySQLDatabase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySQLDatabase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMySQLDatabase)


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_PRIVATE_PROPERTY_OFFSET
#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_109_PROLOG
#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_PRIVATE_PROPERTY_OFFSET \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_RPC_WRAPPERS \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_INCLASS \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_PRIVATE_PROPERTY_OFFSET \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_INCLASS_NO_PURE_DECLS \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MySQLDatabase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESLIBRARY_API UClass* StaticClass<class UMySQLDatabase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
