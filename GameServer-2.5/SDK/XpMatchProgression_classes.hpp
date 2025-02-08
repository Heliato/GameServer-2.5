#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpMatchProgression

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass XpMatchProgression.XpMatchProgression_C
// 0x0050 (0x0260 - 0x0210)
class UXpMatchProgression_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class USmallLevelUpReward_C*                  LevelUpReward;                                     // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaPlayerLevel_C*                   PlayerLevelBar;                                    // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpReasonFeedItem_C*                    TotalScore;                                        // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpReasonFeedItem_C*                    TotalXp;                                           // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpReasonFeed_C*                        XpReasonFeed;                                      // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FAthenaMatchXpReward>           XpRewards;                                         // 0x0240(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         XpRewardIndex;                                     // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayingLeveling;                                   // 0x0254(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32ED[0x3];                                     // 0x0255(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaPlayerMatchReport*               Report;                                            // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_XpMatchProgression(int32 EntryPoint, class UAthenaPlayerMatchReport* K2Node_CustomEvent_Report, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 K2Node_ComponentBoundEvent_Level, int32 CallFunc_GetTotalScoreEarned_ReturnValue, int32 CallFunc_GetTotalSeasonalXpEarned_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue1, TArray<struct FAthenaMatchXpReward>& CallFunc_GetXpRewards_XpRewards);
	void BndEvt__PlayerLevelBar_K2Node_ComponentBoundEvent_3_LevelChanged__DelegateSignature(int32 Level);
	void Destruct();
	void Finished_Playing_Animation();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Play_Xp_Rewards(class UAthenaPlayerMatchReport* Param_Report);
	void SetPlayerState(class AFortPlayerControllerAthena* PlayerController, const struct FAthenaLevelInfo& AthenaLevelInfo);
	void TickRewardAnimation(bool CallFunc_IsReadyForNextXpEvent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool IsReadyForNextXpEvent(bool CallFunc_IsReadyForNextXpReward_Ready, bool CallFunc_IsReadyForNextXpReward_Ready1, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateRewardForLevel(int32 SeasonLevel, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, const struct FFortItemInstanceQuantityPair& CallFunc_GetSeasonLevelUpReward_Reward, int32 CallFunc_GetSeasonLevelUpReward_RewardLevel, bool CallFunc_GetSeasonLevelUpReward_ReturnValue, bool CallFunc_IsValid_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"XpMatchProgression_C">();
	}
	static class UXpMatchProgression_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpMatchProgression_C>();
	}
};

}

