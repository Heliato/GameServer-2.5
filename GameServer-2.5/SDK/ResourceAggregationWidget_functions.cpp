#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ResourceAggregationWidget

#include "Basic.hpp"

#include "ResourceAggregationWidget_classes.hpp"
#include "ResourceAggregationWidget_parameters.hpp"


namespace SDK
{

// Function ResourceAggregationWidget.ResourceAggregationWidget_C.ExecuteUbergraph_ResourceAggregationWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*                  CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class ABuildingSMActor* BuildingSMActor, class UFortItem* PotentialWorldItem, bool bDestroyed, bool bJustHitWeakspot)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate1                  (ZeroConstructor, NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate12                 (ZeroConstructor, NoDestructor)

void UResourceAggregationWidget_C::ExecuteUbergraph_ResourceAggregationWidget(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, TDelegate<void(class ABuildingSMActor* BuildingSMActor, class UFortItem* PotentialWorldItem, bool bDestroyed, bool bJustHitWeakspot)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResourceAggregationWidget_C", "ExecuteUbergraph_ResourceAggregationWidget");

	Params::ResourceAggregationWidget_C_ExecuteUbergraph_ResourceAggregationWidget Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResourceAggregationWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResourceAggregationWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.HandleDamagedResourceObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingSMActor*                 DamagedResourceObject                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                        PotentialResource                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Destroyed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    WeakpointDamage                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    LocalDestroyed                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    LocalWeakpointDamage                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                        LocalPotentialResource                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingSMActor*                 LocalDamagedResourceObject                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                     CallFunc_K2_SetTimer_ReturnValue                       (NoDestructor)
// class FText                             CallFunc_Conv_IntToText_ReturnValue                    ()
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ZeroConstructor, ReferenceParm)
// class FText                             CallFunc_Format_ReturnValue                            ()
// bool                                    CallFunc_EqualEqual_ObjectObject_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResourceAggregationWidget_C::HandleDamagedResourceObject(class ABuildingSMActor* DamagedResourceObject, class UFortItem* PotentialResource, bool Destroyed, bool WeakpointDamage, bool LocalDestroyed, bool LocalWeakpointDamage, class UFortItem* LocalPotentialResource, class ABuildingSMActor* LocalDamagedResourceObject, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResourceAggregationWidget_C", "HandleDamagedResourceObject");

	Params::ResourceAggregationWidget_C_HandleDamagedResourceObject Parms{};

	Parms.DamagedResourceObject = DamagedResourceObject;
	Parms.PotentialResource = PotentialResource;
	Parms.Destroyed = Destroyed;
	Parms.WeakpointDamage = WeakpointDamage;
	Parms.LocalDestroyed = LocalDestroyed;
	Parms.LocalWeakpointDamage = LocalWeakpointDamage;
	Parms.LocalPotentialResource = LocalPotentialResource;
	Parms.LocalDamagedResourceObject = LocalDamagedResourceObject;
	Parms.CallFunc_K2_SetTimer_ReturnValue = std::move(CallFunc_K2_SetTimer_ReturnValue);
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.ForceHideWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UResourceAggregationWidget_C::ForceHideWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResourceAggregationWidget_C", "ForceHideWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.HideWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UResourceAggregationWidget_C::HideWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResourceAggregationWidget_C", "HideWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.ResetSourceOfResource
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingSMActor*                 InResourceObject                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                        InPotentialResource                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetNumInStack_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                      CallFunc_GetItemSmallPreviewImageBrush_ReturnValue     ()

void UResourceAggregationWidget_C::ResetSourceOfResource(class ABuildingSMActor* InResourceObject, class UFortItem* InPotentialResource, int32 CallFunc_GetNumInStack_ReturnValue, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResourceAggregationWidget_C", "ResetSourceOfResource");

	Params::ResourceAggregationWidget_C_ResetSourceOfResource Parms{};

	Parms.InResourceObject = InResourceObject;
	Parms.InPotentialResource = InPotentialResource;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.CallFunc_GetItemSmallPreviewImageBrush_ReturnValue = std::move(CallFunc_GetItemSmallPreviewImageBrush_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.TriggerAggregateAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UResourceAggregationWidget_C::TriggerAggregateAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResourceAggregationWidget_C", "TriggerAggregateAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.UpdateAggregateResourceCollected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        InPotentialResource                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetNumInStack_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResourceAggregationWidget_C::UpdateAggregateResourceCollected(class UFortItem* InPotentialResource, int32 CallFunc_GetNumInStack_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResourceAggregationWidget_C", "UpdateAggregateResourceCollected");

	Params::ResourceAggregationWidget_C_UpdateAggregateResourceCollected Parms{};

	Parms.InPotentialResource = InPotentialResource;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

