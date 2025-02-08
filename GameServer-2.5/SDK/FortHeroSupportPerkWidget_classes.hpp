#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortHeroSupportPerkWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C
// 0x0088 (0x0588 - 0x0500)
class UFortHeroSupportPerkWidget_C final  : public UFortHeroSupportPerkWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0500(0x0008)(Transient, DuplicateTransient)
	class UCommonBorder*                          BorderShell;                                       // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  DescriptionTextSwitcher;                           // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          EvolutionBorder;                                   // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSquadBonusType;                               // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InvalidForSlotImage;                               // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       InvalidSlotText;                                   // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LockedPerkImage;                                   // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          PerkBoxBorder;                                     // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SquadBonusTypeText;                                // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StarsRequired;                                     // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          StatFocus;                                         // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       UnlockAtText;                                      // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         UnlockText;                                        // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 Name_Text_Style;                                   // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                 Description_Text_Style;                            // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SupportTypeMatchesDisplay;                         // 0x0580(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DisplayHeaderIfActive;                             // 0x0581(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          DisplayedOutsideOfHeroSquad;                       // 0x0582(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_FortHeroSupportPerkWidget(int32 EntryPoint);
	void OnStateChanged();
	void Construct();
	void OnSupportTypeUpdated();
	void OnHeroUpdated();
	void Update(bool Param_DisplayedOutsideOfHeroSquad, EFortSupportBonusType TargetedSupportType, EFortSupportBonusType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable1, class UTexture2D* Temp_object_Variable12, EFortSupportBonusType Temp_byte_Variable1, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable12, class UTexture2D* K2Node_Select_Default, class FText K2Node_Select1_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateVisibility();
	void UpdateLockedVisibility(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, bool CallFunc_IsPerkUnlocked_ReturnValue, bool CallFunc_IsPerkUnlocked_ReturnValue1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor1, ESlateVisibility K2Node_Select_Default, struct FLinearColor& K2Node_Select1_Default);
	void UpdateActiveDisplay(bool Temp_bool_Variable, bool Temp_bool_Variable1, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, bool Temp_bool_Variable12, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable123, ESlateVisibility Temp_byte_Variable12, ESlateVisibility Temp_byte_Variable123, bool Temp_bool_Variable1234, bool Temp_bool_Variable12345, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable123456, ESlateVisibility Temp_byte_Variable1234, ESlateVisibility Temp_byte_Variable12345, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor1, bool CallFunc_IsPerkActive_ReturnValue, bool CallFunc_IsInInvalidSlot_InInvalidSlot, struct FLinearColor& K2Node_Select_Default, ESlateVisibility K2Node_Select1_Default, bool CallFunc_IsInInvalidSlot_InInvalidSlot1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsPerkActive_ReturnValue1, ESlateVisibility K2Node_Select12_Default, class UClass* K2Node_Select123_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, ESlateVisibility K2Node_Select1234_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1, struct FSlateBrush& K2Node_Select12345_Default, bool CallFunc_BooleanOR_ReturnValue, int32 K2Node_Select123456_Default);
	void UpdateEmptyVisibility(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, bool CallFunc_IsPerkEmpty_ReturnValue, ESlateVisibility K2Node_Select_Default);
	void UpdateComparisonVisibility(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, bool CallFunc_IsPerkHighlighted_ReturnValue, ESlateVisibility K2Node_Select_Default);
	void IsInInvalidSlot(bool* InInvalidSlot, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_IsPerkInCorrectSlot_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue12, bool CallFunc_IsHeroInSupportSlot_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortHeroSupportPerkWidget_C">();
	}
	static class UFortHeroSupportPerkWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHeroSupportPerkWidget_C>();
	}
};

}

