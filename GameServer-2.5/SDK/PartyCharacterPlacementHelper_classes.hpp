#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PartyCharacterPlacementHelper

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C
// 0x0118 (0x0430 - 0x0318)
class APartyCharacterPlacementHelper_C final  : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(Transient, DuplicateTransient)
	class UWidgetComponent*                       LobbyPlayerPadBottom;                              // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       LobbyPlayerAddPlayer;                              // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       LobbyPlayerPadTop;                                 // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       LobbyPlayerPadGadgets;                             // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   UnderlightBluePoint02;                             // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   UnderlightBluePoint01;                             // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    UnderlightBlue02;                                  // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    UnderlightBlue01;                                  // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    RimSpotLight;                                      // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    TopSpotLight;                                      // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        LightsParent;                                      // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PSMinusNoPlayerMinusSparkle;                       // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PSMinusNoPlayerMinusSwirl02;                       // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PSMinusNoPlayerMinusSwirl01;                       // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Lobby_Character_Pad_Light_Ring;                 // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Lobby_Character_Pad;                            // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CharacterPlacement;                                // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayerID;                                          // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PreviewMesh;                                       // 0x03B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43E3[0x3];                                     // 0x03B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            Mesh;                                              // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsPlayerSelected;                                 // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PlayerOnPad;                                       // 0x03C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43E4[0x6];                                     // 0x03C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MID_Pad;                                           // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugFakePlayer;                                   // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43E5[0x3];                                     // 0x03D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DebugFakePlayerID_;                                // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   Debug_OnFriendLFGRequest;                          // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          PlayerBeingRemoved;                                // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43E6[0x7];                                     // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlay*                               OverlayEmptySpot;                                  // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               OverlayInputAction;                                // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyPlayerPadTop_C*                   Top;                                               // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyPlayerPadGadgets_C*               Gadgets;                                           // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyPlayerAddPlayer_C*                PlayerAdd;                                         // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        LastAnimatedPlayerPawn;                            // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyPlayerPadBottom_C*                BattlePassWidget;                                  // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthena_PartySuggestion_C*              UI_PartySuggestion;                                // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Debug_OnFriendLFGRequest__DelegateSignature(int32 PlayerIndex);
	void ExecuteUbergraph_PartyCharacterPlacementHelper(int32 EntryPoint, class UObject* K2Node_HandleClientEvent_EventSource1, class UObject* K2Node_HandleClientEvent_EventFocus1, struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent);
	void HandleClientEvent_StoreTabSelected(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_StoreTabClosed(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void ReceiveBeginPlay();
	void UserConstructionScript(bool CallFunc_SetStaticMesh_ReturnValue);
	void OnLobbyPlayerHovered(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnLobbyPlayerSelected(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnLobbyPlayerUnselected(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void InitializeContextEvents(TDelegate<void(int32 Index, struct FFortPartySuggestion& PartySuggestion)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(int32 Index)> K2Node_CreateDelegate_OutputDelegate1, TDelegate<void(int32 Index, struct FFortPartySuggestion& PartySuggestion)> K2Node_CreateDelegate_OutputDelegate12, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, TDelegate<void(int32 Index, struct FFortPartySuggestion& PartySuggestion)> K2Node_CreateDelegate_OutputDelegate123, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, TDelegate<void(struct FFortTeamMemberInfo& PlayerInfo)> K2Node_CreateDelegate_OutputDelegate1234, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12345, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue123, TDelegate<void(int32 PlayerIndex)> K2Node_CreateDelegate_OutputDelegate123456, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1234, TDelegate<void(int32 PlayerIndex)> K2Node_CreateDelegate_OutputDelegate1234567, class UFortPartyContext* CallFunc_GetContext_ReturnValue12345, TDelegate<void(const struct FFortTeamMemberInfo& NewTeamMemberInfo)> K2Node_CreateDelegate_OutputDelegate12345678, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, TDelegate<void(const struct FFortTeamMemberInfo& TeamMemberInfo)> K2Node_CreateDelegate_OutputDelegate123456789, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123456, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue1234567, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12345678910, TDelegate<void(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)> K2Node_CreateDelegate_OutputDelegate1234567891011, class UFortPartyContext* CallFunc_GetContext_ReturnValue12345678, class UFortPartyContext* CallFunc_GetContext_ReturnValue123456789, TDelegate<void(int32 PlayerIndex)> K2Node_CreateDelegate_OutputDelegate123456789101112, class UFortPartyContext* CallFunc_GetContext_ReturnValue12345678910, TDelegate<void(int32 PlayerIndex)> K2Node_CreateDelegate_OutputDelegate12345678910111213, class UFortPartyContext* CallFunc_GetContext_ReturnValue1234567891011, TDelegate<void(int32 PlayerIndex)> K2Node_CreateDelegate_OutputDelegate1234567891011121314, class UFortPartyContext* CallFunc_GetContext_ReturnValue123456789101112);
	void Initialize();
	void InitializePadUI();
	void OnLobbyStarted(int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable12, int32 Temp_int_Variable123, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_GetMaxTeamSizeForSelectedTheater_ReturnValue, int32 Temp_int_Variable1234, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable12345, int32 K2Node_Select_Default, const struct FFortPartySuggestion& CallFunc_GetPartySuggestion_OutSuggestion, bool CallFunc_GetPartySuggestion_ReturnValue);
	void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnByIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnTeamMemberRemoved(int32 TeamMemberRemovedInt, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnLobbyPlayerUnhovered(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void InitializeWidgets(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class ULobbyPlayerPadBottom_C* K2Node_DynamicCast_AsLobby_Player_Pad_Bottom, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue12, class ULobbyPlayerAddPlayer_C* K2Node_DynamicCast_AsLobby_Player_Add_Player, bool K2Node_DynamicCast_bSuccess1, class ULobbyPlayerPadGadgets_C* K2Node_DynamicCast_AsLobby_Player_Pad_Gadgets, bool K2Node_DynamicCast_bSuccess12, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue123, class ULobbyPlayerPadTop_C* K2Node_DynamicCast_AsLobby_Player_Pad_Top, bool K2Node_DynamicCast_bSuccess123);
	void RefreshWidgets(const struct FFortTeamMemberInfo& TeamMemberInfo, bool Has_Player, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, ESlateVisibility Temp_byte_Variable12, ESlateVisibility Temp_byte_Variable123, bool Temp_bool_Variable12, ESlateVisibility Temp_byte_Variable1234, ESlateVisibility Temp_byte_Variable12345, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, TArray<struct FFortTeamMemberInfo>& CallFunc_GetTeamMembers_TeamMembers, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_IsInLobby_IsInLobby, bool CallFunc_CompletedQuestPrerequisites_bCompleted, bool CallFunc_IsInLobby_IsInLobby1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, class UFortMcpContext* CallFunc_GetContext_ReturnValue123, ESlateVisibility Temp_byte_Variable123456, ESlateVisibility Temp_byte_Variable1234567, bool Temp_bool_Variable123, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsLocalPlayersUniqueID_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1234, bool CallFunc_BooleanAND_ReturnValue1, int32 CallFunc_GetCurrentPartyMaxSize_ReturnValue, bool CallFunc_BooleanAND_ReturnValue12, bool CallFunc_GreaterEqual_IntInt_ReturnValue, ESlateVisibility K2Node_Select1_Default, class UFortStoreContext* CallFunc_GetContext_ReturnValue12345, EFortStoreState CallFunc_GetStoreState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, ESlateVisibility K2Node_Select12_Default, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue12, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, ESlateVisibility K2Node_Select123_Default, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue123, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123456, EFrontEndCamera CallFunc_GetFrontEndCamera_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1234);
	void OnLobbyDisconnected();
	void PlayLobbyAnimation(int32 PartyMemberIndex, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnByIndex_ReturnValue, TScriptInterface<class ICustomCharacterPartOwnerInterface> K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void IsInLobby(bool* Param_IsInLobby, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsInLobby_ReturnValue, ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void CompletedQuestPrerequisites(bool* bCompleted, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, ESubGame CallFunc_GetSubGame_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void OnPartyDataChanged(struct FFortTeamMemberInfo& MemberInfo);
	void Refresh_Lights(const struct FFortTeamMemberInfo& Team_Info, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, class UFortMcpContext* CallFunc_GetContext_ReturnValue, const struct FFortBattlePassInfo& CallFunc_GetBattlePassInfoForPlayer_Result, bool CallFunc_BooleanAND_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
	void OnPartySuggestionAdded(int32 SlotIndex, struct FFortPartySuggestion& FortPartySuggestion, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable12, int32 Temp_int_Variable123, int32 Temp_int_Variable1234, int32 Temp_int_Variable12345, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnPartySuggestionUpdated(int32 SlotIndex, struct FFortPartySuggestion& FortPartySuggestion, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable12, int32 Temp_int_Variable123, int32 Temp_int_Variable1234, int32 Temp_int_Variable12345, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnPartySuggestionRemoved(int32 SlotIndex, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable12, int32 Temp_int_Variable123, int32 Temp_int_Variable1234, int32 Temp_int_Variable12345, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnPartySuggestionChanged(int32 SlotIndex, struct FFortPartySuggestion& FortPartySuggestion, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable12, int32 Temp_int_Variable123, int32 Temp_int_Variable1234, int32 Temp_int_Variable12345, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PartyCharacterPlacementHelper_C">();
	}
	static class APartyCharacterPlacementHelper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APartyCharacterPlacementHelper_C>();
	}
};

}

