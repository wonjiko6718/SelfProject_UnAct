// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef NEW_SAMPLE_User_Character_generated_h
#error "User_Character.generated.h already included, missing '#pragma once' in User_Character.h"
#endif
#define NEW_SAMPLE_User_Character_generated_h

#define New_Sample_Source_New_Sample_User_Character_h_12_SPARSE_DATA
#define New_Sample_Source_New_Sample_User_Character_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAttackMontageEnded);


#define New_Sample_Source_New_Sample_User_Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAttackMontageEnded);


#define New_Sample_Source_New_Sample_User_Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUser_Character(); \
	friend struct Z_Construct_UClass_AUser_Character_Statics; \
public: \
	DECLARE_CLASS(AUser_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/New_Sample"), NO_API) \
	DECLARE_SERIALIZER(AUser_Character)


#define New_Sample_Source_New_Sample_User_Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUser_Character(); \
	friend struct Z_Construct_UClass_AUser_Character_Statics; \
public: \
	DECLARE_CLASS(AUser_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/New_Sample"), NO_API) \
	DECLARE_SERIALIZER(AUser_Character)


#define New_Sample_Source_New_Sample_User_Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUser_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUser_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUser_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUser_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUser_Character(AUser_Character&&); \
	NO_API AUser_Character(const AUser_Character&); \
public:


#define New_Sample_Source_New_Sample_User_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUser_Character(AUser_Character&&); \
	NO_API AUser_Character(const AUser_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUser_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUser_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUser_Character)


#define New_Sample_Source_New_Sample_User_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__User_Character_Anim() { return STRUCT_OFFSET(AUser_Character, User_Character_Anim); } \
	FORCEINLINE static uint32 __PPO__IsAttacking() { return STRUCT_OFFSET(AUser_Character, IsAttacking); } \
	FORCEINLINE static uint32 __PPO__CanNextCombo() { return STRUCT_OFFSET(AUser_Character, CanNextCombo); } \
	FORCEINLINE static uint32 __PPO__IsComboInputOn() { return STRUCT_OFFSET(AUser_Character, IsComboInputOn); } \
	FORCEINLINE static uint32 __PPO__CurrentCombo() { return STRUCT_OFFSET(AUser_Character, CurrentCombo); } \
	FORCEINLINE static uint32 __PPO__MaxCombo() { return STRUCT_OFFSET(AUser_Character, MaxCombo); }


#define New_Sample_Source_New_Sample_User_Character_h_9_PROLOG
#define New_Sample_Source_New_Sample_User_Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	New_Sample_Source_New_Sample_User_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	New_Sample_Source_New_Sample_User_Character_h_12_SPARSE_DATA \
	New_Sample_Source_New_Sample_User_Character_h_12_RPC_WRAPPERS \
	New_Sample_Source_New_Sample_User_Character_h_12_INCLASS \
	New_Sample_Source_New_Sample_User_Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define New_Sample_Source_New_Sample_User_Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	New_Sample_Source_New_Sample_User_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	New_Sample_Source_New_Sample_User_Character_h_12_SPARSE_DATA \
	New_Sample_Source_New_Sample_User_Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	New_Sample_Source_New_Sample_User_Character_h_12_INCLASS_NO_PURE_DECLS \
	New_Sample_Source_New_Sample_User_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEW_SAMPLE_API UClass* StaticClass<class AUser_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID New_Sample_Source_New_Sample_User_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
