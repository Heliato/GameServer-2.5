#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Slate

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK
{

// Enum Slate.ETextFlowDirection
// NumValues: 0x0004
enum class ETextFlowDirection : uint8
{
	Auto                                     = 0,
	LeftToRight                              = 1,
	RightToLeft                              = 2,
	ETextFlowDirection_MAX                   = 3,
};

// Enum Slate.ETextJustify
// NumValues: 0x0004
enum class ETextJustify : uint8
{
	Left                                     = 0,
	Center                                   = 1,
	Right                                    = 2,
	ETextJustify_MAX                         = 3,
};

// Enum Slate.EVirtualKeyboardDismissAction
// NumValues: 0x0004
enum class EVirtualKeyboardDismissAction : uint8
{
	TextChangeOnDismiss                      = 0,
	TextCommitOnAccept                       = 1,
	TextCommitOnDismiss                      = 2,
	EVirtualKeyboardDismissAction_MAX        = 3,
};

// Enum Slate.ETextWrappingPolicy
// NumValues: 0x0003
enum class ETextWrappingPolicy : uint8
{
	DefaultWrapping                          = 0,
	AllowPerCharacterWrapping                = 1,
	ETextWrappingPolicy_MAX                  = 2,
};

// Enum Slate.ETableViewMode
// NumValues: 0x0004
enum class ETableViewMode : uint8
{
	List                                     = 0,
	Tile                                     = 1,
	Tree                                     = 2,
	ETableViewMode_MAX                       = 3,
};

// Enum Slate.ESelectionMode
// NumValues: 0x0005
enum class ESelectionMode : uint8
{
	None                                     = 0,
	Single                                   = 1,
	SingleToggle                             = 2,
	Multi                                    = 3,
	ESelectionMode_MAX                       = 4,
};

// Enum Slate.EProgressBarFillType
// NumValues: 0x0006
enum class EProgressBarFillType : uint8
{
	LeftToRight                              = 0,
	RightToLeft                              = 1,
	FillFromCenter                           = 2,
	TopToBottom                              = 3,
	BottomToTop                              = 4,
	EProgressBarFillType_MAX                 = 5,
};

// Enum Slate.EStretch
// NumValues: 0x0009
enum class EStretch : uint8
{
	None                                     = 0,
	Fill                                     = 1,
	ScaleToFit                               = 2,
	ScaleToFitX                              = 3,
	ScaleToFitY                              = 4,
	ScaleToFill                              = 5,
	ScaleBySafeZone                          = 6,
	UserSpecified                            = 7,
	EStretch_MAX                             = 8,
};

// Enum Slate.EStretchDirection
// NumValues: 0x0004
enum class EStretchDirection : uint8
{
	Both                                     = 0,
	DownOnly                                 = 1,
	UpOnly                                   = 2,
	EStretchDirection_MAX                    = 3,
};

// Enum Slate.EDescendantScrollDestination
// NumValues: 0x0004
enum class EDescendantScrollDestination : uint8
{
	IntoView                                 = 0,
	TopOrLeft                                = 1,
	Center                                   = 2,
	EDescendantScrollDestination_MAX         = 3,
};

// Enum Slate.EListItemAlignment
// NumValues: 0x0008
enum class EListItemAlignment : uint8
{
	EvenlyDistributed                        = 0,
	EvenlySize                               = 1,
	EvenlyWide                               = 2,
	LeftAligned                              = 3,
	RightAligned                             = 4,
	CenterAligned                            = 5,
	Fill                                     = 6,
	EListItemAlignment_MAX                   = 7,
};

// Enum Slate.EMultipleKeyBindingIndex
// NumValues: 0x0004
enum class EMultipleKeyBindingIndex : uint8
{
	Primary                                  = 0,
	Secondary                                = 1,
	NumChords                                = 2,
	EMultipleKeyBindingIndex_MAX             = 3,
};

// ScriptStruct Slate.InputChord
// 0x0020 (0x0020 - 0x0000)
struct FInputChord final 
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bShift : 1;                                        // 0x0018(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCtrl : 1;                                         // 0x0018(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAlt : 1;                                          // 0x0018(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCmd : 1;                                          // 0x0018(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1D92[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct Slate.Anchors
// 0x0010 (0x0010 - 0x0000)
struct FAnchors final 
{
public:
	struct FVector2D                              Minimum;                                           // 0x0000(0x0008)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              Maximum;                                           // 0x0008(0x0008)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

