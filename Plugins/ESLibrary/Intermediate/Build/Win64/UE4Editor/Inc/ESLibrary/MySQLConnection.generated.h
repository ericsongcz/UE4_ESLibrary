// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMySQLConnection;
#ifdef ESLIBRARY_MySQLConnection_generated_h
#error "MySQLConnection.generated.h already included, missing '#pragma once' in MySQLConnection.h"
#endif
#define ESLIBRARY_MySQLConnection_generated_h

#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnection_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMySQLCloseConnection) \
	{ \
		P_GET_OBJECT(UMySQLConnection,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMySQLConnection::MySQLCloseConnection(Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMySQLCheckConnection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->MySQLCheckConnection(); \
		P_NATIVE_END; \
	}


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnection_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMySQLCloseConnection) \
	{ \
		P_GET_OBJECT(UMySQLConnection,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMySQLConnection::MySQLCloseConnection(Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMySQLCheckConnection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->MySQLCheckConnection(); \
		P_NATIVE_END; \
	}


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnection_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMySQLConnection(); \
	friend struct Z_Construct_UClass_UMySQLConnection_Statics; \
public: \
	DECLARE_CLASS(UMySQLConnection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ESLibrary"), NO_API) \
	DECLARE_SERIALIZER(UMySQLConnection)


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnection_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMySQLConnection(); \
	friend struct Z_Construct_UClass_UMySQLConnection_Statics; \
public: \
	DECLARE_CLASS(UMySQLConnection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ESLibrary"), NO_API) \
	DECLARE_SERIALIZER(UMySQLConnection)


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnection_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMySQLConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMySQLConnection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySQLConnection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySQLConnection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMySQLConnection(UMySQLConnection&&); \
	NO_API UMySQLConnection(const UMySQLConnection&); \
public:


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnection_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMySQLConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMySQLConnection(UMySQLConnection&&); \
	NO_API UMySQLConnection(const UMySQLConnection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySQLConnection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySQLConnection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMySQLConnection)


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnection_h_12_PRIVATE_PROPERTY_OFFSET
#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnection_h_9_PROLOG
#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnection_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnection_h_12_PRIVATE_PROPERTY_OFFSET \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnection_h_12_RPC_WRAPPERS \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnection_h_12_INCLASS \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnection_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnection_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnection_h_12_PRIVATE_PROPERTY_OFFSET \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnection_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnection_h_12_INCLASS_NO_PURE_DECLS \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnection_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MySQLConnection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESLIBRARY_API UClass* StaticClass<class UMySQLConnection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
