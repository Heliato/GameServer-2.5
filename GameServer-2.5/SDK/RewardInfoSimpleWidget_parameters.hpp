#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RewardInfoSimpleWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.ExecuteUbergraph_RewardInfoSimpleWidget
// 0x0070 (0x0070 - 0x0000)
struct RewardInfoSimpleWidget_C_ExecuteUbergraph_RewardInfoSimpleWidget final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetQuantity_ReturnValue;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	class UFortItem*                              CallFunc_GetItemInstance_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetSmallPreviewImage_ReturnValue;         // 0x0030(0x0028)(HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.GetDisplayName
// 0x0C38 (0x0C38 - 0x0000)
struct RewardInfoSimpleWidget_C_GetDisplayName final 
{
public:
	class FText                                   DisplayName;                                       // 0x0000(0x0018)(Parm, OutParm)
	class FText                                   OutName;                                           // 0x0018(0x0018)(Edit, BlueprintVisible)
	EFortItemType                                 Temp_byte_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3160[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0038(0x0018)()
	class FText                                   Temp_text_Variable1;                               // 0x0050(0x0018)()
	class FText                                   Temp_text_Variable12;                              // 0x0068(0x0018)()
	class FText                                   Temp_text_Variable123;                             // 0x0080(0x0018)()
	class FText                                   Temp_text_Variable1234;                            // 0x0098(0x0018)()
	class FText                                   Temp_text_Variable12345;                           // 0x00B0(0x0018)()
	class FText                                   Temp_text_Variable123456;                          // 0x00C8(0x0018)()
	class FText                                   Temp_text_Variable1234567;                         // 0x00E0(0x0018)()
	class FText                                   Temp_text_Variable12345678;                        // 0x00F8(0x0018)()
	class FText                                   Temp_text_Variable123456789;                       // 0x0110(0x0018)()
	class FText                                   Temp_text_Variable12345678910;                     // 0x0128(0x0018)()
	class FText                                   Temp_text_Variable1234567891011;                   // 0x0140(0x0018)()
	class FText                                   Temp_text_Variable123456789101112;                 // 0x0158(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213;               // 0x0170(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314;             // 0x0188(0x0018)()
	class FText                                   Temp_text_Variable123456789101112131415;           // 0x01A0(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213141516;         // 0x01B8(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314151617;       // 0x01D0(0x0018)()
	class FText                                   Temp_text_Variable123456789101112131415161718;     // 0x01E8(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213141516171819;   // 0x0200(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314151617181920; // 0x0218(0x0018)()
	class FText                                   Temp_text_Variable123456789101112131415161718192021; // 0x0230(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213141516171819202122; // 0x0248(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314151617181920212223; // 0x0260(0x0018)()
	class FText                                   Temp_text_Variable123456789101112131415161718192021222324; // 0x0278(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213141516171819202122232425; // 0x0290(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314151617181920212223242526; // 0x02A8(0x0018)()
	class FText                                   Temp_text_Variable123456789101112131415161718192021222324252627; // 0x02C0(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213141516171819202122232425262728; // 0x02D8(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314151617181920212223242526272829; // 0x02F0(0x0018)()
	class FText                                   Temp_text_Variable123456789101112131415161718192021222324252627282930; // 0x0308(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213141516171819202122232425262728293031; // 0x0320(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314151617181920212223242526272829303132; // 0x0338(0x0018)()
	class FText                                   Temp_text_Variable123456789101112131415161718192021222324252627282930313233; // 0x0350(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213141516171819202122232425262728293031323334; // 0x0368(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435; // 0x0380(0x0018)()
	class FText                                   Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536; // 0x0398(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637; // 0x03B0(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738; // 0x03C8(0x0018)()
	class FText                                   Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839; // 0x03E0(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940; // 0x03F8(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041; // 0x0410(0x0018)()
	class FText                                   Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142; // 0x0428(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243; // 0x0440(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344; // 0x0458(0x0018)()
	class FText                                   Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445; // 0x0470(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546; // 0x0488(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647; // 0x04A0(0x0018)()
	class FText                                   Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748; // 0x04B8(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849; // 0x04D0(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950; // 0x04E8(0x0018)()
	class FText                                   Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051; // 0x0500(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152; // 0x0518(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253; // 0x0530(0x0018)()
	class FText                                   Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354; // 0x0548(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455; // 0x0560(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556; // 0x0578(0x0018)()
	class FText                                   Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657; // 0x0590(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758; // 0x05A8(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859; // 0x05C0(0x0018)()
	class FText                                   Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960; // 0x05D8(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061; // 0x05F0(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162; // 0x0608(0x0018)()
	class FText                                   Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263; // 0x0620(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364; // 0x0638(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465; // 0x0650(0x0018)()
	class FText                                   Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566; // 0x0668(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667; // 0x0680(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768; // 0x0698(0x0018)()
	class FText                                   Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869; // 0x06B0(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667686970; // 0x06C8(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071; // 0x06E0(0x0018)()
	class FText                                   Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172; // 0x06F8(0x0018)()
	class FText                                   Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667686970717273; // 0x0710(0x0018)()
	class FText                                   Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071727374; // 0x0728(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0740(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0758(0x0040)(HasGetValueTypeHash)
	class UFortItem*                              CallFunc_GetItemInstance_ReturnValue;              // 0x0798(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue1;             // 0x07A0(0x0018)()
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;                    // 0x07B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3161[0x7];                                     // 0x07B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x07C0(0x0040)(HasGetValueTypeHash)
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;              // 0x0800(0x0080)()
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue1;             // 0x0880(0x0080)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData12;            // 0x0900(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData123;           // 0x0940(0x0040)(HasGetValueTypeHash)
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue12;            // 0x0980(0x0080)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0A00(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0A10(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1234;          // 0x0A28(0x0040)(HasGetValueTypeHash)
	class UFortItem*                              CallFunc_GetItemInstance_ReturnValue1;             // 0x0A68(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorker*                            K2Node_DynamicCast_AsFort_Worker;                  // 0x0A70(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0A78(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortInventoryFilter                          CallFunc_GetFilterCategory_ReturnValue;            // 0x0A79(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3162[0x6];                                     // 0x0A7A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItem*                              CallFunc_GetItemInstance_ReturnValue12;            // 0x0A80(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0A88(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3163[0x7];                                     // 0x0A89(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetTertiaryCategory_ItemCategoryText;     // 0x0A90(0x0018)()
	struct FSlateBrush                            CallFunc_GetTertiaryCategory_ItemCategoryBrush;    // 0x0AA8(0x0078)()
	bool                                          CallFunc_GetTertiaryCategory_ReturnValue;          // 0x0B20(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3164[0x7];                                     // 0x0B21(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData12345;         // 0x0B28(0x0040)(HasGetValueTypeHash)
	class UFortItem*                              CallFunc_GetItemInstance_ReturnValue123;           // 0x0B68(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array1;                           // 0x0B70(0x0010)(ZeroConstructor, ReferenceParm)
	EFortItemType                                 CallFunc_GetType_ReturnValue;                      // 0x0B80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3165[0x7];                                     // 0x0B81(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue1;                      // 0x0B88(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x0BA0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3166[0x7];                                     // 0x0BA1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItem*                              CallFunc_GetItemInstance_ReturnValue1234;          // 0x0BA8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortItemType                                 CallFunc_GetType_ReturnValue1;                     // 0x0BB0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3167[0x7];                                     // 0x0BB1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0BB8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData123456;        // 0x0BD0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array12;                          // 0x0C10(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue12;                     // 0x0C20(0x0018)()
};

}

