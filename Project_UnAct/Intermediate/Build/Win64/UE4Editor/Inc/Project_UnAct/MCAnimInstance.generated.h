// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT_UNACT_MCAnimInstance_generated_h
#error "MCAnimInstance.generated.h already included, missing '#pragma once' in MCAnimInstance.h"
#endif
#define PROJECT_UNACT_MCAnimInstance_generated_h

#define Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_15_SPARSE_DATA
#define Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_15_RPC_WRAPPERS
#define Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMCAnimInstance(); \
	friend struct Z_Construct_UClass_UMCAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMCAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Project_UnAct"), NO_API) \
	DECLARE_SERIALIZER(UMCAnimInstance)


#define Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMCAnimInstance(); \
	friend struct Z_Construct_UClass_UMCAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMCAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Project_UnAct"), NO_API) \
	DECLARE_SERIALIZER(UMCAnimInstance)


#define Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMCAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMCAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMCAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMCAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMCAnimInstance(UMCAnimInstance&&); \
	NO_API UMCAnimInstance(const UMCAnimInstance&); \
public:


#define Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMCAnimInstance(UMCAnimInstance&&); \
	NO_API UMCAnimInstance(const UMCAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMCAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMCAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMCAnimInstance)


#define Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentPawnSpeed() { return STRUCT_OFFSET(UMCAnimInstance, CurrentPawnSpeed); } \
	FORCEINLINE static uint32 __PPO__IsInAir() { return STRUCT_OFFSET(UMCAnimInstance, IsInAir); } \
	FORCEINLINE static uint32 __PPO__AttackMontage() { return STRUCT_OFFSET(UMCAnimInstance, AttackMontage); }


#define Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_12_PROLOG
#define Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_15_SPARSE_DATA \
	Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_15_RPC_WRAPPERS \
	Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_15_INCLASS \
	Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_15_SPARSE_DATA \
	Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	Project_UnAct_Source_Project_UnAct_MCAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT_UNACT_API UClass* StaticClass<class UMCAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_UnAct_Source_Project_UnAct_MCAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
