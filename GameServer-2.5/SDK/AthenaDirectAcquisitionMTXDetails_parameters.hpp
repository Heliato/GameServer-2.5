#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAcquisitionMTXDetails

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.ExecuteUbergraph_AthenaDirectAcquisitionMTXDetails
// 0x0110 (0x0110 - 0x0000)
struct AthenaDirectAcquisitionMTXDetails_C_ExecuteUbergraph_AthenaDirectAcquisitionMTXDetails final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_326D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortStoreContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_326E[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bSuccess)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0030(0x0010)(NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate1;             // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue1;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetOfferId_ReturnValue;                   // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPriceInMTX_ReturnValue;                 // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_326F[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue12;               // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPriceInMTX_ReturnValue1;                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3270[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue123;              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bSuccess)>                K2Node_CreateDelegate_OutputDelegate12;            // 0x0098(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetOfferId_ReturnValue1;                  // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue1;                  // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue1;      // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue12;                 // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOfferPurchaseError                           CallFunc_PurchaseOffer_ReturnValue;                // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3271[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue1234;             // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreContext*                      CallFunc_GetContext_ReturnValue123;                // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetOfferId_ReturnValue12;                 // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EOfferPurchaseError                           CallFunc_CanPurchaseOffer_ReturnValue;             // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3272[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue1234;               // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.HandlePurchaseComplete
// 0x0001 (0x0001 - 0x0000)
struct AthenaDirectAcquisitionMTXDetails_C_HandlePurchaseComplete final 
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AthenaDirectAcquisitionMTXDetails_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature final 
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.HandleBack
// 0x0001 (0x0001 - 0x0000)
struct AthenaDirectAcquisitionMTXDetails_C_HandleBack final 
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.Init
// 0x0250 (0x0250 - 0x0000)
struct AthenaDirectAcquisitionMTXDetails_C_Init final 
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3273[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable12;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable123;                             // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3274[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue1;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBonusQuantity_ReturnValue;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3275[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDescription_ReturnValue;               // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0040(0x0018)()
	int32                                         CallFunc_GetBaseQuantity_ReturnValue;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBonusQuantity_ReturnValue1;            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue1;              // 0x0060(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortMtxStoreOfferType                        CallFunc_GetFortStoreOfferType_ReturnValue;        // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3276[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue12;               // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3277[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFortMtxDetailsAttribute>       CallFunc_GetDetailsAttributes_ReturnValue;         // 0x0090(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3278[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortMtxDetailsAttribute               CallFunc_Array_Get_Item;                           // 0x00A8(0x0030)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue12;        // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue123;       // 0x00DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00DF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue123;              // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetSalePrice_SalePrice;                   // 0x00E8(0x0018)()
	bool                                          CallFunc_GetSalePrice_ReturnValue;                 // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select1_Default;                            // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3279[0x5];                                     // 0x0103(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetNormalPrice_ReturnValue;               // 0x0108(0x0018)()
	class FText                                   CallFunc_GetName_ReturnValue;                      // 0x0120(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0138(0x0018)()
	ESlateVisibility                              Temp_byte_Variable1234;                            // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_327A[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue1234;             // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortMtxGradient                       CallFunc_GetGradient_ReturnValue;                  // 0x0160(0x0020)(NoDestructor)
	struct FLinearColor                           CallFunc_GetBackground_ReturnValue;                // 0x0180(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            CallFunc_GetDetailsImage_ReturnValue;              // 0x0190(0x0078)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable12345;                           // 0x020C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x020D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_327B[0x2];                                     // 0x020E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable12;                              // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select12_Default;                           // 0x0215(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_327C[0x2];                                     // 0x0216(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable123456;                          // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_327D[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStoreMain_OfferDetailsAttribute_C*     CallFunc_Create_ReturnValue;                       // 0x0230(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0238(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1234567;                         // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable123;                             // 0x0241(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select123_Default;                          // 0x0242(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_327E[0x5];                                     // 0x0243(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue1;          // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.PopDetails
// 0x0008 (0x0008 - 0x0000)
struct AthenaDirectAcquisitionMTXDetails_C_PopDetails final 
{
public:
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.InitPurchaseButton
// 0x0038 (0x0038 - 0x0000)
struct AthenaDirectAcquisitionMTXDetails_C_InitPurchaseButton final 
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_327F[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPriceInMTX_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3280[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetOfferId_ReturnValue;                   // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EOfferPurchaseError                           CallFunc_CanPurchaseOffer_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

