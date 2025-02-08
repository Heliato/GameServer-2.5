#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PartyFinderListItem

#include "Basic.hpp"

#include "PartyFinderListItem_classes.hpp"
#include "PartyFinderListItem_parameters.hpp"


namespace SDK
{

// Function PartyFinderListItem.PartyFinderListItem_C.InviteJoinChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPartyFinderListItem_C::InviteJoinChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "InviteJoinChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyFinderListItem.PartyFinderListItem_C.ExecuteUbergraph_PartyFinderListItem
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_bExpanded                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsItemExpanded_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinderListItem_C::ExecuteUbergraph_PartyFinderListItem(int32 EntryPoint, bool K2Node_Event_bExpanded, bool CallFunc_IsItemExpanded_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "ExecuteUbergraph_PartyFinderListItem");

	Params::PartyFinderListItem_C_ExecuteUbergraph_PartyFinderListItem Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bExpanded = K2Node_Event_bExpanded;
	Parms.CallFunc_IsItemExpanded_ReturnValue = CallFunc_IsItemExpanded_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinderListItem.PartyFinderListItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPartyFinderListItem_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyFinderListItem.PartyFinderListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPartyFinderListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyFinderListItem.PartyFinderListItem_C.ExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bExpanded                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinderListItem_C::ExpansionChanged(bool bExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "ExpansionChanged");

	Params::PartyFinderListItem_C_ExpansionChanged Parms{};

	Parms.bExpanded = bExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinderListItem.PartyFinderListItem_C.OnSocialItemSet
// (Event, Protected, BlueprintEvent)

void UPartyFinderListItem_C::OnSocialItemSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "OnSocialItemSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyFinderListItem.PartyFinderListItem_C.InitializeItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             CallFunc_GetLocation_ReturnValue                       ()
// class FText                             CallFunc_GetDisplayName_ReturnValue                    ()
// struct FUniqueNetIdRepl                 CallFunc_GetUniquePlayerId_ReturnValue                 (HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinderListItem_C::InitializeItem(class FText CallFunc_GetLocation_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "InitializeItem");

	Params::PartyFinderListItem_C_InitializeItem Parms{};

	Parms.CallFunc_GetLocation_ReturnValue = CallFunc_GetLocation_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetUniquePlayerId_ReturnValue = std::move(CallFunc_GetUniquePlayerId_ReturnValue);
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinderListItem.PartyFinderListItem_C.BindSocialItemDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)

void UPartyFinderListItem_C::BindSocialItemDelegates(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "BindSocialItemDelegates");

	Params::PartyFinderListItem_C_BindSocialItemDelegates Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinderListItem.PartyFinderListItem_C.HandlePresenceUpdated
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinderListItem_C::HandlePresenceUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "HandlePresenceUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyFinderListItem.PartyFinderListItem_C.SetupExpansion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Expanded                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Temp_float_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Temp_float_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinderListItem_C::SetupExpansion(bool Expanded, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "SetupExpansion");

	Params::PartyFinderListItem_C_SetupExpansion Parms{};

	Parms.Expanded = Expanded;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinderListItem.PartyFinderListItem_C.UpdateStateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Temp_text_Variable                                     ()
// class FText                             Temp_text_Variable1                                    ()
// class FText                             Temp_text_Variable12                                   ()
// class FText                             Temp_text_Variable123                                  ()
// class FText                             Temp_text_Variable1234                                 ()
// class FText                             Temp_text_Variable12345                                ()
// class FText                             Temp_text_Variable123456                               ()
// class FText                             Temp_text_Variable1234567                              ()
// class FText                             Temp_text_Variable12345678                             ()
// class UFortPartyContext*                CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortPartyRestriction                   Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortPartyRestriction                   CallFunc_CanBeJoined_FailReason                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_CanBeJoined_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             K2Node_Select_Default                                  ()

void UPartyFinderListItem_C::UpdateStateText(class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable12, class FText Temp_text_Variable123, class FText Temp_text_Variable1234, class FText Temp_text_Variable12345, class FText Temp_text_Variable123456, class FText Temp_text_Variable1234567, class FText Temp_text_Variable12345678, class UFortPartyContext* CallFunc_GetContext_ReturnValue, EFortPartyRestriction Temp_byte_Variable, EFortPartyRestriction CallFunc_CanBeJoined_FailReason, bool CallFunc_CanBeJoined_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "UpdateStateText");

	Params::PartyFinderListItem_C_UpdateStateText Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_text_Variable123 = Temp_text_Variable123;
	Parms.Temp_text_Variable1234 = Temp_text_Variable1234;
	Parms.Temp_text_Variable12345 = Temp_text_Variable12345;
	Parms.Temp_text_Variable123456 = Temp_text_Variable123456;
	Parms.Temp_text_Variable1234567 = Temp_text_Variable1234567;
	Parms.Temp_text_Variable12345678 = Temp_text_Variable12345678;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_CanBeJoined_FailReason = CallFunc_CanBeJoined_FailReason;
	Parms.CallFunc_CanBeJoined_ReturnValue = CallFunc_CanBeJoined_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinderListItem.PartyFinderListItem_C.UnbindSocialItemDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinderListItem_C::UnbindSocialItemDelegates(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "UnbindSocialItemDelegates");

	Params::PartyFinderListItem_C_UnbindSocialItemDelegates Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

