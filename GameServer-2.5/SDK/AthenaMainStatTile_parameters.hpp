#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaMainStatTile

#include "Basic.hpp"


namespace SDK::Params
{

// Function AthenaMainStatTile.AthenaMainStatTile_C.ExecuteUbergraph_AthenaMainStatTile
// 0x0028 (0x0028 - 0x0000)
struct AthenaMainStatTile_C_ExecuteUbergraph_AthenaMainStatTile final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_328D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0008(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaMainStatTile.AthenaMainStatTile_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct AthenaMainStatTile_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaMainStatTile.AthenaMainStatTile_C.SetStatValue
// 0x0030 (0x0030 - 0x0000)
struct AthenaMainStatTile_C_SetStatValue final 
{
public:
	class FText                                   StatValueAsText;                                   // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0018(0x0018)()
};

// Function AthenaMainStatTile.AthenaMainStatTile_C.SetTagAndDisplayName
// 0x0040 (0x0040 - 0x0000)
struct AthenaMainStatTile_C_SetTagAndDisplayName final 
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   DisplayName;                                       // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0028(0x0018)()
};

}

