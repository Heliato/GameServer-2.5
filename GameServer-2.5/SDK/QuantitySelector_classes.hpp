#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuantitySelector

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuantitySelector.QuantitySelector_C
// 0x0858 (0x0C40 - 0x03E8)
class UQuantitySelector_C final  : public UFortActivatablePanel
{
public:
	uint8                                         Pad_26EC[0x8];                                     // 0x03E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       AdditionalInfo;                                    // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      CancelButton;                                      // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ConfirmButton;                                     // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                CurrentAmount;                                     // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 ItemCard;                                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                MaxAmount;                                         // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      MaxButton;                                         // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnalogSlider*                          ValueSlider;                                       // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       WindowTitle;                                       // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CurrentValue;                                      // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxValue;                                          // 0x044C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnButtonClickedDispatcher;                         // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnStackValueChangedDispatcher;                     // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortItem*                              Item;                                              // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSliderStyle                           SliderStyle_MouseKeyboard;                         // 0x0478(0x01F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSliderStyle                           SliderStyle_XboxOne;                               // 0x0668(0x01F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSliderStyle                           SliderStyle_PS4;                                   // 0x0858(0x01F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bShowConfirmButton;                                // 0x0A48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bShowCancelButton;                                 // 0x0A49(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bAllowZeroQuantity;                                // 0x0A4A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_26ED[0x5];                                     // 0x0A4B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSliderStyle                           SliderStyle_Touch;                                 // 0x0A50(0x01F0)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnButtonClickedDispatcher__DelegateSignature(int32 ChosenValue, class UFortItem* FortItem);
	void OnStackValueChangedDispatcher__DelegateSignature(int32 NewValue, class UFortItem* FortItem);
	void ExecuteUbergraph_QuantitySelector(int32 EntryPoint, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1, float K2Node_ComponentBoundEvent_Value, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_HandleMaxPressed_PassThrough, bool CallFunc_HandleTransferPressed_PassThrough, bool CallFunc_HandleCancelPressed_PassThrough, class UCommonButton* K2Node_ComponentBoundEvent_Button12, bool K2Node_CustomEvent_bUsingGamepad, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue1, class UCommonUIContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_Round_ReturnValue1, class UCommonUIContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_IsUsingGamepad_ReturnValue, TDelegate<void(bool bUsingGamepad)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsBROnly_ReturnValue);
	void Destruct();
	void HandleChangeInputMode(bool bUsingGamepad);
	void Construct();
	void OnActivated();
	void BndEvt__MaxButton_K2Node_ComponentBoundEvent_343_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AnalogSlider_0_K2Node_ComponentBoundEvent_434_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_166_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetSplitData(int32 StartingCount, int32 MaximumCount, class UFortItem* Param_Item, class FText TitleText, class FText ButtonText, class FText AdditionalInfoText, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue12, int32 CallFunc_Subtract_IntInt_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue123, float CallFunc_Divide_FloatFloat_ReturnValue);
	void SetAdditionalText(class FText AdditionalInfoText, ESlateVisibility Temp_byte_Variable, bool CallFunc_TextIsEmpty_ReturnValue, ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
	void CloseSelector(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void HandleMaxPressed(bool* Passthrough);
	void HandleTransferPressed(bool* Passthrough);
	void HandleCancelPressed(bool* Passthrough);
	void SliderValueChanged(float CallFunc_Conv_IntToFloat_ReturnValue);
	void SetupForInputMode(bool IsUsingGamepad, bool CallFunc_IsBROnly_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void GetCurrentValue(int32* Param_CurrentValue);
	void SetCurrentValue(int32 NewValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue12, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue123, float CallFunc_Divide_FloatFloat_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_HandleMaxPressed_PassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuantitySelector_C">();
	}
	static class UQuantitySelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuantitySelector_C>();
	}
};

}

