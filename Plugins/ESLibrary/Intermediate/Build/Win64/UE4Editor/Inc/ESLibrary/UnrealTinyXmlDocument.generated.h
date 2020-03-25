// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUnrealTinyXmlNode;
#ifdef ESLIBRARY_UnrealTinyXmlDocument_generated_h
#error "UnrealTinyXmlDocument.generated.h already included, missing '#pragma once' in UnrealTinyXmlDocument.h"
#endif
#define ESLIBRARY_UnrealTinyXmlDocument_generated_h

#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_13_SPARSE_DATA
#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRootNode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUnrealTinyXmlNode**)Z_Param__Result=P_THIS->GetRootNode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadXmlFie) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_File); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LoadXmlFie(Z_Param_File); \
		P_NATIVE_END; \
	}


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRootNode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUnrealTinyXmlNode**)Z_Param__Result=P_THIS->GetRootNode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadXmlFie) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_File); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LoadXmlFie(Z_Param_File); \
		P_NATIVE_END; \
	}


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnrealTinyXmlDocument(); \
	friend struct Z_Construct_UClass_UUnrealTinyXmlDocument_Statics; \
public: \
	DECLARE_CLASS(UUnrealTinyXmlDocument, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ESLibrary"), NO_API) \
	DECLARE_SERIALIZER(UUnrealTinyXmlDocument)


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUUnrealTinyXmlDocument(); \
	friend struct Z_Construct_UClass_UUnrealTinyXmlDocument_Statics; \
public: \
	DECLARE_CLASS(UUnrealTinyXmlDocument, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ESLibrary"), NO_API) \
	DECLARE_SERIALIZER(UUnrealTinyXmlDocument)


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealTinyXmlDocument(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealTinyXmlDocument) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealTinyXmlDocument); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealTinyXmlDocument); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnrealTinyXmlDocument(UUnrealTinyXmlDocument&&); \
	NO_API UUnrealTinyXmlDocument(const UUnrealTinyXmlDocument&); \
public:


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealTinyXmlDocument(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnrealTinyXmlDocument(UUnrealTinyXmlDocument&&); \
	NO_API UUnrealTinyXmlDocument(const UUnrealTinyXmlDocument&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealTinyXmlDocument); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealTinyXmlDocument); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealTinyXmlDocument)


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_13_PRIVATE_PROPERTY_OFFSET
#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_10_PROLOG
#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_13_PRIVATE_PROPERTY_OFFSET \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_13_SPARSE_DATA \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_13_RPC_WRAPPERS \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_13_INCLASS \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_13_PRIVATE_PROPERTY_OFFSET \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_13_SPARSE_DATA \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_13_INCLASS_NO_PURE_DECLS \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESLIBRARY_API UClass* StaticClass<class UUnrealTinyXmlDocument>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
