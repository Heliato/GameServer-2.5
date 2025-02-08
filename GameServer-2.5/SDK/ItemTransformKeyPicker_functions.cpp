#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransformKeyPicker

#include "Basic.hpp"

#include "ItemTransformKeyPicker_classes.hpp"
#include "ItemTransformKeyPicker_parameters.hpp"


namespace SDK
{

// Function ItemTransformKeyPicker.ItemTransformKeyPicker_C.SetSelectedKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*                 AccountKey                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_SetSelectedItem_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformKeyPicker_C::SetSelectedKey(class UFortAccountItem* AccountKey, bool CallFunc_SetSelectedItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformKeyPicker_C", "SetSelectedKey");

	Params::ItemTransformKeyPicker_C_SetSelectedKey Parms{};

	Parms.AccountKey = AccountKey;
	Parms.CallFunc_SetSelectedItem_ReturnValue = CallFunc_SetSelectedItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemTransformKeyPicker.ItemTransformKeyPicker_C.GetSelectedKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        SelectedKey                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          CallFunc_GetSelectedItem_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                        K2Node_DynamicCast_AsFort_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformKeyPicker_C::GetSelectedKey(class UFortItem** SelectedKey, class UObject* CallFunc_GetSelectedItem_ReturnValue, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformKeyPicker_C", "GetSelectedKey");

	Params::ItemTransformKeyPicker_C_GetSelectedKey Parms{};

	Parms.CallFunc_GetSelectedItem_ReturnValue = CallFunc_GetSelectedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Item = K2Node_DynamicCast_AsFort_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedKey != nullptr)
		*SelectedKey = Parms.SelectedKey;
}


// Function ItemTransformKeyPicker.ItemTransformKeyPicker_C.NavigateToSelectedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                        Item                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_SetSelectedItem_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformKeyPicker_C::NavigateToSelectedItem(class UFortItem* InItem, class UFortItem* Item, bool CallFunc_SetSelectedItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformKeyPicker_C", "NavigateToSelectedItem");

	Params::ItemTransformKeyPicker_C_NavigateToSelectedItem Parms{};

	Parms.InItem = InItem;
	Parms.Item = Item;
	Parms.CallFunc_SetSelectedItem_ReturnValue = CallFunc_SetSelectedItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemTransformKeyPicker.ItemTransformKeyPicker_C.NavigateToFirstItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          CallFunc_GetSelectedItem_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_SetSelectedIndex_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformKeyPicker_C::NavigateToFirstItem(class UObject* CallFunc_GetSelectedItem_ReturnValue, bool CallFunc_SetSelectedIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformKeyPicker_C", "NavigateToFirstItem");

	Params::ItemTransformKeyPicker_C_NavigateToFirstItem Parms{};

	Parms.CallFunc_GetSelectedItem_ReturnValue = CallFunc_GetSelectedItem_ReturnValue;
	Parms.CallFunc_SetSelectedIndex_ReturnValue = CallFunc_SetSelectedIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

