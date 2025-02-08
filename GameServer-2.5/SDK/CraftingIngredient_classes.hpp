#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CraftingIngredient

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "EFortUITheme_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CraftingIngredient.CraftingIngredient_C
// 0x0060 (0x0298 - 0x0238)
class UCraftingIngredient_C final  : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 IconImage;                                         // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       InventoryText;                                     // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Divider;                                   // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TotalText;                                         // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_831;                                   // 0x0260(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortItemQuantityPair                  Ingredient;                                        // 0x0268(0x0030)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_CraftingIngredient(int32 EntryPoint);
	void Construct();
	void Refresh(int32 TotalCount, int32 InventoryCount, EFortUITheme Temp_byte_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, EFortUITheme Temp_byte_Variable1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool Temp_bool_Variable, class UFortItemDefinition* K2Node_DynamicCast_AsFort_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_GetNumInInventory_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, EFortUITheme K2Node_Select_Default, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	class UWidget* Get_Tooltip(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFortItemDefinition* K2Node_DynamicCast_AsFort_Item_Definition, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetSingleLineDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void ShowDivider(bool Show, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, ESlateVisibility K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CraftingIngredient_C">();
	}
	static class UCraftingIngredient_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCraftingIngredient_C>();
	}
};

}

