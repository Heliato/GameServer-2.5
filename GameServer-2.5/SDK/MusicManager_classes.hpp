#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MusicManager

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MusicManager.MusicManager_C
// 0x00F8 (0x0458 - 0x0360)
class AMusicManager_C final  : public AFortMusicManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(Transient, DuplicateTransient)
	class USoundBase*                             MusicFrontend;                                     // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             MusicLobby;                                        // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             StingerReturningToAmbientMusic;                    // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             StingerMorning;                                    // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             MusicMorning;                                      // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             MusicDay;                                          // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             StingerEvening;                                    // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             MusicEvening;                                      // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             StingerNight;                                      // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             MusicNight;                                        // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug;                                             // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F26[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   GameMode_Current;                                  // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   GameMode_Lobby;                                    // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   GameMode_Frontend;                                 // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   GameMode_InGame;                                   // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayStingerWhenReturningToAmbientMusic;            // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlayingAmbientMusic;                               // 0x03E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlayingThreatMusic;                                // 0x03E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlayingNearbyEnemiesMusic;                         // 0x03E3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlayingHuskLowMusic;                               // 0x03E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlayingHuskHighMusic;                              // 0x03E5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlayingLargeEnemyMusic;                            // 0x03E6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F27[0x1];                                     // 0x03E7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LastTimeMusicWasStartedOrContinued;                // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentMusicIntensityLevel;                        // 0x03EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortDayPhase                                 CurrentDayPhase;                                   // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F28[0x7];                                     // 0x03F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             LargeEnemyStinger;                                 // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             LargeEnemyMusic;                                   // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             HuskHighStinger;                                   // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             HuskHighMusic;                                     // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             HuskLowStinger;                                    // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             HuskLowMusic;                                      // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             NearbyEnemiesStinger;                              // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             NearbyEnemiesMusic;                                // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MusicLogicUpdateTickTime;                          // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinDurationBeforeMusicCanIncreaseIntensity;        // 0x043C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IntensityIncreaseFadeTime;                         // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMusicFadeStyles                              IntensityIncreaseFadeStyle;                        // 0x0444(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F29[0x3];                                     // 0x0445(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinDurationBeforeMusicCanDecreaseInIntensity;      // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IntensityDecreaseFadeTime;                         // 0x044C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMusicFadeStyles                              IntensityDecreaseFadeStyle;                        // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MusicShouldStop;                                   // 0x0451(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_MusicManager(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool Temp_bool_Variable1, bool CallFunc_Greater_IntInt_ReturnValue, EMusicFadeStyles K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue12, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue123, bool CallFunc_Greater_FloatFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue12, int32 CallFunc_MakeLiteralInt_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue12, bool CallFunc_NotEqual_IntInt_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue1234, float CallFunc_GetGameTimeInSeconds_ReturnValue12345, float CallFunc_Subtract_FloatFloat_ReturnValue123, bool CallFunc_Greater_FloatFloat_ReturnValue123, float CallFunc_GetGameTimeInSeconds_ReturnValue123456, float CallFunc_Subtract_FloatFloat_ReturnValue1234, float CallFunc_GetGameTimeInSeconds_ReturnValue1234567, bool CallFunc_Greater_FloatFloat_ReturnValue1234, float CallFunc_GetGameTimeInSeconds_ReturnValue12345678, float CallFunc_Subtract_FloatFloat_ReturnValue12345, bool CallFunc_Greater_FloatFloat_ReturnValue12345, bool CallFunc_NotEqual_IntInt_ReturnValue12, int32 CallFunc_MakeLiteralInt_ReturnValue12, class USoundBase* Temp_object_Variable, bool CallFunc_Greater_IntInt_ReturnValue12, float CallFunc_GetGameTimeInSeconds_ReturnValue123456789, bool CallFunc_BooleanAND_ReturnValue12, float CallFunc_Subtract_FloatFloat_ReturnValue123456, bool Temp_bool_Variable12, bool Temp_bool_Variable123, float K2Node_Select1_Default, float CallFunc_GetGameTimeInSeconds_ReturnValue12345678910, float CallFunc_GetGameTimeInSeconds_ReturnValue1234567891011, float CallFunc_Subtract_FloatFloat_ReturnValue1234567, bool CallFunc_Greater_FloatFloat_ReturnValue123456, class USoundBase* Temp_object_Variable1, bool CallFunc_Greater_FloatFloat_ReturnValue1234567, bool Temp_bool_Variable1234, bool Temp_bool_Variable12345, class USoundBase* Temp_object_Variable12, float K2Node_Select12_Default, bool Temp_bool_Variable123456, EFortDayPhase K2Node_Event_CurrentDayPhase, EFortDayPhase K2Node_Event_PreviousDayPhase, bool K2Node_Event_bAtCreation, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_EqualEqual_NameName_ReturnValue12, bool CallFunc_EqualEqual_NameName_ReturnValue123, bool CallFunc_EqualEqual_NameName_ReturnValue1234, bool CallFunc_EqualEqual_NameName_ReturnValue12345, bool CallFunc_NotEqual_IntInt_ReturnValue123, float CallFunc_GetTimeOfDaySpeed_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class USoundBase* Temp_object_Variable123, float CallFunc_GetEventHeatPercent_ReturnValue, float CallFunc_GetEventHeatPercent_ReturnValue1, float CallFunc_GetEventHeatPercent_ReturnValue12, float CallFunc_GetEventHeatPercent_ReturnValue123, class USoundBase* K2Node_Select123_Default, EFortDayPhase Temp_byte_Variable, class USoundBase* K2Node_Select1234_Default, class USoundBase* K2Node_Select12345_Default, EFortDayPhase Temp_byte_Variable1, int32 CallFunc_MakeLiteralInt_ReturnValue123, class USoundBase* K2Node_Select123456_Default, bool CallFunc_Greater_IntInt_ReturnValue123, bool CallFunc_BooleanAND_ReturnValue123, bool CallFunc_IsNearActiveEncounters_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, class USoundBase* K2Node_Select1234567_Default, float CallFunc_GetEventHeatPercent_ReturnValue1234, float CallFunc_GetEventHeatPercent_ReturnValue12345, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_Variable1234567, float CallFunc_Add_FloatFloat_ReturnValue1, bool CallFunc_Less_FloatFloat_ReturnValue, EMusicFadeStyles K2Node_Select12345678_Default, bool CallFunc_Greater_FloatFloat_ReturnValue12345678, bool Temp_bool_Variable12345678, float CallFunc_GetEventHeatPercent_ReturnValue123456, EMusicFadeStyles K2Node_Select123456789_Default, float CallFunc_Add_FloatFloat_ReturnValue12, bool CallFunc_Less_FloatFloat_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue123456789, float CallFunc_GetEventHeatPercent_ReturnValue1234567, float CallFunc_GetEventHeatPercent_ReturnValue12345678, float CallFunc_Add_FloatFloat_ReturnValue123, float CallFunc_Add_FloatFloat_ReturnValue1234, bool CallFunc_Less_FloatFloat_ReturnValue12, bool CallFunc_Less_FloatFloat_ReturnValue123, bool CallFunc_Greater_FloatFloat_ReturnValue12345678910, bool CallFunc_Greater_FloatFloat_ReturnValue1234567891011, bool Temp_bool_Variable123456789, class USoundBase* Temp_object_Variable1234, float K2Node_Select12345678910_Default, bool Temp_bool_Variable12345678910, class USoundBase* Temp_object_Variable12345, class USoundBase* K2Node_Select1234567891011_Default, bool Temp_bool_Variable1234567891011, bool Temp_bool_Variable123456789101112, class USoundBase* K2Node_Select123456789101112_Default, bool Temp_bool_Variable12345678910111213, float K2Node_Select12345678910111213_Default, class USoundBase* Temp_object_Variable123456, EMusicFadeStyles K2Node_Select1234567891011121314_Default, class USoundBase* K2Node_Select123456789101112131415_Default, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void StopMusic();
	void StartMusic();
	void ReceiveBeginPlay();
	void PlayAmbientMusic();
	void OnUpdateMusic();
	void OnDayPhaseChanged(EFortDayPhase Param_CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void UserConstructionScript(class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End1, bool K2Node_DynamicCast_bSuccess1);
	void ResetMusicBools();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MusicManager_C">();
	}
	static class AMusicManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMusicManager_C>();
	}
};

}

