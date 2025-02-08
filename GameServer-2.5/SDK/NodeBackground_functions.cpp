#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NodeBackground

#include "Basic.hpp"

#include "NodeBackground_classes.hpp"
#include "NodeBackground_parameters.hpp"


namespace SDK
{

// Function NodeBackground.NodeBackground_C.ExecuteUbergraph_NodeBackground
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNodeBackground_C::ExecuteUbergraph_NodeBackground(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NodeBackground_C", "ExecuteUbergraph_NodeBackground");

	Params::NodeBackground_C_ExecuteUbergraph_NodeBackground Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NodeBackground.NodeBackground_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNodeBackground_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NodeBackground_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NodeBackground.NodeBackground_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNodeBackground_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NodeBackground_C", "PreConstruct");

	Params::NodeBackground_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NodeBackground.NodeBackground_C.SetBackgroundColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillTreeGroups                        Groups                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESkillTreeGroups                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_GetSingleMaterialStyleMID_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     K2Node_Select_Default                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNodeBackground_C::SetBackgroundColor(ESkillTreeGroups Groups, ESkillTreeGroups Temp_byte_Variable, class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NodeBackground_C", "SetBackgroundColor");

	Params::NodeBackground_C_SetBackgroundColor Parms{};

	Parms.Groups = Groups;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetSingleMaterialStyleMID_ReturnValue = CallFunc_GetSingleMaterialStyleMID_ReturnValue;
	Parms.K2Node_Select_Default = std::move(K2Node_Select_Default);

	UObject::ProcessEvent(Func, &Parms);
}

}

