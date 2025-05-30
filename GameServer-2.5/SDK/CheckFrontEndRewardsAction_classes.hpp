#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CheckFrontEndRewardsAction

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FrontEndRewards_Definition_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C
// 0x0068 (0x03E0 - 0x0378)
class ACheckFrontEndRewardsAction_C final  : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0378(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FFrontEndRewards_Definition            RewardsDefinition;                                 // 0x0388(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          ShowRewardsWidget;                                 // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         NewVar_0;                                          // 0x03D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CheckFrontEndRewardsAction(int32 EntryPoint, struct FFortScriptedActionParams& K2Node_Event_Params, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPendingLogout_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Is_FrontEndRewards_Running_bRunning, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, bool CallFunc_CanShowFrontendRewards_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFrontEndRewards_Widget_C* K2Node_DynamicCast_AsFront_End_Rewards_Widget, bool K2Node_DynamicCast_bSuccess);
	void Execute(struct FFortScriptedActionParams& Params_0);
	void UserConstructionScript();
	void CompleteRewardsAction(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateFrontEnd* K2Node_DynamicCast_AsFort_Game_State_Front_End, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue);
	void PopulateMissionRewards(class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_AreMissionRewardsAvailable_ReturnValue);
	void PopulateQuestRewards(const TArray<class UFortQuestItem*>& TempNewQuests, const TArray<class UFortQuestItem*>& TempCompletedQuests, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable1, int32 Temp_int_Array_Index_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, TArray<class UFortQuestItem*>& CallFunc_GetCompletedQuests_Completed_Quests, int32 CallFunc_Array_Length_ReturnValue, class UFortQuestItem* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<struct FFortItemInstanceQuantityPair>& CallFunc_GetPreviewRewards_ReturnValue, bool CallFunc_HasVisibleRewards_ReturnValue, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, class UFortQuestItem* K2Node_DynamicCast_AsFort_Quest_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_IsVisibleToUser_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1);
	void PopulateNewQuests();
	void GetCompletedQuests(TArray<class UFortQuestItem*>* Completed_Quests, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, TArray<class UFortQuestItem*>& CallFunc_GetCompletedQuests_OutCompletedQuests);
	void PopulateUnseenQuests(EFortQuestType QuestType, const TArray<class UFortQuestItem*>& TempNewQuests, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetNextUnseenQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsVisibleToUser_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OpenFrontEndRewards(class UFrontEndRewards_Widget_C* LocalRewardsWidget, TDelegate<void(class UFrontEndRewards_Widget_C* RewardsWidget)> K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsInZone_ReturnValue, TDelegate<void(class UFrontEndRewards_Widget_C* RewardsWidget)> K2Node_CreateDelegate_OutputDelegate1, TDelegate<void(class UFrontEndRewards_Widget_C* RewardsWidget)> K2Node_CreateDelegate_OutputDelegate12, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFrontEndRewards_Widget_C* K2Node_DynamicCast_AsFront_End_Rewards_Widget, bool K2Node_DynamicCast_bSuccess);
	void PopulateRewards();
	void PopulateCollectionBookRewards(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, TArray<struct FFortCollectionBookRewards>& CallFunc_PopulateCollectionBookRewards_OutAvailableRewards, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void HandleRewardsClaimed(class UFrontEndRewards_Widget_C* RewardsWidget, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Clear(TArray<struct FFortCollectionBookRewards>& K2Node_MakeArray_Array, TArray<class UFortExpeditionItem*>& K2Node_MakeArray_Array1, TArray<class UFortQuestItem*>& K2Node_MakeArray_Array12, TArray<class UFortQuestItem*>& K2Node_MakeArray_Array123, const struct FFrontEndRewards_Definition& K2Node_MakeStruct_FrontEndRewards_Definition);
	void HandleRewardsClaimError(class UFrontEndRewards_Widget_C* RewardsWidget, bool CallFunc_Is_FrontEndRewards_Running_bRunning, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void PopulateMissionAlertRewards(class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_HasPendingMissionAlertRewards_ReturnValue);
	void Is_FrontEndRewards_Running(bool* bRunning, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFrontEndRewards_Widget_C* K2Node_DynamicCast_AsFront_End_Rewards_Widget, bool K2Node_DynamicCast_bSuccess);
	bool CanShowFrontendRewards(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_IsInLobby_ReturnValue, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsMatchmakingLocal_ReturnValue, bool CallFunc_IsShowingModalsConfirmationsErrors_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, EFortStoreState CallFunc_GetStoreState_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue12, EFortPartyMemberLocation CallFunc_GetLocalPartyMemberLocation_Location, bool CallFunc_GetLocalPartyMemberLocation_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue123, bool CallFunc_Not_PreBool_ReturnValue);
	void HandleRewardsIgnored(class UFrontEndRewards_Widget_C* RewardsWidget);
	void PopulateDifficultyIncreaseRewards(class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasPendingDifficultyIncreaseRewards_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CheckFrontEndRewardsAction_C">();
	}
	static class ACheckFrontEndRewardsAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACheckFrontEndRewardsAction_C>();
	}
};

}

