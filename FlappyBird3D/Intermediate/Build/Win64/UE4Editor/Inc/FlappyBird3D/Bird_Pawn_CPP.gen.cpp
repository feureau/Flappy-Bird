// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Bird_Pawn_CPP.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBird_Pawn_CPP() {}
// Cross Module References
	FLAPPYBIRD3D_API UFunction* Z_Construct_UFunction_ABird_Pawn_CPP_CalculateOrientationDependingOnVerticalMovement();
	FLAPPYBIRD3D_API UClass* Z_Construct_UClass_ABird_Pawn_CPP();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FLAPPYBIRD3D_API UFunction* Z_Construct_UFunction_ABird_Pawn_CPP_IsItFalling();
	FLAPPYBIRD3D_API UClass* Z_Construct_UClass_ABird_Pawn_CPP_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_FlappyBird3D();
// End Cross Module References
	void ABird_Pawn_CPP::StaticRegisterNativesABird_Pawn_CPP()
	{
		UClass* Class = ABird_Pawn_CPP::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CalculateOrientationDependingOnVerticalMovement", (Native)&ABird_Pawn_CPP::execCalculateOrientationDependingOnVerticalMovement },
			{ "IsItFalling", (Native)&ABird_Pawn_CPP::execIsItFalling },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ABird_Pawn_CPP_CalculateOrientationDependingOnVerticalMovement()
	{
		struct Bird_Pawn_CPP_eventCalculateOrientationDependingOnVerticalMovement_Parms
		{
			FVector currentVelocity;
			FRotator ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ABird_Pawn_CPP();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CalculateOrientationDependingOnVerticalMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04820401, 65535, sizeof(Bird_Pawn_CPP_eventCalculateOrientationDependingOnVerticalMovement_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, Bird_Pawn_CPP_eventCalculateOrientationDependingOnVerticalMovement_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_currentVelocity = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("currentVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(currentVelocity, Bird_Pawn_CPP_eventCalculateOrientationDependingOnVerticalMovement_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Bird_Pawn_CPP"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Bird_Pawn_CPP.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABird_Pawn_CPP_IsItFalling()
	{
		struct Bird_Pawn_CPP_eventIsItFalling_Parms
		{
			FVector currentVelocity;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ABird_Pawn_CPP();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsItFalling"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14820401, 65535, sizeof(Bird_Pawn_CPP_eventIsItFalling_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, Bird_Pawn_CPP_eventIsItFalling_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, Bird_Pawn_CPP_eventIsItFalling_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, Bird_Pawn_CPP_eventIsItFalling_Parms), sizeof(bool), true);
			UProperty* NewProp_currentVelocity = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("currentVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(currentVelocity, Bird_Pawn_CPP_eventIsItFalling_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Bird_Pawn_CPP"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Bird_Pawn_CPP.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABird_Pawn_CPP_NoRegister()
	{
		return ABird_Pawn_CPP::StaticClass();
	}
	UClass* Z_Construct_UClass_ABird_Pawn_CPP()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_FlappyBird3D();
			OuterClass = ABird_Pawn_CPP::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ABird_Pawn_CPP_CalculateOrientationDependingOnVerticalMovement());
				OuterClass->LinkChild(Z_Construct_UFunction_ABird_Pawn_CPP_IsItFalling());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABird_Pawn_CPP_CalculateOrientationDependingOnVerticalMovement(), "CalculateOrientationDependingOnVerticalMovement"); // 3410768457
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABird_Pawn_CPP_IsItFalling(), "IsItFalling"); // 2154463569
				static TCppClassTypeInfo<TCppClassTypeTraits<ABird_Pawn_CPP> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Bird_Pawn_CPP.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Bird_Pawn_CPP.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABird_Pawn_CPP, 4157728472);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABird_Pawn_CPP(Z_Construct_UClass_ABird_Pawn_CPP, &ABird_Pawn_CPP::StaticClass, TEXT("/Script/FlappyBird3D"), TEXT("ABird_Pawn_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABird_Pawn_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
