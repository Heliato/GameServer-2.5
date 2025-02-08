#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkillTreeColorSetup

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkillTreepAGEColors_structs.hpp"
#include "SkillTreePages_structs.hpp"


namespace SDK::Params
{

// Function SkillTreeColorSetup.SkillTreeColorSetup_C.SkillTreeBGSetup
// 0x0110 (0x0110 - 0x0000)
struct SkillTreeColorSetup_C_SkillTreeBGSetup final 
{
public:
	struct FSkillTreePageColors                   Page_Color;                                        // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	ESkillTreePages                               Pages;                                             // 0x00C0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_427D[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Mid;                                               // 0x00C8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x00D0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillTreePages                               Temp_byte_Variable;                                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillTreePages                               Temp_byte_Variable1;                               // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_427E[0x2];                                     // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x00DC(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select1_Default;                            // 0x00EC(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillTreePages                               Temp_byte_Variable12;                              // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_427F[0x3];                                     // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select12_Default;                           // 0x0100(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

