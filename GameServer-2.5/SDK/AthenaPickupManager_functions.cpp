#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaPickupManager

#include "Basic.hpp"

#include "AthenaPickupManager_classes.hpp"
#include "AthenaPickupManager_parameters.hpp"


namespace SDK
{

// Function AthenaPickupManager.AthenaPickupManager_C.ExecuteUbergraph_AthenaPickupManager
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItem*                   K2Node_CustomEvent_NewItem                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   K2Node_CustomEvent_Count                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UFortWorldItem* NewItem, int32 Count)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// TArray<class UFortWorldItem*>           K2Node_CustomEvent_ItemsAdded                          (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>           K2Node_CustomEvent_ItemsRemoved                        (ConstParm, ZeroConstructor, ReferenceParm)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate1                  (ZeroConstructor, NoDestructor)
// TDelegate<void(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved)>K2Node_CreateDelegate_OutputDelegate12                 (ZeroConstructor, NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate123                (ZeroConstructor, NoDestructor)
// class UFortHUDContext*                  CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*            CallFunc_GetContext_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*            CallFunc_GetContext_ReturnValue12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*            CallFunc_GetContext_ReturnValue123                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate1234               (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*             CallFunc_GetContext_ReturnValue1234                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPickupManager_C::ExecuteUbergraph_AthenaPickupManager(int32 EntryPoint, class UFortWorldItem* K2Node_CustomEvent_NewItem, int32 K2Node_CustomEvent_Count, TDelegate<void(class UFortWorldItem* NewItem, int32 Count)> K2Node_CreateDelegate_OutputDelegate, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsAdded, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsRemoved, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1, TDelegate<void(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved)> K2Node_CreateDelegate_OutputDelegate12, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate123, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue12, class UFortInventoryContext* CallFunc_GetContext_ReturnValue123, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1234, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupManager_C", "ExecuteUbergraph_AthenaPickupManager");

	Params::AthenaPickupManager_C_ExecuteUbergraph_AthenaPickupManager Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NewItem = K2Node_CustomEvent_NewItem;
	Parms.K2Node_CustomEvent_Count = K2Node_CustomEvent_Count;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_ItemsAdded = std::move(K2Node_CustomEvent_ItemsAdded);
	Parms.K2Node_CustomEvent_ItemsRemoved = std::move(K2Node_CustomEvent_ItemsRemoved);
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.K2Node_CreateDelegate_OutputDelegate1234 = K2Node_CreateDelegate_OutputDelegate1234;
	Parms.CallFunc_GetContext_ReturnValue1234 = CallFunc_GetContext_ReturnValue1234;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPickupManager.AthenaPickupManager_C.HandleItemPickup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*                   NewItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPickupManager_C::HandleItemPickup(class UFortWorldItem* NewItem, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupManager_C", "HandleItemPickup");

	Params::AthenaPickupManager_C_HandleItemPickup Parms{};

	Parms.NewItem = NewItem;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPickupManager.AthenaPickupManager_C.HandleBuildingMaterialChanged
// (BlueprintCallable, BlueprintEvent)

void UAthenaPickupManager_C::HandleBuildingMaterialChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupManager_C", "HandleBuildingMaterialChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaPickupManager.AthenaPickupManager_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaPickupManager_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupManager_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaPickupManager.AthenaPickupManager_C.HandleWorldItemListChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>           ItemsAdded                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>           ItemsRemoved                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaPickupManager_C::HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupManager_C", "HandleWorldItemListChanged");

	Params::AthenaPickupManager_C_HandleWorldItemListChanged Parms{};

	Parms.ItemsAdded = std::move(ItemsAdded);
	Parms.ItemsRemoved = std::move(ItemsRemoved);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPickupManager.AthenaPickupManager_C.HandleWorldItemsChanged
// (BlueprintCallable, BlueprintEvent)

void UAthenaPickupManager_C::HandleWorldItemsChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupManager_C", "HandleWorldItemsChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaPickupManager.AthenaPickupManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaPickupManager_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupManager_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaPickupManager.AthenaPickupManager_C.RefreshCounts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CurrentUpdateTime                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_FloatFloat_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_GetRealTimeSeconds_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPickupManager_C::RefreshCounts(float CurrentUpdateTime, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupManager_C", "RefreshCounts");

	Params::AthenaPickupManager_C_RefreshCounts Parms{};

	Parms.CurrentUpdateTime = CurrentUpdateTime;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue = CallFunc_GetRealTimeSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPickupManager.AthenaPickupManager_C.UpdateKeybinds
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaPickupManager_C::UpdateKeybinds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupManager_C", "UpdateKeybinds");

	UObject::ProcessEvent(Func, nullptr);
}

}

