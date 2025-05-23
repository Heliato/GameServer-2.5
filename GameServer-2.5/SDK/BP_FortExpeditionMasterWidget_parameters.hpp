#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortExpeditionMasterWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.ExecuteUbergraph_BP_FortExpeditionMasterWidget
// 0x00F0 (0x00F0 - 0x0000)
struct BP_FortExpeditionMasterWidget_C_ExecuteUbergraph_BP_FortExpeditionMasterWidget final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFrontendStorageEnabled_ReturnValue;     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortDialogResult                             K2Node_CustomEvent_Result12;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42AB[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_ResultName12;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EFortDialogResult Result, class FName ResultName)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   Temp_name_Variable;                                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortDialogResult                             Temp_byte_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42AC[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAsyncAction_ShowConfirmation_NUI*  CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EFortDialogResult Result, class FName ResultName)> K2Node_CreateDelegate_OutputDelegate1;             // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortDialogResult                             K2Node_CustomEvent_Result1;                        // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42AD[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_ResultName1;                    // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable1;                               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortDialogResult                             Temp_byte_Variable1;                               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42AE[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAsyncAction_ShowConfirmation_NUI*  CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EFortDialogResult Result, class FName ResultName)> K2Node_CreateDelegate_OutputDelegate12;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortDialogResult                             K2Node_CustomEvent_Result;                         // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42AF[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_ResultName;                     // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable12;                              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortDialogResult                             Temp_byte_Variable12;                              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42B0[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAsyncAction_ShowConfirmation_NUI*  CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue12; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue12;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42B1[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate123;           // 0x00B0(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00C0(0x0008)(NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1234;          // 0x00C8(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue1;         // 0x00D8(0x0008)(NoDestructor)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWIFEEnabled_ReturnValue;                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.DialogResult_39A80A89449E8489E8E81EAECC14DE95
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) BP_FortExpeditionMasterWidget_C_DialogResult_39A80A89449E8489E8E81EAECC14DE95 final 
{
public:
	EFortDialogResult                             Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42B2[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ResultName;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.DialogResult_67CD2E3A4E1A6780703420B1064D5BD1
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) BP_FortExpeditionMasterWidget_C_DialogResult_67CD2E3A4E1A6780703420B1064D5BD1 final 
{
public:
	EFortDialogResult                             Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42B3[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ResultName;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.DialogResult_99152A754621D0E9A8C9C889926A827D
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) BP_FortExpeditionMasterWidget_C_DialogResult_99152A754621D0E9A8C9C889926A827D final 
{
public:
	EFortDialogResult                             Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42B4[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ResultName;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Handle Back
// 0x0010 (0x0010 - 0x0000)
struct BP_FortExpeditionMasterWidget_C_Handle_Back final 
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42B5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Setup Input Action Handlers
// 0x0050 (0x0050 - 0x0000)
struct alignas(0x08) BP_FortExpeditionMasterWidget_C_Setup_Input_Action_Handlers final 
{
public:
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate1;             // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate12;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate123;           // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate1234;          // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
};

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Setup Bindings
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) BP_FortExpeditionMasterWidget_C_Setup_Bindings final 
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
};

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Update Master Widget
// 0x0010 (0x0010 - 0x0000)
struct BP_FortExpeditionMasterWidget_C_Update_Master_Widget final 
{
public:
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AreProfilesAvailableToWIFE_ReturnValue;   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AreAnyExpeditionsComplete_ReturnValue;    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Hide Input Action
// 0x0010 (0x0010 - 0x0000)
struct BP_FortExpeditionMasterWidget_C_Hide_Input_Action final 
{
public:
	struct FDataTableRowHandle                    InputActionRow;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Show Input Action
// 0x0010 (0x0010 - 0x0000)
struct BP_FortExpeditionMasterWidget_C_Show_Input_Action final 
{
public:
	struct FDataTableRowHandle                    InputActionRow;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleBuildExpeditionAction
// 0x0002 (0x0002 - 0x0000)
struct BP_FortExpeditionMasterWidget_C_HandleBuildExpeditionAction final 
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HandleBuildExpeditionAction_PassThrough;  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleAbandonExpeditionAction
// 0x0001 (0x0001 - 0x0000)
struct BP_FortExpeditionMasterWidget_C_HandleAbandonExpeditionAction final 
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleCollectExpeditionAction
// 0x0001 (0x0001 - 0x0000)
struct BP_FortExpeditionMasterWidget_C_HandleCollectExpeditionAction final 
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Disable Input Action
// 0x0010 (0x0010 - 0x0000)
struct BP_FortExpeditionMasterWidget_C_Disable_Input_Action final 
{
public:
	struct FDataTableRowHandle                    InputActionRow;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleSortExpeditionListAction
// 0x0004 (0x0004 - 0x0000)
struct BP_FortExpeditionMasterWidget_C_HandleSortExpeditionListAction final 
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Add_ByteByte_ReturnValue;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_ByteByte_ReturnValue;             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

