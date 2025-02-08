#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RewardsIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RewardsIcon.RewardsIcon_C
// 0x0090 (0x02A0 - 0x0210)
class URewardsIcon_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       MaterializeAnimation;                              // 0x0218(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       DisperseAnimation;                                 // 0x0220(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageIcon;                                         // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBoxIconScale;                                 // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnSlideAnimationFinished;                          // 0x0238(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnDisperseAnimationFinished;                       // 0x0248(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnMaterializeAnimationFinished;                    // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortRewardNotificationData*            Reward;                                            // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SlideAnimStartTime;                                // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SlideAnimStartTranslation;                         // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SlideAnimTargetTranslation;                        // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B16[0x4];                                     // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           SlideAnimHandle;                                   // 0x0280(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UMaterialInstanceDynamic*               IconMaterial;                                      // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnImageClicked;                                    // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSlideAnimationFinished__DelegateSignature(class URewardsIcon_C* Icon);
	void OnDisperseAnimationFinished__DelegateSignature(class URewardsIcon_C* Icon);
	void OnMaterializeAnimationFinished__DelegateSignature(class URewardsIcon_C* Icon);
	void OnImageClicked__DelegateSignature();
	void ExecuteUbergraph_RewardsIcon(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_CustomEvent_percent);
	void WhiteFadeOut(float Percent);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void PlayHideAnimation(const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_IsAnimationPlaying_ReturnValue);
	void Cleanup();
	void PopulateFromReward(class UFortRewardNotificationData* InRewardItem, const struct FLinearColor& TintColor, class UTexture2D* CallFunc_PopulateFromRandomLootLevel_Texture, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleHideAnimationFinished();
	void HandleShowAnimationFinished();
	void HandleSlideAnimationFinished(float TranslatedDist);
	void TickSlideAnimation(float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void PlaySlideAnimation(float TargetTranslation, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue);
	void PopulateFromLootLevel(int32 LootLevel, class UTexture2D** Texture, class UTexture2D* ChestTexture, bool K2Node_SwitchInteger_CmpSuccess);
	void SetScale(float Scale);
	void GetScale(float* Scale);
	void PopulateFromMissionRewards(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortUIRewardReport* CallFunc_GetLastMissionRewardReport_ReturnValue, class UFortRewardMissionData* K2Node_DynamicCast_AsFort_Reward_Mission_Data, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetRewardedChestIndex_ReturnValue, class UTexture2D* CallFunc_PopulateFromLootLevel_Texture);
	void PopulateFromQuestRewards();
	void PopulateFromNewQuest();
	void PopulateFromExpedition();
	void PopulateFromCollectionBookRewards(class UFortRewardCollectionBookData* K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data, bool K2Node_DynamicCast_bSuccess);
	void PopulateFromRandomLootLevel(class UTexture2D** Texture, int32 CallFunc_RandomInteger_ReturnValue, class UTexture2D* CallFunc_PopulateFromLootLevel_Texture);
	void RandomizeDesignView(class UTexture2D* CallFunc_PopulateFromRandomLootLevel_Texture);
	struct FEventReply On_ImageIcon_MouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void PlayShowAnimation();
	void Play_Hide_Animation_Sound(EFrontEndRewardType Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable1, class USoundBase* Temp_object_Variable12, class USoundBase* Temp_object_Variable123, class USoundBase* Temp_object_Variable1234, class USoundBase* Temp_object_Variable12345, class USoundBase* Temp_object_Variable123456, class USoundBase* K2Node_Select_Default);
	void Play_Show_Animation_Sound(EFrontEndRewardType Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable1, class USoundBase* Temp_object_Variable12, class USoundBase* Temp_object_Variable123, class USoundBase* Temp_object_Variable1234, class USoundBase* Temp_object_Variable12345, class USoundBase* Temp_object_Variable123456, class USoundBase* K2Node_Select_Default);
	void PopulateFromMissionAlertRewards(class UFortRewardMissionAlertData* K2Node_DynamicCast_AsFort_Reward_Mission_Alert_Data, bool K2Node_DynamicCast_bSuccess);
	void PopulateFromDifficultyIncreaseRewards(class UFortRewardDifficultyIncrease* K2Node_DynamicCast_AsFort_Reward_Difficulty_Increase, bool K2Node_DynamicCast_bSuccess);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RewardsIcon_C">();
	}
	static class URewardsIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URewardsIcon_C>();
	}
};

}

