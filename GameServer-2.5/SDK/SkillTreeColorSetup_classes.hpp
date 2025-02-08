#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkillTreeColorSetup

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkillTreePages_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass SkillTreeColorSetup.SkillTreeColorSetup_C
// 0x0000 (0x0028 - 0x0028)
class USkillTreeColorSetup_C final  : public UBlueprintFunctionLibrary
{
public:
	static void SkillTreeBGSetup(const struct FSkillTreePageColors& Page_Color, ESkillTreePages Pages, class UMaterialInstanceDynamic* Mid, class UObject* __WorldContext, ESkillTreePages Temp_byte_Variable, ESkillTreePages Temp_byte_Variable1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, ESkillTreePages Temp_byte_Variable12, const struct FLinearColor& K2Node_Select12_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillTreeColorSetup_C">();
	}
	static class USkillTreeColorSetup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillTreeColorSetup_C>();
	}
};

}

