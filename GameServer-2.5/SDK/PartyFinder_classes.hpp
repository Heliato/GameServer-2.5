#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PartyFinder

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PartyFinder.PartyFinder_C
// 0x0110 (0x04F8 - 0x03E8)
class UPartyFinder_C final  : public UFortActivatablePanel
{
public:
	uint8                                         Pad_2971[0x8];                                     // 0x03E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      CloseButton;                                       // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      IgnoreButton;                                      // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      InviteButton;                                      // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        InviteIgnoreSwitcher;                              // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      JoinButton;                                        // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyInfo_C*                           PartyInfo;                                         // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTreeView*                        SocialTreeView;                                    // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ViewProfileButton;                                 // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonVisibilityWidget*                ViewProfileVisibility;                             // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            LeaveConfirmationIcon;                             // 0x0450(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   LeaveConfirmationTitle;                            // 0x04C8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   LeaveConfirmationDescription;                      // 0x04E0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_PartyFinder(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UCommonButton* K2Node_ComponentBoundEvent_Button1234, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, struct FPartyState& K2Node_CustomEvent_PartyData, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button123, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class UFortPartyContext* CallFunc_GetContext_ReturnValue12, EFortDialogResult Temp_byte_Variable, class FName Temp_name_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue123, TArray<class UFortSocialItem*>& CallFunc_GetSocialItemCategories_OutSocialCategoryItems, EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1, TDelegate<void(EFortDialogResult Result, class FName ResultName)> K2Node_CreateDelegate_OutputDelegate1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class UObject* CallFunc_GetSelectedItem_ReturnValue, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item, bool K2Node_DynamicCast_bSuccess, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item1, bool K2Node_DynamicCast_bSuccess1, class UObject* CallFunc_GetSelectedItem_ReturnValue1, class UObject* CallFunc_GetSelectedItem_ReturnValue12, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item12, bool K2Node_DynamicCast_bSuccess12, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, TArray<class UFortSocialItem*>& K2Node_CustomEvent_SocialItems, bool CallFunc_BooleanOR_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UObject* CallFunc_GetSelectedItem_ReturnValue123, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item123, bool K2Node_DynamicCast_bSuccess123, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UFortPartyContext* CallFunc_GetContext_ReturnValue1234, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsBROnly_ReturnValue);
	void EnableInviteButton();
	void Destruct();
	void BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void OnActivated();
	void BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnSocialListChanged(TArray<class UFortSocialItem*>& SocialItems);
	void BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandlePartyDataChanged(struct FPartyState& PartyData);
	void BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void DialogResult_9763B6F5495998E5B2E944A5F646709C(EFortDialogResult Result, class FName ResultName);
	void BindDelegates(TDelegate<void(struct FPartyState& PartyData)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(struct FUniqueNetIdRepl& FriendId)> K2Node_CreateDelegate_OutputDelegate1, TDelegate<void(EFortPartyTransition PartyTransition)> K2Node_CreateDelegate_OutputDelegate12, TDelegate<void(TArray<class UFortSocialItem*>& SocialItems)> K2Node_CreateDelegate_OutputDelegate123, class UFortPartyContext* CallFunc_GetContext_ReturnValue);
	void HandlePartyTransitionStarted(EFortPartyTransition Transition, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleSocialListChanged(TArray<class UFortSocialItem*>& SocialItems, bool bExpandAll, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortSocialItem* CallFunc_Array_Get_Item, class UFortSocialItem* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue);
	void UpdateDetails(class UFortSocialItem* PartyFinderItem, EFortSocialItemType SocialItemType, class UFortSocialItem* LocalPartyFinderItem, EFortSocialItemType Temp_byte_Variable, class UWidget* Temp_object_Variable, class UFortPartyContext* CallFunc_GetContext_ReturnValue, EFortSocialItemType Temp_byte_Variable1, ESlateVisibility Temp_byte_Variable12, ESlateVisibility Temp_byte_Variable123, ESlateVisibility Temp_byte_Variable1234, ESlateVisibility Temp_byte_Variable12345, ESlateVisibility CallFunc_GetFinderItemVisibility_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, ESlateVisibility CallFunc_GetFinderItemVisibility_ReturnValue1, EFortPartyRestriction CallFunc_CanBeJoined_FailReason, bool CallFunc_CanBeJoined_ReturnValue, class UWidget* K2Node_Select_Default, EFortPartyRestriction CallFunc_CanBeInvited_FailReason, bool CallFunc_CanBeInvited_ReturnValue, ESlateVisibility K2Node_Select1_Default);
	ESlateVisibility GetFinderItemVisibility(class UFortSocialItem* PartyFinderItem, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, ESlateVisibility Temp_byte_Variable1, ESlateVisibility K2Node_Select_Default);
	void SendInvite(class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UObject* CallFunc_GetSelectedItem_ReturnValue, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void IgnoreInvite(class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UObject* CallFunc_GetSelectedItem_ReturnValue, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	TArray<class UObject*> SocialTreeView_GetChildrenForCategory(class UObject* Item, const TArray<class UFortSocialItem*>& SocialItems, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item, bool K2Node_DynamicCast_bSuccess, TArray<class UFortSocialItem*>& CallFunc_GetActiveFriendsList_OutActiveFriends, bool K2Node_SwitchEnum_CmpSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, TArray<class UFortSocialItem*>& CallFunc_GetPartyInvites_OutPartyInvites);
	void HandleFriendPresenceUpdated(struct FUniqueNetIdRepl& FriendId, class UObject* CallFunc_GetSelectedItem_ReturnValue, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void UpdateDetailsEmpty(EFortSocialItemType SocialItemType, class UFortSocialItem* LocalPartyFinderItem);
	void UnbindDelegates(TDelegate<void(struct FUniqueNetIdRepl& FriendId)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(struct FPartyState& PartyData)> K2Node_CreateDelegate_OutputDelegate1, TDelegate<void(EFortPartyTransition PartyTransition)> K2Node_CreateDelegate_OutputDelegate12, TDelegate<void(TArray<class UFortSocialItem*>& SocialItems)> K2Node_CreateDelegate_OutputDelegate123, class UFortPartyContext* CallFunc_GetContext_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PartyFinder_C">();
	}
	static class UPartyFinder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartyFinder_C>();
	}
};

}

