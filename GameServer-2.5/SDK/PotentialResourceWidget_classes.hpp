#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PotentialResourceWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PotentialResourceWidget.PotentialResourceWidget_C
// 0x0048 (0x0258 - 0x0210)
class UPotentialResourceWidget_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       TranslateAndFadeUp;                                // 0x0218(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextResourceCount;                                 // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextResourceCountShadow;                           // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                              PotentialResource;                                 // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   FinishedShowing;                                   // 0x0238(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          WeakpointDamage;                                   // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_368F[0x3];                                     // 0x0249(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WeakpointFontSize;                                 // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NormalFontSize;                                    // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void FinishedShowing__DelegateSignature();
	void ExecuteUbergraph_PotentialResourceWidget(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate);
	void HandleTranslateAndFadeUpFinished();
	void Construct();
	void UpdateResourceCountText(class FText CallFunc_GetResourceCountAsText_Result);
	void GetResourceCountAsText(class UFortItem* Resource, class FText* Result, int32 CallFunc_GetNumInStack_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void SetupFont(const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, const struct FLinearColor& CallFunc_Get_HarvestWeakPoint_Color_StyleSheetOut, bool Temp_bool_Variable1, int32 K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void ShowPotentialResource(class UFortItem* Param_PotentialResource, bool bWeakpointDamage, bool CallFunc_IsValid_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PotentialResourceWidget_C">();
	}
	static class UPotentialResourceWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPotentialResourceWidget_C>();
	}
};

}

