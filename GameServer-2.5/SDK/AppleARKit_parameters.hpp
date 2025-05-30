#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AppleARKit

#include "Basic.hpp"

#include "AppleARKit_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AppleARKit.AppleARKitAnchor.GetTransform
// 0x0030 (0x0030 - 0x0000)
struct AppleARKitAnchor_GetTransform final 
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0030)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AppleARKit.AppleARKitBlueprintLibrary.GetCurrentFrame
// 0x00D0 (0x00D0 - 0x0000)
struct AppleARKitBlueprintLibrary_GetCurrentFrame final 
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FD5[0x8];                                      // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAppleARKitFrame                       OutCurrentFrame;                                   // 0x0010(0x00B0)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FD6[0xF];                                      // 0x00C1(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function AppleARKit.AppleARKitBlueprintLibrary.HitTestAtScreenPosition_TrackingSpace
// 0x0030 (0x0030 - 0x0000)
struct AppleARKitBlueprintLibrary_HitTestAtScreenPosition_TrackingSpace final 
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ScreenPosition;                                    // 0x0008(0x0008)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAppleARKitHitTestResultType                  Types;                                             // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FD7[0x7];                                      // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAppleARKitHitTestResult>       OutResults;                                        // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FD8[0x7];                                      // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function AppleARKit.AppleARKitPlaneAnchor.GetCenter
// 0x000C (0x000C - 0x0000)
struct AppleARKitPlaneAnchor_GetCenter final 
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AppleARKit.AppleARKitPlaneAnchor.GetExtent
// 0x000C (0x000C - 0x0000)
struct AppleARKitPlaneAnchor_GetExtent final 
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AppleARKit.AppleARKitPlaneAnchor.GetTransformToCenter
// 0x0030 (0x0030 - 0x0000)
struct AppleARKitPlaneAnchor_GetTransformToCenter final 
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0030)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

}

