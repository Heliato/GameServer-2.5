#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortExpeditionReturnsWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C
// 0x0048 (0x0268 - 0x0220)
class UBP_FortExpeditionReturnsWidget_C final  : public UFortExpeditionReturnsWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(Transient, DuplicateTransient)
	class UBP_FortMaterialProgressBar_C*          BP_FortMaterialProgressBar;                        // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ExpeditionReturns;                                 // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                ProgressPercentage;                                // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxWidget;                                     // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 Style;                                             // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         MinWidget;                                         // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3D9E[0x4];                                     // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnExpeditionCompleted;                             // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnExpeditionCompleted__DelegateSignature(class UFortExpeditionItem* Param_Item);
	void ExecuteUbergraph_BP_FortExpeditionReturnsWidget(int32 EntryPoint, const struct FDateTime& CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow, class UFortExpeditionItem* K2Node_Event_InItem, bool K2Node_Event_IsDesignTime, bool CallFunc_IsExpeditionCompleted_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void SetData(class UFortExpeditionItem* InItem);
	void Construct();
	void OnExpeditionInProgressUpdated();
	void Refresh_In_Progress_Widgets(class UFortExpeditionItem* Param_Item, bool CallFunc_IsExpeditionInProgress_ReturnValue);
	void Set_Expedition_Return_Time(class UFortExpeditionItem* Param_Item, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, bool CallFunc_IsExpeditionCompleted_ReturnValue, const struct FDateTime& CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow, const struct FTimespan& CallFunc_GetRemainingExpeditionDuration_ReturnValue, const struct FTimespan& CallFunc_Add_TimespanTimespan_ReturnValue, class FText CallFunc_GetTimespanAsText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Set_Expedition_Return_Progress(class UFortExpeditionItem* Param_Item, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_ItemDef, const struct FDateTime& CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FTimespan& CallFunc_GetRemainingExpeditionDuration_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue, int32 CallFunc_FCeil_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void Get_Expedition_Item_Definition(class UFortExpeditionItem* Param_Item, class UFortExpeditionItemDefinition** ItemDef, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortExpeditionItemDefinition* K2Node_DynamicCast_AsFort_Expedition_Item_Definition, bool K2Node_DynamicCast_bSuccess);
	void Get_Mcp_Relative_Utc_Now(struct FDateTime* UtcNow, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FDateTime& CallFunc_GetMcpRelativeUtcNow_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FortExpeditionReturnsWidget_C">();
	}
	static class UBP_FortExpeditionReturnsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FortExpeditionReturnsWidget_C>();
	}
};

}

