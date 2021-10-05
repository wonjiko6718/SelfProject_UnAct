// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEW_SAMPLE_New_SampleCharacter_generated_h
#error "New_SampleCharacter.generated.h already included, missing '#pragma once' in New_SampleCharacter.h"
#endif
#define NEW_SAMPLE_New_SampleCharacter_generated_h

#define New_Sample_Source_New_Sample_New_SampleCharacter_h_12_SPARSE_DATA
#define New_Sample_Source_New_Sample_New_SampleCharacter_h_12_RPC_WRAPPERS
#define New_Sample_Source_New_Sample_New_SampleCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define New_Sample_Source_New_Sample_New_SampleCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANew_SampleCharacter(); \
	friend struct Z_Construct_UClass_ANew_SampleCharacter_Statics; \
public: \
	DECLARE_CLASS(ANew_SampleCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/New_Sample"), NO_API) \
	DECLARE_SERIALIZER(ANew_SampleCharacter)


#define New_Sample_Source_New_Sample_New_SampleCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANew_SampleCharacter(); \
	friend struct Z_Construct_UClass_ANew_SampleCharacter_Statics; \
public: \
	DECLARE_CLASS(ANew_SampleCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/New_Sample"), NO_API) \
	DECLARE_SERIALIZER(ANew_SampleCharacter)


#define New_Sample_Source_New_Sample_New_SampleCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANew_SampleCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANew_SampleCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANew_SampleCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANew_SampleCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANew_SampleCharacter(ANew_SampleCharacter&&); \
	NO_API ANew_SampleCharacter(const ANew_SampleCharacter&); \
public:


#define New_Sample_Source_New_Sample_New_SampleCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANew_SampleCharacter(ANew_SampleCharacter&&); \
	NO_API ANew_SampleCharacter(const ANew_SampleCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANew_SampleCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANew_SampleCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANew_SampleCharacter)


#define New_Sample_Source_New_Sample_New_SampleCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ANew_SampleCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ANew_SampleCharacter, FollowCamera); }


#define New_Sample_Source_New_Sample_New_SampleCharacter_h_9_PROLOG
#define New_Sample_Source_New_Sample_New_SampleCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	New_Sample_Source_New_Sample_New_SampleCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	New_Sample_Source_New_Sample_New_SampleCharacter_h_12_SPARSE_DATA \
	New_Sample_Source_New_Sample_New_SampleCharacter_h_12_RPC_WRAPPERS \
	New_Sample_Source_New_Sample_New_SampleCharacter_h_12_INCLASS \
	New_Sample_Source_New_Sample_New_SampleCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define New_Sample_Source_New_Sample_New_SampleCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	New_Sample_Source_New_Sample_New_SampleCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	New_Sample_Source_New_Sample_New_SampleCharacter_h_12_SPARSE_DATA \
	New_Sample_Source_New_Sample_New_SampleCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	New_Sample_Source_New_Sample_New_SampleCharacter_h_12_INCLASS_NO_PURE_DECLS \
	New_Sample_Source_New_Sample_New_SampleCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEW_SAMPLE_API UClass* StaticClass<class ANew_SampleCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID New_Sample_Source_New_Sample_New_SampleCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
