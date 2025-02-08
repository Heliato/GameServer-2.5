#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemCraftingIngredientListEntryHaveNeed

#include "Basic.hpp"

#include "ItemCraftingIngredientListEntryHaveNeed_classes.hpp"
#include "ItemCraftingIngredientListEntryHaveNeed_parameters.hpp"


namespace SDK
{

// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeed
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsBeingReset                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCraftingIngredientListEntryHaveNeed_C::ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeed(int32 EntryPoint, bool K2Node_Event_IsBeingReset, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeed_C", "ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeed");

	Params::ItemCraftingIngredientListEntryHaveNeed_C_ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeed Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsBeingReset = K2Node_Event_IsBeingReset;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    IsBeingReset                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCraftingIngredientListEntryHaveNeed_C::HandleDifferentItemOrQuantitySetBP(bool IsBeingReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeed_C", "HandleDifferentItemOrQuantitySetBP");

	Params::ItemCraftingIngredientListEntryHaveNeed_C_HandleDifferentItemOrQuantitySetBP Parms{};

	Parms.IsBeingReset = IsBeingReset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCraftingIngredientListEntryHaveNeed_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeed_C", "PreConstruct");

	Params::ItemCraftingIngredientListEntryHaveNeed_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.DoDesignTimeRandomization
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Temp_int_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*              Temp_object_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*              Temp_object_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*              Temp_object_Variable12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*              Temp_object_Variable123                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_RandomInteger_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_RandomInteger_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*              K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemQuantityPair            CallFunc_MakeItemQuantityPair_ReturnValue              ()

void UItemCraftingIngredientListEntryHaveNeed_C::DoDesignTimeRandomization(int32 Temp_int_Variable, class UFortItemDefinition* Temp_object_Variable, class UFortItemDefinition* Temp_object_Variable1, class UFortItemDefinition* Temp_object_Variable12, class UFortItemDefinition* Temp_object_Variable123, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue1, class UFortItemDefinition* K2Node_Select_Default, const struct FFortItemQuantityPair& CallFunc_MakeItemQuantityPair_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeed_C", "DoDesignTimeRandomization");

	Params::ItemCraftingIngredientListEntryHaveNeed_C_DoDesignTimeRandomization Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable12 = Temp_object_Variable12;
	Parms.Temp_object_Variable123 = Temp_object_Variable123;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue1 = CallFunc_RandomInteger_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeItemQuantityPair_ReturnValue = std::move(CallFunc_MakeItemQuantityPair_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInventoryContext*            CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*              CallFunc_GetItemDefinition_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetNumInInventory_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCraftingIngredientListEntryHaveNeed_C::Refresh(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue, int32 CallFunc_GetNumInInventory_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeed_C", "Refresh");

	Params::ItemCraftingIngredientListEntryHaveNeed_C_Refresh Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetItemDefinition_ReturnValue = CallFunc_GetItemDefinition_ReturnValue;
	Parms.CallFunc_GetNumInInventory_ReturnValue = CallFunc_GetNumInInventory_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.GetToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*              CallFunc_GetItemDefinition_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_GetShortDescription_ReturnValue               ()
// class FText                             CallFunc_GetDisplayName_ReturnValue                    ()
// class UFortGlobalUIContext*             CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      CallFunc_Create_Basic_Tooltip_Output                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsUsingGamepad_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UItemCraftingIngredientListEntryHaveNeed_C::GetToolTipWidget(class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCraftingIngredientListEntryHaveNeed_C", "GetToolTipWidget");

	Params::ItemCraftingIngredientListEntryHaveNeed_C_GetToolTipWidget Parms{};

	Parms.CallFunc_GetItemDefinition_ReturnValue = CallFunc_GetItemDefinition_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetShortDescription_ReturnValue = CallFunc_GetShortDescription_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

