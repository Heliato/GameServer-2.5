#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabGameOptionsHud

#include "Basic.hpp"

#include "TabGameOptionsHud_classes.hpp"
#include "TabGameOptionsHud_parameters.hpp"


namespace SDK
{

// Function TabGameOptionsHud.TabGameOptionsHud_C.ExecuteUbergraph_TabGameOptionsHud
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          K2Node_ComponentBoundEvent_Item                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      K2Node_ComponentBoundEvent_Widget                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenuHudRotator_C*         K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void(int32 Selected_Index, const struct FGameplayTag& Gameplay_Tag)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// class UUserWidget*                      K2Node_ComponentBoundEvent_Widget1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenuHudRotator_C*         K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator1         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   K2Node_CustomEvent_Selected_Index                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     K2Node_CustomEvent_Gameplay_Tag                        (NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Conv_IntToBool_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          CallFunc_GetItemAt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsHud_C::ExecuteUbergraph_TabGameOptionsHud(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UOptionsMenuHudRotator_C* K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator, bool K2Node_DynamicCast_bSuccess, TDelegate<void(int32 Selected_Index, const struct FGameplayTag& Gameplay_Tag)> K2Node_CreateDelegate_OutputDelegate, class UUserWidget* K2Node_ComponentBoundEvent_Widget1, class UOptionsMenuHudRotator_C* K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator1, bool K2Node_DynamicCast_bSuccess1, int32 K2Node_CustomEvent_Selected_Index, const struct FGameplayTag& K2Node_CustomEvent_Gameplay_Tag, bool CallFunc_Conv_IntToBool_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGameOptionsHud_C", "ExecuteUbergraph_TabGameOptionsHud");

	Params::TabGameOptionsHud_C_ExecuteUbergraph_TabGameOptionsHud Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator = K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Widget1 = K2Node_ComponentBoundEvent_Widget1;
	Parms.K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator1 = K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_CustomEvent_Selected_Index = K2Node_CustomEvent_Selected_Index;
	Parms.K2Node_CustomEvent_Gameplay_Tag = std::move(K2Node_CustomEvent_Gameplay_Tag);
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGameOptionsHud.TabGameOptionsHud_C.BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_37_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsHud_C::BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_37_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGameOptionsHud_C", "BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_37_OnListViewItemWidgetCreated__DelegateSignature");

	Params::TabGameOptionsHud_C_BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_37_OnListViewItemWidgetCreated__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGameOptionsHud.TabGameOptionsHud_C.BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsHud_C::BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGameOptionsHud_C", "BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature");

	Params::TabGameOptionsHud_C_BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGameOptionsHud.TabGameOptionsHud_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabGameOptionsHud_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGameOptionsHud_C", "CenterOnTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGameOptionsHud.TabGameOptionsHud_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabGameOptionsHud_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGameOptionsHud_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGameOptionsHud.TabGameOptionsHud_C.HUD Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Selected_Index                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     Gameplay_Tag                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsHud_C::HUD_Changed(int32 Selected_Index, const struct FGameplayTag& Gameplay_Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGameOptionsHud_C", "HUD Changed");

	Params::TabGameOptionsHud_C_HUD_Changed Parms{};

	Parms.Selected_Index = Selected_Index;
	Parms.Gameplay_Tag = std::move(Gameplay_Tag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGameOptionsHud.TabGameOptionsHud_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabGameOptionsHud_C::UpdateOptionsTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGameOptionsHud_C", "UpdateOptionsTab");

	UObject::ProcessEvent(Func, nullptr);
}

}

