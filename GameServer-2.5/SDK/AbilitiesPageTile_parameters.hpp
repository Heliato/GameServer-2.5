#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AbilitiesPageTile

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function AbilitiesPageTile.AbilitiesPageTile_C.ExecuteUbergraph_AbilitiesPageTile
// 0x0028 (0x0028 - 0x0000)
struct AbilitiesPageTile_C_ExecuteUbergraph_AbilitiesPageTile final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29FD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bUsingGamepad)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bUsingGamepad;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AbilitiesPageTile.AbilitiesPageTile_C.HandleInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct AbilitiesPageTile_C_HandleInputMethodChanged final 
{
public:
	bool                                          bUsingGamepad;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AbilitiesPageTile.AbilitiesPageTile_C.SetAbilityItemInfo
// 0x00B8 (0x00B8 - 0x0000)
struct AbilitiesPageTile_C_SetAbilityItemInfo final 
{
public:
	class UFortItem*                              SlottedAbilityItem;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0008(0x0018)()
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29FE[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGadgetItemDefinition*              K2Node_DynamicCast_AsFort_Gadget_Item_Definition;  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29FF[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x0040(0x0078)()
};

// Function AbilitiesPageTile.AbilitiesPageTile_C.UpdateKeyBinding
// 0x0018 (0x0018 - 0x0000)
struct AbilitiesPageTile_C_UpdateKeyBinding final 
{
public:
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A00[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue12;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AbilitiesPageTile.AbilitiesPageTile_C.SetAbilityPerkInfo
// 0x0158 (0x0158 - 0x0000)
struct AbilitiesPageTile_C_SetAbilityPerkInfo final 
{
public:
	struct FFortUIPerk                            AbilityPerk;                                       // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class UFortGadgetItemDefinition*>      CallFunc_BP_GetGadgets_GadgetItemDefinitions;      // 0x0098(0x0010)(ZeroConstructor, ReferenceParm)
	class UFortGadgetItemDefinition*              CallFunc_Array_Get_Item;                           // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00B0(0x0028)()
	struct FSlateBrush                            CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue; // 0x00D8(0x0078)()
	class UFortAbilityKit*                        CallFunc_GetGrantedAbilityKit_ReturnValue;         // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

