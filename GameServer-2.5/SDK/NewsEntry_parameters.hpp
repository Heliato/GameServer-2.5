#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewsEntry

#include "Basic.hpp"


namespace SDK::Params
{

// Function NewsEntry.NewsEntry_C.BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct NewsEntry_C_BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature final 
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewsEntry.NewsEntry_C.HandleEntrySelected__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct NewsEntry_C_HandleEntrySelected__DelegateSignature final 
{
public:
	class FText                                   Param_BodyText;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function NewsEntry.NewsEntry_C.ExecuteUbergraph_NewsEntry
// 0x0010 (0x0010 - 0x0000)
struct NewsEntry_C_ExecuteUbergraph_NewsEntry final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26E9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewsEntry.NewsEntry_C.SetFocus
// 0x0008 (0x0008 - 0x0000)
struct NewsEntry_C_SetFocus final 
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

