// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef PROJECT_UNACT_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define PROJECT_UNACT_MainCharacter_generated_h

#define Project_UnAct_Source_Project_UnAct_MainCharacter_h_12_SPARSE_DATA
#define Project_UnAct_Source_Project_UnAct_MainCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAttackMontageEnded);


#define Project_UnAct_Source_Project_UnAct_MainCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAttackMontageEnded);


#define Project_UnAct_Source_Project_UnAct_MainCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project_UnAct"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define Project_UnAct_Source_Project_UnAct_MainCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project_UnAct"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define Project_UnAct_Source_Project_UnAct_MainCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public:


#define Project_UnAct_Source_Project_UnAct_MainCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter)


#define Project_UnAct_Source_Project_UnAct_MainCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsAttacking() { return STRUCT_OFFSET(AMainCharacter, IsAttacking); } \
	FORCEINLINE static uint32 __PPO__CanNextCombo() { return STRUCT_OFFSET(AMainCharacter, CanNextCombo); } \
	FORCEINLINE static uint32 __PPO__IsComboInputOn() { return STRUCT_OFFSET(AMainCharacter, IsComboInputOn); } \
	FORCEINLINE static uint32 __PPO__CurrentCombo() { return STRUCT_OFFSET(AMainCharacter, CurrentCombo); } \
	FORCEINLINE static uint32 __PPO__MaxCombo() { return STRUCT_OFFSET(AMainCharacter, MaxCombo); } \
	FORCEINLINE static uint32 __PPO__UMCAnim() { return STRUCT_OFFSET(AMainCharacter, UMCAnim); }


#define Project_UnAct_Source_Project_UnAct_MainCharacter_h_9_PROLOG
#define Project_UnAct_Source_Project_UnAct_MainCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_UnAct_Source_Project_UnAct_MainCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Project_UnAct_Source_Project_UnAct_MainCharacter_h_12_SPARSE_DATA \
	Project_UnAct_Source_Project_UnAct_MainCharacter_h_12_RPC_WRAPPERS \
	Project_UnAct_Source_Project_UnAct_MainCharacter_h_12_INCLASS \
	Project_UnAct_Source_Project_UnAct_MainCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_UnAct_Source_Project_UnAct_MainCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_UnAct_Source_Project_UnAct_MainCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Project_UnAct_Source_Project_UnAct_MainCharacter_h_12_SPARSE_DATA \
	Project_UnAct_Source_Project_UnAct_MainCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_UnAct_Source_Project_UnAct_MainCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Project_UnAct_Source_Project_UnAct_MainCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT_UNACT_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_UnAct_Source_Project_UnAct_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
