#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announcement_Tutorial

#include "Basic.hpp"

#include "Announcement_Tutorial_classes.hpp"
#include "Announcement_Tutorial_parameters.hpp"


namespace SDK
{

// Function Announcement_Tutorial.Announcement_Tutorial_C.ExecuteUbergraph_Announcement_Tutorial
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(const struct FFortClientAnnouncementData_Tutorial& TutorialData, bool bShow)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// struct FFortClientAnnouncementData_TutorialK2Node_MakeStruct_FortClientAnnouncementData_Tutorial  ()
// class UObject*                          K2Node_HandleClientEvent_EventSource1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          K2Node_HandleClientEvent_EventFocus1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent                 K2Node_HandleClientEvent_ClientEvent1                  (ConstParm, NoDestructor)
// class UObject*                          K2Node_HandleClientEvent_EventSource                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          K2Node_HandleClientEvent_EventFocus                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent                 K2Node_HandleClientEvent_ClientEvent                   (ConstParm, NoDestructor)
// struct FFortClientAnnouncementData_TutorialK2Node_CustomEvent_TutorialData                        ()
// bool                                    K2Node_CustomEvent_bShow                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate1                  (ZeroConstructor, NoDestructor)
// class UFortTutorialContext*             CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*             CallFunc_GetContext_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_Tutorial_C::ExecuteUbergraph_Announcement_Tutorial(int32 EntryPoint, TDelegate<void(const struct FFortClientAnnouncementData_Tutorial& TutorialData, bool bShow)> K2Node_CreateDelegate_OutputDelegate, const struct FFortClientAnnouncementData_Tutorial& K2Node_MakeStruct_FortClientAnnouncementData_Tutorial, class UObject* K2Node_HandleClientEvent_EventSource1, class UObject* K2Node_HandleClientEvent_EventFocus1, struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent1, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, const struct FFortClientAnnouncementData_Tutorial& K2Node_CustomEvent_TutorialData, bool K2Node_CustomEvent_bShow, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1, class UFortTutorialContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_Tutorial_C", "ExecuteUbergraph_Announcement_Tutorial");

	Params::Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Tutorial = std::move(K2Node_MakeStruct_FortClientAnnouncementData_Tutorial);
	Parms.K2Node_HandleClientEvent_EventSource1 = K2Node_HandleClientEvent_EventSource1;
	Parms.K2Node_HandleClientEvent_EventFocus1 = K2Node_HandleClientEvent_EventFocus1;
	Parms.K2Node_HandleClientEvent_ClientEvent1 = std::move(K2Node_HandleClientEvent_ClientEvent1);
	Parms.K2Node_HandleClientEvent_EventSource = K2Node_HandleClientEvent_EventSource;
	Parms.K2Node_HandleClientEvent_EventFocus = K2Node_HandleClientEvent_EventFocus;
	Parms.K2Node_HandleClientEvent_ClientEvent = std::move(K2Node_HandleClientEvent_ClientEvent);
	Parms.K2Node_CustomEvent_TutorialData = std::move(K2Node_CustomEvent_TutorialData);
	Parms.K2Node_CustomEvent_bShow = K2Node_CustomEvent_bShow;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.ResetTutorialAnnoucementWidget
// (BlueprintCallable, BlueprintEvent)

void UAnnouncement_Tutorial_C::ResetTutorialAnnoucementWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_Tutorial_C", "ResetTutorialAnnoucementWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.HandleClientEvent_OnboardingHideUI
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          EventSource                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          EventFocus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent                 ClientEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAnnouncement_Tutorial_C::HandleClientEvent_OnboardingHideUI(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_Tutorial_C", "HandleClientEvent_OnboardingHideUI");

	Params::Announcement_Tutorial_C_HandleClientEvent_OnboardingHideUI Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.HandleClientEvent_OnboardingShowUI
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          EventSource                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          EventFocus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent                 ClientEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAnnouncement_Tutorial_C::HandleClientEvent_OnboardingShowUI(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_Tutorial_C", "HandleClientEvent_OnboardingShowUI");

	Params::Announcement_Tutorial_C_HandleClientEvent_OnboardingShowUI Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAnnouncement_Tutorial_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_Tutorial_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.HandleUpdateTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortClientAnnouncementData_TutorialTutorialData                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAnnouncement_Tutorial_C::HandleUpdateTutorial(const struct FFortClientAnnouncementData_Tutorial& TutorialData, bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_Tutorial_C", "HandleUpdateTutorial");

	Params::Announcement_Tutorial_C_HandleUpdateTutorial Parms{};

	Parms.TutorialData = std::move(TutorialData);
	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.AddTextLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Transparent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUserWidget*                NewLine                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             LocalText                                              (Edit, BlueprintVisible)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTutorialRichText_C*              CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTutorialTransparentRichText_C*   CallFunc_Create_ReturnValue1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                       CallFunc_AddChild_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_Tutorial_C::AddTextLine(class FText Text, bool Transparent, class UCommonUserWidget* NewLine, class FText LocalText, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UTutorialRichText_C* CallFunc_Create_ReturnValue, class UTutorialTransparentRichText_C* CallFunc_Create_ReturnValue1, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_Tutorial_C", "AddTextLine");

	Params::Announcement_Tutorial_C_AddTextLine Parms{};

	Parms.Text = Text;
	Parms.Transparent = Transparent;
	Parms.NewLine = NewLine;
	Parms.LocalText = LocalText;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue1 = CallFunc_Create_ReturnValue1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.UpdateTutorialData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortClientAnnouncementData_TutorialTutorialData                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UOverlaySlot*                     ContentBoxSlot                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientAnnouncementData_TutorialLocalTutorialData                                      (Edit, BlueprintVisible)
// bool                                    CallFunc_TextIsEmpty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        CallFunc_GetLightboxVisibility_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_TextText_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Array_Add_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                     CallFunc_SlotAsOverlaySlot_ReturnValue                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_Tutorial_C::UpdateTutorialData(const struct FFortClientAnnouncementData_Tutorial& TutorialData, class UOverlaySlot* ContentBoxSlot, const struct FFortClientAnnouncementData_Tutorial& LocalTutorialData, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, ESlateVisibility CallFunc_GetLightboxVisibility_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_Tutorial_C", "UpdateTutorialData");

	Params::Announcement_Tutorial_C_UpdateTutorialData Parms{};

	Parms.TutorialData = std::move(TutorialData);
	Parms.ContentBoxSlot = ContentBoxSlot;
	Parms.LocalTutorialData = std::move(LocalTutorialData);
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetLightboxVisibility_ReturnValue = CallFunc_GetLightboxVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.RefreshTextLines
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Array_Get_Item                                ()
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Subtract_IntInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAnnouncement_Tutorial_C::RefreshTextLines(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_Tutorial_C", "RefreshTextLines");

	Params::Announcement_Tutorial_C_RefreshTextLines Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.GetLightboxVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortClientAnnouncementData_TutorialFortClientAnnouncementData_Tutorial                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UAnnouncement_Tutorial_C::GetLightboxVisibility(struct FFortClientAnnouncementData_Tutorial& FortClientAnnouncementData_Tutorial, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, bool CallFunc_BooleanOR_ReturnValue, ESlateVisibility Temp_byte_Variable1, ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_Tutorial_C", "GetLightboxVisibility");

	Params::Announcement_Tutorial_C_GetLightboxVisibility Parms{};

	Parms.FortClientAnnouncementData_Tutorial = std::move(FortClientAnnouncementData_Tutorial);
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.CheckContinueTutorial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortClientAnnouncementData_TutorialTutorialData                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// struct FTimerHandle                     CallFunc_K2_SetTimerDelegate_ReturnValue               (NoDestructor)

void UAnnouncement_Tutorial_C::CheckContinueTutorial(const struct FFortClientAnnouncementData_Tutorial& TutorialData, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_Tutorial_C", "CheckContinueTutorial");

	Params::Announcement_Tutorial_C_CheckContinueTutorial Parms{};

	Parms.TutorialData = std::move(TutorialData);
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = std::move(CallFunc_K2_SetTimerDelegate_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.ContinueTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortTutorialContext*             CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_Tutorial_C::ContinueTutorial(class UFortTutorialContext* CallFunc_GetContext_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_Tutorial_C", "ContinueTutorial");

	Params::Announcement_Tutorial_C_ContinueTutorial Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

