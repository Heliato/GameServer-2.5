#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreMain_OfferDetails

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StoreMain_OfferDetails.StoreMain_OfferDetails_C
// 0x00C0 (0x0550 - 0x0490)
class UStoreMain_OfferDetails_C final  : public UFortMtxOfferDetailsBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0490(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 BaseColor;                                         // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BaseColorDetails;                                  // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               BonusCurrencySB;                                   // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderDisclaimer;                                  // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonText_BaseQuantity;                           // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonText_BonusQuantity;                          // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       FounderPackLabelText;                              // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Highlight;                                         // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       KeyArt;                                            // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OverlayGradient;                                   // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OverlayGradientDetails;                            // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlaySalePrice;                                  // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      PurchaseButton;                                    // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBoxDetails;                                  // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreMain_OfferDetailsAttribute_C*     StoreMain_OfferDetailsAttribute;                   // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreMain_OfferDetailsAttribute_C*     StoreMain_OfferDetailsAttribute_C_0;               // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextDescription;                                   // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextName;                                          // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextOfferDisplayPrice;                             // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextOriginalPrice;                                 // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBoxOfferInfo;                                     // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VBuckHighlight;                                    // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StoreMain_OfferDetails(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortStoreContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, const class FString& CallFunc_GetOfferId_ReturnValue, bool K2Node_CustomEvent_bSuccess, TDelegate<void(bool bSuccess)> K2Node_CreateDelegate_OutputDelegate, class UFortStoreContext* CallFunc_GetContext_ReturnValue12, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Destruct();
	void Construct();
	void HandlePurchaseComplete(bool bSuccess);
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnDeactivated();
	void OnActivated();
	void HandleBack(bool* Passthrough);
	void Init(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, ESlateVisibility Temp_byte_Variable12, ESlateVisibility Temp_byte_Variable123, EFortMtxStoreOfferType Temp_byte_Variable1234, ESlateVisibility Temp_byte_Variable12345, ESlateVisibility Temp_byte_Variable123456, ESlateVisibility Temp_byte_Variable1234567, bool Temp_bool_Variable12, ESlateVisibility Temp_byte_Variable12345678, ESlateVisibility Temp_byte_Variable123456789, int32 Temp_int_Array_Index_Variable, ESlateVisibility Temp_byte_Variable12345678910, int32 Temp_int_Loop_Counter_Variable, EFortMtxStoreOfferType CallFunc_GetStoreOfferType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable1234567891011, class FText CallFunc_GetDescription_ReturnValue, EFortMtxStoreOfferType CallFunc_GetStoreOfferType_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable123, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, ESlateVisibility K2Node_Select_Default, int32 CallFunc_GetBonusQuantity_ReturnValue, ESlateVisibility Temp_byte_Variable123456789101112, bool CallFunc_Greater_IntInt_ReturnValue, EFortMtxStoreOfferType CallFunc_GetStoreOfferType_ReturnValue12, int32 CallFunc_GetBonusQuantity_ReturnValue1, ESlateVisibility K2Node_Select1_Default, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetBaseQuantity_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UStoreMain_OfferDetailsAttribute_C* CallFunc_Create_ReturnValue, TArray<struct FFortMtxDetailsAttribute>& CallFunc_GetDetailsAttributes_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FFortMtxDetailsAttribute& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, EFortMtxStoreOfferType CallFunc_GetStoreOfferType_ReturnValue123, bool CallFunc_EqualEqual_ByteByte_ReturnValue123, class FText CallFunc_GetNormalPrice_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select12_Default, ESlateVisibility K2Node_Select123_Default, class FText CallFunc_GetSalePrice_SalePrice, bool CallFunc_GetSalePrice_ReturnValue, ESlateVisibility K2Node_Select1234_Default, class FText CallFunc_GetName_ReturnValue, ESlateVisibility Temp_byte_Variable12345678910111213, bool Temp_bool_Variable1234, const struct FFortMtxGradient& CallFunc_GetGradient_ReturnValue, ESlateVisibility K2Node_Select12345_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue1, const struct FLinearColor& CallFunc_GetBackground_ReturnValue, const struct FSlateBrush& CallFunc_GetDetailsImage_ReturnValue);
	void PopDetails(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StoreMain_OfferDetails_C">();
	}
	static class UStoreMain_OfferDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStoreMain_OfferDetails_C>();
	}
};

}

