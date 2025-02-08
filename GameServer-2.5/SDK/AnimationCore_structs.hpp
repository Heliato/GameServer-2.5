#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimationCore

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum AnimationCore.ETransformConstraintType
// NumValues: 0x0005
enum class ETransformConstraintType : uint8
{
	Translation                              = 0,
	Rotation                                 = 1,
	Scale                                    = 2,
	Parent                                   = 3,
	ETransformConstraintType_MAX             = 4,
};

// Enum AnimationCore.EConstraintType
// NumValues: 0x0003
enum class EConstraintType : uint8
{
	Transform                                = 0,
	Aim                                      = 1,
	MAX                                      = 2,
};

// ScriptStruct AnimationCore.FilterOptionPerAxis
// 0x0003 (0x0003 - 0x0000)
struct FFilterOptionPerAxis final 
{
public:
	bool                                          bX;                                                // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bY;                                                // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bZ;                                                // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationCore.ConstraintDescriptionEx
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FConstraintDescriptionEx
{
public:
	uint8                                         Pad_242F[0x8];                                     // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterOptionPerAxis                   AxesFilterOption;                                  // 0x0008(0x0003)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_2430[0x5];                                     // 0x000B(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationCore.TransformConstraintDescription
// 0x0008 (0x0018 - 0x0010)
struct FTransformConstraintDescription final  : public FConstraintDescriptionEx
{
public:
	ETransformConstraintType                      TransformType;                                     // 0x0010(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2431[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationCore.Axis
// 0x0010 (0x0010 - 0x0000)
struct FAxis final 
{
public:
	struct FVector                                Axis;                                              // 0x0000(0x000C)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInLocalSpace;                                     // 0x000C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2432[0x3];                                     // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationCore.ConstraintDescriptor
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FConstraintDescriptor final 
{
public:
	EConstraintType                               Type;                                              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2433[0xF];                                     // 0x0001(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationCore.ConstraintData
// 0x0080 (0x0080 - 0x0000)
struct FConstraintData final 
{
public:
	struct FConstraintDescriptor                  Constraint;                                        // 0x0000(0x0010)(NativeAccessSpecifierPublic)
	class FName                                   TargetNode;                                        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Weight;                                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMaintainOffset;                                   // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2434[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Offset;                                            // 0x0020(0x0030)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             CurrentTransform;                                  // 0x0050(0x0030)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationCore.NodeChain
// 0x0010 (0x0010 - 0x0000)
struct FNodeChain final 
{
public:
	TArray<class FName>                           Nodes;                                             // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationCore.ConstraintDescription
// 0x000D (0x000D - 0x0000)
struct FConstraintDescription final 
{
public:
	bool                                          bTranslation;                                      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRotation;                                         // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bScale;                                            // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bParent;                                           // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                   TranslationAxes;                                   // 0x0004(0x0003)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                   RotationAxes;                                      // 0x0007(0x0003)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                   ScaleAxes;                                         // 0x000A(0x0003)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationCore.TransformConstraint
// 0x0028 (0x0028 - 0x0000)
struct alignas(0x08) FTransformConstraint final 
{
public:
	struct FConstraintDescription                 Operator;                                          // 0x0000(0x000D)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_2435[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SourceNode;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   TargetNode;                                        // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Weight;                                            // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMaintainOffset;                                   // 0x0024(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2436[0x3];                                     // 0x0025(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationCore.AimConstraintDescription
// 0x0028 (0x0038 - 0x0010)
struct FAimConstraintDescription final  : public FConstraintDescriptionEx
{
public:
	struct FAxis                                  LookAt_Axis;                                       // 0x0010(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                  LookUp_Axis;                                       // 0x0020(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bUseLookUp;                                        // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2437[0x7];                                     // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationCore.ConstraintOffset
// 0x0060 (0x0060 - 0x0000)
struct FConstraintOffset final 
{
public:
	struct FVector                                Translation;                                       // 0x0000(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2438[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  Rotation;                                          // 0x0010(0x0010)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Scale;                                             // 0x0020(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2439[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Parent;                                            // 0x0030(0x0030)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationCore.NodeObject
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FNodeObject final 
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ParentName;                                        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationCore.NodeHierarchyData
// 0x0070 (0x0070 - 0x0000)
struct FNodeHierarchyData final 
{
public:
	TArray<struct FNodeObject>                    Nodes;                                             // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                     Transforms;                                        // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, int32>                      NodeNameToIndexMapping;                            // 0x0020(0x0050)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationCore.NodeHierarchyWithUserData
// 0x0078 (0x0078 - 0x0000)
struct FNodeHierarchyWithUserData final 
{
public:
	uint8                                         Pad_243A[0x8];                                     // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNodeHierarchyData                     Hierarchy;                                         // 0x0008(0x0070)(Protected, NativeAccessSpecifierProtected)
};

}

