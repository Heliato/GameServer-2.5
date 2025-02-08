#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUDMinusTeamMemberInfo

#include "Basic.hpp"

#include "HUDMinusTeamMemberInfo_classes.hpp"
#include "HUDMinusTeamMemberInfo_parameters.hpp"


namespace SDK
{

// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.ExecuteUbergraph_HUD-TeamMemberInfo
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTeamMemberInfo              K2Node_Event_NewInfo                                   ()
// class UFortPartyContext*                CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*                  CallFunc_GetLocalPlayerTeam_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                           CallFunc_GetTeamHitPointFractions_HealthFractions      (ZeroConstructor, ReferenceParm)
// TArray<float>                           CallFunc_GetTeamHitPointFractions_ShieldFractions      (ZeroConstructor, ReferenceParm)

void UHUDMinusTeamMemberInfo_C::ExecuteUbergraph_HUDMinusTeamMemberInfo(int32 EntryPoint, const struct FFortTeamMemberInfo& K2Node_Event_NewInfo, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<float>& CallFunc_GetTeamHitPointFractions_HealthFractions, TArray<float>& CallFunc_GetTeamHitPointFractions_ShieldFractions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-TeamMemberInfo_C", "ExecuteUbergraph_HUD-TeamMemberInfo");

	Params::HUDMinusTeamMemberInfo_C_ExecuteUbergraph_HUDMinusTeamMemberInfo Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewInfo = std::move(K2Node_Event_NewInfo);
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTeamHitPointFractions_HealthFractions = std::move(CallFunc_GetTeamHitPointFractions_HealthFractions);
	Parms.CallFunc_GetTeamHitPointFractions_ShieldFractions = std::move(CallFunc_GetTeamHitPointFractions_ShieldFractions);

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetTeamHitPointFractions_HealthFractions = std::move(Parms.CallFunc_GetTeamHitPointFractions_HealthFractions);
	CallFunc_GetTeamHitPointFractions_ShieldFractions = std::move(Parms.CallFunc_GetTeamHitPointFractions_ShieldFractions);
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.OnPlayerAttributesChanged
// (Event, Public, BlueprintEvent)

void UHUDMinusTeamMemberInfo_C::OnPlayerAttributesChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-TeamMemberInfo_C", "OnPlayerAttributesChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.OnPlayerInfoChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              NewInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUDMinusTeamMemberInfo_C::OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-TeamMemberInfo_C", "OnPlayerInfoChanged");

	Params::HUDMinusTeamMemberInfo_C_OnPlayerInfoChanged Parms{};

	Parms.NewInfo = std::move(NewInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUDMinusTeamMemberInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-TeamMemberInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              UpdatedMemberInfo                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FUniqueNetIdRepl                 PlayerPlatformNetId                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FUniqueNetIdRepl                 PlayerNetId                                            (Edit, BlueprintVisible, HasGetValueTypeHash)
// class UFortPartyContext*                CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable123                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Temp_int_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Variable1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                           Temp_class_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_UniqueNetIdRepl_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                           Temp_class_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable123                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable1234                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable1234                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable12345                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable12345                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsInLocalPlayersParty_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl                 K2Node_Select1_Default                                 (HasGetValueTypeHash)
// class UClass*                           K2Node_Select12_Default                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        K2Node_Select123_Default                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_IntInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   K2Node_Select1234_Default                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        K2Node_Select12345_Default                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDMinusTeamMemberInfo_C::Update(const struct FFortTeamMemberInfo& UpdatedMemberInfo, const struct FUniqueNetIdRepl& PlayerPlatformNetId, const struct FUniqueNetIdRepl& PlayerNetId, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, ESlateVisibility Temp_byte_Variable12, ESlateVisibility Temp_byte_Variable123, bool Temp_bool_Variable12, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool CallFunc_IsValid_ReturnValue, class UClass* Temp_class_Variable, bool CallFunc_IsValid_UniqueNetIdRepl_ReturnValue, class UClass* Temp_class_Variable1, bool Temp_bool_Variable123, bool Temp_bool_Variable1234, ESlateVisibility Temp_byte_Variable1234, ESlateVisibility Temp_byte_Variable12345, bool Temp_bool_Variable12345, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsInLocalPlayersParty_ReturnValue, const struct FUniqueNetIdRepl& K2Node_Select1_Default, class UClass* K2Node_Select12_Default, bool CallFunc_IsValid_ReturnValue1, ESlateVisibility K2Node_Select123_Default, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_Select1234_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, ESlateVisibility K2Node_Select12345_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-TeamMemberInfo_C", "Update");

	Params::HUDMinusTeamMemberInfo_C_Update Parms{};

	Parms.UpdatedMemberInfo = std::move(UpdatedMemberInfo);
	Parms.PlayerPlatformNetId = std::move(PlayerPlatformNetId);
	Parms.PlayerNetId = std::move(PlayerNetId);
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_IsValid_UniqueNetIdRepl_ReturnValue = CallFunc_IsValid_UniqueNetIdRepl_ReturnValue;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.Temp_bool_Variable123 = Temp_bool_Variable123;
	Parms.Temp_bool_Variable1234 = Temp_bool_Variable1234;
	Parms.Temp_byte_Variable1234 = Temp_byte_Variable1234;
	Parms.Temp_byte_Variable12345 = Temp_byte_Variable12345;
	Parms.Temp_bool_Variable12345 = Temp_bool_Variable12345;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsInLocalPlayersParty_ReturnValue = CallFunc_IsInLocalPlayersParty_ReturnValue;
	Parms.K2Node_Select1_Default = std::move(K2Node_Select1_Default);
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_Select123_Default = K2Node_Select123_Default;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select1234_Default = K2Node_Select1234_Default;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.K2Node_Select12345_Default = K2Node_Select12345_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.SetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GreaterEqual_FloatFloat_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDMinusTeamMemberInfo_C::SetHealth(float Value, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-TeamMemberInfo_C", "SetHealth");

	Params::HUDMinusTeamMemberInfo_C_SetHealth Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

