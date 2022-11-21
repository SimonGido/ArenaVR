// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENAVR_VRCharacter_generated_h
#error "VRCharacter.generated.h already included, missing '#pragma once' in VRCharacter.h"
#endif
#define ARENAVR_VRCharacter_generated_h

#define FID_ArenaVR_Source_ArenaVR_VRCharacter_h_17_SPARSE_DATA
#define FID_ArenaVR_Source_ArenaVR_VRCharacter_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnProjectile);


#define FID_ArenaVR_Source_ArenaVR_VRCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnProjectile);


#define FID_ArenaVR_Source_ArenaVR_VRCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRCharacter(); \
	friend struct Z_Construct_UClass_AVRCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaVR"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacter)


#define FID_ArenaVR_Source_ArenaVR_VRCharacter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAVRCharacter(); \
	friend struct Z_Construct_UClass_AVRCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaVR"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacter)


#define FID_ArenaVR_Source_ArenaVR_VRCharacter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacter(AVRCharacter&&); \
	NO_API AVRCharacter(const AVRCharacter&); \
public:


#define FID_ArenaVR_Source_ArenaVR_VRCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacter(AVRCharacter&&); \
	NO_API AVRCharacter(const AVRCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVRCharacter)


#define FID_ArenaVR_Source_ArenaVR_VRCharacter_h_14_PROLOG
#define FID_ArenaVR_Source_ArenaVR_VRCharacter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArenaVR_Source_ArenaVR_VRCharacter_h_17_SPARSE_DATA \
	FID_ArenaVR_Source_ArenaVR_VRCharacter_h_17_RPC_WRAPPERS \
	FID_ArenaVR_Source_ArenaVR_VRCharacter_h_17_INCLASS \
	FID_ArenaVR_Source_ArenaVR_VRCharacter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ArenaVR_Source_ArenaVR_VRCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArenaVR_Source_ArenaVR_VRCharacter_h_17_SPARSE_DATA \
	FID_ArenaVR_Source_ArenaVR_VRCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ArenaVR_Source_ArenaVR_VRCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_ArenaVR_Source_ArenaVR_VRCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENAVR_API UClass* StaticClass<class AVRCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ArenaVR_Source_ArenaVR_VRCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
