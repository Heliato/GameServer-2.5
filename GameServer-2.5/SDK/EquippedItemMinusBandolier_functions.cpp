#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EquippedItemMinusBandolier

#include "Basic.hpp"

#include "EquippedItemMinusBandolier_classes.hpp"
#include "EquippedItemMinusBandolier_parameters.hpp"


namespace SDK
{

// Function EquippedItem-Bandolier.EquippedItem-Bandolier_C.UpdateCurrent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Current                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAmmoItemDefinition*          AmmoData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Clamp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakVector2D_X                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakVector2D_Y                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Multiply_IntFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        CallFunc_MakeVector2D_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                      K2Node_MakeStruct_SlateBrush                           ()

void UEquippedItemMinusBandolier_C::UpdateCurrent(int32 Current, class UFortAmmoItemDefinition* AmmoData, int32 CallFunc_Clamp_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquippedItem-Bandolier_C", "UpdateCurrent");

	Params::EquippedItemMinusBandolier_C_UpdateCurrent Parms{};

	Parms.Current = Current;
	Parms.AmmoData = AmmoData;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = std::move(CallFunc_MakeVector2D_ReturnValue);
	Parms.K2Node_MakeStruct_SlateBrush = std::move(K2Node_MakeStruct_SlateBrush);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquippedItem-Bandolier.EquippedItem-Bandolier_C.UpdateCapacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Capacity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAmmoItemDefinition*          AmmoData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Clamp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakVector2D_X                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakVector2D_Y                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Multiply_IntFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        CallFunc_MakeVector2D_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                      K2Node_MakeStruct_SlateBrush                           ()

void UEquippedItemMinusBandolier_C::UpdateCapacity(int32 Capacity, class UFortAmmoItemDefinition* AmmoData, int32 CallFunc_Clamp_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquippedItem-Bandolier_C", "UpdateCapacity");

	Params::EquippedItemMinusBandolier_C_UpdateCapacity Parms{};

	Parms.Capacity = Capacity;
	Parms.AmmoData = AmmoData;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = std::move(CallFunc_MakeVector2D_ReturnValue);
	Parms.K2Node_MakeStruct_SlateBrush = std::move(K2Node_MakeStruct_SlateBrush);

	UObject::ProcessEvent(Func, &Parms);
}

}

