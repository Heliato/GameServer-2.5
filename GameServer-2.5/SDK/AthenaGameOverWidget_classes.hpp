#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaGameOverWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaGameOverWidget.AthenaGameOverWidget_C
// 0x0140 (0x0528 - 0x03E8)
class UAthenaGameOverWidget_C final  : public UFortActivatablePanel
{
public:
	uint8                                         Pad_3791[0x8];                                     // 0x03E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(Transient, DuplicateTransient)
	class UAthenaGamePhaseWidget_C*               AthenaGamePhaseWidget;                             // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaIndicatorLayer_C*                AthenaIndicatorLayer;                              // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaKillFeedWidget_C*                AthenaKillFeedWidget;                              // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaLocalPlayerHitPointInfo_C*       AthenaLocalPlayerHitPointInfo;                     // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSessionId_C*                     AthenaSessionId;                                   // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaTalkingList_C*                   AthenaTalkingList;                                 // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaViewTargetHitPointInfo_C*        AthenaViewTargetHitPointInfo;                      // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaWatchers_C*                      AthenaWatchers;                                    // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEliminatedOverlay_C*                   EliminatedOverlay;                                 // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        GameOverSwitcher;                                  // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        HealthBarSwitcher;                                 // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMinimapContainer_C*              MinimapContainer;                                  // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      OpenShadowPlayHighlights;                          // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      SoloRequeue;                                       // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSquadList_C*                     TeamInfo;                                          // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWinnerOverlay_C*                       WinnerOverlay;                                     // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    Input_ReturnToLobby;                               // 0x0480(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    Input_NextTeammate;                                // 0x0490(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    Input_PreviousTeammate;                            // 0x04A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    Input_ReportPlayer;                                // 0x04B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    Input_ViewMatchStats;                              // 0x04C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          ForceSpectatorSetupForReportingPlayer;             // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3792[0x7];                                     // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   KillersName;                                       // 0x04D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          DeadAndSpectating;                                 // 0x04F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3793[0x7];                                     // 0x04F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Searching;                                         // 0x04F8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Start_Matchmaking;                                 // 0x0510(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_AthenaGameOverWidget(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, TDelegate<void(const class FString& WinnerPlayerName)> K2Node_CreateDelegate_OutputDelegate12, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, TDelegate<void(int32 NumHighlights)> K2Node_CreateDelegate_OutputDelegate123, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess1, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, class UFortHUDContext* CallFunc_GetContext_ReturnValue12, class AGameStateBase* CallFunc_GetGameState_ReturnValue1, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena1, bool K2Node_DynamicCast_bSuccess12, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1234, class UFortHUDContext* CallFunc_GetContext_ReturnValue123, class UFortHUDContext* CallFunc_GetContext_ReturnValue1234, class UFortHUDContext* CallFunc_GetContext_ReturnValue12345, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena1, bool K2Node_DynamicCast_bSuccess123, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue12, bool CallFunc_CanQueueForSoloMatchmaking_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena12, bool K2Node_DynamicCast_bSuccess1234, TDelegate<void(bool bSuccess)> K2Node_CreateDelegate_OutputDelegate12345, class UCommonButton* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue123, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena123, bool K2Node_DynamicCast_bSuccess12345);
	void BndEvt__SoloRequeue_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void OnDeactivated();
	void BndEvt__OpenShadowPlayHighlights_K2Node_ComponentBoundEvent_188_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void On_Kill_Feed_Updated();
	void Construct();
	void OnActivated();
	void OnPawnDied(struct FFortPlayerDeathReport& DeathReport, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess);
	void OnPlaceChanged();
	void OnViewTargetChanged(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetSpectatingPlayerName_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void HideExtraStuffForSpectating();
	void OnWinnerAnnounced(const class FString& Winner);
	void HighlightCountChanged(int32 HighlightCount, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, ESlateVisibility K2Node_Select_Default);
	void Handle_ReturnToLobby(bool* Passthrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void InputRefresh(bool Temp_bool_Variable, EInputActionState Temp_byte_Variable, EInputActionState Temp_byte_Variable1, bool CallFunc_CanFollowNextOrPreviousTeammate_ReturnValue, EInputActionState K2Node_Select_Default);
	void Handle_FollowNextTeammate(bool* Passthrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void Handle_FollowPreviousTeammate(bool* Passthrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void InputSetup(TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate1, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate12, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate123, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate1234);
	void Handle_ReportPlayer(bool* Passthrough, class AFortPlayerControllerAthena* OwningAthenaPC, const class FString& CallFunc_GetSpectatingPlayerName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, EFortTeamAffiliation CallFunc_GetTeamAffiliation_ReturnValue, const class FString& Temp_string_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const class FString& K2Node_Select_Default, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess1, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFeedback_C* CallFunc_Create_ReturnValue);
	void Handle_ViewMatchStats(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue);
	void OnPlayerOrTeamWon();
	void SetKillersName(struct FFortPlayerDeathReport& FortPlayerDeathReport, bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class FText K2Node_Select_Default);
	bool CanFollowNextOrPreviousTeammate(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanFollowTeammate_ReturnValue);
	void SetViewModel(class UAthenaPlayerViewModel* ViewModel);
	void InGameMatchmakingComplete(bool Success);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaGameOverWidget_C">();
	}
	static class UAthenaGameOverWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaGameOverWidget_C>();
	}
};

}

