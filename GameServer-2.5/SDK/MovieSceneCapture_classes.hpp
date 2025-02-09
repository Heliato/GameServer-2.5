#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieSceneCapture

#include "Basic.hpp"

#include "MovieSceneCapture_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class MovieSceneCapture.MovieSceneCapture
// 0x0210 (0x0238 - 0x0028)
#pragma pack(push, 0x1)
class alignas(0x08) UMovieSceneCapture : public UObject
{
public:
	uint8                                         Pad_1F8E[0x10];                                    // 0x0028(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCaptureProtocolID                     CaptureType;                                       // 0x0038(0x0008)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneCaptureProtocolSettings*     ProtocolSettings;                                  // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneCaptureSettings             Settings;                                          // 0x0048(0x0048)(Edit, Config, NativeAccessSpecifierPublic)
	bool                                          bUseSeparateProcess;                               // 0x0090(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCloseEditorWhenCaptureStarts;                     // 0x0091(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1F8F[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 AdditionalCommandLineArguments;                    // 0x0098(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 InheritedCommandLineArguments;                     // 0x00A8(0x0010)(Edit, ZeroConstructor, Transient, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1F90[0x180];                                   // 0x00B8(0x0180)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCapture">();
	}
	static class UMovieSceneCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCapture>();
	}
};
#pragma pack(pop)

// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// 0x0008 (0x0240 - 0x0238)
class UAutomatedLevelSequenceCapture final  : public UMovieSceneCapture
{
public:
	uint8                                         Pad_1F91[0x8];                                     // 0x0238(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AutomatedLevelSequenceCapture">();
	}
	static class UAutomatedLevelSequenceCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAutomatedLevelSequenceCapture>();
	}
};

// Class MovieSceneCapture.MovieSceneCaptureProtocolSettings
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureProtocolSettings : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCaptureProtocolSettings">();
	}
	static class UMovieSceneCaptureProtocolSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCaptureProtocolSettings>();
	}
};

// Class MovieSceneCapture.CompositionGraphCaptureSettings
// 0x0038 (0x0060 - 0x0028)
class UCompositionGraphCaptureSettings final  : public UMovieSceneCaptureProtocolSettings
{
public:
	struct FCompositionGraphCapturePasses         IncludeRenderPasses;                               // 0x0028(0x0010)(Edit, Config, NativeAccessSpecifierPublic)
	bool                                          bCaptureFramesInHDR;                               // 0x0038(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1F92[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         HDRCompressionQuality;                             // 0x003C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EHDRCaptureGamut                              CaptureGamut;                                      // 0x0040(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1F93[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        PostProcessingMaterial;                            // 0x0048(0x0018)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompositionGraphCaptureSettings">();
	}
	static class UCompositionGraphCaptureSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompositionGraphCaptureSettings>();
	}
};

// Class MovieSceneCapture.FrameGrabberProtocolSettings
// 0x0008 (0x0030 - 0x0028)
class UFrameGrabberProtocolSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	uint8                                         Pad_1F94[0x8];                                     // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FrameGrabberProtocolSettings">();
	}
	static class UFrameGrabberProtocolSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrameGrabberProtocolSettings>();
	}
};

// Class MovieSceneCapture.BmpImageCaptureSettings
// 0x0000 (0x0028 - 0x0028)
class UBmpImageCaptureSettings final  : public UMovieSceneCaptureProtocolSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BmpImageCaptureSettings">();
	}
	static class UBmpImageCaptureSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBmpImageCaptureSettings>();
	}
};

// Class MovieSceneCapture.ImageCaptureSettings
// 0x0008 (0x0038 - 0x0030)
class UImageCaptureSettings final  : public UFrameGrabberProtocolSettings
{
public:
	int32                                         CompressionQuality;                                // 0x0030(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1F95[0x4];                                     // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImageCaptureSettings">();
	}
	static class UImageCaptureSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImageCaptureSettings>();
	}
};

// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (0x0028 - 0x0028)
class IMovieSceneCaptureInterface final  : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCaptureInterface">();
	}
	static class IMovieSceneCaptureInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMovieSceneCaptureInterface>();
	}
};

// Class MovieSceneCapture.LevelCapture
// 0x0028 (0x0260 - 0x0238)
class ULevelCapture final  : public UMovieSceneCapture
{
public:
	bool                                          bAutoStartCapture;                                 // 0x0238(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1F96[0xB];                                     // 0x0239(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  PrerequisiteActorId;                               // 0x0244(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1F97[0xC];                                     // 0x0254(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelCapture">();
	}
	static class ULevelCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelCapture>();
	}
};

// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureEnvironment final  : public UObject
{
public:
	static float GetCaptureElapsedTime();
	static int32 GetCaptureFrameNumber();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCaptureEnvironment">();
	}
	static class UMovieSceneCaptureEnvironment* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCaptureEnvironment>();
	}
};

// Class MovieSceneCapture.VideoCaptureSettings
// 0x0018 (0x0048 - 0x0030)
class UVideoCaptureSettings final  : public UFrameGrabberProtocolSettings
{
public:
	bool                                          bUseCompression;                                   // 0x0030(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1F98[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CompressionQuality;                                // 0x0034(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 VideoCodec;                                        // 0x0038(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VideoCaptureSettings">();
	}
	static class UVideoCaptureSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVideoCaptureSettings>();
	}
};

}

