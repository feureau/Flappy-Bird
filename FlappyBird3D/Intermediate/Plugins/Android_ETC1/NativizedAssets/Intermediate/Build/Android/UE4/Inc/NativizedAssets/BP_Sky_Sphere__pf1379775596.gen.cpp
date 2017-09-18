// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/BP_Sky_Sphere__pf1379775596.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Sky_Sphere__pf1379775596() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Sky_Sphere_C__pf1379775596_bpf__UpdateSunDirection__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Sky_Sphere_C__pf1379775596();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Sky_Sphere_C__pf1379775596_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Sky_Sphere_C__pf1379775596_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_ADirectionalLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABP_Sky_Sphere_C__pf1379775596_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_Sky_Sphere_C__pf1379775596::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Sky_Sphere_C__pf1379775596_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_Sky_Sphere_C__pf1379775596::StaticRegisterNativesABP_Sky_Sphere_C__pf1379775596()
	{
		UClass* Class = ABP_Sky_Sphere_C__pf1379775596::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("UpdateSunDirection"), (Native)&ABP_Sky_Sphere_C__pf1379775596::execbpf__UpdateSunDirection__pf },
			{ TEXT("UserConstructionScript"), (Native)&ABP_Sky_Sphere_C__pf1379775596::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_ABP_Sky_Sphere_C__pf1379775596_bpf__UpdateSunDirection__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Sky_Sphere_C__pf1379775596();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UpdateSunDirection") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateSunDirection"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("UpdateSunDirection"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Sky_Sphere_C__pf1379775596_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Sky_Sphere_C__pf1379775596();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UserConstructionScript"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020C01, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintInternalUseOnly"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Construction Script"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("UserConstructionScript"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_Sky_Sphere_C__pf1379775596_NoRegister()
	{
		return ABP_Sky_Sphere_C__pf1379775596::StaticClass();
	}
	UClass* Z_Construct_UClass_ABP_Sky_Sphere_C__pf1379775596()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Engine/EngineSky/BP_Sky_Sphere"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_Sky_Sphere_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_AActor();
			OuterClass = ABP_Sky_Sphere_C__pf1379775596::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Sky_Sphere_C__pf1379775596_bpf__UpdateSunDirection__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Sky_Sphere_C__pf1379775596_bpf__UserConstructionScript__pf());

				UProperty* NewProp_bpv__Cloudxcolorxcurve__pfTT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Cloud color curve"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Cloudxcolorxcurve__pfTT, ABP_Sky_Sphere_C__pf1379775596), 0x0010000000010005, Z_Construct_UClass_UCurveLinearColor_NoRegister());
				UProperty* NewProp_bpv__Zenithxcolorxcurve__pfTT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Zenith color curve"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Zenithxcolorxcurve__pfTT, ABP_Sky_Sphere_C__pf1379775596), 0x0010000000010005, Z_Construct_UClass_UCurveLinearColor_NoRegister());
				UProperty* NewProp_bpv__Horizonxcolorxcurve__pfTT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Horizon color curve"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Horizonxcolorxcurve__pfTT, ABP_Sky_Sphere_C__pf1379775596), 0x0010000000010005, Z_Construct_UClass_UCurveLinearColor_NoRegister());
				UProperty* NewProp_bpv__Starsxbrightness__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Stars brightness"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Starsxbrightness__pfT, ABP_Sky_Sphere_C__pf1379775596), 0x0010000000000005);
				UProperty* NewProp_bpv__Cloudxopacity__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Cloud opacity"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Cloudxopacity__pfT, ABP_Sky_Sphere_C__pf1379775596), 0x0010000000000005);
				UProperty* NewProp_bpv__Cloudxspeed__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Cloud speed"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Cloudxspeed__pfT, ABP_Sky_Sphere_C__pf1379775596), 0x0010000000000005);
				UProperty* NewProp_bpv__OverallxColor__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Overall Color"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__OverallxColor__pfT, ABP_Sky_Sphere_C__pf1379775596), 0x0010000000000005, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_bpv__Cloudxcolor__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Cloud color"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__Cloudxcolor__pfT, ABP_Sky_Sphere_C__pf1379775596), 0x0010000000000005, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_bpv__Horizonxcolor__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Horizon color"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__Horizonxcolor__pfT, ABP_Sky_Sphere_C__pf1379775596), 0x0010000000000005, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_bpv__ZenithxColor__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Zenith Color"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__ZenithxColor__pfT, ABP_Sky_Sphere_C__pf1379775596), 0x0010000000000005, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_bpv__HorizonxFalloff__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Horizon Falloff"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__HorizonxFalloff__pfT, ABP_Sky_Sphere_C__pf1379775596), 0x0010000000000005);
				UProperty* NewProp_bpv__Sunxbrightness__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sun brightness"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Sunxbrightness__pfT, ABP_Sky_Sphere_C__pf1379775596), 0x0010000000000005);
				UProperty* NewProp_bpv__Sunxheight__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sun height"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Sunxheight__pfT, ABP_Sky_Sphere_C__pf1379775596), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bpv__Colorsxdeterminedxbyxsunxposition__pfTTTT, ABP_Sky_Sphere_C__pf1379775596);
				UProperty* NewProp_bpv__Colorsxdeterminedxbyxsunxposition__pfTTTT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Colors determined by sun position"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bpv__Colorsxdeterminedxbyxsunxposition__pfTTTT, ABP_Sky_Sphere_C__pf1379775596), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bpv__Colorsxdeterminedxbyxsunxposition__pfTTTT, ABP_Sky_Sphere_C__pf1379775596), sizeof(bool), true);
				UProperty* NewProp_bpv__Directionalxlightxactor__pfTT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Directional light actor"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Directionalxlightxactor__pfTT, ABP_Sky_Sphere_C__pf1379775596), 0x0010000000000805, Z_Construct_UClass_ADirectionalLight_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bpv__Refreshxmaterial__pfT, ABP_Sky_Sphere_C__pf1379775596);
				UProperty* NewProp_bpv__Refreshxmaterial__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Refresh material"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bpv__Refreshxmaterial__pfT, ABP_Sky_Sphere_C__pf1379775596), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bpv__Refreshxmaterial__pfT, ABP_Sky_Sphere_C__pf1379775596), sizeof(bool), true);
				UProperty* NewProp_bpv__Skyxmaterial__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sky material"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Skyxmaterial__pfT, ABP_Sky_Sphere_C__pf1379775596), 0x0010000000010005, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister());
				UProperty* NewProp_bpv__Base__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Base"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Base__pf, ABP_Sky_Sphere_C__pf1379775596), 0x001000040008000c, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_bpv__SkyxSpherexmesh__pfTT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sky Sphere mesh"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__SkyxSpherexmesh__pfTT, ABP_Sky_Sphere_C__pf1379775596), 0x001000040008000c, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Sky_Sphere_C__pf1379775596_bpf__UpdateSunDirection__pf(), TEXT("UpdateSunDirection")); // 884941846
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Sky_Sphere_C__pf1379775596_bpf__UserConstructionScript__pf(), TEXT("UserConstructionScript")); // 625843833
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ABP_Sky_Sphere_C__pf1379775596> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("BP_Sky_Sphere_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Engine/EngineSky/BP_Sky_Sphere.BP_Sky_Sphere_C"));
				MetaData->SetValue(NewProp_bpv__Cloudxcolorxcurve__pfTT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Cloudxcolorxcurve__pfTT, TEXT("DisplayName"), TEXT("Cloud Color Curve"));
				MetaData->SetValue(NewProp_bpv__Cloudxcolorxcurve__pfTT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(NewProp_bpv__Cloudxcolorxcurve__pfTT, TEXT("OverrideNativeName"), TEXT("Cloud color curve"));
				MetaData->SetValue(NewProp_bpv__Zenithxcolorxcurve__pfTT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Zenithxcolorxcurve__pfTT, TEXT("DisplayName"), TEXT("Zenith Color Curve"));
				MetaData->SetValue(NewProp_bpv__Zenithxcolorxcurve__pfTT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(NewProp_bpv__Zenithxcolorxcurve__pfTT, TEXT("OverrideNativeName"), TEXT("Zenith color curve"));
				MetaData->SetValue(NewProp_bpv__Horizonxcolorxcurve__pfTT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Horizonxcolorxcurve__pfTT, TEXT("DisplayName"), TEXT("Horizon Color Curve"));
				MetaData->SetValue(NewProp_bpv__Horizonxcolorxcurve__pfTT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(NewProp_bpv__Horizonxcolorxcurve__pfTT, TEXT("OverrideNativeName"), TEXT("Horizon color curve"));
				MetaData->SetValue(NewProp_bpv__Starsxbrightness__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Starsxbrightness__pfT, TEXT("DisplayName"), TEXT("Stars Brightness"));
				MetaData->SetValue(NewProp_bpv__Starsxbrightness__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(NewProp_bpv__Starsxbrightness__pfT, TEXT("OverrideNativeName"), TEXT("Stars brightness"));
				MetaData->SetValue(NewProp_bpv__Starsxbrightness__pfT, TEXT("Tooltip"), TEXT("Multiplier for the brightness of the stars when the sun is below the horizon"));
				MetaData->SetValue(NewProp_bpv__Cloudxopacity__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Cloudxopacity__pfT, TEXT("DisplayName"), TEXT("Cloud Opacity"));
				MetaData->SetValue(NewProp_bpv__Cloudxopacity__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(NewProp_bpv__Cloudxopacity__pfT, TEXT("OverrideNativeName"), TEXT("Cloud opacity"));
				MetaData->SetValue(NewProp_bpv__Cloudxopacity__pfT, TEXT("Tooltip"), TEXT("Opacity of the panning clouds"));
				MetaData->SetValue(NewProp_bpv__Cloudxspeed__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Cloudxspeed__pfT, TEXT("DisplayName"), TEXT("Cloud Speed"));
				MetaData->SetValue(NewProp_bpv__Cloudxspeed__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(NewProp_bpv__Cloudxspeed__pfT, TEXT("OverrideNativeName"), TEXT("Cloud speed"));
				MetaData->SetValue(NewProp_bpv__Cloudxspeed__pfT, TEXT("Tooltip"), TEXT("Panning speed for the clouds"));
				MetaData->SetValue(NewProp_bpv__OverallxColor__pfT, TEXT("Category"), TEXT("Override settings"));
				MetaData->SetValue(NewProp_bpv__OverallxColor__pfT, TEXT("DisplayName"), TEXT("Overall Color"));
				MetaData->SetValue(NewProp_bpv__OverallxColor__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(NewProp_bpv__OverallxColor__pfT, TEXT("OverrideNativeName"), TEXT("Overall Color"));
				MetaData->SetValue(NewProp_bpv__Cloudxcolor__pfT, TEXT("Category"), TEXT("Override settings"));
				MetaData->SetValue(NewProp_bpv__Cloudxcolor__pfT, TEXT("DisplayName"), TEXT("Cloud Color"));
				MetaData->SetValue(NewProp_bpv__Cloudxcolor__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(NewProp_bpv__Cloudxcolor__pfT, TEXT("OverrideNativeName"), TEXT("Cloud color"));
				MetaData->SetValue(NewProp_bpv__Horizonxcolor__pfT, TEXT("Category"), TEXT("Override settings"));
				MetaData->SetValue(NewProp_bpv__Horizonxcolor__pfT, TEXT("DisplayName"), TEXT("Horizon Color"));
				MetaData->SetValue(NewProp_bpv__Horizonxcolor__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(NewProp_bpv__Horizonxcolor__pfT, TEXT("OverrideNativeName"), TEXT("Horizon color"));
				MetaData->SetValue(NewProp_bpv__ZenithxColor__pfT, TEXT("Category"), TEXT("Override settings"));
				MetaData->SetValue(NewProp_bpv__ZenithxColor__pfT, TEXT("DisplayName"), TEXT("Zenith Color"));
				MetaData->SetValue(NewProp_bpv__ZenithxColor__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(NewProp_bpv__ZenithxColor__pfT, TEXT("OverrideNativeName"), TEXT("Zenith Color"));
				MetaData->SetValue(NewProp_bpv__HorizonxFalloff__pfT, TEXT("Category"), TEXT("Override settings"));
				MetaData->SetValue(NewProp_bpv__HorizonxFalloff__pfT, TEXT("DisplayName"), TEXT("Horizon Falloff"));
				MetaData->SetValue(NewProp_bpv__HorizonxFalloff__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(NewProp_bpv__HorizonxFalloff__pfT, TEXT("OverrideNativeName"), TEXT("Horizon Falloff"));
				MetaData->SetValue(NewProp_bpv__HorizonxFalloff__pfT, TEXT("Tooltip"), TEXT("Affects the size of the gradient from zenith color to horizon color"));
				MetaData->SetValue(NewProp_bpv__Sunxbrightness__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Sunxbrightness__pfT, TEXT("DisplayName"), TEXT("Sun Brightness"));
				MetaData->SetValue(NewProp_bpv__Sunxbrightness__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(NewProp_bpv__Sunxbrightness__pfT, TEXT("OverrideNativeName"), TEXT("Sun brightness"));
				MetaData->SetValue(NewProp_bpv__Sunxbrightness__pfT, TEXT("Tooltip"), TEXT("Brightness multiplier for the sun disk"));
				MetaData->SetValue(NewProp_bpv__Sunxheight__pfT, TEXT("Category"), TEXT("Override settings"));
				MetaData->SetValue(NewProp_bpv__Sunxheight__pfT, TEXT("DisplayName"), TEXT("Sun Height"));
				MetaData->SetValue(NewProp_bpv__Sunxheight__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(NewProp_bpv__Sunxheight__pfT, TEXT("OverrideNativeName"), TEXT("Sun height"));
				MetaData->SetValue(NewProp_bpv__Sunxheight__pfT, TEXT("Tooltip"), TEXT("If no directional light is assigned, this value determines the height of the sun"));
				MetaData->SetValue(NewProp_bpv__Sunxheight__pfT, TEXT("UIMax"), TEXT("1"));
				MetaData->SetValue(NewProp_bpv__Sunxheight__pfT, TEXT("UIMin"), TEXT("-1"));
				MetaData->SetValue(NewProp_bpv__Colorsxdeterminedxbyxsunxposition__pfTTTT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Colorsxdeterminedxbyxsunxposition__pfTTTT, TEXT("DisplayName"), TEXT("Colors Determined By Sun Position"));
				MetaData->SetValue(NewProp_bpv__Colorsxdeterminedxbyxsunxposition__pfTTTT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(NewProp_bpv__Colorsxdeterminedxbyxsunxposition__pfTTTT, TEXT("OverrideNativeName"), TEXT("Colors determined by sun position"));
				MetaData->SetValue(NewProp_bpv__Colorsxdeterminedxbyxsunxposition__pfTTTT, TEXT("Tooltip"), TEXT("If enabled, sky colors will change according to the sun's position"));
				MetaData->SetValue(NewProp_bpv__Directionalxlightxactor__pfTT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Directionalxlightxactor__pfTT, TEXT("DisplayName"), TEXT("Directional Light Actor"));
				MetaData->SetValue(NewProp_bpv__Directionalxlightxactor__pfTT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(NewProp_bpv__Directionalxlightxactor__pfTT, TEXT("OverrideNativeName"), TEXT("Directional light actor"));
				MetaData->SetValue(NewProp_bpv__Directionalxlightxactor__pfTT, TEXT("Tooltip"), TEXT("Assign your level's directional light actor to this variable to  match the sky's sun position and color"));
				MetaData->SetValue(NewProp_bpv__Refreshxmaterial__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Refreshxmaterial__pfT, TEXT("DisplayName"), TEXT("Refresh Material"));
				MetaData->SetValue(NewProp_bpv__Refreshxmaterial__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(NewProp_bpv__Refreshxmaterial__pfT, TEXT("OverrideNativeName"), TEXT("Refresh material"));
				MetaData->SetValue(NewProp_bpv__Refreshxmaterial__pfT, TEXT("Tooltip"), TEXT("Use this to update the sky material after moving  a directional light"));
				MetaData->SetValue(NewProp_bpv__Skyxmaterial__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Skyxmaterial__pfT, TEXT("DisplayName"), TEXT("Sky Material"));
				MetaData->SetValue(NewProp_bpv__Skyxmaterial__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(NewProp_bpv__Skyxmaterial__pfT, TEXT("OverrideNativeName"), TEXT("Sky material"));
				MetaData->SetValue(NewProp_bpv__Base__pf, TEXT("Category"), TEXT("BP_Skydome"));
				MetaData->SetValue(NewProp_bpv__Base__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Base__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(NewProp_bpv__Base__pf, TEXT("OverrideNativeName"), TEXT("Base"));
				MetaData->SetValue(NewProp_bpv__SkyxSpherexmesh__pfTT, TEXT("Category"), TEXT("BP_Skydome"));
				MetaData->SetValue(NewProp_bpv__SkyxSpherexmesh__pfTT, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__SkyxSpherexmesh__pfTT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Sky_Sphere__pf1379775596.h"));
				MetaData->SetValue(NewProp_bpv__SkyxSpherexmesh__pfTT, TEXT("OverrideNativeName"), TEXT("Sky Sphere mesh"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_Sky_Sphere_C__pf1379775596, TEXT("BP_Sky_Sphere_C"), 1798156922);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_Sky_Sphere_C__pf1379775596(Z_Construct_UClass_ABP_Sky_Sphere_C__pf1379775596, &ABP_Sky_Sphere_C__pf1379775596::StaticClass, TEXT("/Engine/EngineSky/BP_Sky_Sphere"), TEXT("BP_Sky_Sphere_C"), true, TEXT("/Engine/EngineSky/BP_Sky_Sphere"), TEXT("/Engine/EngineSky/BP_Sky_Sphere.BP_Sky_Sphere_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Sky_Sphere_C__pf1379775596);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
