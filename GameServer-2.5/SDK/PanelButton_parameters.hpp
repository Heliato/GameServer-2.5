#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PanelButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function PanelButton.PanelButton_C.ExecuteUbergraph_PanelButton
// 0x0028 (0x0028 - 0x0000)
struct PanelButton_C_ExecuteUbergraph_PanelButton final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnyChildren_ReturnValue;               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bUsingGamepad;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E88[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_Event_NewTriggeredAction;                   // 0x0010(0x0010)(ConstParm, NoDestructor)
	float                                         K2Node_Event_HeldPercent;                          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PanelButton.PanelButton_C.OnActionProgress
// 0x0004 (0x0004 - 0x0000)
struct PanelButton_C_OnActionProgress final 
{
public:
	float                                         HeldPercent;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PanelButton.PanelButton_C.OnTriggeredInputActionChanged
// 0x0010 (0x0010 - 0x0000)
struct PanelButton_C_OnTriggeredInputActionChanged final 
{
public:
	struct FDataTableRowHandle                    NewTriggeredAction;                                // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function PanelButton.PanelButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct PanelButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature final 
{
public:
	bool                                          bUsingGamepad;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PanelButton.PanelButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PanelButton_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PanelButton.PanelButton_C.UpdateTextAndStyle
// 0x0010 (0x0010 - 0x0000)
struct PanelButton_C_UpdateTextAndStyle final 
{
public:
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PanelButton.PanelButton_C.UpdateStyle
// 0x0020 (0x0020 - 0x0000)
struct PanelButton_C_UpdateStyle final 
{
public:
	bool                                          bUsingGamepad;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E89[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ActionText;                                        // 0x0008(0x0018)(Edit, BlueprintVisible)
};

}

