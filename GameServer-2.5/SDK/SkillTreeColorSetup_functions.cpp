#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkillTreeColorSetup

#include "Basic.hpp"

#include "SkillTreeColorSetup_classes.hpp"
#include "SkillTreeColorSetup_parameters.hpp"


namespace SDK
{

// Function SkillTreeColorSetup.SkillTreeColorSetup_C.SkillTreeBGSetup
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSkillTreePageColors             Page_Color                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// ESkillTreePages                         Pages                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         Mid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESkillTreePages                         Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESkillTreePages                         Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     K2Node_Select_Default                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     K2Node_Select1_Default                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESkillTreePages                         Temp_byte_Variable12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     K2Node_Select12_Default                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTreeColorSetup_C::SkillTreeBGSetup(const struct FSkillTreePageColors& Page_Color, ESkillTreePages Pages, class UMaterialInstanceDynamic* Mid, class UObject* __WorldContext, ESkillTreePages Temp_byte_Variable, ESkillTreePages Temp_byte_Variable1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, ESkillTreePages Temp_byte_Variable12, const struct FLinearColor& K2Node_Select12_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkillTreeColorSetup_C", "SkillTreeBGSetup");

	Params::SkillTreeColorSetup_C_SkillTreeBGSetup Parms{};

	Parms.Page_Color = std::move(Page_Color);
	Parms.Pages = Pages;
	Parms.Mid = Mid;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = std::move(K2Node_Select_Default);
	Parms.K2Node_Select1_Default = std::move(K2Node_Select1_Default);
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.K2Node_Select12_Default = std::move(K2Node_Select12_Default);

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

