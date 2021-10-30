// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "New_Sample/User_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUser_Character() {}
// Cross Module References
	NEW_SAMPLE_API UClass* Z_Construct_UClass_AUser_Character_NoRegister();
	NEW_SAMPLE_API UClass* Z_Construct_UClass_AUser_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_New_Sample();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	NEW_SAMPLE_API UClass* Z_Construct_UClass_UUser_Character_Animinstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUser_Character::execOnAttackMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttackMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	void AUser_Character::StaticRegisterNativesAUser_Character()
	{
		UClass* Class = AUser_Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAttackMontageEnded", &AUser_Character::execOnAttackMontageEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUser_Character_OnAttackMontageEnded_Statics
	{
		struct User_Character_eventOnAttackMontageEnded_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUser_Character_OnAttackMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((User_Character_eventOnAttackMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUser_Character_OnAttackMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(User_Character_eventOnAttackMontageEnded_Parms), &Z_Construct_UFunction_AUser_Character_OnAttackMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUser_Character_OnAttackMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_Character_eventOnAttackMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUser_Character_OnAttackMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUser_Character_OnAttackMontageEnded_Statics::NewProp_bInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUser_Character_OnAttackMontageEnded_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUser_Character_OnAttackMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "User_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUser_Character_OnAttackMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUser_Character, nullptr, "OnAttackMontageEnded", nullptr, nullptr, sizeof(User_Character_eventOnAttackMontageEnded_Parms), Z_Construct_UFunction_AUser_Character_OnAttackMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUser_Character_OnAttackMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUser_Character_OnAttackMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUser_Character_OnAttackMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUser_Character_OnAttackMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUser_Character_OnAttackMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUser_Character_NoRegister()
	{
		return AUser_Character::StaticClass();
	}
	struct Z_Construct_UClass_AUser_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCombo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCombo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCombo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentCombo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsComboInputOn_MetaData[];
#endif
		static void NewProp_IsComboInputOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsComboInputOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanNextCombo_MetaData[];
#endif
		static void NewProp_CanNextCombo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanNextCombo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAttacking_MetaData[];
#endif
		static void NewProp_IsAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_Character_Anim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User_Character_Anim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsArmed_MetaData[];
#endif
		static void NewProp_IsArmed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsArmed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUser_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_New_Sample,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUser_Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUser_Character_OnAttackMontageEnded, "OnAttackMontageEnded" }, // 883726528
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUser_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "User_Character.h" },
		{ "ModuleRelativePath", "User_Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUser_Character_Statics::NewProp_MaxCombo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "User_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUser_Character_Statics::NewProp_MaxCombo = { "MaxCombo", nullptr, (EPropertyFlags)0x0040000000020815, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUser_Character, MaxCombo), METADATA_PARAMS(Z_Construct_UClass_AUser_Character_Statics::NewProp_MaxCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUser_Character_Statics::NewProp_MaxCombo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUser_Character_Statics::NewProp_CurrentCombo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "User_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUser_Character_Statics::NewProp_CurrentCombo = { "CurrentCombo", nullptr, (EPropertyFlags)0x0040000000020815, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUser_Character, CurrentCombo), METADATA_PARAMS(Z_Construct_UClass_AUser_Character_Statics::NewProp_CurrentCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUser_Character_Statics::NewProp_CurrentCombo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUser_Character_Statics::NewProp_IsComboInputOn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "User_Character.h" },
	};
#endif
	void Z_Construct_UClass_AUser_Character_Statics::NewProp_IsComboInputOn_SetBit(void* Obj)
	{
		((AUser_Character*)Obj)->IsComboInputOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUser_Character_Statics::NewProp_IsComboInputOn = { "IsComboInputOn", nullptr, (EPropertyFlags)0x0040000000020815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUser_Character), &Z_Construct_UClass_AUser_Character_Statics::NewProp_IsComboInputOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUser_Character_Statics::NewProp_IsComboInputOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUser_Character_Statics::NewProp_IsComboInputOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUser_Character_Statics::NewProp_CanNextCombo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "User_Character.h" },
	};
#endif
	void Z_Construct_UClass_AUser_Character_Statics::NewProp_CanNextCombo_SetBit(void* Obj)
	{
		((AUser_Character*)Obj)->CanNextCombo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUser_Character_Statics::NewProp_CanNextCombo = { "CanNextCombo", nullptr, (EPropertyFlags)0x0040000000020815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUser_Character), &Z_Construct_UClass_AUser_Character_Statics::NewProp_CanNextCombo_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUser_Character_Statics::NewProp_CanNextCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUser_Character_Statics::NewProp_CanNextCombo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUser_Character_Statics::NewProp_IsAttacking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "User_Character.h" },
	};
#endif
	void Z_Construct_UClass_AUser_Character_Statics::NewProp_IsAttacking_SetBit(void* Obj)
	{
		((AUser_Character*)Obj)->IsAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUser_Character_Statics::NewProp_IsAttacking = { "IsAttacking", nullptr, (EPropertyFlags)0x0040000000020815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUser_Character), &Z_Construct_UClass_AUser_Character_Statics::NewProp_IsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUser_Character_Statics::NewProp_IsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUser_Character_Statics::NewProp_IsAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUser_Character_Statics::NewProp_User_Character_Anim_MetaData[] = {
		{ "ModuleRelativePath", "User_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUser_Character_Statics::NewProp_User_Character_Anim = { "User_Character_Anim", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUser_Character, User_Character_Anim), Z_Construct_UClass_UUser_Character_Animinstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUser_Character_Statics::NewProp_User_Character_Anim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUser_Character_Statics::NewProp_User_Character_Anim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUser_Character_Statics::NewProp_IsArmed_MetaData[] = {
		{ "Category", "User_Character" },
		{ "ModuleRelativePath", "User_Character.h" },
	};
#endif
	void Z_Construct_UClass_AUser_Character_Statics::NewProp_IsArmed_SetBit(void* Obj)
	{
		((AUser_Character*)Obj)->IsArmed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUser_Character_Statics::NewProp_IsArmed = { "IsArmed", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUser_Character), &Z_Construct_UClass_AUser_Character_Statics::NewProp_IsArmed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUser_Character_Statics::NewProp_IsArmed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUser_Character_Statics::NewProp_IsArmed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUser_Character_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "// 2021 1022 Weapon Socket\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "User_Character.h" },
		{ "ToolTip", "2021 1022 Weapon Socket" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUser_Character_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUser_Character, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUser_Character_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUser_Character_Statics::NewProp_Weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUser_Character_Statics::NewProp_PlayerSpeed_MetaData[] = {
		{ "Category", "User_Character" },
		{ "ModuleRelativePath", "User_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUser_Character_Statics::NewProp_PlayerSpeed = { "PlayerSpeed", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUser_Character, PlayerSpeed), METADATA_PARAMS(Z_Construct_UClass_AUser_Character_Statics::NewProp_PlayerSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUser_Character_Statics::NewProp_PlayerSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUser_Character_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "User_Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "User_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUser_Character_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUser_Character, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUser_Character_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUser_Character_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUser_Character_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "User_Character" },
		{ "Comment", "// Camera Setting\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "User_Character.h" },
		{ "ToolTip", "Camera Setting" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUser_Character_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUser_Character, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUser_Character_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUser_Character_Statics::NewProp_SpringArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUser_Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUser_Character_Statics::NewProp_MaxCombo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUser_Character_Statics::NewProp_CurrentCombo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUser_Character_Statics::NewProp_IsComboInputOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUser_Character_Statics::NewProp_CanNextCombo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUser_Character_Statics::NewProp_IsAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUser_Character_Statics::NewProp_User_Character_Anim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUser_Character_Statics::NewProp_IsArmed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUser_Character_Statics::NewProp_Weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUser_Character_Statics::NewProp_PlayerSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUser_Character_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUser_Character_Statics::NewProp_SpringArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUser_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUser_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUser_Character_Statics::ClassParams = {
		&AUser_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUser_Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUser_Character_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUser_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUser_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUser_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUser_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUser_Character, 253782231);
	template<> NEW_SAMPLE_API UClass* StaticClass<AUser_Character>()
	{
		return AUser_Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUser_Character(Z_Construct_UClass_AUser_Character, &AUser_Character::StaticClass, TEXT("/Script/New_Sample"), TEXT("AUser_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUser_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
