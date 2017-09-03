// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
#ifdef FLAPPYBIRD3D_Bird_Pawn_CPP_generated_h
#error "Bird_Pawn_CPP.generated.h already included, missing '#pragma once' in Bird_Pawn_CPP.h"
#endif
#define FLAPPYBIRD3D_Bird_Pawn_CPP_generated_h

#define FlappyBird3D_Source_FlappyBird3D_Bird_Pawn_CPP_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsItFalling) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_currentVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsItFalling(Z_Param_currentVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateOrientationDependingOnVerticalMovement) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_currentVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->CalculateOrientationDependingOnVerticalMovement(Z_Param_currentVelocity); \
		P_NATIVE_END; \
	}


#define FlappyBird3D_Source_FlappyBird3D_Bird_Pawn_CPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsItFalling) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_currentVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsItFalling(Z_Param_currentVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateOrientationDependingOnVerticalMovement) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_currentVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->CalculateOrientationDependingOnVerticalMovement(Z_Param_currentVelocity); \
		P_NATIVE_END; \
	}


#define FlappyBird3D_Source_FlappyBird3D_Bird_Pawn_CPP_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABird_Pawn_CPP(); \
	friend FLAPPYBIRD3D_API class UClass* Z_Construct_UClass_ABird_Pawn_CPP(); \
public: \
	DECLARE_CLASS(ABird_Pawn_CPP, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FlappyBird3D"), NO_API) \
	DECLARE_SERIALIZER(ABird_Pawn_CPP) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FlappyBird3D_Source_FlappyBird3D_Bird_Pawn_CPP_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABird_Pawn_CPP(); \
	friend FLAPPYBIRD3D_API class UClass* Z_Construct_UClass_ABird_Pawn_CPP(); \
public: \
	DECLARE_CLASS(ABird_Pawn_CPP, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FlappyBird3D"), NO_API) \
	DECLARE_SERIALIZER(ABird_Pawn_CPP) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FlappyBird3D_Source_FlappyBird3D_Bird_Pawn_CPP_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABird_Pawn_CPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABird_Pawn_CPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABird_Pawn_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABird_Pawn_CPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABird_Pawn_CPP(ABird_Pawn_CPP&&); \
	NO_API ABird_Pawn_CPP(const ABird_Pawn_CPP&); \
public:


#define FlappyBird3D_Source_FlappyBird3D_Bird_Pawn_CPP_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABird_Pawn_CPP(ABird_Pawn_CPP&&); \
	NO_API ABird_Pawn_CPP(const ABird_Pawn_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABird_Pawn_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABird_Pawn_CPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABird_Pawn_CPP)


#define FlappyBird3D_Source_FlappyBird3D_Bird_Pawn_CPP_h_12_PRIVATE_PROPERTY_OFFSET
#define FlappyBird3D_Source_FlappyBird3D_Bird_Pawn_CPP_h_10_PROLOG
#define FlappyBird3D_Source_FlappyBird3D_Bird_Pawn_CPP_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlappyBird3D_Source_FlappyBird3D_Bird_Pawn_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	FlappyBird3D_Source_FlappyBird3D_Bird_Pawn_CPP_h_12_RPC_WRAPPERS \
	FlappyBird3D_Source_FlappyBird3D_Bird_Pawn_CPP_h_12_INCLASS \
	FlappyBird3D_Source_FlappyBird3D_Bird_Pawn_CPP_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FlappyBird3D_Source_FlappyBird3D_Bird_Pawn_CPP_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlappyBird3D_Source_FlappyBird3D_Bird_Pawn_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	FlappyBird3D_Source_FlappyBird3D_Bird_Pawn_CPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FlappyBird3D_Source_FlappyBird3D_Bird_Pawn_CPP_h_12_INCLASS_NO_PURE_DECLS \
	FlappyBird3D_Source_FlappyBird3D_Bird_Pawn_CPP_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FlappyBird3D_Source_FlappyBird3D_Bird_Pawn_CPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
