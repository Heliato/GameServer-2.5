#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_TeleportPadPlayer

#include "Basic.hpp"

#include "Results_TeleportPadPlayer_classes.hpp"
#include "Results_TeleportPadPlayer_parameters.hpp"


namespace SDK
{

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnMissionStatsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::OnMissionStatsClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "OnMissionStatsClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnAddFriendClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 TargetId                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                           TargetName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "OnAddFriendClicked__DelegateSignature");

	Params::Results_TeleportPadPlayer_C_OnAddFriendClicked__DelegateSignature Parms{};

	Parms.TargetId = std::move(TargetId);
	Parms.TargetName = std::move(TargetName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnUpVoteClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 TargetId                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                           TargetName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "OnUpVoteClicked__DelegateSignature");

	Params::Results_TeleportPadPlayer_C_OnUpVoteClicked__DelegateSignature Parms{};

	Parms.TargetId = std::move(TargetId);
	Parms.TargetName = std::move(TargetName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnTeleportPadIntroFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResults_TeleportPadPlayer_C*     TeleportPadPlayer                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::OnTeleportPadIntroFinished__DelegateSignature(class UResults_TeleportPadPlayer_C* TeleportPadPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "OnTeleportPadIntroFinished__DelegateSignature");

	Params::Results_TeleportPadPlayer_C_OnTeleportPadIntroFinished__DelegateSignature Parms{};

	Parms.TeleportPadPlayer = TeleportPadPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.ExecuteUbergraph_Results_TeleportPadPlayer
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*                    K2Node_ComponentBoundEvent_Button12                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*                    K2Node_ComponentBoundEvent_Button1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     K2Node_MakeStruct_LinearColor                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*                    K2Node_ComponentBoundEvent_Button                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                      K2Node_MakeStruct_SlateColor                           ()
// struct FSlateBrush                      K2Node_MakeStruct_SlateBrush                           ()

void UResults_TeleportPadPlayer_C::ExecuteUbergraph_Results_TeleportPadPlayer(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class UCommonButton* K2Node_ComponentBoundEvent_Button1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class UCommonButton* K2Node_ComponentBoundEvent_Button, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "ExecuteUbergraph_Results_TeleportPadPlayer");

	Params::Results_TeleportPadPlayer_C_ExecuteUbergraph_Results_TeleportPadPlayer Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button12 = K2Node_ComponentBoundEvent_Button12;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_MakeStruct_LinearColor = std::move(K2Node_MakeStruct_LinearColor);
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_MakeStruct_SlateColor = std::move(K2Node_MakeStruct_SlateColor);
	Parms.K2Node_MakeStruct_SlateBrush = std::move(K2Node_MakeStruct_SlateBrush);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResults_TeleportPadPlayer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature");

	Params::Results_TeleportPadPlayer_C_BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_TeleportPadPlayer_C::BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");

	Params::Results_TeleportPadPlayer_C_BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::Results_TeleportPadPlayer_C_BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Outro
// (BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::Outro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "Outro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Teleport Pad Screen Intro
// (BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::Teleport_Pad_Screen_Intro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "Teleport Pad Screen Intro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Team Score Screen Outro
// (BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::Team_Score_Screen_Outro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "Team Score Screen Outro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Team Score Screen Intro
// (BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::Team_Score_Screen_Intro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "Team Score Screen Intro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Initialize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UFortUIScoreReport*               InScoreReport                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl                 InConsoleUniqueId                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                                   ScoreReportIndex                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIScoreReport*               ScoreReport                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsLocalPlayer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             CallFunc_GetPlayerName_ReturnValue                     ()
// int32                                   CallFunc_GetScoreReportIndex_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::Initialize(struct FUniqueNetIdRepl& InUniqueId, class UFortUIScoreReport*& InScoreReport, const struct FUniqueNetIdRepl& InConsoleUniqueId, int32 ScoreReportIndex, class UFortUIScoreReport* ScoreReport, bool CallFunc_IsLocalPlayer_ReturnValue, class FText CallFunc_GetPlayerName_ReturnValue, int32 CallFunc_GetScoreReportIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "Initialize");

	Params::Results_TeleportPadPlayer_C_Initialize Parms{};

	Parms.InUniqueId = std::move(InUniqueId);
	Parms.InScoreReport = InScoreReport;
	Parms.InConsoleUniqueId = std::move(InConsoleUniqueId);
	Parms.ScoreReportIndex = ScoreReportIndex;
	Parms.ScoreReport = ScoreReport;
	Parms.CallFunc_IsLocalPlayer_ReturnValue = CallFunc_IsLocalPlayer_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_GetScoreReportIndex_ReturnValue = CallFunc_GetScoreReportIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	InUniqueId = std::move(Parms.InUniqueId);
	InScoreReport = Parms.InScoreReport;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.SetIsValidPad
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::SetIsValidPad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "SetIsValidPad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.IsValidPad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_bIsValid                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeleportPadPlayer_C::IsValidPad(bool* Param_bIsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "IsValidPad");

	Params::Results_TeleportPadPlayer_C_IsValidPad Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_bIsValid != nullptr)
		*Param_bIsValid = Parms.Param_bIsValid;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.ThumbsUpPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           CallFunc_Conv_TextToString_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::ThumbsUpPlayer(const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "ThumbsUpPlayer");

	Params::Results_TeleportPadPlayer_C_ThumbsUpPlayer Parms{};

	Parms.CallFunc_Conv_TextToString_ReturnValue = std::move(CallFunc_Conv_TextToString_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*         CallFunc_GetUINavigationManager_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "Focus");

	Params::Results_TeleportPadPlayer_C_Focus Parms{};

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.IsLocalPlayersPad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bIsLocalPlayersPad                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeleportPadPlayer_C::IsLocalPlayersPad(bool* bIsLocalPlayersPad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "IsLocalPlayersPad");

	Params::Results_TeleportPadPlayer_C_IsLocalPlayersPad Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsLocalPlayersPad != nullptr)
		*bIsLocalPlayersPad = Parms.bIsLocalPlayersPad;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.On_InvitePopupMenuAnchor_GetMenuContent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*         CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      CallFunc_GetCachedWidget_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInvitePopupMenu_C*               K2Node_DynamicCast_AsInvite_Popup_Menu                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UResults_TeleportPadPlayer_C::On_InvitePopupMenuAnchor_GetMenuContent(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UInvitePopupMenu_C* K2Node_DynamicCast_AsInvite_Popup_Menu, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "On_InvitePopupMenuAnchor_GetMenuContent");

	Params::Results_TeleportPadPlayer_C_On_InvitePopupMenuAnchor_GetMenuContent Parms{};

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsInvite_Popup_Menu = K2Node_DynamicCast_AsInvite_Popup_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.SetInviteButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                          CallFunc_On_InvitePopupMenuAnchor_GetMenuContent_ReturnValue(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInvitePopupMenu_C*               K2Node_DynamicCast_AsInvite_Popup_Menu                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_CanInviteToParty_CanInviteToParty             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_CanAddAsFriend_bCanFriendPlayer               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::SetInviteButtonVisibility(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, bool CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad, class UWidget* CallFunc_On_InvitePopupMenuAnchor_GetMenuContent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UInvitePopupMenu_C* K2Node_DynamicCast_AsInvite_Popup_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanInviteToParty_CanInviteToParty, bool CallFunc_CanAddAsFriend_bCanFriendPlayer, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "SetInviteButtonVisibility");

	Params::Results_TeleportPadPlayer_C_SetInviteButtonVisibility Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad = CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad;
	Parms.CallFunc_On_InvitePopupMenuAnchor_GetMenuContent_ReturnValue = CallFunc_On_InvitePopupMenuAnchor_GetMenuContent_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsInvite_Popup_Menu = K2Node_DynamicCast_AsInvite_Popup_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanInviteToParty_CanInviteToParty = CallFunc_CanInviteToParty_CanInviteToParty;
	Parms.CallFunc_CanAddAsFriend_bCanFriendPlayer = CallFunc_CanAddAsFriend_bCanFriendPlayer;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}

}

