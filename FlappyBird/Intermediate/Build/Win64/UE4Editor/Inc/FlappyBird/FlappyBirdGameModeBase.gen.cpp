// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FlappyBirdGameModeBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlappyBirdGameModeBase() {}
// Cross Module References
	FLAPPYBIRD_API UClass* Z_Construct_UClass_AFlappyBirdGameModeBase_NoRegister();
	FLAPPYBIRD_API UClass* Z_Construct_UClass_AFlappyBirdGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FlappyBird();
// End Cross Module References
	void AFlappyBirdGameModeBase::StaticRegisterNativesAFlappyBirdGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFlappyBirdGameModeBase_NoRegister()
	{
		return AFlappyBirdGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AFlappyBirdGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_FlappyBird();
			OuterClass = AFlappyBirdGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AFlappyBirdGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FlappyBirdGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FlappyBirdGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlappyBirdGameModeBase, 938624201);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlappyBirdGameModeBase(Z_Construct_UClass_AFlappyBirdGameModeBase, &AFlappyBirdGameModeBase::StaticClass, TEXT("/Script/FlappyBird"), TEXT("AFlappyBirdGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlappyBirdGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
