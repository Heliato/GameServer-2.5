#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiniPartyMember

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function MiniPartyMember.MiniPartyMember_C.ExecuteUbergraph_MiniPartyMember
// 0x01D0 (0x01D0 - 0x0000)
struct MiniPartyMember_C_ExecuteUbergraph_MiniPartyMember final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A39[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTeamMemberInfo                    K2Node_Event_NewInfo;                              // 0x0008(0x01A8)()
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button12;               // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button1;                // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MiniPartyMember.MiniPartyMember_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MiniPartyMember_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature final 
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature final 
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature final 
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MiniPartyMember.MiniPartyMember_C.OnPlayerInfoChanged
// 0x01A8 (0x01A8 - 0x0000)
struct MiniPartyMember_C_OnPlayerInfoChanged final 
{
public:
	struct FFortTeamMemberInfo                    NewInfo;                                           // 0x0000(0x01A8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MiniPartyMember.MiniPartyMember_C.ShowConnected
// 0x0001 (0x0001 - 0x0000)
struct MiniPartyMember_C_ShowConnected final 
{
public:
	ESlateVisibility                              CallFunc_GetLeaderVisibility_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MiniPartyMember.MiniPartyMember_C.UpdateMemberInfo
// 0x01B8 (0x01B8 - 0x0000)
struct MiniPartyMember_C_UpdateMemberInfo final 
{
public:
	struct FFortTeamMemberInfo                    NewMemberInfo;                                     // 0x0000(0x01A8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortPartyMemberDisplayState                  CallFunc_GetPartyMemberDisplayState_ReturnValue;   // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MiniPartyMember.MiniPartyMember_C.GetLeaderVisibility
// 0x0007 (0x0007 - 0x0000)
struct MiniPartyMember_C_GetLeaderVisibility final 
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MiniPartyMember.MiniPartyMember_C.OpenPartyFinder
// 0x0038 (0x0038 - 0x0000)
struct MiniPartyMember_C_OpenPartyFinder final 
{
public:
	bool                                          CallFunc_IsTencentBuild_ReturnValue;               // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A3A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetCachedWidget_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPartyFinder_C*                         K2Node_DynamicCast_AsParty_Finder;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A3B[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MiniPartyMember.MiniPartyMember_C.HandleMouseHoverVisualState
// 0x0098 (0x0098 - 0x0000)
struct MiniPartyMember_C_HandleMouseHoverVisualState final 
{
public:
	bool                                          Hover;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A3C[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable1;                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0020(0x0078)()
};

}

