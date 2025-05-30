#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TT_Commando_DebilitatingShots

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TT_Commando_DebilitatingShots.TT_Commando_DebilitatingShots_C
// 0x0000 (0x0168 - 0x0168)
class UTT_Commando_DebilitatingShots_C final  : public UFortGameplayAbilityTooltip
{
public:
	void InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_Commando_DebilitatingShots_C* K2Node_DynamicCast_AsGA_Commando_Debilitating_Shots, bool K2Node_DynamicCast_bSuccess) const;
	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, class UGA_Commando_DebilitatingShots_C* DibilitatingShots, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_Commando_DebilitatingShots_C* K2Node_DynamicCast_AsGA_Commando_Debilitating_Shots, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class FText Temp_text_Variable, int32 CallFunc_FTrunc_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText Temp_text_Variable1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, class FText K2Node_Select_Default) const;
	bool BP_GetTokenizedDescriptionText(class UObject* ObjectToDescribe, struct FGameplayTag& Tag, class UFortTooltipContext* Context, TArray<class FText>* OutDescription, TArray<class FText>& K2Node_MakeArray_Array) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TT_Commando_DebilitatingShots_C">();
	}
	static class UTT_Commando_DebilitatingShots_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTT_Commando_DebilitatingShots_C>();
	}
};

}

