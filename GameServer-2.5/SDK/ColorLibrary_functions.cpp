#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ColorLibrary

#include "Basic.hpp"

#include "ColorLibrary_classes.hpp"
#include "ColorLibrary_parameters.hpp"


namespace SDK
{

// Function ColorLibrary.ColorLibrary_C.Get Buff Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColorStylesheet                 Stylesheet                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Color                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UColorLibrary_C::Get_Buff_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ColorLibrary_C", "Get Buff Color");

	Params::ColorLibrary_C_Get_Buff_Color Parms{};

	Parms.Stylesheet = std::move(Stylesheet);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function ColorLibrary.ColorLibrary_C.Get Debuff Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColorStylesheet                 Stylesheet                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Color                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UColorLibrary_C::Get_Debuff_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ColorLibrary_C", "Get Debuff Color");

	Params::ColorLibrary_C_Get_Debuff_Color Parms{};

	Parms.Stylesheet = std::move(Stylesheet);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function ColorLibrary.ColorLibrary_C.Get Unique Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColorStylesheet                 Stylesheet                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Color                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UColorLibrary_C::Get_Unique_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ColorLibrary_C", "Get Unique Color");

	Params::ColorLibrary_C_Get_Unique_Color Parms{};

	Parms.Stylesheet = std::move(Stylesheet);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function ColorLibrary.ColorLibrary_C.Get Fire Elemental Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColorStylesheet                 Stylesheet                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Color                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UColorLibrary_C::Get_Fire_Elemental_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ColorLibrary_C", "Get Fire Elemental Color");

	Params::ColorLibrary_C_Get_Fire_Elemental_Color Parms{};

	Parms.Stylesheet = std::move(Stylesheet);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function ColorLibrary.ColorLibrary_C.Get Ice Elemental Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColorStylesheet                 Stylesheet                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Color                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UColorLibrary_C::Get_Ice_Elemental_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ColorLibrary_C", "Get Ice Elemental Color");

	Params::ColorLibrary_C_Get_Ice_Elemental_Color Parms{};

	Parms.Stylesheet = std::move(Stylesheet);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function ColorLibrary.ColorLibrary_C.Get Bolt Elemental Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColorStylesheet                 Stylesheet                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Color                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UColorLibrary_C::Get_Bolt_Elemental_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ColorLibrary_C", "Get Bolt Elemental Color");

	Params::ColorLibrary_C_Get_Bolt_Elemental_Color Parms{};

	Parms.Stylesheet = std::move(Stylesheet);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function ColorLibrary.ColorLibrary_C.Get Base & Buff Colors
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EFortStatValueDisplayType               Display_Type                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortBuffState                          Buff_State                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColorStylesheet                 Stylesheet                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Base                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Buff                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Temp_struct_Variable                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Get_Buff_Color_Color                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Get_Debuff_Color_Color                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Get_Unique_Color_Color                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Get_Fire_Elemental_Color_Color                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Get_Ice_Elemental_Color_Color                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Get_Bolt_Elemental_Color_Color                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortStatValueDisplayType               Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Temp_struct_Variable1                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Temp_struct_Variable12                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortBuffState                          Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     K2Node_Select_Default                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     K2Node_Select1_Default                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UColorLibrary_C::Get_Base___Buff_Colors(EFortStatValueDisplayType Display_Type, EFortBuffState Buff_State, const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Base, struct FLinearColor* Buff, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& CallFunc_Get_Buff_Color_Color, const struct FLinearColor& CallFunc_Get_Debuff_Color_Color, const struct FLinearColor& CallFunc_Get_Unique_Color_Color, const struct FLinearColor& CallFunc_Get_Fire_Elemental_Color_Color, const struct FLinearColor& CallFunc_Get_Ice_Elemental_Color_Color, const struct FLinearColor& CallFunc_Get_Bolt_Elemental_Color_Color, EFortStatValueDisplayType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable1, const struct FLinearColor& Temp_struct_Variable12, EFortBuffState Temp_byte_Variable1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ColorLibrary_C", "Get Base & Buff Colors");

	Params::ColorLibrary_C_Get_Base___Buff_Colors Parms{};

	Parms.Display_Type = Display_Type;
	Parms.Buff_State = Buff_State;
	Parms.Stylesheet = std::move(Stylesheet);
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.CallFunc_Get_Buff_Color_Color = std::move(CallFunc_Get_Buff_Color_Color);
	Parms.CallFunc_Get_Debuff_Color_Color = std::move(CallFunc_Get_Debuff_Color_Color);
	Parms.CallFunc_Get_Unique_Color_Color = std::move(CallFunc_Get_Unique_Color_Color);
	Parms.CallFunc_Get_Fire_Elemental_Color_Color = std::move(CallFunc_Get_Fire_Elemental_Color_Color);
	Parms.CallFunc_Get_Ice_Elemental_Color_Color = std::move(CallFunc_Get_Ice_Elemental_Color_Color);
	Parms.CallFunc_Get_Bolt_Elemental_Color_Color = std::move(CallFunc_Get_Bolt_Elemental_Color_Color);
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable1 = std::move(Temp_struct_Variable1);
	Parms.Temp_struct_Variable12 = std::move(Temp_struct_Variable12);
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = std::move(K2Node_Select_Default);
	Parms.K2Node_Select1_Default = std::move(K2Node_Select1_Default);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Base != nullptr)
		*Base = std::move(Parms.Base);

	if (Buff != nullptr)
		*Buff = std::move(Parms.Buff);
}


// Function ColorLibrary.ColorLibrary_C.Get HarvestWeakPoint Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColorStylesheet                 Stylesheet                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     StyleSheetOut                                          (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UColorLibrary_C::Get_HarvestWeakPoint_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* StyleSheetOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ColorLibrary_C", "Get HarvestWeakPoint Color");

	Params::ColorLibrary_C_Get_HarvestWeakPoint_Color Parms{};

	Parms.Stylesheet = std::move(Stylesheet);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (StyleSheetOut != nullptr)
		*StyleSheetOut = std::move(Parms.StyleSheetOut);
}

}

