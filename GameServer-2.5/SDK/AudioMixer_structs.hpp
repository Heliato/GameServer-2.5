#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioMixer

#include "Basic.hpp"


namespace SDK
{

// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
// NumValues: 0x0005
enum class ESubmixEffectDynamicsPeakMode : uint8
{
	MeanSquared                              = 0,
	RootMeanSquared                          = 1,
	Peak                                     = 2,
	Count                                    = 3,
	ESubmixEffectDynamicsPeakMode_MAX        = 4,
};

// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
// NumValues: 0x0006
enum class ESubmixEffectDynamicsProcessorType : uint8
{
	Compressor                               = 0,
	Limiter                                  = 1,
	Expander                                 = 2,
	Gate                                     = 3,
	Count                                    = 4,
	ESubmixEffectDynamicsProcessorType_MAX   = 5,
};

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
// 0x0030 (0x0030 - 0x0000)
struct FSubmixEffectReverbSettings final 
{
public:
	float                                         Density;                                           // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Diffusion;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Gain;                                              // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GainHF;                                            // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DecayTime;                                         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DecayHFRatio;                                      // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReflectionsGain;                                   // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReflectionsDelay;                                  // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LateGain;                                          // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LateDelay;                                         // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AirAbsorptionGainHF;                               // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WetLevel;                                          // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AudioMixer.SubmixEffectEQBand
// 0x0010 (0x0010 - 0x0000)
struct FSubmixEffectEQBand final 
{
public:
	float                                         Frequency;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Bandwidth;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GainDb;                                            // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bEnabled : 1;                                      // 0x000C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_CD6[0x3];                                      // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// 0x0010 (0x0010 - 0x0000)
struct FSubmixEffectSubmixEQSettings final 
{
public:
	TArray<struct FSubmixEffectEQBand>            EQBands;                                           // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// 0x0028 (0x0028 - 0x0000)
struct FSubmixEffectDynamicsProcessorSettings final 
{
public:
	ESubmixEffectDynamicsProcessorType            DynamicsProcessorType;                             // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESubmixEffectDynamicsPeakMode                 PeakMode;                                          // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_CD7[0x2];                                      // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LookAheadMsec;                                     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AttackTimeMsec;                                    // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReleaseTimeMsec;                                   // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ThresholdDb;                                       // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Ratio;                                             // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         KneeBandwidthDb;                                   // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InputGainDb;                                       // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OutputGainDb;                                      // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bChannelLinked : 1;                                // 0x0024(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAnalogMode : 1;                                   // 0x0024(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_CD8[0x3];                                      // 0x0025(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}

