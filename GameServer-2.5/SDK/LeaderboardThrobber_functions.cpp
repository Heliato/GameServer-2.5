#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LeaderboardThrobber

#include "Basic.hpp"

#include "LeaderboardThrobber_classes.hpp"
#include "LeaderboardThrobber_parameters.hpp"


namespace SDK
{

// Function LeaderboardThrobber.LeaderboardThrobber_C.ExecuteUbergraph_LeaderboardThrobber
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaderboardThrobber_C::ExecuteUbergraph_LeaderboardThrobber(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardThrobber_C", "ExecuteUbergraph_LeaderboardThrobber");

	Params::LeaderboardThrobber_C_ExecuteUbergraph_LeaderboardThrobber Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeaderboardThrobber.LeaderboardThrobber_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaderboardThrobber_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardThrobber_C", "PreConstruct");

	Params::LeaderboardThrobber_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

