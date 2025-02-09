#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_LFG_SuggestedPartyItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.ExecuteUbergraph_Athena_LFG_SuggestedPartyItem
// 0x01A0 (0x01A0 - 0x0000)
struct Athena_LFG_SuggestedPartyItem_C_ExecuteUbergraph_Athena_LFG_SuggestedPartyItem final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable1;                               // 0x0020(0x0018)()
	class FText                                   Temp_text_Variable12;                              // 0x0038(0x0018)()
	class FText                                   Temp_text_Variable123;                             // 0x0050(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A92[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable1234;                            // 0x0070(0x0018)()
	class FText                                   Temp_text_Variable12345;                           // 0x0088(0x0018)()
	bool                                          Temp_bool_Variable12;                              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable12;                              // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable123;                             // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A93[0x1];                                     // 0x00A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBool_ReturnValue;                   // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A94[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x00B0(0x0018)()
	ESlateVisibility                              K2Node_Select1_Default;                            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A95[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00D0(0x0040)(HasGetValueTypeHash)
	class FText                                   K2Node_Select12_Default;                           // 0x0110(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x0128(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0168(0x0010)(ZeroConstructor, ReferenceParm)
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x0178(0x0008)(NoDestructor)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0180(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsSelected;                     // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select123_Default;                          // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.PartyFocused__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Athena_LFG_SuggestedPartyItem_C_PartyFocused__DelegateSignature final 
{
public:
	class UAthena_LFG_SuggestedPartyItem_C*       FocusedPartyItem;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.UpdatePartyItemSelection
// 0x0001 (0x0001 - 0x0000)
struct Athena_LFG_SuggestedPartyItem_C_UpdatePartyItemSelection final 
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Athena_LFG_SuggestedPartyItem_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.OnFocusLost
// 0x0008 (0x0008 - 0x0000)
struct Athena_LFG_SuggestedPartyItem_C_OnFocusLost final 
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.OnFocusReceived
// 0x0268 (0x0268 - 0x0000)
struct Athena_LFG_SuggestedPartyItem_C_OnFocusReceived final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
	struct FEventReply                            CallFunc_SetUserFocus_ReturnValue;                 // 0x01B0(0x00B8)()
};

}

