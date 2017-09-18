#include "NativizedAssets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
namespace
{
	static const FBlueprintDependencyObjectRef NativizedCodeDependenties[] =
	{
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("SM_SkySphere"), TEXT("SM_SkySphere"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("M_Sky_Panning_Clouds2"), TEXT("M_Sky_Panning_Clouds2"), TEXT("/Script/Engine"), TEXT("Material")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("C_Sky_Horizon_Color"), TEXT("C_Sky_Horizon_Color"), TEXT("/Script/Engine"), TEXT("CurveLinearColor")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("C_Sky_Zenith_Color"), TEXT("C_Sky_Zenith_Color"), TEXT("/Script/Engine"), TEXT("CurveLinearColor")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("C_Sky_Cloud_Color"), TEXT("C_Sky_Cloud_Color"), TEXT("/Script/Engine"), TEXT("CurveLinearColor")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SceneComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("StaticMeshComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Actor"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("CurveLinearColor"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("DirectionalLight"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("MaterialInstanceDynamic"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetSystemLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetMathLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Light"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("LightComponentBase"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	};
}
const FBlueprintDependencyObjectRef& F__NativeDependencies::Get(int16 Index)
{
static const FBlueprintDependencyObjectRef& NullObjectRef = FBlueprintDependencyObjectRef();
if (Index == -1) { return NullObjectRef; }
	check((Index >= 0) && (Index < 15));
	return ::NativizedCodeDependenties[Index];
};
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
