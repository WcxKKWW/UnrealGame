// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLUGTEST_plugtestCharacter_generated_h
#error "plugtestCharacter.generated.h already included, missing '#pragma once' in plugtestCharacter.h"
#endif
#define PLUGTEST_plugtestCharacter_generated_h

#define FID_plugtest_Source_plugtest_plugtestCharacter_h_12_SPARSE_DATA
#define FID_plugtest_Source_plugtest_plugtestCharacter_h_12_RPC_WRAPPERS
#define FID_plugtest_Source_plugtest_plugtestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_plugtest_Source_plugtest_plugtestCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAplugtestCharacter(); \
	friend struct Z_Construct_UClass_AplugtestCharacter_Statics; \
public: \
	DECLARE_CLASS(AplugtestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/plugtest"), NO_API) \
	DECLARE_SERIALIZER(AplugtestCharacter)


#define FID_plugtest_Source_plugtest_plugtestCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAplugtestCharacter(); \
	friend struct Z_Construct_UClass_AplugtestCharacter_Statics; \
public: \
	DECLARE_CLASS(AplugtestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/plugtest"), NO_API) \
	DECLARE_SERIALIZER(AplugtestCharacter)


#define FID_plugtest_Source_plugtest_plugtestCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AplugtestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AplugtestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AplugtestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AplugtestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AplugtestCharacter(AplugtestCharacter&&); \
	NO_API AplugtestCharacter(const AplugtestCharacter&); \
public:


#define FID_plugtest_Source_plugtest_plugtestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AplugtestCharacter(AplugtestCharacter&&); \
	NO_API AplugtestCharacter(const AplugtestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AplugtestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AplugtestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AplugtestCharacter)


#define FID_plugtest_Source_plugtest_plugtestCharacter_h_9_PROLOG
#define FID_plugtest_Source_plugtest_plugtestCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_plugtest_Source_plugtest_plugtestCharacter_h_12_SPARSE_DATA \
	FID_plugtest_Source_plugtest_plugtestCharacter_h_12_RPC_WRAPPERS \
	FID_plugtest_Source_plugtest_plugtestCharacter_h_12_INCLASS \
	FID_plugtest_Source_plugtest_plugtestCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_plugtest_Source_plugtest_plugtestCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_plugtest_Source_plugtest_plugtestCharacter_h_12_SPARSE_DATA \
	FID_plugtest_Source_plugtest_plugtestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_plugtest_Source_plugtest_plugtestCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_plugtest_Source_plugtest_plugtestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLUGTEST_API UClass* StaticClass<class AplugtestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_plugtest_Source_plugtest_plugtestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
