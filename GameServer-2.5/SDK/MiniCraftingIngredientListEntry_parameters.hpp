#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiniCraftingIngredientListEntry

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.ExecuteUbergraph_MiniCraftingIngredientListEntry
// 0x0008 (0x0008 - 0x0000)
struct MiniCraftingIngredientListEntry_C_ExecuteUbergraph_MiniCraftingIngredientListEntry final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsBeingReset;                         // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.HandleDifferentItemOrQuantitySetBP
// 0x0001 (0x0001 - 0x0000)
struct MiniCraftingIngredientListEntry_C_HandleDifferentItemOrQuantitySetBP final 
{
public:
	bool                                          IsBeingReset;                                      // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.Refresh
// 0x0008 (0x0008 - 0x0000)
struct MiniCraftingIngredientListEntry_C_Refresh final 
{
public:
	class UFortItemDefinition*                    CallFunc_GetItemDefinition_ReturnValue;            // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.RefreshBeingPreviewed
// 0x0010 (0x0010 - 0x0000)
struct MiniCraftingIngredientListEntry_C_RefreshBeingPreviewed final 
{
public:
	struct FFortItemEntryPreviewData              CallFunc_GetPreviewData_OutPreviewData;            // 0x0000(0x0008)(NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBeingPreviewed_ReturnValue;             // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue1;                  // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.Get_ItemCountWidget_ToolTipWidget
// 0x0068 (0x0068 - 0x0000)
struct MiniCraftingIngredientListEntry_C_Get_ItemCountWidget_ToolTipWidget final 
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    CallFunc_GetItemDefinition_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E43[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetShortDescription_ReturnValue;          // 0x0020(0x0018)()
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0038(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E44[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;              // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

