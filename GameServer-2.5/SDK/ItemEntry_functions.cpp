#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemEntry

#include "Basic.hpp"

#include "ItemEntry_classes.hpp"
#include "ItemEntry_parameters.hpp"


namespace SDK
{

// Function ItemEntry.ItemEntry_C.Entry Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*              Items_Definition                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemEntry_C::Entry_Selected__DelegateSignature(class UFortItemDefinition* Items_Definition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemEntry_C", "Entry Selected__DelegateSignature");

	Params::ItemEntry_C_Entry_Selected__DelegateSignature Parms{};

	Parms.Items_Definition = Items_Definition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemEntry.ItemEntry_C.ExecuteUbergraph_ItemEntry
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UUserWidget* Widget)>K2Node_Event_Callback                                  (ConstParm, ZeroConstructor, NoDestructor)
// bool                                    K2Node_Event_bExpanded                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   K2Node_Event_InIndexInList                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_bSelected                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          K2Node_Event_InData                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*                  K2Node_Event_OwningList                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemEntry_C::ExecuteUbergraph_ItemEntry(int32 EntryPoint, TDelegate<void(class UUserWidget* Widget)> K2Node_Event_Callback, bool K2Node_Event_bExpanded, int32 K2Node_Event_InIndexInList, bool K2Node_Event_bSelected, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemEntry_C", "ExecuteUbergraph_ItemEntry");

	Params::ItemEntry_C_ExecuteUbergraph_ItemEntry Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Callback = K2Node_Event_Callback;
	Parms.K2Node_Event_bExpanded = K2Node_Event_bExpanded;
	Parms.K2Node_Event_InIndexInList = K2Node_Event_InIndexInList;
	Parms.K2Node_Event_bSelected = K2Node_Event_bSelected;
	Parms.K2Node_Event_InData = K2Node_Event_InData;
	Parms.K2Node_Event_OwningList = K2Node_Event_OwningList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemEntry.ItemEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemEntry.ItemEntry_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*                  OwningList                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemEntry_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemEntry_C", "SetData");

	Params::ItemEntry_C_SetData Parms{};

	Parms.InData = InData;
	Parms.OwningList = OwningList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemEntry.ItemEntry_C.Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UItemEntry_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemEntry_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemEntry.ItemEntry_C.ToggleExpansion
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UItemEntry_C::ToggleExpansion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemEntry_C", "ToggleExpansion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemEntry.ItemEntry_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemEntry_C::SetSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemEntry_C", "SetSelected");

	Params::ItemEntry_C_SetSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemEntry.ItemEntry_C.SetIndexInList
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndexInList                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemEntry_C::SetIndexInList(int32 InIndexInList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemEntry_C", "SetIndexInList");

	Params::ItemEntry_C_SetIndexInList Parms{};

	Parms.InIndexInList = InIndexInList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemEntry.ItemEntry_C.SetExpanded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bExpanded                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemEntry_C::SetExpanded(bool bExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemEntry_C", "SetExpanded");

	Params::ItemEntry_C_SetExpanded Parms{};

	Parms.bExpanded = bExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemEntry.ItemEntry_C.RegisterOnClicked
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void(class UUserWidget* Widget)>Callback                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)

void UItemEntry_C::RegisterOnClicked(TDelegate<void(class UUserWidget* Widget)>& Callback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemEntry_C", "RegisterOnClicked");

	Params::ItemEntry_C_RegisterOnClicked Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemEntry.ItemEntry_C.Private_OnExpanderArrowShiftClicked
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UItemEntry_C::Private_OnExpanderArrowShiftClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemEntry_C", "Private_OnExpanderArrowShiftClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemEntry.ItemEntry_C.OnReleaseToPool
// (Event, Protected, BlueprintEvent)

void UItemEntry_C::OnReleaseToPool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemEntry_C", "OnReleaseToPool");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemEntry.ItemEntry_C.OnAcquireFromPool
// (Event, Protected, BlueprintEvent)

void UItemEntry_C::OnAcquireFromPool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemEntry_C", "OnAcquireFromPool");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemEntry.ItemEntry_C.GetData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UItemEntry_C::GetData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemEntry_C", "GetData");

	Params::ItemEntry_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ItemEntry.ItemEntry_C.IsItemExpanded
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UItemEntry_C::IsItemExpanded() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemEntry_C", "IsItemExpanded");

	Params::ItemEntry_C_IsItemExpanded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ItemEntry.ItemEntry_C.DoesItemHaveChildren
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UItemEntry_C::DoesItemHaveChildren() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemEntry_C", "DoesItemHaveChildren");

	Params::ItemEntry_C_DoesItemHaveChildren Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ItemEntry.ItemEntry_C.GetIndentLevel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UItemEntry_C::GetIndentLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemEntry_C", "GetIndentLevel");

	Params::ItemEntry_C_GetIndentLevel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

