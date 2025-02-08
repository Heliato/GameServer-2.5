#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaEquippedItemWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.ExecuteUbergraph_AthenaEquippedItemWidget
// 0x0270 (0x0270 - 0x0000)
struct AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable1;                              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_373B[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable12;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable123;                            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquippedWeaponDisplay                        Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable12;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable123;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1234;                            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_373C[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_ResourceCount1;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_373D[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortWeaponRanged*                      K2Node_Event_RangedWeapon;                         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*               K2Node_Event_Item12;                               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0038(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_373E[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue; // 0x0058(0x0078)()
	int32                                         CallFunc_GetBulletsPerClip_ReturnValue;            // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_373F[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortResourceItemDefinition*            K2Node_Event_Item1;                                // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_ResourceCount;                        // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3740[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue1;              // 0x00E8(0x0018)()
	struct FSlateBrush                            CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue1; // 0x0100(0x0078)()
	EEquippedWeaponDisplay                        K2Node_Event_Mode;                                 // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x017A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bHasAmmo;                             // 0x017B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         K2Node_Event_MagazineAmmoCount;                    // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_BackupAmmoCount;                      // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_TotalRemaining;                       // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetRemainingAmmoText_CurrentAmmoText;     // 0x0188(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue1;              // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3741[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetCurrentAmmoText_CurrentAmmoText;       // 0x01A8(0x0018)()
	float                                         K2Node_Select1_Default;                            // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue12;             // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3742[0x3];                                     // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select12_Default;                           // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_Remaining;                            // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue12;             // 0x01D0(0x0018)()
	class AFortWeapon*                            K2Node_Event_Weapon;                               // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWeaponItemDefinition*              K2Node_Event_Item;                                 // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue12; // 0x01F8(0x0078)()
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UtilityItemTypeChanged
// 0x0010 (0x0010 - 0x0000)
struct AthenaEquippedItemWidget_C_UtilityItemTypeChanged final 
{
public:
	class AFortWeapon*                            Weapon;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWeaponItemDefinition*              Item;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UtilityItemCountChanged
// 0x0004 (0x0004 - 0x0000)
struct AthenaEquippedItemWidget_C_UtilityItemCountChanged final 
{
public:
	int32                                         Remaining;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.AmmoChanged
// 0x000C (0x000C - 0x0000)
struct AthenaEquippedItemWidget_C_AmmoChanged final 
{
public:
	int32                                         Param_MagazineAmmoCount;                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BackupAmmoCount;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalRemaining;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.HasAmmoChanged
// 0x0001 (0x0001 - 0x0000)
struct AthenaEquippedItemWidget_C_HasAmmoChanged final 
{
public:
	bool                                          bHasAmmo;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.WeaponTypeChanged
// 0x0001 (0x0001 - 0x0000)
struct AthenaEquippedItemWidget_C_WeaponTypeChanged final 
{
public:
	EEquippedWeaponDisplay                        Mode;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.ResourceTypeChanged
// 0x0010 (0x0010 - 0x0000)
struct AthenaEquippedItemWidget_C_ResourceTypeChanged final 
{
public:
	class UFortResourceItemDefinition*            Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_ResourceCount;                               // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.AmmoTypeChanged
// 0x0010 (0x0010 - 0x0000)
struct AthenaEquippedItemWidget_C_AmmoTypeChanged final 
{
public:
	class AFortWeaponRanged*                      RangedWeapon;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*               Item;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.ResourceCountChanged
// 0x0004 (0x0004 - 0x0000)
struct AthenaEquippedItemWidget_C_ResourceCountChanged final 
{
public:
	int32                                         Param_ResourceCount;                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateWidgetColor
// 0x0060 (0x0060 - 0x0000)
struct AthenaEquippedItemWidget_C_UpdateWidgetColor final 
{
public:
	bool                                          HasAmmo;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3743[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable1;                              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3744[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0014(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable12;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select1_Default;                            // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select12_Default;                           // 0x0028(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0038(0x0028)()
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.GetCurrentAmmoText
// 0x0118 (0x0118 - 0x0000)
struct AthenaEquippedItemWidget_C_GetCurrentAmmoText final 
{
public:
	int32                                         CurrentAmmoCount;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3745[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CurrentAmmoText;                                   // 0x0008(0x0018)(Parm, OutParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3746[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ZeroConstructor, ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x0078(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B8(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array1;                           // 0x00D0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue1;                      // 0x00E0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00F8(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue1;                 // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.GetRemainingAmmoText
// 0x0078 (0x0078 - 0x0000)
struct AthenaEquippedItemWidget_C_GetRemainingAmmoText final 
{
public:
	int32                                         RemainingAmmoCount;                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3747[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CurrentAmmoText;                                   // 0x0008(0x0018)(Parm, OutParm)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3748[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0028(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3749[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0048(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0060(0x0018)()
};

}

