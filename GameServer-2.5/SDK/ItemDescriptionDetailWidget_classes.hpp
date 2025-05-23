#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemDescriptionDetailWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C
// 0x0018 (0x0270 - 0x0258)
class UItemDescriptionDetailWidget_C final  : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       ItemDescriptionTextBlock;                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ShouldShowOnlyIfItemIsSimple;                      // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          InCollectionBook;                                  // 0x0269(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ItemDescriptionDetailWidget(int32 EntryPoint, bool CallFunc_IsItemSimple_Result, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, ESlateVisibility Temp_byte_Variable, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, ESlateVisibility K2Node_Select1_Default);
	void HandlePostDifferentItemToDetailSet();
	void IsItemSimple(bool* Result, TArray<EFortItemType>& K2Node_MakeArray_Array, EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemDescriptionDetailWidget_C">();
	}
	static class UItemDescriptionDetailWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemDescriptionDetailWidget_C>();
	}
};

}

