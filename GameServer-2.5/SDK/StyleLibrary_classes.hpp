#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StyleLibrary

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "EFortUITheme_structs.hpp"
#include "EFortUIThemeColor_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass StyleLibrary.StyleLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UStyleLibrary_C final  : public UBlueprintFunctionLibrary
{
public:
	static void Get_Theme_Color(const struct FFortUIStylesheet& Stylesheet, EFortUITheme Theme_Type, EFortUIThemeColor Color_Type, class UObject* __WorldContext, struct FLinearColor* Theme_Color, EFortUIThemeColor Temp_byte_Variable, const struct FFortUITheme& CallFunc_Get_Theme_Theme, const struct FLinearColor& K2Node_Select_Default);
	static void Get_Theme(const struct FFortUIStylesheet& Stylesheet, EFortUITheme Theme_Type, class UObject* __WorldContext, struct FFortUITheme* Theme, EFortUITheme Temp_byte_Variable, const struct FFortUITheme& K2Node_Select_Default);
	static void Get_Standard_Icon_Size(const struct FFortUIStylesheet& Stylesheet, EFortBrushSize Brush_Size, class UObject* __WorldContext, struct FVector2D* Icon_Size, struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue);
	static void Get_Item_Icon_Size(const struct FFortUIStylesheet& Stylesheet, EFortBrushSize Brush_Size, class UObject* __WorldContext, struct FVector2D* Icon_Size, struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue);
	static void Get_Buff_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Debuff_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Item_Size(const struct FFortUIStylesheet& Stylesheet, EFortBrushSize Brush_Size, class UObject* __WorldContext, struct FVector2D* Item_Size, struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue);
	static void Get_Unique_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Fire_Elemental_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Ice_Elemental_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Bolt_Elemental_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Base___Buff_Colors(EFortStatValueDisplayType Display_Type, EFortBuffState Buff_State, const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Base, struct FLinearColor* Buff, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& CallFunc_Get_Buff_Color_Color, const struct FLinearColor& CallFunc_Get_Debuff_Color_Color, const struct FLinearColor& CallFunc_Get_Unique_Color_Color, const struct FLinearColor& CallFunc_Get_Fire_Elemental_Color_Color, const struct FLinearColor& CallFunc_Get_Ice_Elemental_Color_Color, const struct FLinearColor& CallFunc_Get_Bolt_Elemental_Color_Color, EFortStatValueDisplayType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable1, const struct FLinearColor& Temp_struct_Variable12, EFortBuffState Temp_byte_Variable1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default);
	static void ResizeBrush(EFortBrushSize BrushSize, const struct FSlateBrush& BaseBrush, class UObject* __WorldContext, struct FSlateBrush* NewParam, const struct FVector2D& CallFunc_Get_Standard_Icon_Size_Icon_Size, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	static void Get_HarvestWeakPoint_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* StyleSheetOut);
	static void Get_Conning_Color_From_Difficulty_Value(int32 Player_Skill_Level, float Content_Difficulty_Level, const struct FGameDifficultyInfo& Game_Difficulty_Info, int32 Content_Skill_Points, class UObject* __WorldContext, struct FLinearColor* Difficulty_Linear_Color, bool* Success, class FText* ToolTipText, int32* DifficultyValue, const TArray<class FText>& DifficultyColorNames, const TArray<class FText>& DifficultyTooltips, const TArray<int32>& DifficultyIndices, const TArray<struct FLinearColor>& DifficultyColors, const TArray<class FName>& RowNames, int32 DifficultyOut, int32 MultipleGreenHexIndexOffset, int32 GreenBottomArrayElementIndex, float Content_DL_In, class FText DifficultyColorName, class FText ConningTooltipText, int32 Content_SP, bool Valid, int32 Player_Skill_Level_In, const TArray<float>& SPCutoffValues, int32 Stonewood_VLT_Skill_Level, const struct FLinearColor& DifficultyColor, float BucketOffsetValue, class FText CallFunc_Array_Get_Item, class FText CallFunc_Array_Get_Item1, const struct FLinearColor& CallFunc_Array_Get_Item12, TArray<float>& K2Node_MakeArray_Array, float CallFunc_Conv_IntToFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, TArray<class FName>& K2Node_MakeArray_Array1, class FName CallFunc_Array_Get_Item123, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, TArray<struct FLinearColor>& K2Node_MakeArray_Array12, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item1234, float CallFunc_Array_Get_Item12345, bool CallFunc_Greater_FloatFloat_ReturnValue, TArray<int32>& K2Node_MakeArray_Array123, EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_True_if_break_was_hit_Variable, TArray<class FText>& K2Node_MakeArray_Array1234, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array12345);
	static void Get_Conning_Color_For_Specific_Difficulty(int32 Difficulty_Value, class UObject* __WorldContext, struct FLinearColor* Difficulty_Linear_Color, bool* Invalid, const struct FLinearColor& DifficultyColor, bool K2Node_SwitchInteger_CmpSuccess);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StyleLibrary_C">();
	}
	static class UStyleLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStyleLibrary_C>();
	}
};

}

