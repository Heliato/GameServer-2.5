#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionTrackerSubEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MissionTrackerSubEntry.MissionTrackerSubEntry_C
// 0x0170 (0x03B8 - 0x0248)
class UMissionTrackerSubEntry_C final  : public UFortMissionTrackerSubEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewObjectiveCreation;                              // 0x0250(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       DrawAttentionAnimation;                            // 0x0258(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       CompletionFlashAnimation;                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       QuestionMarkAnimation;                             // 0x0268(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       CrossMarkAnimation;                                // 0x0270(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       CheckmarkAnimation;                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BorderFlash;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BulletImage;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CheckMark;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CrossMark;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             ObjectiveContentSlot;                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 QuestionMark;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortObjectiveBase*                     ObjectiveActor;                                    // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   WidgetVisibilityChanged;                           // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateBrush                            DefaultBulletBrush;                                // 0x02C8(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            DefaultNonHUDBulletBrush;                          // 0x0340(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void WidgetVisibilityChanged__DelegateSignature();
	void ExecuteUbergraph_MissionTrackerSubEntry(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnHiddenByHeightConstraintChanged();
	void OnObjectiveSet();
	void Setup(class AFortObjectiveBase* Objective, TDelegate<void(class AFortObjectiveBase* Objective, EFortMissionVisibilityOverride NewVisibilityOverride)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class AFortMissionState* MissionState, struct FGameplayTagContainer& EventTags)> K2Node_CreateDelegate_OutputDelegate1, TDelegate<void(class AFortMissionState* MissionState)> K2Node_CreateDelegate_OutputDelegate12, TDelegate<void(class AFortObjectiveBase* Objective, EFortObjectiveStatus NewStatus)> K2Node_CreateDelegate_OutputDelegate123, TDelegate<void(class AFortObjectiveBase* Objective, bool bNewVisibility)> K2Node_CreateDelegate_OutputDelegate1234);
	void HandleObjectiveStatusChanged(class AFortObjectiveBase* Objective, EFortObjectiveStatus NewStatus, class UWidgetAnimation* Temp_object_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UWidgetAnimation* Temp_object_Variable1, class UWidgetAnimation* Temp_object_Variable12, EFortObjectiveStatus Temp_byte_Variable, class UWidgetAnimation* K2Node_Select_Default);
	void HandleObjectiveVisibilityChanged(class AFortObjectiveBase* Objective, bool NewVisibility);
	void HandleUpdate(class AFortMissionState* Objective);
	void HideObjectiveWidget(bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void StartEndingAnimations(class UWidgetAnimation* Animation, bool CallFunc_IsVisible_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue);
	void CreateObjectiveContentWidget(class UWidget* CallFunc_GetChildAt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue1, bool CallFunc_HasAnyChildren_ReturnValue1, class UClass* CallFunc_GetObjectClass_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDefaultObjectiveContentWidget_C* CallFunc_Create_ReturnValue, TScriptInterface<class IMissionObjectiveContentWidgetInterface_C> K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue1, TScriptInterface<class IMissionObjectiveWidgetProviderInterface_C> K2Node_DynamicCast_AsMission_Objective_Widget_Provider_Interface, bool K2Node_DynamicCast_bSuccess1, class UClass* CallFunc_GetObjectiveContentWidgetClass_Objective_WIdget_Class, bool CallFunc_NotEqual_ClassClass_ReturnValue1, bool CallFunc_IsValidClass_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UFortUserWidget* CallFunc_Create_ReturnValue1, TScriptInterface<class IMissionObjectiveContentWidgetInterface_C> K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface1, bool K2Node_DynamicCast_bSuccess12, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue1, bool CallFunc_DoesImplementInterface_ReturnValue12);
	void HanldeObjectiveVisiblityOverrideChanged(class AFortObjectiveBase* Objective, EFortMissionVisibilityOverride New_Visibility_Override, bool K2Node_SwitchEnum_CmpSuccess);
	void ShowObjectiveWidget(bool bIsAlreadyVisible, bool CallFunc_Not_PreBool_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue12, bool CallFunc_IsVisible_ReturnValue);
	void HideObjectiveCompletionIcon();
	void Update(TScriptInterface<class IMissionObjectiveWidgetProviderInterface_C> K2Node_DynamicCast_AsMission_Objective_Widget_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, const struct FSlateBrush& CallFunc_GetObjectiveBulletIcon_BulletIcon, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void DrawAttention();
	void HandleMissionUIEvent(class AFortMissionState* MissionElement, struct FGameplayTagContainer& EventTags, class AFortObjectiveBase* K2Node_DynamicCast_AsFort_Objective_Base, bool K2Node_DynamicCast_bSuccess, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, bool CallFunc_HasAllTags_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void CreateCompletionAnnouncement(bool CallFunc_IsVisible_ReturnValue, const struct FFortClientAnnouncementData_Basic& K2Node_MakeStruct_FortClientAnnouncementData_Basic, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, class AFortClientAnnouncement_Basic* CallFunc_FinishSpawningActor_ReturnValue);

	float GetHeightEstimate(class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, TScriptInterface<class IMissionObjectiveContentWidgetInterface_C> K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetHeightEstimate_Height, bool CallFunc_IsValid_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionTrackerSubEntry_C">();
	}
	static class UMissionTrackerSubEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionTrackerSubEntry_C>();
	}
};

}

