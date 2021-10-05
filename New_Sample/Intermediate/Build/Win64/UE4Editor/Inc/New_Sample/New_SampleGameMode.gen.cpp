// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "New_Sample/New_SampleGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNew_SampleGameMode() {}
// Cross Module References
	NEW_SAMPLE_API UClass* Z_Construct_UClass_ANew_SampleGameMode_NoRegister();
	NEW_SAMPLE_API UClass* Z_Construct_UClass_ANew_SampleGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_New_Sample();
// End Cross Module References
	void ANew_SampleGameMode::StaticRegisterNativesANew_SampleGameMode()
	{
	}
	UClass* Z_Construct_UClass_ANew_SampleGameMode_NoRegister()
	{
		return ANew_SampleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANew_SampleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANew_SampleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_New_Sample,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANew_SampleGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "New_SampleGameMode.h" },
		{ "ModuleRelativePath", "New_SampleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANew_SampleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANew_SampleGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANew_SampleGameMode_Statics::ClassParams = {
		&ANew_SampleGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANew_SampleGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANew_SampleGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANew_SampleGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANew_SampleGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANew_SampleGameMode, 3613287352);
	template<> NEW_SAMPLE_API UClass* StaticClass<ANew_SampleGameMode>()
	{
		return ANew_SampleGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANew_SampleGameMode(Z_Construct_UClass_ANew_SampleGameMode, &ANew_SampleGameMode::StaticClass, TEXT("/Script/New_Sample"), TEXT("ANew_SampleGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANew_SampleGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
