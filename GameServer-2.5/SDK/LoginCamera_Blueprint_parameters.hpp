#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoginCamera_Blueprint

#include "Basic.hpp"


namespace SDK::Params
{

// Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.ExecuteUbergraph_LoginCamera_Blueprint
// 0x0028 (0x0028 - 0x0000)
struct LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E61[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortTimeOfDayManager*                  CallFunc_GetTimeOfDayManagerFromContext_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATVPostProcessBP_C*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x0010(0x0010)(ZeroConstructor, ReferenceParm)
	class ATVPostProcessBP_C*                     CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

