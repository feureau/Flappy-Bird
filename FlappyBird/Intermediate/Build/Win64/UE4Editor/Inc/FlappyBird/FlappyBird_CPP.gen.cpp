// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FlappyBird_CPP.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlappyBird_CPP() {}
// Cross Module References
	FLAPPYBIRD_API UFunction* Z_Construct_UFunction_AFlappyBird_CPP_isItJumping();
	FLAPPYBIRD_API UClass* Z_Construct_UClass_AFlappyBird_CPP();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FLAPPYBIRD_API UClass* Z_Construct_UClass_AFlappyBird_CPP_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_FlappyBird();
// End Cross Module References
	void AFlappyBird_CPP::StaticRegisterNativesAFlappyBird_CPP()
	{
		UClass* Class = AFlappyBird_CPP::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "isItJumping", (Native)&AFlappyBird_CPP::execisItJumping },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AFlappyBird_CPP_isItJumping()
	{
		struct FlappyBird_CPP_eventisItJumping_Parms
		{
			FVector inputVelocity;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AFlappyBird_CPP();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("isItJumping"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14820401, 65535, sizeof(FlappyBird_CPP_eventisItJumping_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FlappyBird_CPP_eventisItJumping_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FlappyBird_CPP_eventisItJumping_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FlappyBird_CPP_eventisItJumping_Parms), sizeof(bool), true);
			UProperty* NewProp_inputVelocity = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("inputVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(inputVelocity, FlappyBird_CPP_eventisItJumping_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Flappy Bird Custom CPP"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FlappyBird_CPP.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("return true if jumping, return false if falling"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFlappyBird_CPP_NoRegister()
	{
		return AFlappyBird_CPP::StaticClass();
	}
	UClass* Z_Construct_UClass_AFlappyBird_CPP()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_FlappyBird();
			OuterClass = AFlappyBird_CPP::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AFlappyBird_CPP_isItJumping());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFlappyBird_CPP_isItJumping(), "isItJumping"); // 1641251774
				static TCppClassTypeInfo<TCppClassTypeTraits<AFlappyBird_CPP> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FlappyBird_CPP.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FlappyBird_CPP.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlappyBird_CPP, 1620475121);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlappyBird_CPP(Z_Construct_UClass_AFlappyBird_CPP, &AFlappyBird_CPP::StaticClass, TEXT("/Script/FlappyBird"), TEXT("AFlappyBird_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlappyBird_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
