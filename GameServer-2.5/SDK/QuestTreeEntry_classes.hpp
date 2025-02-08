#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestTreeEntry

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestTreeEntry.QuestTreeEntry_C
// 0x00B0 (0x0840 - 0x0790)
class UQuestTreeEntry_C final  : public UFortQuestTreeItemWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0790(0x0008)(Transient, DuplicateTransient)
	class UBP_QuestExpiresWidget_C*               BP_QuestExpiresWidget;                             // 0x0798(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ExpansionIndicator;                                // 0x07A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageComplete;                                     // 0x07A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        MainOrSubCategory;                                 // 0x07B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Name_QuestTreeEntry_C;                             // 0x07B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                   NormalBangWrapper;                                 // 0x07C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PercentageComplete;                                // 0x07C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          PercentageCompleteIndicator;                       // 0x07D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PinnedEmptyBox;                                    // 0x07D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PinnedImage;                                       // 0x07E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        PinnedSwitcher;                                    // 0x07E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               QuestIconOverlay;                                  // 0x07F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 QuestTreeIcon;                                     // 0x07F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcherProgress;                            // 0x0800(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestItem*                         CurrentQuest;                                      // 0x0808(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPinned_;                                         // 0x0810(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D01[0x7];                                     // 0x0811(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortQuestCategory*                     CurrentQuestCategory;                              // 0x0818(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TwitchIconColor;                                   // 0x0820(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DefaultIconColor;                                  // 0x0830(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_QuestTreeEntry(int32 EntryPoint, bool Temp_bool_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_IsValid_ReturnValue123, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue12, bool CallFunc_IsValid_ReturnValue1234, class UFortQuestCategory* K2Node_Event_Category1, class UFortQuestItem* K2Node_Event_Category, bool K2Node_Event_bExpanded, int32 CallFunc_Conv_BoolToInt_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, ESlateVisibility Temp_byte_Variable, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAssetNull_ReturnValue, class UFortQuestItemDefinition* CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition, EFortQuestType CallFunc_GetQuestType_ReturnValue, ESlateVisibility Temp_byte_Variable1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable1, bool CallFunc_BooleanOR_ReturnValue1, ESlateVisibility K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, int32 Temp_int_Variable, int32 Temp_int_Variable1, class UFortQuestItem* K2Node_CustomEvent_Quest, TDelegate<void(class UFortQuestItem* Quest)> K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable12, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1, int32 Temp_int_Variable123, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12, EFortQuestState Temp_byte_Variable12, int32 K2Node_Select12_Default);
	void OnDeselected();
	void Destruct();
	void OnQuestSeen_Event_0(class UFortQuestItem* Quest);
	void OnHovered();
	void OnQuestsUpdated();
	void OnSelected();
	void ExpansionChanged(bool bExpanded);
	void SetupAsQuest(class UFortQuestItem* Category);
	void SetupAsCategory(class UFortQuestCategory* Category);
	void SetPinnedState(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool CallFunc_IsQuestPinned_ReturnValue);
	void Unpin();
	void SetCompletionPercentage(bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetPercentageComplete_ReturnValue, int32 CallFunc_FFloor_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Update_Quest_Item_Bang_State(bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue);
	void Update_Quest_Item_Seen(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Update_Quest_Category_Bang_State(bool CallFunc_HasUnseenQuests_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Quest_Category_Have_Unseen_Quests(bool* HasUnseen, bool LocalHasUnseen, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortQuestItem* CallFunc_Array_Get_Item, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue12, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void Get_Quest_Item_Def(class UFortQuestItemDefinition** AsFort_Quest_Item_Definition, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortQuestItemDefinition* K2Node_DynamicCast_AsFort_Quest_Item_Definition, bool K2Node_DynamicCast_bSuccess);
	void Set_Quest_Display_Name(class FText LocalQuestName, bool Temp_bool_Variable, class FText CallFunc_Get_Streaming_Attached_Quest_Name_ModifiedName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Is_Streaming_Quest_bStreamingQuest, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default, class FText CallFunc_GetDisplayName_ReturnValue);
	void Set_Quest_Category_Display_Name();
	void Is_Streaming_Quest(bool* bStreamingQuest, class UFortQuestItemDefinition* CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition, EFortQuestType CallFunc_GetQuestType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1);
	void Get_Streaming_Attached_Quest_Name(class FText* ModifiedName, EFortQuestType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable12, class FText Temp_text_Variable123, class FText Temp_text_Variable1234, class FText Temp_text_Variable12345, class FText Temp_text_Variable123456, class FText Temp_text_Variable1234567, class FText Temp_text_Variable12345678, class FText Temp_text_Variable123456789, class FText Temp_text_Variable12345678910, class FText Temp_text_Variable1234567891011, class FText Temp_text_Variable123456789101112, class FText Temp_text_Variable12345678910111213, class FText Temp_text_Variable1234567891011121314, class UFortQuestItemDefinition* CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition, EFortQuestType CallFunc_GetQuestType_ReturnValue, class FText K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestTreeEntry_C">();
	}
	static class UQuestTreeEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestTreeEntry_C>();
	}
};

}

