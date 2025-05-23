#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroSquadSlotsView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HeroSquadSlotsView.HeroSquadSlotsView_C
// 0x0020 (0x0318 - 0x02F8)
class UHeroSquadSlotsView_C final  : public UFortSquadSlotsView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F8(0x0008)(Transient, DuplicateTransient)
	class USquadSlotGroup_C*                      BonusSquadSlotGroup;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USquadSlotGroup_C*                      DefendersSquadSlotGroup;                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USquadSlotGroup_C*                      PrimarySquadSlotGroup;                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HeroSquadSlotsView(int32 EntryPoint, TDelegate<void(class FName SquadId, int32 SquadSlotIndex)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class FName SquadId, int32 SquadSlotIndex)> K2Node_CreateDelegate_OutputDelegate1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Construct();
	class UFortSquadSlotSelectorButton* CreateAndAddSquadSlotButton(int32 SquadSlotIndex, struct FHomebaseSquadSlot& SquadSlotDefinition, class UWidget** OutSquadSlotButtonHost, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue12, class FText CallFunc_MakeLiteralText_ReturnValue123, class FText Temp_text_Variable, class FText Temp_text_Variable1, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class USimpleSquadSlotButton_C* CallFunc_Create_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<class UWidget*>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue, class FText Temp_text_Variable12, class FText Temp_text_Variable123, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class USimpleSquadSlotButton_C* CallFunc_Create_ReturnValue1, bool Temp_bool_Variable1, TArray<class UWidget*>& K2Node_MakeArray_Array12, const struct FSlateBrush& K2Node_Select1_Default, bool Temp_bool_Variable12, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue12, class FText K2Node_Select12_Default, class USimpleSquadSlotButton_C* CallFunc_Create_ReturnValue12, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array123, TArray<class UWidget*>& K2Node_MakeArray_Array1234, class FText CallFunc_Format_ReturnValue1);
	void HandleSquadNavigation(class FName SquadId, int32 SlotIndex, int32 SquadSlotId, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void HighlightSlotByIndex(int32 Param_Index, bool K2Node_SwitchInteger_CmpSuccess);
	void UndarkenAllSlots();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HeroSquadSlotsView_C">();
	}
	static class UHeroSquadSlotsView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHeroSquadSlotsView_C>();
	}
};

}

