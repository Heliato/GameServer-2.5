#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialImportButton

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function SocialImportButton.SocialImportButton_C.ExecuteUbergraph_SocialImportButton
// 0x0068 (0x0068 - 0x0000)
struct SocialImportButton_C_ExecuteUbergraph_SocialImportButton final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A34[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_Caption;                              // 0x0008(0x0018)(ConstParm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A35[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayText_ReturnValue;               // 0x0028(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue1;                 // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable1;                               // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A36[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select1_Default;                            // 0x0048(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue12;                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SocialImportButton.SocialImportButton_C.OnCaptionGenerated
// 0x0018 (0x0018 - 0x0000)
struct SocialImportButton_C_OnCaptionGenerated final 
{
public:
	class FText                                   Caption;                                           // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}

