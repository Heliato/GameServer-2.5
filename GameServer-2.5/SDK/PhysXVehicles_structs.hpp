#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhysXVehicles

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum PhysXVehicles.EWheelSweepType
// NumValues: 0x0004
enum class EWheelSweepType : uint8
{
	SimpleAndComplex                         = 0,
	Simple                                   = 1,
	Complex                                  = 2,
	EWheelSweepType_MAX                      = 3,
};

// Enum PhysXVehicles.EVehicleDifferential4W
// NumValues: 0x0007
enum class EVehicleDifferential4W : uint8
{
	LimitedSlip_4W                           = 0,
	LimitedSlip_FrontDrive                   = 1,
	LimitedSlip_RearDrive                    = 2,
	Open_4W                                  = 3,
	Open_FrontDrive                          = 4,
	Open_RearDrive                           = 5,
	EVehicleDifferential4W_MAX               = 6,
};

// ScriptStruct PhysXVehicles.AnimNode_WheelHandler
// 0x0018 (0x0088 - 0x0070)
struct FAnimNode_WheelHandler final  : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                         Pad_F40[0x18];                                     // 0x0070(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct PhysXVehicles.ReplicatedVehicleState
// 0x0014 (0x0014 - 0x0000)
struct FReplicatedVehicleState final 
{
public:
	float                                         SteeringInput;                                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ThrottleInput;                                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BrakeInput;                                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HandbrakeInput;                                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CurrentGear;                                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct PhysXVehicles.TireConfigMaterialFriction
// 0x0010 (0x0010 - 0x0000)
struct FTireConfigMaterialFriction final 
{
public:
	class UPhysicalMaterial*                      PhysicalMaterial;                                  // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrictionScale;                                     // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F41[0x4];                                      // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct PhysXVehicles.VehicleAnimInstanceProxy
// 0x0010 (0x0590 - 0x0580)
struct FVehicleAnimInstanceProxy final  : public FAnimInstanceProxy
{
public:
	uint8                                         Pad_F42[0x10];                                     // 0x0580(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct PhysXVehicles.VehicleInputRate
// 0x0008 (0x0008 - 0x0000)
struct FVehicleInputRate final 
{
public:
	float                                         RiseRate;                                          // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FallRate;                                          // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct PhysXVehicles.WheelSetup
// 0x0020 (0x0020 - 0x0000)
struct FWheelSetup final 
{
public:
	TSubclassOf<class UVehicleWheel>              WheelClass;                                        // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   BoneName;                                          // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AdditionalOffset;                                  // 0x0010(0x000C)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisableSteering;                                  // 0x001C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F43[0x3];                                      // 0x001D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct PhysXVehicles.VehicleGearData
// 0x000C (0x000C - 0x0000)
struct FVehicleGearData final 
{
public:
	float                                         Ratio;                                             // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DownRatio;                                         // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UpRatio;                                           // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct PhysXVehicles.VehicleTransmissionData
// 0x0030 (0x0030 - 0x0000)
struct FVehicleTransmissionData final 
{
public:
	bool                                          bUseGearAutoBox;                                   // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F44[0x3];                                      // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         GearSwitchTime;                                    // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GearAutoBoxLatency;                                // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FinalRatio;                                        // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVehicleGearData>               ForwardGears;                                      // 0x0010(0x0010)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                         ReverseGearRatio;                                  // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NeutralGearUpRatio;                                // 0x0024(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClutchStrength;                                    // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F45[0x4];                                      // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct PhysXVehicles.VehicleEngineData
// 0x0090 (0x0090 - 0x0000)
struct FVehicleEngineData final 
{
public:
	struct FRuntimeFloatCurve                     TorqueCurve;                                       // 0x0000(0x0078)(Edit, NativeAccessSpecifierPublic)
	float                                         MaxRPM;                                            // 0x0078(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MOI;                                               // 0x007C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DampingRateFullThrottle;                           // 0x0080(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DampingRateZeroThrottleClutchEngaged;              // 0x0084(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DampingRateZeroThrottleClutchDisengaged;           // 0x0088(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F46[0x4];                                      // 0x008C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct PhysXVehicles.VehicleDifferential4WData
// 0x001C (0x001C - 0x0000)
struct FVehicleDifferential4WData final 
{
public:
	EVehicleDifferential4W                        DifferentialType;                                  // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F47[0x3];                                      // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FrontRearSplit;                                    // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrontLeftRightSplit;                               // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RearLeftRightSplit;                                // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CentreBias;                                        // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrontBias;                                         // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RearBias;                                          // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

