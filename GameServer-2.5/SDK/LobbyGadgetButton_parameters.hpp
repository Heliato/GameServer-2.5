#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyGadgetButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function LobbyGadgetButton.LobbyGadgetButton_C.OnButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct LobbyGadgetButton_C_OnButtonClicked__DelegateSignature final 
{
public:
	class ULobbyGadgetButton_C*                   GadgetButton;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGadgetButton.LobbyGadgetButton_C.OnButtonHovered__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct LobbyGadgetButton_C_OnButtonHovered__DelegateSignature final 
{
public:
	class ULobbyGadgetButton_C*                   GadgetButton;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGadgetButton.LobbyGadgetButton_C.ExecuteUbergraph_LobbyGadgetButton
// 0x0038 (0x0038 - 0x0000)
struct LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4153[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button1;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4154[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4155[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortWorldItemDefinition*               CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGadgetButton.LobbyGadgetButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct LobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature final 
{
public:
	class UCommonButton*                          Param_Button;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGadgetButton.LobbyGadgetButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct LobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature final 
{
public:
	class UCommonButton*                          Param_Button;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGadgetButton.LobbyGadgetButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct LobbyGadgetButton_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyGadgetButton.LobbyGadgetButton_C.Refresh
// 0x0010 (0x0010 - 0x0000)
struct LobbyGadgetButton_C_Refresh final 
{
public:
	class UFortWorldItem*                         WorldItem;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyGadgetButton.LobbyGadgetButton_C.GetGadgetItem
// 0x0008 (0x0008 - 0x0000)
struct LobbyGadgetButton_C_GetGadgetItem final 
{
public:
	class UFortWorldItem*                         Param_GadgetItem;                                  // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGadgetButton.LobbyGadgetButton_C.SetLocked
// 0x0002 (0x0002 - 0x0000)
struct LobbyGadgetButton_C_SetLocked final 
{
public:
	bool                                          Param_bLocked;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyGadgetButton.LobbyGadgetButton_C.GetLocked
// 0x0001 (0x0001 - 0x0000)
struct LobbyGadgetButton_C_GetLocked final 
{
public:
	bool                                          Param_bLocked;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyGadgetButton.LobbyGadgetButton_C.Focus
// 0x0008 (0x0008 - 0x0000)
struct LobbyGadgetButton_C_Focus final 
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

