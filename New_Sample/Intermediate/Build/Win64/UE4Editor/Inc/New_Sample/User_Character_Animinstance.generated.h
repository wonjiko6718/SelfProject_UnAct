// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEW_SAMPLE_User_Character_Animinstance_generated_h
#error "User_Character_Animinstance.generated.h already included, missing '#pragma once' in User_Character_Animinstance.h"
#endif
#define NEW_SAMPLE_User_Character_Animinstance_generated_h

#define New_Sample_Source_New_Sample_User_Character_Animinstance_h_19_SPARSE_DATA
#define New_Sample_Source_New_Sample_User_Character_Animinstance_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_NextAttackCheck); \
	DECLARE_FUNCTION(execAnimNotify_AttackShootCheck); \
	DECLARE_FUNCTION(execAnimNotify_AttackHitCheck);


#define New_Sample_Source_New_Sample_User_Character_Animinstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_NextAttackCheck); \
	DECLARE_FUNCTION(execAnimNotify_AttackShootCheck); \
	DECLARE_FUNCTION(execAnimNotify_AttackHitCheck);


#define New_Sample_Source_New_Sample_User_Character_Animinstance_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUser_Character_Animinstance(); \
	friend struct Z_Construct_UClass_UUser_Character_Animinstance_Statics; \
public: \
	DECLARE_CLASS(UUser_Character_Animinstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/New_Sample"), NO_API) \
	DECLARE_SERIALIZER(UUser_Character_Animinstance)


#define New_Sample_Source_New_Sample_User_Character_Animinstance_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUUser_Character_Animinstance(); \
	friend struct Z_Construct_UClass_UUser_Character_Animinstance_Statics; \
public: \
	DECLARE_CLASS(UUser_Character_Animinstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/New_Sample"), NO_API) \
	DECLARE_SERIALIZER(UUser_Character_Animinstance)


#define New_Sample_Source_New_Sample_User_Character_Animinstance_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUser_Character_Animinstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUser_Character_Animinstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUser_Character_Animinstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUser_Character_Animinstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUser_Character_Animinstance(UUser_Character_Animinstance&&); \
	NO_API UUser_Character_Animinstance(const UUser_Character_Animinstance&); \
public:


#define New_Sample_Source_New_Sample_User_Character_Animinstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUser_Character_Animinstance(UUser_Character_Animinstance&&); \
	NO_API UUser_Character_Animinstance(const UUser_Character_Animinstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUser_Character_Animinstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUser_Character_Animinstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUser_Character_Animinstance)


#define New_Sample_Source_New_Sample_User_Character_Animinstance_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentPawnSpeed() { return STRUCT_OFFSET(UUser_Character_Animinstance, CurrentPawnSpeed); } \
	FORCEINLINE static uint32 __PPO__IsInAir() { return STRUCT_OFFSET(UUser_Character_Animinstance, IsInAir); } \
	FORCEINLINE static uint32 __PPO__ShotOn() { return STRUCT_OFFSET(UUser_Character_Animinstance, ShotOn); } \
	FORCEINLINE static uint32 __PPO__ArmedOn() { return STRUCT_OFFSET(UUser_Character_Animinstance, ArmedOn); } \
	FORCEINLINE static uint32 __PPO__AttackMontage() { return STRUCT_OFFSET(UUser_Character_Animinstance, AttackMontage); }


#define New_Sample_Source_New_Sample_User_Character_Animinstance_h_16_PROLOG
#define New_Sample_Source_New_Sample_User_Character_Animinstance_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	New_Sample_Source_New_Sample_User_Character_Animinstance_h_19_PRIVATE_PROPERTY_OFFSET \
	New_Sample_Source_New_Sample_User_Character_Animinstance_h_19_SPARSE_DATA \
	New_Sample_Source_New_Sample_User_Character_Animinstance_h_19_RPC_WRAPPERS \
	New_Sample_Source_New_Sample_User_Character_Animinstance_h_19_INCLASS \
	New_Sample_Source_New_Sample_User_Character_Animinstance_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define New_Sample_Source_New_Sample_User_Character_Animinstance_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	New_Sample_Source_New_Sample_User_Character_Animinstance_h_19_PRIVATE_PROPERTY_OFFSET \
	New_Sample_Source_New_Sample_User_Character_Animinstance_h_19_SPARSE_DATA \
	New_Sample_Source_New_Sample_User_Character_Animinstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	New_Sample_Source_New_Sample_User_Character_Animinstance_h_19_INCLASS_NO_PURE_DECLS \
	New_Sample_Source_New_Sample_User_Character_Animinstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEW_SAMPLE_API UClass* StaticClass<class UUser_Character_Animinstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID New_Sample_Source_New_Sample_User_Character_Animinstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
