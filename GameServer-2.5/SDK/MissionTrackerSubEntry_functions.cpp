#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionTrackerSubEntry

#include "Basic.hpp"

#include "MissionTrackerSubEntry_classes.hpp"
#include "MissionTrackerSubEntry_parameters.hpp"


namespace SDK
{

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.WidgetVisibilityChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMissionTrackerSubEntry_C::WidgetVisibilityChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTrackerSubEntry_C", "WidgetVisibilityChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.ExecuteUbergraph_MissionTrackerSubEntry
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionTrackerSubEntry_C::ExecuteUbergraph_MissionTrackerSubEntry(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTrackerSubEntry_C", "ExecuteUbergraph_MissionTrackerSubEntry");

	Params::MissionTrackerSubEntry_C_ExecuteUbergraph_MissionTrackerSubEntry Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.OnHiddenByHeightConstraintChanged
// (Event, Protected, BlueprintEvent)

void UMissionTrackerSubEntry_C::OnHiddenByHeightConstraintChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTrackerSubEntry_C", "OnHiddenByHeightConstraintChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.OnObjectiveSet
// (Event, Protected, BlueprintEvent)

void UMissionTrackerSubEntry_C::OnObjectiveSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTrackerSubEntry_C", "OnObjectiveSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*               Objective                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class AFortObjectiveBase* Objective, EFortMissionVisibilityOverride NewVisibilityOverride)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// TDelegate<void(class AFortMissionState* MissionState, struct FGameplayTagContainer& EventTags)>K2Node_CreateDelegate_OutputDelegate1                  (ZeroConstructor, NoDestructor)
// TDelegate<void(class AFortMissionState* MissionState)>K2Node_CreateDelegate_OutputDelegate12                 (ZeroConstructor, NoDestructor)
// TDelegate<void(class AFortObjectiveBase* Objective, EFortObjectiveStatus NewStatus)>K2Node_CreateDelegate_OutputDelegate123                (ZeroConstructor, NoDestructor)
// TDelegate<void(class AFortObjectiveBase* Objective, bool bNewVisibility)>K2Node_CreateDelegate_OutputDelegate1234               (ZeroConstructor, NoDestructor)

void UMissionTrackerSubEntry_C::Setup(class AFortObjectiveBase* Objective, TDelegate<void(class AFortObjectiveBase* Objective, EFortMissionVisibilityOverride NewVisibilityOverride)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class AFortMissionState* MissionState, struct FGameplayTagContainer& EventTags)> K2Node_CreateDelegate_OutputDelegate1, TDelegate<void(class AFortMissionState* MissionState)> K2Node_CreateDelegate_OutputDelegate12, TDelegate<void(class AFortObjectiveBase* Objective, EFortObjectiveStatus NewStatus)> K2Node_CreateDelegate_OutputDelegate123, TDelegate<void(class AFortObjectiveBase* Objective, bool bNewVisibility)> K2Node_CreateDelegate_OutputDelegate1234)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTrackerSubEntry_C", "Setup");

	Params::MissionTrackerSubEntry_C_Setup Parms{};

	Parms.Objective = Objective;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.K2Node_CreateDelegate_OutputDelegate1234 = K2Node_CreateDelegate_OutputDelegate1234;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleObjectiveStatusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*               Objective                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortObjectiveStatus                    NewStatus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*                 Temp_object_Variable                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetAnimation*                 Temp_object_Variable1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*                 Temp_object_Variable12                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortObjectiveStatus                    Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*                 K2Node_Select_Default                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionTrackerSubEntry_C::HandleObjectiveStatusChanged(class AFortObjectiveBase* Objective, EFortObjectiveStatus NewStatus, class UWidgetAnimation* Temp_object_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UWidgetAnimation* Temp_object_Variable1, class UWidgetAnimation* Temp_object_Variable12, EFortObjectiveStatus Temp_byte_Variable, class UWidgetAnimation* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTrackerSubEntry_C", "HandleObjectiveStatusChanged");

	Params::MissionTrackerSubEntry_C_HandleObjectiveStatusChanged Parms{};

	Parms.Objective = Objective;
	Parms.NewStatus = NewStatus;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable12 = Temp_object_Variable12;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleObjectiveVisibilityChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*               Objective                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NewVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionTrackerSubEntry_C::HandleObjectiveVisibilityChanged(class AFortObjectiveBase* Objective, bool NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTrackerSubEntry_C", "HandleObjectiveVisibilityChanged");

	Params::MissionTrackerSubEntry_C_HandleObjectiveVisibilityChanged Parms{};

	Parms.Objective = Objective;
	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMissionState*                Objective                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionTrackerSubEntry_C::HandleUpdate(class AFortMissionState* Objective)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTrackerSubEntry_C", "HandleUpdate");

	Params::MissionTrackerSubEntry_C_HandleUpdate Parms{};

	Parms.Objective = Objective;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HideObjectiveWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_NotEqual_ByteByte_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionTrackerSubEntry_C::HideObjectiveWidget(bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTrackerSubEntry_C", "HideObjectiveWidget");

	Params::MissionTrackerSubEntry_C_HideObjectiveWidget Parms{};

	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.StartEndingAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsVisible_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionTrackerSubEntry_C::StartEndingAnimations(class UWidgetAnimation* Animation, bool CallFunc_IsVisible_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTrackerSubEntry_C", "StartEndingAnimations");

	Params::MissionTrackerSubEntry_C_StartEndingAnimations Parms{};

	Parms.Animation = Animation;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.CreateObjectiveContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          CallFunc_GetChildAt_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           CallFunc_GetObjectClass_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_ClassClass_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_HasAnyChildren_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                          CallFunc_GetChildAt_ReturnValue1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_HasAnyChildren_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                           CallFunc_GetObjectClass_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDefaultObjectiveContentWidget_C* CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IMissionObjectiveContentWidgetInterface_C>K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_DoesImplementInterface_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_DoesImplementInterface_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IMissionObjectiveWidgetProviderInterface_C>K2Node_DynamicCast_AsMission_Objective_Widget_Provider_Interface(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_DynamicCast_bSuccess1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                           CallFunc_GetObjectiveContentWidgetClass_Objective_WIdget_Class(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_ClassClass_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValidClass_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUserWidget*                  CallFunc_Create_ReturnValue1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IMissionObjectiveContentWidgetInterface_C>K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_DynamicCast_bSuccess12                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                       CallFunc_AddChild_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                       CallFunc_AddChild_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_DoesImplementInterface_ReturnValue12          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionTrackerSubEntry_C::CreateObjectiveContentWidget(class UWidget* CallFunc_GetChildAt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue1, bool CallFunc_HasAnyChildren_ReturnValue1, class UClass* CallFunc_GetObjectClass_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDefaultObjectiveContentWidget_C* CallFunc_Create_ReturnValue, TScriptInterface<class IMissionObjectiveContentWidgetInterface_C> K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue1, TScriptInterface<class IMissionObjectiveWidgetProviderInterface_C> K2Node_DynamicCast_AsMission_Objective_Widget_Provider_Interface, bool K2Node_DynamicCast_bSuccess1, class UClass* CallFunc_GetObjectiveContentWidgetClass_Objective_WIdget_Class, bool CallFunc_NotEqual_ClassClass_ReturnValue1, bool CallFunc_IsValidClass_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UFortUserWidget* CallFunc_Create_ReturnValue1, TScriptInterface<class IMissionObjectiveContentWidgetInterface_C> K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface1, bool K2Node_DynamicCast_bSuccess12, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue1, bool CallFunc_DoesImplementInterface_ReturnValue12)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTrackerSubEntry_C", "CreateObjectiveContentWidget");

	Params::MissionTrackerSubEntry_C_CreateObjectiveContentWidget Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue1 = CallFunc_GetChildAt_ReturnValue1;
	Parms.CallFunc_HasAnyChildren_ReturnValue1 = CallFunc_HasAnyChildren_ReturnValue1;
	Parms.CallFunc_GetObjectClass_ReturnValue1 = CallFunc_GetObjectClass_ReturnValue1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface = K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue1 = CallFunc_DoesImplementInterface_ReturnValue1;
	Parms.K2Node_DynamicCast_AsMission_Objective_Widget_Provider_Interface = K2Node_DynamicCast_AsMission_Objective_Widget_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetObjectiveContentWidgetClass_Objective_WIdget_Class = CallFunc_GetObjectiveContentWidgetClass_Objective_WIdget_Class;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue1 = CallFunc_NotEqual_ClassClass_ReturnValue1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.CallFunc_Create_ReturnValue1 = CallFunc_Create_ReturnValue1;
	Parms.K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface1 = K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface1;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue1 = CallFunc_AddChild_ReturnValue1;
	Parms.CallFunc_DoesImplementInterface_ReturnValue12 = CallFunc_DoesImplementInterface_ReturnValue12;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HanldeObjectiveVisiblityOverrideChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*               Objective                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortMissionVisibilityOverride          New_Visibility_Override                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionTrackerSubEntry_C::HanldeObjectiveVisiblityOverrideChanged(class AFortObjectiveBase* Objective, EFortMissionVisibilityOverride New_Visibility_Override, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTrackerSubEntry_C", "HanldeObjectiveVisiblityOverrideChanged");

	Params::MissionTrackerSubEntry_C_HanldeObjectiveVisiblityOverrideChanged Parms{};

	Parms.Objective = Objective;
	Parms.New_Visibility_Override = New_Visibility_Override;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.ShowObjectiveWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsAlreadyVisible                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// bool                                    CallFunc_NotEqual_ByteByte_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Not_PreBool_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue12                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsVisible_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionTrackerSubEntry_C::ShowObjectiveWidget(bool bIsAlreadyVisible, bool CallFunc_Not_PreBool_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue12, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTrackerSubEntry_C", "ShowObjectiveWidget");

	Params::MissionTrackerSubEntry_C_ShowObjectiveWidget Parms{};

	Parms.bIsAlreadyVisible = bIsAlreadyVisible;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue12 = CallFunc_BooleanAND_ReturnValue12;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HideObjectiveCompletionIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionTrackerSubEntry_C::HideObjectiveCompletionIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTrackerSubEntry_C", "HideObjectiveCompletionIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IMissionObjectiveWidgetProviderInterface_C>K2Node_DynamicCast_AsMission_Objective_Widget_Provider_Interface(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_DoesImplementInterface_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                      CallFunc_GetObjectiveBulletIcon_BulletIcon             ()
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                      K2Node_MakeStruct_SlateBrush                           ()

void UMissionTrackerSubEntry_C::Update(TScriptInterface<class IMissionObjectiveWidgetProviderInterface_C> K2Node_DynamicCast_AsMission_Objective_Widget_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, const struct FSlateBrush& CallFunc_GetObjectiveBulletIcon_BulletIcon, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTrackerSubEntry_C", "Update");

	Params::MissionTrackerSubEntry_C_Update Parms{};

	Parms.K2Node_DynamicCast_AsMission_Objective_Widget_Provider_Interface = K2Node_DynamicCast_AsMission_Objective_Widget_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_GetObjectiveBulletIcon_BulletIcon = std::move(CallFunc_GetObjectiveBulletIcon_BulletIcon);
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = std::move(K2Node_MakeStruct_SlateBrush);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.DrawAttention
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionTrackerSubEntry_C::DrawAttention()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTrackerSubEntry_C", "DrawAttention");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleMissionUIEvent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMissionState*                MissionElement                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            EventTags                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AFortObjectiveBase*               K2Node_DynamicCast_AsFort_Objective_Base               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGameplayTag>             K2Node_MakeArray_Array                                 (ConstParm, ZeroConstructor, ReferenceParm)
// bool                                    CallFunc_EqualEqual_ObjectObject_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer            CallFunc_MakeGameplayTagContainerFromArray_ReturnValue ()
// bool                                    CallFunc_HasAllTags_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionTrackerSubEntry_C::HandleMissionUIEvent(class AFortMissionState* MissionElement, struct FGameplayTagContainer& EventTags, class AFortObjectiveBase* K2Node_DynamicCast_AsFort_Objective_Base, bool K2Node_DynamicCast_bSuccess, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, bool CallFunc_HasAllTags_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTrackerSubEntry_C", "HandleMissionUIEvent");

	Params::MissionTrackerSubEntry_C_HandleMissionUIEvent Parms{};

	Parms.MissionElement = MissionElement;
	Parms.EventTags = std::move(EventTags);
	Parms.K2Node_DynamicCast_AsFort_Objective_Base = K2Node_DynamicCast_AsFort_Objective_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = std::move(CallFunc_MakeGameplayTagContainerFromArray_ReturnValue);
	Parms.CallFunc_HasAllTags_ReturnValue = CallFunc_HasAllTags_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	EventTags = std::move(Parms.EventTags);
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.CreateCompletionAnnouncement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_IsVisible_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_BasicK2Node_MakeStruct_FortClientAnnouncementData_Basic     ()
// struct FTransform                       CallFunc_MakeTransform_ReturnValue                     (IsPlainOldData, NoDestructor)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*            K2Node_DynamicCast_AsFort_Player_Controller            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>    K2Node_MakeArray_Array                                 (ZeroConstructor, ReferenceParm)
// class AFortClientAnnouncement_Basic*    CallFunc_FinishSpawningActor_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionTrackerSubEntry_C::CreateCompletionAnnouncement(bool CallFunc_IsVisible_ReturnValue, const struct FFortClientAnnouncementData_Basic& K2Node_MakeStruct_FortClientAnnouncementData_Basic, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, class AFortClientAnnouncement_Basic* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTrackerSubEntry_C", "CreateCompletionAnnouncement");

	Params::MissionTrackerSubEntry_C_CreateCompletionAnnouncement Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Basic = std::move(K2Node_MakeStruct_FortClientAnnouncementData_Basic);
	Parms.CallFunc_MakeTransform_ReturnValue = std::move(CallFunc_MakeTransform_ReturnValue);
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.GetHeightEstimate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          CallFunc_GetChildAt_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_DoesImplementInterface_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IMissionObjectiveContentWidgetInterface_C>K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_GetHeightEstimate_Height                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_FMax_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Add_FloatFloat_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UMissionTrackerSubEntry_C::GetHeightEstimate(class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, TScriptInterface<class IMissionObjectiveContentWidgetInterface_C> K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetHeightEstimate_Height, bool CallFunc_IsValid_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTrackerSubEntry_C", "GetHeightEstimate");

	Params::MissionTrackerSubEntry_C_GetHeightEstimate Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface = K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHeightEstimate_Height = CallFunc_GetHeightEstimate_Height;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

