#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClothingSystemRuntimeInterface

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
// 0x0014 (0x0014 - 0x0000)
struct FClothCollisionPrim_Sphere final 
{
public:
	int32                                         BoneIndex;                                         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LocalPosition;                                     // 0x0008(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
// 0x0008 (0x0008 - 0x0000)
struct FClothCollisionPrim_SphereConnection final 
{
public:
	int32                                         SphereIndices[0x2];                                // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
// 0x0018 (0x0018 - 0x0000)
struct FClothCollisionPrim_Convex final 
{
public:
	TArray<struct FPlane>                         Planes;                                            // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         BoneIndex;                                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1F4E[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
// 0x0030 (0x0030 - 0x0000)
struct FClothCollisionData final 
{
public:
	TArray<struct FClothCollisionPrim_Sphere>     Spheres;                                           // 0x0000(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections;                                 // 0x0010(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FClothCollisionPrim_Convex>     Convexes;                                          // 0x0020(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

}

