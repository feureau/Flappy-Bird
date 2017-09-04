// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef FLAPPYBIRD_FlappyBird_CPP_generated_h
#error "FlappyBird_CPP.generated.h already included, missing '#pragma once' in FlappyBird_CPP.h"
#endif
#define FLAPPYBIRD_FlappyBird_CPP_generated_h

#define FlappyBird_Source_FlappyBird_FlappyBird_CPP_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execisItJumping) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_inputVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->isItJumping(Z_Param_inputVelocity); \
		P_NATIVE_END; \
	}


#define FlappyBird_Source_FlappyBird_FlappyBird_CPP_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execisItJumping) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_inputVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->isItJumping(Z_Param_inputVelocity); \
		P_NATIVE_END; \
	}


#define FlappyBird_Source_FlappyBird_FlappyBird_CPP_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlappyBird_CPP(); \
	friend FLAPPYBIRD_API class UClass* Z_Construct_UClass_AFlappyBird_CPP(); \
public: \
	DECLARE_CLASS(AFlappyBird_CPP, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FlappyBird"), NO_API) \
	DECLARE_SERIALIZER(AFlappyBird_CPP) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FlappyBird_Source_FlappyBird_FlappyBird_CPP_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAFlappyBird_CPP(); \
	friend FLAPPYBIRD_API class UClass* Z_Construct_UClass_AFlappyBird_CPP(); \
public: \
	DECLARE_CLASS(AFlappyBird_CPP, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FlappyBird"), NO_API) \
	DECLARE_SERIALIZER(AFlappyBird_CPP) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FlappyBird_Source_FlappyBird_FlappyBird_CPP_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlappyBird_CPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlappyBird_CPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlappyBird_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlappyBird_CPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlappyBird_CPP(AFlappyBird_CPP&&); \
	NO_API AFlappyBird_CPP(const AFlappyBird_CPP&); \
public:


#define FlappyBird_Source_FlappyBird_FlappyBird_CPP_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlappyBird_CPP(AFlappyBird_CPP&&); \
	NO_API AFlappyBird_CPP(const AFlappyBird_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlappyBird_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlappyBird_CPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlappyBird_CPP)


#define FlappyBird_Source_FlappyBird_FlappyBird_CPP_h_11_PRIVATE_PROPERTY_OFFSET
#define FlappyBird_Source_FlappyBird_FlappyBird_CPP_h_9_PROLOG
#define FlappyBird_Source_FlappyBird_FlappyBird_CPP_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlappyBird_Source_FlappyBird_FlappyBird_CPP_h_11_PRIVATE_PROPERTY_OFFSET \
	FlappyBird_Source_FlappyBird_FlappyBird_CPP_h_11_RPC_WRAPPERS \
	FlappyBird_Source_FlappyBird_FlappyBird_CPP_h_11_INCLASS \
	FlappyBird_Source_FlappyBird_FlappyBird_CPP_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FlappyBird_Source_FlappyBird_FlappyBird_CPP_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlappyBird_Source_FlappyBird_FlappyBird_CPP_h_11_PRIVATE_PROPERTY_OFFSET \
	FlappyBird_Source_FlappyBird_FlappyBird_CPP_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FlappyBird_Source_FlappyBird_FlappyBird_CPP_h_11_INCLASS_NO_PURE_DECLS \
	FlappyBird_Source_FlappyBird_FlappyBird_CPP_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FlappyBird_Source_FlappyBird_FlappyBird_CPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
