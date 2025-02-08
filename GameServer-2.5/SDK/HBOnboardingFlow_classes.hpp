#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HBOnboardingFlow

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass HBOnboardingFlow.HBOnboardingFlow_C
// 0x00A0 (0x03B8 - 0x0318)
class AHBOnboardingFlow_C final  : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*               OnboardingQuest;                                   // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*               PlayPeriodicEventMovieQuest;                       // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayedPeriodicEventMovie;                         // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bHasRecheckedNeedToPlayPeriodicEventMovie;         // 0x0339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E5A[0x6];                                     // 0x033A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    CompleteZoneObjective;                             // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    NameHomebaseObjective;                             // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FMargin                                NotificationPadding;                               // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FDataTableRowHandle                    PlaySatelliteCineObjective;                        // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFortAccountItemDefinition*             ShowNewsToken;                                     // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClientQuestLoginRetryCount;                        // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClientQuestLoginNumRetries;                        // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    PlayPeriodicEventCineObjective;                    // 0x0390(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    StormShieldDefenseObjective;                       // 0x03A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UClass*                                 PeriodicEventMovieAnnouncmentClass;                // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HBOnboardingFlow(int32 EntryPoint, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_AutoSelectSubGame_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue1, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue12, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_IsValid_ReturnValue12, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123456, bool CallFunc_IsMobileApp_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234567, bool CallFunc_IsMobileApp_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345678, EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, TDelegate<void(EFortDialogResult Result, class FName ResultName)> K2Node_CreateDelegate_OutputDelegate12, class FName Temp_name_Variable, EFortDialogResult Temp_byte_Variable, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate123, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue123, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123456789, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue123, bool CallFunc_IsValid_ReturnValue1234, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1234, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12345, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate123456, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345678910, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234567891011, bool CallFunc_IsMobileApp_ReturnValue12, ESubGame CallFunc_GetSubGame_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1234567, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12345678, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123456789101112, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate123456789, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue1234, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345678910111213, bool CallFunc_IsValid_ReturnValue12345, bool Temp_bool_Has_Been_Initd_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12345678910, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1234567891011, class AFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue123456, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate123456789101112, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12345678910111213, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1234567891011121314, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue12345, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, bool CallFunc_IsValid_ReturnValue1234567, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue123456, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1234567891011121314, bool CallFunc_IsValid_ReturnValue12345678, bool CallFunc_Not_PreBool_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate123456789101112131415, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array1, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue123456789, class UObject* K2Node_HandleClientEvent_EventSource12345, class UObject* K2Node_HandleClientEvent_EventFocus12345, struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent12345, const struct FTransform& CallFunc_MakeTransform_ReturnValue12, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12345678910111213141516, class AFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue1, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue1, bool CallFunc_IsValid_ReturnValue12345678910, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1234567891011121314151617, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123456789101112131415, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager1, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue1, bool CallFunc_IsValid_ReturnValue1234567891011, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue1, bool Temp_bool_IsClosed_Variable, bool CallFunc_Not_PreBool_ReturnValue1, class UFortMcpContext* CallFunc_GetContext_ReturnValue12345678910111213141516, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfo_Result, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue12, bool CallFunc_Not_PreBool_ReturnValue12, bool CallFunc_Not_PreBool_ReturnValue123, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue123, bool CallFunc_Not_PreBool_ReturnValue1234, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array12, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue1234567, bool CallFunc_IsValid_ReturnValue123456789101112, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate123456789101112131415161718, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819, class UObject* K2Node_HandleClientEvent_EventSource1234, class UObject* K2Node_HandleClientEvent_EventFocus1234, struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent1234, bool CallFunc_Not_PreBool_ReturnValue12345, class UObject* K2Node_HandleClientEvent_EventSource123, class UObject* K2Node_HandleClientEvent_EventFocus123, struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent123, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920, bool CallFunc_ClassIsChildOf_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819202122, class FText K2Node_CustomEvent_Reason_Title, class FText K2Node_CustomEvent_Reason, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_IsValid_ReturnValue12345678910111213, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue12, class FText CallFunc_MakeLiteralText_ReturnValue123, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920212223, bool CallFunc_NeedsToPlayEventMovie_ReturnValue, bool CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain, bool CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain1, class FText CallFunc_MakeLiteralText_ReturnValue1234, class FText CallFunc_MakeLiteralText_ReturnValue12345, bool CallFunc_CanAccessManagementFeatures_Can_Manage, bool CallFunc_Not_PreBool_ReturnValue123456, class UObject* K2Node_HandleClientEvent_EventSource12, class UObject* K2Node_HandleClientEvent_EventFocus12, struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent12, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021222324, class UFortAsyncAction_LoadCampaignProfiles* CallFunc_LoadCampaignProfiles_ReturnValue, bool CallFunc_IsValid_ReturnValue1234567891011121314, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819202122232425, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920212223242526, class UFortQuestItem* CallFunc_GetOnboardingQuestItem_Result, bool CallFunc_IsValid_ReturnValue123456789101112131415, class UFortQuestItem* CallFunc_GetOnboardingQuestItem_Result1, bool CallFunc_HasCompletedQuest_ReturnValue, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager12, class UFortAsyncAction_EnsureClientQuestLogin* CallFunc_SendEnsureClientQuestLogin_ReturnValue, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager123, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue12, bool CallFunc_IsValid_ReturnValue12345678910111213141516, bool CallFunc_IsValid_ReturnValue1234567891011121314151617, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue1234, class UObject* K2Node_HandleClientEvent_EventSource1, class UObject* K2Node_HandleClientEvent_EventFocus1, struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue12, bool CallFunc_ClassIsChildOf_ReturnValue1, class AFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue12, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue12, bool CallFunc_IsValid_ReturnValue123456789101112131415161718, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021222324252627);
	void ReenterFlow();
	void HandleSubGameSelection();
	void HandleClientEvent_RejoinAvailable(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_SubGameSelection(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_PlayEventMovie(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleMobileManagementRestricted();
	void HandlePlayEventCine();
	void HandleForcedLogout(class FText Reason_Title, class FText Reason);
	void HandleNoEntitlement();
	void HandleCompanionAppOnboardingAbort();
	void HandleClientEvent_OnRejoinGameAbandoned(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_SubGameSelected(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void Handle_Client_Quest_Login_Retries_Exhausted();
	void Handle_Client_Quest_Login_Failed_Retry();
	void HandleNameHomebase();
	void HandlePlaySatelliteCine();
	void HandleSwitchToHomeBase();
	void HandleCheckOnboardingZoneComplete();
	void StartFlow();
	void StartOnboardingZone();
	void HandleClientEvent_HomebasePersonalized(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void StartNameHomebase();
	void StartPlaySatelliteCine();
	void OnStateEntered_BB8A89D3479CA430A9243EB07FF8B51D();
	void OnSuccess_7D1C261A4BE47E3567B8D2885C9E298B();
	void OnFailure_7D1C261A4BE47E3567B8D2885C9E298B();
	void OnSuccess_50CD26324B96B121A5B49DA66113AE5D();
	void OnIgnored_50CD26324B96B121A5B49DA66113AE5D();
	void OnFailure_50CD26324B96B121A5B49DA66113AE5D();
	void OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515();
	void DialogResult_1D81E4B94CE33A3425130BABD5A7283B(EFortDialogResult Result, class FName ResultName);
	void OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2();
	void OnStateEntered_7FBC276641DD576B7417ED97A4734318();
	void OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0();
	void OnSuccess_74930F274B5470B17CF720953FE7E260();
	void OnFailure_74930F274B5470B17CF720953FE7E260();
	void OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6();
	void OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251();
	void OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD();
	void OnCanceled_856A325D44ECC73B857CE5B35313D7CD();
	void OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0();
	void OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnFailure_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnFailure_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33();
	void OnCanceled_856A325D44ECC73B857CE5B301E90D33();
	void OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133();
	void OnCanceled_C2C889344301B8DBF8F046A2A175D133();
	void UserConstructionScript();
	void HandleMcpFailure();
	void ShowBannerSelect(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UBannerSelectionWidget_C* K2Node_DynamicCast_AsBanner_Selection_Widget, bool K2Node_DynamicCast_bSuccess);
	void Handle_Client_Quest_Login_Failed(int32 NewLocalVar_0, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	bool NeedsToPlayEventMovie(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsQuestInProgress_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void RecheckNeedToPlayEventMovie(bool* WaitingToCheckAgain, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue);
	void CanAccessManagementFeatures(bool* Can_Manage, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, EFortFrontEndFeatureState CallFunc_GetFeatureState_OutFeatureState, EFortFrontEndFeatureStateReason CallFunc_GetFeatureState_OutReason, EFortFrontEndFeatureState CallFunc_GetFeatureState_OutFeatureState1, EFortFrontEndFeatureStateReason CallFunc_GetFeatureState_OutReason1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, EFortFrontEndFeatureState CallFunc_GetFeatureState_OutFeatureState12, EFortFrontEndFeatureStateReason CallFunc_GetFeatureState_OutReason12, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue12);
	void GetOnboardingQuestItem(class UFortQuestItem** Result, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue);
	void GetCampaignQuestManager(class UFortQuestManager** QuestManager, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue);
	bool HasCompletedOnboardingObjective(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HBOnboardingFlow_C">();
	}
	static class AHBOnboardingFlow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHBOnboardingFlow_C>();
	}
};

}

