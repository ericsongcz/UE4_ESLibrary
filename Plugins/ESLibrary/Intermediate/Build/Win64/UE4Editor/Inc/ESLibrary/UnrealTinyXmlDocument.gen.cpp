// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ESLibrary/Public/UnrealTinyXmlDocument.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealTinyXmlDocument() {}
// Cross Module References
	ESLIBRARY_API UClass* Z_Construct_UClass_UUnrealTinyXmlDocument_NoRegister();
	ESLIBRARY_API UClass* Z_Construct_UClass_UUnrealTinyXmlDocument();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ESLibrary();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UUnrealTinyXmlDocument_Clear();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode();
	ESLIBRARY_API UClass* Z_Construct_UClass_UUnrealTinyXmlNode_NoRegister();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie();
// End Cross Module References
	void UUnrealTinyXmlDocument::StaticRegisterNativesUUnrealTinyXmlDocument()
	{
		UClass* Class = UUnrealTinyXmlDocument::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UUnrealTinyXmlDocument::execClear },
			{ "GetRootNode", &UUnrealTinyXmlDocument::execGetRootNode },
			{ "LoadXmlFie", &UUnrealTinyXmlDocument::execLoadXmlFie },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlDocument_Clear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlDocument_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Clear the document that has this node, resetting it to the initial state(All nodes of this document will become null!).\n\x09*/" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlDocument.h" },
		{ "ToolTip", "Clear the document that has this node, resetting it to the initial state(All nodes of this document will become null!)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlDocument_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlDocument, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlDocument_Clear_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlDocument_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlDocument_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlDocument_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics
	{
		struct UnrealTinyXmlDocument_eventGetRootNode_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlDocument_eventGetRootNode_Parms, ReturnValue), Z_Construct_UClass_UUnrealTinyXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Get the root node of current loaded xml file, returns NULL if it can't be parsed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlDocument.h" },
		{ "ToolTip", "Get the root node of current loaded xml file, returns NULL if it can't be parsed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlDocument, nullptr, "GetRootNode", nullptr, nullptr, sizeof(UnrealTinyXmlDocument_eventGetRootNode_Parms), Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics
	{
		struct UnrealTinyXmlDocument_eventLoadXmlFie_Parms
		{
			FString File;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UnrealTinyXmlDocument_eventLoadXmlFie_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UnrealTinyXmlDocument_eventLoadXmlFie_Parms), &Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlDocument_eventLoadXmlFie_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::NewProp_File_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::NewProp_File_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Load xml file from disk, return ture if load successful, or it will be false.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlDocument.h" },
		{ "ToolTip", "Load xml file from disk, return ture if load successful, or it will be false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlDocument, nullptr, "LoadXmlFie", nullptr, nullptr, sizeof(UnrealTinyXmlDocument_eventLoadXmlFie_Parms), Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUnrealTinyXmlDocument_NoRegister()
	{
		return UUnrealTinyXmlDocument::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealTinyXmlDocument_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealTinyXmlDocument_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnrealTinyXmlDocument_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnrealTinyXmlDocument_Clear, "Clear" }, // 3763720435
		{ &Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode, "GetRootNode" }, // 1821703607
		{ &Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie, "LoadXmlFie" }, // 1496340439
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealTinyXmlDocument_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UnrealTinyXmlDocument.h" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlDocument.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealTinyXmlDocument_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealTinyXmlDocument>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnrealTinyXmlDocument_Statics::ClassParams = {
		&UUnrealTinyXmlDocument::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUnrealTinyXmlDocument_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUnrealTinyXmlDocument_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealTinyXmlDocument()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnrealTinyXmlDocument_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnrealTinyXmlDocument, 1948924608);
	template<> ESLIBRARY_API UClass* StaticClass<UUnrealTinyXmlDocument>()
	{
		return UUnrealTinyXmlDocument::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnrealTinyXmlDocument(Z_Construct_UClass_UUnrealTinyXmlDocument, &UUnrealTinyXmlDocument::StaticClass, TEXT("/Script/ESLibrary"), TEXT("UUnrealTinyXmlDocument"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealTinyXmlDocument);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
