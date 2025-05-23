#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_TopPanel

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Results_TopPanel.Results_TopPanel_C.ExecuteUbergraph_Results_TopPanel
// 0x0004 (0x0004 - 0x0000)
struct Results_TopPanel_C_ExecuteUbergraph_Results_TopPanel final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Results_TopPanel.Results_TopPanel_C.Initialize
// 0x0468 (0x0468 - 0x0000)
struct Results_TopPanel_C_Initialize final 
{
public:
	EFortCompletionResult                         CompletionResult;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34A4[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable1;                               // 0x0020(0x0018)()
	class FText                                   Temp_text_Variable12;                              // 0x0038(0x0018)()
	class FText                                   Temp_text_Variable123;                             // 0x0050(0x0018)()
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortBasicMissionInfo                  CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo; // 0x0070(0x0328)()
	bool                                          CallFunc_GetCurrentBasicMissionInfo_ReturnValue;   // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34A5[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x03A0(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x03E0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0420(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0430(0x0018)()
	EFortCompletionResult                         Temp_byte_Variable;                                // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34A6[0x7];                                     // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0450(0x0018)()
};

}

