#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ResourceAggregationWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ResourceAggregationWidget.ResourceAggregationWidget_C
// 0x0060 (0x0298 - 0x0238)
class UResourceAggregationWidget_C final  : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       ResourceIconPulseAnim;                             // 0x0240(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       AggregateOutroAnim;                                // 0x0248(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxTotalAggregation;                              // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageResourceIcon;                                 // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPotentialResourceWidget_C*             PotentialResourceWidget;                           // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextAggregateResourceCollected;                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextAggregateResourceCollectedShadow;              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABuildingSMActor*                       ResourceHoldingObject;                             // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AggregateResourceCollected;                        // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bActivateAggregateAnim;                            // 0x0284(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_368B[0x3];                                     // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           HideWidgetTimer;                                   // 0x0288(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          bIgnoreHide;                                       // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ResourceAggregationWidget(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, TDelegate<void(class ABuildingSMActor* BuildingSMActor, class UFortItem* PotentialWorldItem, bool bDestroyed, bool bJustHitWeakspot)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12);
	void Construct();
	void HandleDamagedResourceObject(class ABuildingSMActor* DamagedResourceObject, class UFortItem* PotentialResource, bool Destroyed, bool WeakpointDamage, bool LocalDestroyed, bool LocalWeakpointDamage, class UFortItem* LocalPotentialResource, class ABuildingSMActor* LocalDamagedResourceObject, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void ForceHideWidget();
	void HideWidget();
	void ResetSourceOfResource(class ABuildingSMActor* InResourceObject, class UFortItem* InPotentialResource, int32 CallFunc_GetNumInStack_ReturnValue, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue);
	void TriggerAggregateAnimation();
	void UpdateAggregateResourceCollected(class UFortItem* InPotentialResource, int32 CallFunc_GetNumInStack_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ResourceAggregationWidget_C">();
	}
	static class UResourceAggregationWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResourceAggregationWidget_C>();
	}
};

}

