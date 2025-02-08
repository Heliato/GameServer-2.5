#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaInventoryDragDrop

#include "Basic.hpp"

#include "AthenaDragDropAction_structs.hpp"


namespace SDK::Params
{

// Function AthenaInventoryDragDrop.AthenaInventoryDragDrop_C.ShowDropIcon
// 0x0018 (0x0018 - 0x0000)
struct AthenaInventoryDragDrop_C_ShowDropIcon final 
{
public:
	EAthenaDragDropAction                         Drop_Action;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37DB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaInventoryDragVisual_C*           K2Node_DynamicCast_AsAthena_Inventory_Drag_Visual; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

