#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Qos

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum Qos.EQosResponseType
// NumValues: 0x0004
enum class EQosResponseType : uint8
{
	NoResponse                               = 0,
	Success                                  = 1,
	Failure                                  = 2,
	EQosResponseType_MAX                     = 3,
};

// Enum Qos.EQosCompletionResult
// NumValues: 0x0005
enum class EQosCompletionResult : uint8
{
	Invalid                                  = 0,
	Success                                  = 1,
	Failure                                  = 2,
	Canceled                                 = 3,
	EQosCompletionResult_MAX                 = 4,
};

// Enum Qos.EQosRegionResult
// NumValues: 0x0004
enum class EQosRegionResult : uint8
{
	Invalid                                  = 0,
	Success                                  = 1,
	Incomplete                               = 2,
	EQosRegionResult_MAX                     = 3,
};

// ScriptStruct Qos.QosSearchPass
// 0x0008 (0x0008 - 0x0000)
struct FQosSearchPass final 
{
public:
	int32                                         RegionIdx;                                         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CurrentSessionIdx;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Qos.QosPingServerInfo
// 0x0018 (0x0018 - 0x0000)
struct FQosPingServerInfo final 
{
public:
	class FString                                 Address;                                           // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Port;                                              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E71[0x4];                                      // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct Qos.QosDatacenterInfo
// 0x0040 (0x0040 - 0x0000)
struct FQosDatacenterInfo final 
{
public:
	class FText                                   DisplayName;                                       // 0x0000(0x0018)(NativeAccessSpecifierPublic)
	class FString                                 RegionId;                                          // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnabled;                                          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bVisible;                                          // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bBeta;                                             // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E72[0x5];                                      // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FQosPingServerInfo>             Servers;                                           // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Qos.QosRegionInfo
// 0x0078 (0x0078 - 0x0000)
struct FQosRegionInfo final 
{
public:
	struct FQosDatacenterInfo                     Region;                                            // 0x0000(0x0040)(Transient, NativeAccessSpecifierPublic)
	EQosRegionResult                              Result;                                            // 0x0040(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E73[0x3];                                      // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AvgPingMs;                                         // 0x0044(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E74[0x10];                                     // 0x0048(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 PingResults;                                       // 0x0058(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                         Pad_E75[0x8];                                      // 0x0068(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              LastCheckTimestamp;                                // 0x0070(0x0008)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

