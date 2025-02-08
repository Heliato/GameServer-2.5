#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransformRequiredItems

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemTransformRequiredItems.ItemTransformRequiredItems_C
// 0x0040 (0x0250 - 0x0210)
class UItemTransformRequiredItems_C final  : public UCommonUserWidget
{
public:
	class UImage*                                 CheckMarkIcon;                                     // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CheckMarkSwitcher;                                 // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FailMarkIcon;                                      // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  ItemCountSwitcher;                                 // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                RequiredResourceCost;                              // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                          RequiredResourceIcon;                              // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                RequiredResourceItemCount;                         // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemDisplayNameText*               RequiredResourceNameText;                          // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void UpdateItems(class UFortItem* TransformKey, int32 SacrificePoints, const struct FSlateColor& NotHaveColor, const struct FSlateColor& HaveColor, int32 Temp_int_Variable, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortConversionControlItemDefinition* K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable1, int32 CallFunc_GetRequiredItemQuantity_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetRequiredItemDefinition_ReturnValue, bool Temp_bool_Variable, class FText CallFunc_GetDisplayName_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumInInventory_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, bool Temp_bool_Variable1, int32 Temp_int_Variable12, int32 K2Node_Select_Default, int32 Temp_int_Variable123, const struct FSlateColor& K2Node_Select1_Default, bool Temp_bool_Variable12, int32 K2Node_Select12_Default, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable123, ESlateVisibility K2Node_Select123_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemTransformRequiredItems_C">();
	}
	static class UItemTransformRequiredItems_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemTransformRequiredItems_C>();
	}
};

}

