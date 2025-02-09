#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TT_SupplyDrop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function TT_SupplyDrop.TT_SupplyDrop_C.GetTextForTokenFromAbilityInstanceInternal
// 0x0430 (0x0430 - 0x0000)
struct TT_SupplyDrop_C_GetTextForTokenFromAbilityInstanceInternal final 
{
public:
	class UGameplayAbility*                       AbilityInstance;                                   // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Tag;                                               // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                    Context;                                           // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Token;                                             // 0x0018(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class FText                                   OutText;                                           // 0x0020(0x0018)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_440E[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGA_SupplyDrop_C*                       SupplyDrop;                                        // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_440F[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGA_SupplyDrop_C*                       K2Node_DynamicCast_AsGA_Supply_Drop;               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4410[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0060(0x0018)()
	bool                                          Temp_bool_Variable1;                               // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4411[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable1;                               // 0x0080(0x0018)()
	bool                                          Temp_bool_Variable12;                              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4412[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable12;                              // 0x00A0(0x0018)()
	class FText                                   Temp_text_Variable123;                             // 0x00B8(0x0018)()
	class FText                                   Temp_text_Variable1234;                            // 0x00D0(0x0018)()
	bool                                          Temp_bool_Variable123;                             // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4413[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable12345;                           // 0x00F0(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue1;              // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue12;             // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable1234;                            // 0x010B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue1;                   // 0x010D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4414[0x2];                                     // 0x010E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable123456;                          // 0x0110(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0128(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue123;            // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue1234;           // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4415[0x6];                                     // 0x0142(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0148(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0160(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue1;              // 0x01A0(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01B8(0x0010)(ZeroConstructor, ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x01C8(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0208(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array1;                           // 0x0220(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   K2Node_Select1_Default;                            // 0x0230(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue1;                      // 0x0248(0x0018)()
	class FText                                   K2Node_Select12_Default;                           // 0x0260(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue12345;          // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue123456;         // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4416[0x6];                                     // 0x027A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue12;             // 0x0280(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData12;            // 0x0298(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue123;            // 0x02D8(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array12;                          // 0x02F0(0x0010)(ZeroConstructor, ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData123;           // 0x0300(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue12;                     // 0x0340(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array123;                         // 0x0358(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   K2Node_Select123_Default;                          // 0x0368(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue123;                    // 0x0380(0x0018)()
	class FText                                   K2Node_Select1234_Default;                         // 0x0398(0x0018)()
	class FText                                   Temp_text_Variable1234567;                         // 0x03B0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue1234;           // 0x03C8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue12345;          // 0x03E0(0x0018)()
	bool                                          Temp_bool_Variable12345;                           // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4417[0x7];                                     // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select12345_Default;                        // 0x0400(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue123456;         // 0x0418(0x0018)()
};

// Function TT_SupplyDrop.TT_SupplyDrop_C.InitializeAbilityInstanceInternal
// 0x0020 (0x0020 - 0x0000)
struct TT_SupplyDrop_C_InitializeAbilityInstanceInternal final 
{
public:
	class UGameplayAbility*                       AbilityInstance;                                   // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                    Context;                                           // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGA_SupplyDrop_C*                       K2Node_DynamicCast_AsGA_Supply_Drop;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

