#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OutpostScreenCanEditPanel

#include "Basic.hpp"

#include "OutpostScreenCanEditPanel_classes.hpp"
#include "OutpostScreenCanEditPanel_parameters.hpp"


namespace SDK
{

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.ExecuteUbergraph_OutpostScreenCanEditPanel
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTeamMemberInfo              K2Node_CustomEvent_PlayerInfo                          (ConstParm)
// TDelegate<void(struct FFortTeamMemberInfo& PlayerInfo)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// class UFortBaseButton*                  K2Node_ComponentBoundEvent_Button1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_ComponentBoundEvent_Selected1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void(int32 PlayerIndex)>      K2Node_CreateDelegate_OutputDelegate1                  (ZeroConstructor, NoDestructor)
// struct FFortTeamMemberInfo              K2Node_CustomEvent_NewTeamMemberInfo                   ()
// int32                                   K2Node_CustomEvent_PlayerIndex                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(const struct FFortTeamMemberInfo& NewTeamMemberInfo)>K2Node_CreateDelegate_OutputDelegate12                 (ZeroConstructor, NoDestructor)
// class UFortPartyContext*                CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*                    K2Node_ComponentBoundEvent_Button                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_ComponentBoundEvent_Selected                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUITeamInfo*                  CallFunc_GetLocalPlayerTeam_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenCanEditPanel_C::ExecuteUbergraph_OutpostScreenCanEditPanel(int32 EntryPoint, struct FFortTeamMemberInfo& K2Node_CustomEvent_PlayerInfo, TDelegate<void(struct FFortTeamMemberInfo& PlayerInfo)> K2Node_CreateDelegate_OutputDelegate, class UFortBaseButton* K2Node_ComponentBoundEvent_Button1, bool K2Node_ComponentBoundEvent_Selected1, TDelegate<void(int32 PlayerIndex)> K2Node_CreateDelegate_OutputDelegate1, const struct FFortTeamMemberInfo& K2Node_CustomEvent_NewTeamMemberInfo, int32 K2Node_CustomEvent_PlayerIndex, TDelegate<void(const struct FFortTeamMemberInfo& NewTeamMemberInfo)> K2Node_CreateDelegate_OutputDelegate12, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_Selected, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OutpostScreenCanEditPanel_C", "ExecuteUbergraph_OutpostScreenCanEditPanel");

	Params::OutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_PlayerInfo = std::move(K2Node_CustomEvent_PlayerInfo);
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Selected1 = K2Node_ComponentBoundEvent_Selected1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CustomEvent_NewTeamMemberInfo = std::move(K2Node_CustomEvent_NewTeamMemberInfo);
	Parms.K2Node_CustomEvent_PlayerIndex = K2Node_CustomEvent_PlayerIndex;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_Selected = K2Node_ComponentBoundEvent_Selected;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.PartyUpdated
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              PlayerInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOutpostScreenCanEditPanel_C::PartyUpdated(struct FFortTeamMemberInfo& PlayerInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OutpostScreenCanEditPanel_C", "PartyUpdated");

	Params::OutpostScreenCanEditPanel_C_PartyUpdated Parms{};

	Parms.PlayerInfo = std::move(PlayerInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenCanEditPanel_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OutpostScreenCanEditPanel_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature");

	Params::OutpostScreenCanEditPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.HandleRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenCanEditPanel_C::HandleRemoved(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OutpostScreenCanEditPanel_C", "HandleRemoved");

	Params::OutpostScreenCanEditPanel_C_HandleRemoved Parms{};

	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.HandleJoined
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              NewTeamMemberInfo                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UOutpostScreenCanEditPanel_C::HandleJoined(const struct FFortTeamMemberInfo& NewTeamMemberInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OutpostScreenCanEditPanel_C", "HandleJoined");

	Params::OutpostScreenCanEditPanel_C_HandleJoined Parms{};

	Parms.NewTeamMemberInfo = std::move(NewTeamMemberInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOutpostScreenCanEditPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OutpostScreenCanEditPanel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*                  Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenCanEditPanel_C::BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OutpostScreenCanEditPanel_C", "BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature");

	Params::OutpostScreenCanEditPanel_C_BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerOutpost*     InOutpostOwner                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsOutpostOwner_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateOutpost*          K2Node_DynamicCast_AsFort_Player_State_Outpost         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_GetChildrenCount_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_LessEqual_IntInt_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOutpostScreenCanEditRow_C*       CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*                 CallFunc_AddChildToVerticalBox_ReturnValue             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerPawn*>          CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns      (ZeroConstructor, ReferenceParm)
// ESlateVisibility                        Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*                  CallFunc_Array_Get_Item                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateOutpost*          K2Node_DynamicCast_AsFort_Player_State_Outpost1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_NotEqual_ObjectObject_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenCanEditPanel_C::Init(class AFortPlayerControllerOutpost* InOutpostOwner, bool CallFunc_IsOutpostOwner_ReturnValue, class AFortPlayerStateOutpost* K2Node_DynamicCast_AsFort_Player_State_Outpost, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, ESlateVisibility Temp_byte_Variable, class UOutpostScreenCanEditRow_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, TArray<class AFortPlayerPawn*>& CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns, ESlateVisibility Temp_byte_Variable1, class AFortPlayerPawn* CallFunc_Array_Get_Item, ESlateVisibility K2Node_Select_Default, class AFortPlayerStateOutpost* K2Node_DynamicCast_AsFort_Player_State_Outpost1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OutpostScreenCanEditPanel_C", "Init");

	Params::OutpostScreenCanEditPanel_C_Init Parms{};

	Parms.InOutpostOwner = InOutpostOwner;
	Parms.CallFunc_IsOutpostOwner_ReturnValue = CallFunc_IsOutpostOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Outpost = K2Node_DynamicCast_AsFort_Player_State_Outpost;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns = std::move(CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns);
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Outpost1 = K2Node_DynamicCast_AsFort_Player_State_Outpost1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns = std::move(Parms.CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns);
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.SetMasterSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCanEdit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateOutpost*          LocalPlayerState                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    LocalCanEdit                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_ObjectObject_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerPawn*>          CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns      (ZeroConstructor, ReferenceParm)
// class AFortPlayerPawn*                  CallFunc_Array_Get_Item                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateOutpost*          K2Node_DynamicCast_AsFort_Player_State_Outpost         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenCanEditPanel_C::SetMasterSwitch(bool bCanEdit, class AFortPlayerStateOutpost* LocalPlayerState, bool LocalCanEdit, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, TArray<class AFortPlayerPawn*>& CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns, class AFortPlayerPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AFortPlayerStateOutpost* K2Node_DynamicCast_AsFort_Player_State_Outpost, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OutpostScreenCanEditPanel_C", "SetMasterSwitch");

	Params::OutpostScreenCanEditPanel_C_SetMasterSwitch Parms{};

	Parms.bCanEdit = bCanEdit;
	Parms.LocalPlayerState = LocalPlayerState;
	Parms.LocalCanEdit = LocalCanEdit;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns = std::move(CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns);
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Outpost = K2Node_DynamicCast_AsFort_Player_State_Outpost;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns = std::move(Parms.CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns);
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.CenterWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*         CallFunc_GetUINavigationManager_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsVisible_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                          CallFunc_GetChildAt_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOutpostScreenCanEditRow_C*       K2Node_DynamicCast_AsOutpost_Screen_Can_Edit_Row       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenCanEditPanel_C::CenterWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UOutpostScreenCanEditRow_C* K2Node_DynamicCast_AsOutpost_Screen_Can_Edit_Row, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OutpostScreenCanEditPanel_C", "CenterWidget");

	Params::OutpostScreenCanEditPanel_C_CenterWidget Parms{};

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsOutpost_Screen_Can_Edit_Row = K2Node_DynamicCast_AsOutpost_Screen_Can_Edit_Row;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

}

