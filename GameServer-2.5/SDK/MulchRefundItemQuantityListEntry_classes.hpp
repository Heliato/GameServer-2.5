#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MulchRefundItemQuantityListEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C
// 0x0010 (0x0248 - 0x0238)
class UMulchRefundItemQuantityListEntry_C final  : public UFortItemQuantityListEntryBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UItemCountRecycling_C*                  ItemCountRecycling;                                // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MulchRefundItemQuantityListEntry(int32 EntryPoint, bool K2Node_Event_IsBeingReset);
	void Construct();
	void HandleDifferentItemOrQuantitySetBP(bool IsBeingReset);
	void UpdateItemAndQuantity(bool DirectlySetQuantity, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MulchRefundItemQuantityListEntry_C">();
	}
	static class UMulchRefundItemQuantityListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMulchRefundItemQuantityListEntry_C>();
	}
};

}

