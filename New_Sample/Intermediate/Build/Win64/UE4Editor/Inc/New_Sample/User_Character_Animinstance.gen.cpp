// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "New_Sample/User_Character_Animinstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUser_Character_Animinstance() {}
// Cross Module References
	NEW_SAMPLE_API UClass* Z_Construct_UClass_UUser_Character_Animinstance_NoRegister();
	NEW_SAMPLE_API UClass* Z_Construct_UClass_UUser_Character_Animinstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_New_Sample();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUser_Character_Animinstance::execAnimNotify_NextAttackCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_NextAttackCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser_Character_Animinstance::execAnimNotify_AttackShootCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_AttackShootCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser_Character_Animinstance::execAnimNotify_AttackHitCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_AttackHitCheck();
		P_NATIVE_END;
	}
	void UUser_Character_Animinstance::StaticRegisterNativesUUser_Character_Animinstance()
	{
		UClass* Class = UUser_Character_Animinstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_AttackHitCheck", &UUser_Character_Animinstance::execAnimNotify_AttackHitCheck },
			{ "AnimNotify_AttackShootCheck", &UUser_Character_Animinstance::execAnimNotify_AttackShootCheck },
			{ "AnimNotify_NextAttackCheck", &UUser_Character_Animinstance::execAnimNotify_NextAttackCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_AttackHitCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_AttackHitCheck_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Call AnimNotify_Name Notify Node\n" },
		{ "ModuleRelativePath", "User_Character_Animinstance.h" },
		{ "ToolTip", "Call AnimNotify_Name Notify Node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_AttackHitCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser_Character_Animinstance, nullptr, "AnimNotify_AttackHitCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_AttackHitCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_AttackHitCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_AttackHitCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_AttackHitCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_AttackShootCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_AttackShootCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "User_Character_Animinstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_AttackShootCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser_Character_Animinstance, nullptr, "AnimNotify_AttackShootCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_AttackShootCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_AttackShootCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_AttackShootCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_AttackShootCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_NextAttackCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_NextAttackCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "User_Character_Animinstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_NextAttackCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser_Character_Animinstance, nullptr, "AnimNotify_NextAttackCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_NextAttackCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_NextAttackCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_NextAttackCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_NextAttackCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUser_Character_Animinstance_NoRegister()
	{
		return UUser_Character_Animinstance::StaticClass();
	}
	struct Z_Construct_UClass_UUser_Character_Animinstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmedOn_MetaData[];
#endif
		static void NewProp_ArmedOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ArmedOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotOn_MetaData[];
#endif
		static void NewProp_ShotOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShotOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInAir_MetaData[];
#endif
		static void NewProp_IsInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPawnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPawnSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUser_Character_Animinstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_New_Sample,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUser_Character_Animinstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_AttackHitCheck, "AnimNotify_AttackHitCheck" }, // 126609106
		{ &Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_AttackShootCheck, "AnimNotify_AttackShootCheck" }, // 625326304
		{ &Z_Construct_UFunction_UUser_Character_Animinstance_AnimNotify_NextAttackCheck, "AnimNotify_NextAttackCheck" }, // 2682380138
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Character_Animinstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "User_Character_Animinstance.h" },
		{ "ModuleRelativePath", "User_Character_Animinstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_AttackMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "User_Character_Animinstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser_Character_Animinstance, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_AttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_AttackMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_ArmedOn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "User_Character_Animinstance.h" },
	};
#endif
	void Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_ArmedOn_SetBit(void* Obj)
	{
		((UUser_Character_Animinstance*)Obj)->ArmedOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_ArmedOn = { "ArmedOn", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUser_Character_Animinstance), &Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_ArmedOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_ArmedOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_ArmedOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_ShotOn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "User_Character_Animinstance.h" },
	};
#endif
	void Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_ShotOn_SetBit(void* Obj)
	{
		((UUser_Character_Animinstance*)Obj)->ShotOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_ShotOn = { "ShotOn", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUser_Character_Animinstance), &Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_ShotOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_ShotOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_ShotOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_IsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "User_Character_Animinstance.h" },
	};
#endif
	void Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_IsInAir_SetBit(void* Obj)
	{
		((UUser_Character_Animinstance*)Obj)->IsInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_IsInAir = { "IsInAir", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUser_Character_Animinstance), &Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_IsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_IsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_IsInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_CurrentPawnSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "User_Character_Animinstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_CurrentPawnSpeed = { "CurrentPawnSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser_Character_Animinstance, CurrentPawnSpeed), METADATA_PARAMS(Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_CurrentPawnSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_CurrentPawnSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUser_Character_Animinstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_AttackMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_ArmedOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_ShotOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_IsInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Character_Animinstance_Statics::NewProp_CurrentPawnSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUser_Character_Animinstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUser_Character_Animinstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUser_Character_Animinstance_Statics::ClassParams = {
		&UUser_Character_Animinstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUser_Character_Animinstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Character_Animinstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUser_Character_Animinstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Character_Animinstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUser_Character_Animinstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUser_Character_Animinstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUser_Character_Animinstance, 4224858414);
	template<> NEW_SAMPLE_API UClass* StaticClass<UUser_Character_Animinstance>()
	{
		return UUser_Character_Animinstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUser_Character_Animinstance(Z_Construct_UClass_UUser_Character_Animinstance, &UUser_Character_Animinstance::StaticClass, TEXT("/Script/New_Sample"), TEXT("UUser_Character_Animinstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUser_Character_Animinstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
