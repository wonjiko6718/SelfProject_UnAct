// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_UnAct/MCAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMCAnimInstance() {}
// Cross Module References
	PROJECT_UNACT_API UClass* Z_Construct_UClass_UMCAnimInstance_NoRegister();
	PROJECT_UNACT_API UClass* Z_Construct_UClass_UMCAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Project_UnAct();
// End Cross Module References
	void UMCAnimInstance::StaticRegisterNativesUMCAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UMCAnimInstance_NoRegister()
	{
		return UMCAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMCAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPawnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPawnSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMCAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_UnAct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MCAnimInstance.h" },
		{ "ModuleRelativePath", "MCAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCAnimInstance_Statics::NewProp_CurrentPawnSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MCAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMCAnimInstance_Statics::NewProp_CurrentPawnSpeed = { "CurrentPawnSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMCAnimInstance, CurrentPawnSpeed), METADATA_PARAMS(Z_Construct_UClass_UMCAnimInstance_Statics::NewProp_CurrentPawnSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMCAnimInstance_Statics::NewProp_CurrentPawnSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMCAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCAnimInstance_Statics::NewProp_CurrentPawnSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMCAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMCAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMCAnimInstance_Statics::ClassParams = {
		&UMCAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMCAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMCAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMCAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMCAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMCAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMCAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMCAnimInstance, 2346914424);
	template<> PROJECT_UNACT_API UClass* StaticClass<UMCAnimInstance>()
	{
		return UMCAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMCAnimInstance(Z_Construct_UClass_UMCAnimInstance, &UMCAnimInstance::StaticClass, TEXT("/Script/Project_UnAct"), TEXT("UMCAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMCAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
