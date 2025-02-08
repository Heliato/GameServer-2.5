#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ZoneDetails

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ZoneDetails.ZoneDetails_C.ExecuteUbergraph_ZoneDetails
// 0x0048 (0x0048 - 0x0000)
struct ZoneDetails_C_ExecuteUbergraph_ZoneDetails final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CCF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CD0[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate12;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
};

// Function ZoneDetails.ZoneDetails_C.Update
// 0x03F8 (0x03F8 - 0x0000)
struct ZoneDetails_C_Update final 
{
public:
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortBasicMissionInfo                  CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo; // 0x0008(0x0328)()
	bool                                          CallFunc_GetCurrentBasicMissionInfo_ReturnValue;   // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CD1[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0338(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x0378(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x03B8(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x03C8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x03E0(0x0018)()
};

}

