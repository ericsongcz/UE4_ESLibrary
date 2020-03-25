// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ESLibrary/Public/UnrealTinyXmlNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealTinyXmlNode() {}
// Cross Module References
	ESLIBRARY_API UClass* Z_Construct_UClass_UUnrealTinyXmlNode_NoRegister();
	ESLIBRARY_API UClass* Z_Construct_UClass_UUnrealTinyXmlNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ESLibrary();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode();
// End Cross Module References
	void UUnrealTinyXmlNode::StaticRegisterNativesUUnrealTinyXmlNode()
	{
		UClass* Class = UUnrealTinyXmlNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindChildNodeByName", &UUnrealTinyXmlNode::execFindChildNodeByName },
			{ "GetAttributeValue", &UUnrealTinyXmlNode::execGetAttributeValue },
			{ "GetFirstChildNode", &UUnrealTinyXmlNode::execGetFirstChildNode },
			{ "GetNextNode", &UUnrealTinyXmlNode::execGetNextNode },
			{ "GetNodeName", &UUnrealTinyXmlNode::execGetNodeName },
			{ "GetNodeValue", &UUnrealTinyXmlNode::execGetNodeValue },
			{ "GetParentNode", &UUnrealTinyXmlNode::execGetParentNode },
			{ "GetPreviousNode", &UUnrealTinyXmlNode::execGetPreviousNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics
	{
		struct UnrealTinyXmlNode_eventFindChildNodeByName_Parms
		{
			FString NameToSearch;
			int32 loc;
			UUnrealTinyXmlNode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_loc_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_loc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameToSearch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameToSearch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventFindChildNodeByName_Parms, ReturnValue), Z_Construct_UClass_UUnrealTinyXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_loc_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_loc = { "loc", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventFindChildNodeByName_Parms, loc), METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_loc_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_loc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_NameToSearch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_NameToSearch = { "NameToSearch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventFindChildNodeByName_Parms, NameToSearch), METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_NameToSearch_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_NameToSearch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_loc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_NameToSearch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Find first(or \"loc\") child  node of this node which has the same name as \"NameToSearch\",Will return Null if can't find.\n\x09*/" },
		{ "CPP_Default_loc", "1" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlNode.h" },
		{ "ToolTip", "Find first(or \"loc\") child  node of this node which has the same name as \"NameToSearch\",Will return Null if can't find." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlNode, nullptr, "FindChildNodeByName", nullptr, nullptr, sizeof(UnrealTinyXmlNode_eventFindChildNodeByName_Parms), Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics
	{
		struct UnrealTinyXmlNode_eventGetAttributeValue_Parms
		{
			FString AttributeName;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttributeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetAttributeValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetAttributeValue_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::NewProp_AttributeName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::NewProp_AttributeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::NewProp_AttributeName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Given an attribute name,returns the value\n\x09\x09""for the attribute of that name, or null if none\n\x09\x09""exists\n\x09*/" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlNode.h" },
		{ "ToolTip", "Given an attribute name,returns the value\n               for the attribute of that name, or null if none\n               exists" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlNode, nullptr, "GetAttributeValue", nullptr, nullptr, sizeof(UnrealTinyXmlNode_eventGetAttributeValue_Parms), Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics
	{
		struct UnrealTinyXmlNode_eventGetFirstChildNode_Parms
		{
			int32 SearchDeep;
			UUnrealTinyXmlNode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchDeep_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SearchDeep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetFirstChildNode_Parms, ReturnValue), Z_Construct_UClass_UUnrealTinyXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::NewProp_SearchDeep_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::NewProp_SearchDeep = { "SearchDeep", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetFirstChildNode_Parms, SearchDeep), METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::NewProp_SearchDeep_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::NewProp_SearchDeep_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::NewProp_SearchDeep,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Gets the first child of this node which can be iterated into with GetNextNode, can return NULL.\n\x09*/" },
		{ "CPP_Default_SearchDeep", "1" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlNode.h" },
		{ "ToolTip", "Gets the first child of this node which can be iterated into with GetNextNode, can return NULL." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlNode, nullptr, "GetFirstChildNode", nullptr, nullptr, sizeof(UnrealTinyXmlNode_eventGetFirstChildNode_Parms), Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics
	{
		struct UnrealTinyXmlNode_eventGetNextNode_Parms
		{
			int32 Step;
			UUnrealTinyXmlNode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Step;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetNextNode_Parms, ReturnValue), Z_Construct_UClass_UUnrealTinyXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetNextNode_Parms, Step), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::NewProp_Step,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Gets next (Step) node in a list of nodes, can return NULL.if exceeded,return last one.\n\x09*/" },
		{ "CPP_Default_Step", "1" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlNode.h" },
		{ "ToolTip", "Gets next (Step) node in a list of nodes, can return NULL.if exceeded,return last one." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlNode, nullptr, "GetNextNode", nullptr, nullptr, sizeof(UnrealTinyXmlNode_eventGetNextNode_Parms), Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics
	{
		struct UnrealTinyXmlNode_eventGetNodeName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetNodeName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Gets the name of current node, can return NULL.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlNode.h" },
		{ "ToolTip", "Gets the name of current node, can return NULL." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlNode, nullptr, "GetNodeName", nullptr, nullptr, sizeof(UnrealTinyXmlNode_eventGetNodeName_Parms), Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics
	{
		struct UnrealTinyXmlNode_eventGetNodeValue_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetNodeValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Gets the value of the node.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlNode.h" },
		{ "ToolTip", "Gets the value of the node." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlNode, nullptr, "GetNodeValue", nullptr, nullptr, sizeof(UnrealTinyXmlNode_eventGetNodeValue_Parms), Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics
	{
		struct UnrealTinyXmlNode_eventGetParentNode_Parms
		{
			UUnrealTinyXmlNode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetParentNode_Parms, ReturnValue), Z_Construct_UClass_UUnrealTinyXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Gets the next node in a list of nodes, can return NULL.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlNode.h" },
		{ "ToolTip", "Gets the next node in a list of nodes, can return NULL." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlNode, nullptr, "GetParentNode", nullptr, nullptr, sizeof(UnrealTinyXmlNode_eventGetParentNode_Parms), Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics
	{
		struct UnrealTinyXmlNode_eventGetPreviousNode_Parms
		{
			int32 Step;
			UUnrealTinyXmlNode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Step;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetPreviousNode_Parms, ReturnValue), Z_Construct_UClass_UUnrealTinyXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetPreviousNode_Parms, Step), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::NewProp_Step,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Gets previous (Step) node in a list of nodes, can return NULL.if exceeded,return last one.\n\x09*/" },
		{ "CPP_Default_Step", "1" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlNode.h" },
		{ "ToolTip", "Gets previous (Step) node in a list of nodes, can return NULL.if exceeded,return last one." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlNode, nullptr, "GetPreviousNode", nullptr, nullptr, sizeof(UnrealTinyXmlNode_eventGetPreviousNode_Parms), Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUnrealTinyXmlNode_NoRegister()
	{
		return UUnrealTinyXmlNode::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealTinyXmlNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealTinyXmlNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnrealTinyXmlNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName, "FindChildNodeByName" }, // 674790309
		{ &Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue, "GetAttributeValue" }, // 2789695276
		{ &Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode, "GetFirstChildNode" }, // 2094157219
		{ &Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode, "GetNextNode" }, // 3523846226
		{ &Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName, "GetNodeName" }, // 1544602624
		{ &Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue, "GetNodeValue" }, // 2248599408
		{ &Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode, "GetParentNode" }, // 359452880
		{ &Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode, "GetPreviousNode" }, // 3360602567
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealTinyXmlNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UnrealTinyXmlNode.h" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealTinyXmlNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealTinyXmlNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnrealTinyXmlNode_Statics::ClassParams = {
		&UUnrealTinyXmlNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUnrealTinyXmlNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUnrealTinyXmlNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealTinyXmlNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnrealTinyXmlNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnrealTinyXmlNode, 1188376332);
	template<> ESLIBRARY_API UClass* StaticClass<UUnrealTinyXmlNode>()
	{
		return UUnrealTinyXmlNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnrealTinyXmlNode(Z_Construct_UClass_UUnrealTinyXmlNode, &UUnrealTinyXmlNode::StaticClass, TEXT("/Script/ESLibrary"), TEXT("UUnrealTinyXmlNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealTinyXmlNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
