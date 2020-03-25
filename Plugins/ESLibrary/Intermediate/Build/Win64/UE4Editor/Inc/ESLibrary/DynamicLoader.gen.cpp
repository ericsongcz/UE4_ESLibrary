// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ESLibrary/Public/DynamicLoader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicLoader() {}
// Cross Module References
	ESLIBRARY_API UFunction* Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature();
	ESLIBRARY_API UClass* Z_Construct_UClass_AExeActor();
	ESLIBRARY_API UFunction* Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature();
	ESLIBRARY_API UClass* Z_Construct_UClass_UImageLoader();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ESLIBRARY_API UClass* Z_Construct_UClass_UImageLoader_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ESLibrary();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_UImageLoader_LoadImageFromDisk();
	ESLIBRARY_API UClass* Z_Construct_UClass_AExeActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ESLIBRARY_API UFunction* Z_Construct_UFunction_AExeActor_Getstat();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics
	{
		struct ExeActor_eventOnProcShutdown_Parms
		{
			bool IsOver;
		};
		static void NewProp_IsOver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::NewProp_IsOver_SetBit(void* Obj)
	{
		((ExeActor_eventOnProcShutdown_Parms*)Obj)->IsOver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::NewProp_IsOver = { "IsOver", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExeActor_eventOnProcShutdown_Parms), &Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::NewProp_IsOver_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::NewProp_IsOver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DynamicLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExeActor, nullptr, "OnProcShutdown__DelegateSignature", nullptr, nullptr, sizeof(ExeActor_eventOnProcShutdown_Parms), Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics
	{
		struct ImageLoader_eventOnImageLoadCompleted_Parms
		{
			UTexture2D* Texture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageLoader_eventOnImageLoadCompleted_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09""Declare a broadcast-style delegate type, which is used for the load completed event.\n\x09""Dynamic multicast delegates are the only type of event delegates that Blueprint scripts can bind to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DynamicLoader.h" },
		{ "ToolTip", "Declare a broadcast-style delegate type, which is used for the load completed event.\nDynamic multicast delegates are the only type of event delegates that Blueprint scripts can bind to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageLoader, nullptr, "OnImageLoadCompleted__DelegateSignature", nullptr, nullptr, sizeof(ImageLoader_eventOnImageLoadCompleted_Parms), Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UImageLoader::StaticRegisterNativesUImageLoader()
	{
		UClass* Class = UImageLoader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadImageFromDisk", &UImageLoader::execLoadImageFromDisk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics
	{
		struct ImageLoader_eventLoadImageFromDisk_Parms
		{
			FString ImagePath;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImagePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageLoader_eventLoadImageFromDisk_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::NewProp_ImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageLoader_eventLoadImageFromDisk_Parms, ImagePath), METADATA_PARAMS(Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::NewProp_ImagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::NewProp_ImagePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::NewProp_ImagePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImageLoader" },
		{ "Comment", "/**\n\x09Loads an image file from disk into a texture. This will block the calling thread until completed.\n\x09@return A texture created from the loaded image file.\n\x09*/" },
		{ "DefaultToSelf", "Outer" },
		{ "HidePin", "Outer" },
		{ "ModuleRelativePath", "Public/DynamicLoader.h" },
		{ "ToolTip", "Loads an image file from disk into a texture. This will block the calling thread until completed.\n@return A texture created from the loaded image file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageLoader, nullptr, "LoadImageFromDisk", nullptr, nullptr, sizeof(ImageLoader_eventLoadImageFromDisk_Parms), Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageLoader_LoadImageFromDisk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UImageLoader_NoRegister()
	{
		return UImageLoader::StaticClass();
	}
	struct Z_Construct_UClass_UImageLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LoadCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UImageLoader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UImageLoader_LoadImageFromDisk, "LoadImageFromDisk" }, // 544566371
		{ &Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature, "OnImageLoadCompleted__DelegateSignature" }, // 3852048073
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageLoader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "DynamicLoader.h" },
		{ "ModuleRelativePath", "Public/DynamicLoader.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageLoader_Statics::NewProp_LoadCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImageLoader" },
		{ "ModuleRelativePath", "Public/DynamicLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImageLoader_Statics::NewProp_LoadCompleted = { "LoadCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImageLoader, LoadCompleted), Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UImageLoader_Statics::NewProp_LoadCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageLoader_Statics::NewProp_LoadCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImageLoader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageLoader_Statics::NewProp_LoadCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageLoader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImageLoader_Statics::ClassParams = {
		&UImageLoader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UImageLoader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UImageLoader_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UImageLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImageLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageLoader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImageLoader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImageLoader, 1916537672);
	template<> ESLIBRARY_API UClass* StaticClass<UImageLoader>()
	{
		return UImageLoader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImageLoader(Z_Construct_UClass_UImageLoader, &UImageLoader::StaticClass, TEXT("/Script/ESLibrary"), TEXT("UImageLoader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageLoader);
	void AExeActor::StaticRegisterNativesAExeActor()
	{
		UClass* Class = AExeActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Getstat", &AExeActor::execGetstat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AExeActor_Getstat_Statics
	{
		struct ExeActor_eventGetstat_Parms
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
	void Z_Construct_UFunction_AExeActor_Getstat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExeActor_eventGetstat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AExeActor_Getstat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExeActor_eventGetstat_Parms), &Z_Construct_UFunction_AExeActor_Getstat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExeActor_Getstat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExeActor_Getstat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExeActor_Getstat_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFMPEGPortTesting" },
		{ "Keywords", "FFMPEGPort sample test testing" },
		{ "ModuleRelativePath", "Public/DynamicLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExeActor_Getstat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExeActor, nullptr, "Getstat", nullptr, nullptr, sizeof(ExeActor_eventGetstat_Parms), Z_Construct_UFunction_AExeActor_Getstat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExeActor_Getstat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExeActor_Getstat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExeActor_Getstat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExeActor_Getstat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExeActor_Getstat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AExeActor_NoRegister()
	{
		return AExeActor::StaticClass();
	}
	struct Z_Construct_UClass_AExeActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcShutdown_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ProcShutdown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExeActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AExeActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AExeActor_Getstat, "Getstat" }, // 1777032764
		{ &Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature, "OnProcShutdown__DelegateSignature" }, // 2289380992
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExeActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DynamicLoader.h" },
		{ "ModuleRelativePath", "Public/DynamicLoader.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExeActor_Statics::NewProp_ProcShutdown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FFMPEGPort" },
		{ "ModuleRelativePath", "Public/DynamicLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AExeActor_Statics::NewProp_ProcShutdown = { "ProcShutdown", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExeActor, ProcShutdown), Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AExeActor_Statics::NewProp_ProcShutdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExeActor_Statics::NewProp_ProcShutdown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExeActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExeActor_Statics::NewProp_ProcShutdown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExeActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExeActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExeActor_Statics::ClassParams = {
		&AExeActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AExeActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AExeActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExeActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExeActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExeActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExeActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExeActor, 2200913148);
	template<> ESLIBRARY_API UClass* StaticClass<AExeActor>()
	{
		return AExeActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExeActor(Z_Construct_UClass_AExeActor, &AExeActor::StaticClass, TEXT("/Script/ESLibrary"), TEXT("AExeActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExeActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
