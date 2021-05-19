// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_UnAct/Project_UnActGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_UnActGameMode() {}
// Cross Module References
	PROJECT_UNACT_API UClass* Z_Construct_UClass_AProject_UnActGameMode_NoRegister();
	PROJECT_UNACT_API UClass* Z_Construct_UClass_AProject_UnActGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Project_UnAct();
// End Cross Module References
	void AProject_UnActGameMode::StaticRegisterNativesAProject_UnActGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProject_UnActGameMode_NoRegister()
	{
		return AProject_UnActGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProject_UnActGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProject_UnActGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_UnAct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProject_UnActGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Project_UnActGameMode.h" },
		{ "ModuleRelativePath", "Project_UnActGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProject_UnActGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject_UnActGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProject_UnActGameMode_Statics::ClassParams = {
		&AProject_UnActGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProject_UnActGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProject_UnActGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProject_UnActGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProject_UnActGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProject_UnActGameMode, 3855313805);
	template<> PROJECT_UNACT_API UClass* StaticClass<AProject_UnActGameMode>()
	{
		return AProject_UnActGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProject_UnActGameMode(Z_Construct_UClass_AProject_UnActGameMode, &AProject_UnActGameMode::StaticClass, TEXT("/Script/Project_UnAct"), TEXT("AProject_UnActGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_UnActGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
