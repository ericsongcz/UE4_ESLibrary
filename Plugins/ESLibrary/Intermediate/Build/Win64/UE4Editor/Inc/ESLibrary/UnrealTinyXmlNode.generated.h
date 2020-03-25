// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUnrealTinyXmlNode;
#ifdef ESLIBRARY_UnrealTinyXmlNode_generated_h
#error "UnrealTinyXmlNode.generated.h already included, missing '#pragma once' in UnrealTinyXmlNode.h"
#endif
#define ESLIBRARY_UnrealTinyXmlNode_generated_h

#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_13_SPARSE_DATA
#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAttributeValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AttributeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetAttributeValue(Z_Param_AttributeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNodeName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetNodeName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindChildNodeByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NameToSearch); \
		P_GET_PROPERTY(UIntProperty,Z_Param_loc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUnrealTinyXmlNode**)Z_Param__Result=P_THIS->FindChildNodeByName(Z_Param_NameToSearch,Z_Param_loc); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFirstChildNode) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SearchDeep); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUnrealTinyXmlNode**)Z_Param__Result=P_THIS->GetFirstChildNode(Z_Param_SearchDeep); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNodeValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetNodeValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParentNode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUnrealTinyXmlNode**)Z_Param__Result=P_THIS->GetParentNode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPreviousNode) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Step); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUnrealTinyXmlNode**)Z_Param__Result=P_THIS->GetPreviousNode(Z_Param_Step); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextNode) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Step); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUnrealTinyXmlNode**)Z_Param__Result=P_THIS->GetNextNode(Z_Param_Step); \
		P_NATIVE_END; \
	}


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttributeValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AttributeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetAttributeValue(Z_Param_AttributeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNodeName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetNodeName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindChildNodeByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NameToSearch); \
		P_GET_PROPERTY(UIntProperty,Z_Param_loc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUnrealTinyXmlNode**)Z_Param__Result=P_THIS->FindChildNodeByName(Z_Param_NameToSearch,Z_Param_loc); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFirstChildNode) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SearchDeep); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUnrealTinyXmlNode**)Z_Param__Result=P_THIS->GetFirstChildNode(Z_Param_SearchDeep); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNodeValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetNodeValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParentNode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUnrealTinyXmlNode**)Z_Param__Result=P_THIS->GetParentNode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPreviousNode) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Step); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUnrealTinyXmlNode**)Z_Param__Result=P_THIS->GetPreviousNode(Z_Param_Step); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextNode) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Step); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUnrealTinyXmlNode**)Z_Param__Result=P_THIS->GetNextNode(Z_Param_Step); \
		P_NATIVE_END; \
	}


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnrealTinyXmlNode(); \
	friend struct Z_Construct_UClass_UUnrealTinyXmlNode_Statics; \
public: \
	DECLARE_CLASS(UUnrealTinyXmlNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ESLibrary"), NO_API) \
	DECLARE_SERIALIZER(UUnrealTinyXmlNode)


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUUnrealTinyXmlNode(); \
	friend struct Z_Construct_UClass_UUnrealTinyXmlNode_Statics; \
public: \
	DECLARE_CLASS(UUnrealTinyXmlNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ESLibrary"), NO_API) \
	DECLARE_SERIALIZER(UUnrealTinyXmlNode)


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealTinyXmlNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealTinyXmlNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealTinyXmlNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealTinyXmlNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnrealTinyXmlNode(UUnrealTinyXmlNode&&); \
	NO_API UUnrealTinyXmlNode(const UUnrealTinyXmlNode&); \
public:


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealTinyXmlNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnrealTinyXmlNode(UUnrealTinyXmlNode&&); \
	NO_API UUnrealTinyXmlNode(const UUnrealTinyXmlNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealTinyXmlNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealTinyXmlNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealTinyXmlNode)


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_13_PRIVATE_PROPERTY_OFFSET
#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_10_PROLOG
#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_13_PRIVATE_PROPERTY_OFFSET \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_13_SPARSE_DATA \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_13_RPC_WRAPPERS \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_13_INCLASS \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_13_PRIVATE_PROPERTY_OFFSET \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_13_SPARSE_DATA \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_13_INCLASS_NO_PURE_DECLS \
	UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESLIBRARY_API UClass* StaticClass<class UUnrealTinyXmlNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_ESLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
