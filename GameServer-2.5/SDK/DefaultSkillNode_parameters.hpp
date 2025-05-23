#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultSkillNode

#include "Basic.hpp"

#include "SkillTreePages_structs.hpp"
#include "SkillTreeGroups_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function DefaultSkillNode.DefaultSkillNode_C.ExecuteUbergraph_DefaultSkillNode
// 0x0100 (0x0100 - 0x0000)
struct DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_415C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0008(0x0008)(NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue1;                 // 0x0010(0x0008)(NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue12;                // 0x0018(0x0008)(NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue123;               // 0x0020(0x0008)(NoDestructor)
	struct FHomebaseNode                          CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData; // 0x0028(0x00C0)()
	bool                                          CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue; // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_415D[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DefaultSkillNode.DefaultSkillNode_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct DefaultSkillNode_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DefaultSkillNode.DefaultSkillNode_C.UpdateFromNodeState
// 0x0018 (0x0018 - 0x0000)
struct DefaultSkillNode_C_UpdateFromNodeState final 
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHomebaseNodeState                     CallFunc_TryGetSkillTreeNodeState_OutNodeState;    // 0x0008(0x0008)(NoDestructor)
	bool                                          CallFunc_TryGetSkillTreeNodeState_ReturnValue;     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DefaultSkillNode.DefaultSkillNode_C.UpdateFromNodeData
// 0x03B8 (0x03B8 - 0x0000)
struct DefaultSkillNode_C_UpdateFromNodeData final 
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortSkillTreeNodeDisplayData          CallFunc_TryGetNodeDisplayData_OutDisplayData;     // 0x0008(0x02D8)()
	bool                                          CallFunc_TryGetNodeDisplayData_ReturnValue;        // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_415E[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHomebaseNode                          CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData; // 0x02E8(0x00C0)()
	bool                                          CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue; // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x03A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_415F[0x2];                                     // 0x03AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetSkillTreeNodeSizeByMagnitude_Size;     // 0x03AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x03B0(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DefaultSkillNode.DefaultSkillNode_C.StepHoverGlowInterpolation
// 0x0020 (0x0020 - 0x0000)
struct DefaultSkillNode_C_StepHoverGlowInterpolation final 
{
public:
	float                                         TargetGlowPercentage;                              // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4160[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DefaultSkillNode.DefaultSkillNode_C.StepSelectionGlowInterpolation
// 0x0024 (0x0024 - 0x0000)
struct DefaultSkillNode_C_StepSelectionGlowInterpolation final 
{
public:
	float                                         TargetGlowPercentage;                              // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSelected_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4161[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4162[0x1];                                     // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DefaultSkillNode.DefaultSkillNode_C.UpdateHoverGlow
// 0x0008 (0x0008 - 0x0000)
struct DefaultSkillNode_C_UpdateHoverGlow final 
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DefaultSkillNode.DefaultSkillNode_C.UpdateSelectionGlow
// 0x0008 (0x0008 - 0x0000)
struct DefaultSkillNode_C_UpdateSelectionGlow final 
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DefaultSkillNode.DefaultSkillNode_C.UpdateFromButtonState
// 0x0002 (0x0002 - 0x0000)
struct DefaultSkillNode_C_UpdateFromButtonState final 
{
public:
	bool                                          CallFunc_GetSelected_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DefaultSkillNode.DefaultSkillNode_C.SetBackgroundColor
// 0x0050 (0x0050 - 0x0000)
struct DefaultSkillNode_C_SetBackgroundColor final 
{
public:
	ESkillTreePages                               Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillTreePages                               Temp_byte_Variable1;                               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillTreePages                               Temp_byte_Variable12;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillTreeGroups                              Temp_byte_Variable123;                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4163[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0010(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select1_Default;                            // 0x0020(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select12_Default;                           // 0x0030(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select123_Default;                          // 0x0040(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

