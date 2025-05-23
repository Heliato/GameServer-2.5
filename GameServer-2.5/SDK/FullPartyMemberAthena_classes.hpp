#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FullPartyMemberAthena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FullPartyMemberAthena.FullPartyMemberAthena_C
// 0x03D8 (0x05F8 - 0x0220)
class UFullPartyMemberAthena_C final  : public UAthenaPartyMemberBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(Transient, DuplicateTransient)
	class UVerticalBox*                           CONNECTED;                                         // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Connecting;                                        // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_233;                                         // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageEmpty;                                        // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             KillsText;                                         // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               LeaderImageOverlay;                                // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        MemberStateSwitcher;                               // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                   NormalBangWrapper_0;                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Open;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PlayerName;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Speaker;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                    MemberInfo;                                        // 0x0298(0x01A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                              Dimensions;                                        // 0x0440(0x0008)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   DeclineAction;                                     // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   LocalPlayerActionsTitle;                           // 0x0450(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bLocalPlayerAlone;                                 // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3114[0x7];                                     // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_LocalPlayerProfileModal_C*          NewLocalPlayerWidget;                              // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Modified_Power;                                    // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SquadMemberIndex_0;                                // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3115[0x4];                                     // 0x0484(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            MutedBrush;                                        // 0x0488(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            NotTalkingBrush;                                   // 0x0500(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            TalkingBrush;                                      // 0x0578(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsTalking;                                        // 0x05F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsMuted;                                          // 0x05F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_FullPartyMemberAthena(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, TDelegate<void(TArray<int32>& Kills)> K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess, TArray<int32>& CallFunc_GetSquadKills_Kills, bool K2Node_Event_Muted, bool K2Node_Event_bTalking, const class FString& K2Node_Event_PlayerName, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1);
	void PlayerNameChanged(const class FString& Param_PlayerName);
	void TalkingStateChanged(bool bTalking);
	void MutedStateChanged(bool Muted);
	void TeamMemberChanged();
	void OnClicked();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void UpdateMemberInfo(const struct FFortTeamMemberInfo& NewMemberInfo, class UFortPartyContext* CallFunc_GetContext_ReturnValue, EFortPartyMemberDisplayState CallFunc_GetPartyMemberDisplayState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ShowOpen();
	void ShowConnecting();
	void ShowConnected(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerStateAthena* CallFunc_Array_Get_Item, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdateDimensions(const struct FVector2D& NewDimensions);
	class UFullPartyMemberConnected_C* DuplicateConnectedWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFullPartyMemberConnected_C* CallFunc_Create_ReturnValue);
	void UpdateLocalPlayerAction(class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, TArray<struct FUniqueNetIdRepl>& CallFunc_GetTeamMemberIDs_TeamMemberIDs, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void HandleLocalPlayerActionsResult(EFortDialogResult Result, class FName ResultName, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, class UFortPartyContext* CallFunc_GetContext_ReturnValue1);
	void MakeLocalPlayerConfirmActions(bool LocalPlayerAlone, TArray<struct FConfirmationDialogAction>* OutConfirmActions, const TArray<struct FConfirmationDialogAction>& ConfirmActions, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1);
	void InitializeConnectedWidget(class UFullPartyMemberConnected_C* ConnectedWidget);
	void HandleAthenaTeamMemberChanged(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, class AFortPlayerStateAthena* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HandleAthenaTeamMemberMuteChanged(bool Param_bIsMuted);
	void HandleAthenaTeamMemberTalkingChanged(bool Param_bIsTalking);
	void HighlightEmptyBanner(bool BannerIsHighlighted, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable1, class UTexture2D* K2Node_Select_Default);
	void UpdateMicIndicator();
	void HandleAthenaTeamMemberKillsChanged(TArray<int32>& Kills, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Get_Item, class FText CallFunc_Conv_IntToText_ReturnValue1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FullPartyMemberAthena_C">();
	}
	static class UFullPartyMemberAthena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFullPartyMemberAthena_C>();
	}
};

}

