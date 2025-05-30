#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BasicGradientFill

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BasicGradientFill.BasicGradientFill_C.ExecuteUbergraph_BasicGradientFill
// 0x0008 (0x0008 - 0x0000)
struct BasicGradientFill_C_ExecuteUbergraph_BasicGradientFill final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BasicGradientFill.BasicGradientFill_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BasicGradientFill_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BasicGradientFill.BasicGradientFill_C.Set Fill
// 0x0038 (0x0038 - 0x0000)
struct BasicGradientFill_C_Set_Fill final 
{
public:
	struct FLinearColor                           Param_Color_1;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Param_Color_2;                                     // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rotation__0_Minus_1_;                              // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BasicGradientFill.BasicGradientFill_C.Set Brush Size
// 0x0080 (0x0080 - 0x0000)
struct BasicGradientFill_C_Set_Brush_Size final 
{
public:
	struct FVector2D                              Param_Brush_Size;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0008(0x0078)()
};

}

