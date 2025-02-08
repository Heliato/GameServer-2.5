#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Landscape

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
// 0x0004 (0x0004 - 0x0000)
struct LandscapeProxy_ChangeComponentScreenSizeToUseSubSections final 
{
public:
	float                                         InComponentScreenSizeToUseSubSections;             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// 0x0004 (0x0004 - 0x0000)
struct LandscapeProxy_ChangeLODDistanceFactor final 
{
public:
	float                                         InLODDistanceFactor;                               // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
// 0x0004 (0x0004 - 0x0000)
struct LandscapeProxy_ChangeTessellationComponentScreenSize final 
{
public:
	float                                         InTessellationComponentScreenSize;                 // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
// 0x0004 (0x0004 - 0x0000)
struct LandscapeProxy_ChangeTessellationComponentScreenSizeFalloff final 
{
public:
	float                                         InUseTessellationComponentScreenSizeFalloff;       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
// 0x0001 (0x0001 - 0x0000)
struct LandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff final 
{
public:
	bool                                          InComponentScreenSizeToUseSubSections;             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.EditorApplySpline
// 0x0030 (0x0030 - 0x0000)
struct LandscapeProxy_EditorApplySpline final 
{
public:
	class USplineComponent*                       InSplineComponent;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartWidth;                                        // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndWidth;                                          // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartSideFalloff;                                  // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndSideFalloff;                                    // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartRoll;                                         // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndRoll;                                           // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumSubdivisions;                                   // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRaiseHeights;                                     // 0x0024(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLowerHeights;                                     // 0x0025(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DE5[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ULandscapeLayerInfoObject*              PaintLayer;                                        // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
// 0x0008 (0x0008 - 0x0000)
struct LandscapeProxy_EditorSetLandscapeMaterial final 
{
public:
	class UMaterialInterface*                     NewLandscapeMaterial;                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
// 0x0010 (0x0010 - 0x0000)
struct LandscapeProxy_SetLandscapeMaterialScalarParameterValue final 
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Value;                                             // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DE6[0x4];                                     // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
// 0x0010 (0x0010 - 0x0000)
struct LandscapeProxy_SetLandscapeMaterialTextureParameterValue final 
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                               Value;                                             // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
// 0x0018 (0x0018 - 0x0000)
struct LandscapeProxy_SetLandscapeMaterialVectorParameterValue final 
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Value;                                             // 0x0008(0x0010)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
// 0x0010 (0x0010 - 0x0000)
struct LandscapeComponent_GetMaterialInstanceDynamic final 
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DEC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

