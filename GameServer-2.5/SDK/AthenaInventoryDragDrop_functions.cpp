#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaInventoryDragDrop

#include "Basic.hpp"

#include "AthenaInventoryDragDrop_classes.hpp"
#include "AthenaInventoryDragDrop_parameters.hpp"


namespace SDK
{

// Function AthenaInventoryDragDrop.AthenaInventoryDragDrop_C.ShowDropIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaDragDropAction                   Drop_Action                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaInventoryDragVisual_C*     K2Node_DynamicCast_AsAthena_Inventory_Drag_Visual      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryDragDrop_C::ShowDropIcon(EAthenaDragDropAction Drop_Action, class UAthenaInventoryDragVisual_C* K2Node_DynamicCast_AsAthena_Inventory_Drag_Visual, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryDragDrop_C", "ShowDropIcon");

	Params::AthenaInventoryDragDrop_C_ShowDropIcon Parms{};

	Parms.Drop_Action = Drop_Action;
	Parms.K2Node_DynamicCast_AsAthena_Inventory_Drag_Visual = K2Node_DynamicCast_AsAthena_Inventory_Drag_Visual;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

}

