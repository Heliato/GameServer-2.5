#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaMatchmakingPlay

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaMatchmakingPlay.AthenaMatchmakingPlay_C
// 0x0050 (0x0378 - 0x0328)
class UAthenaMatchmakingPlay_C final  : public UFortAthenaMatchmakingWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewModeSelected;                                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      B_ChangeGameMode;                                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CB_LTM_Bang;                                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_CurGameMode;                                    // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       GameModeDescription;                               // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MatchmakingSpinner;                                // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      TouchButtonChangeGameMode;                         // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   PlaylistsUpdated;                                  // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void PlaylistsUpdated__DelegateSignature();
	void ExecuteUbergraph_AthenaMatchmakingPlay(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool Temp_bool_Variable, class FText Temp_text_Variable, EFortAthenaPlaylist Temp_byte_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable12, class FText Temp_text_Variable123, class FText Temp_text_Variable1234, class FText Temp_text_Variable12345, class FText Temp_text_Variable123456, class FText Temp_text_Variable1234567, class FText Temp_text_Variable12345678, class FText Temp_text_Variable123456789, class FText Temp_text_Variable12345678910, class FText Temp_text_Variable1234567891011, class FText Temp_text_Variable123456789101112, class FText Temp_text_Variable12345678910111213, class FText Temp_text_Variable1234567891011121314, class FText Temp_text_Variable123456789101112131415, class FText Temp_text_Variable12345678910111213141516, class FText Temp_text_Variable1234567891011121314151617, class FText Temp_text_Variable123456789101112131415161718, class FText Temp_text_Variable12345678910111213141516171819, class FText Temp_text_Variable1234567891011121314151617181920, class FText Temp_text_Variable123456789101112131415161718192021, class FText Temp_text_Variable12345678910111213141516171819202122, class FText Temp_text_Variable1234567891011121314151617181920212223, class FText Temp_text_Variable123456789101112131415161718192021222324, class FText Temp_text_Variable12345678910111213141516171819202122232425, class FText Temp_text_Variable1234567891011121314151617181920212223242526, class FText Temp_text_Variable123456789101112131415161718192021222324252627, class FText Temp_text_Variable12345678910111213141516171819202122232425262728, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546, EFortAthenaPlaylist Temp_byte_Variable1, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667686970, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667686970717273, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071727374, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667686970717273747576, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071727374757677, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667686970717273747576777879, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071727374757677787980, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667686970717273747576777879808182, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071727374757677787980818283, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667686970717273747576777879808182838485, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071727374757677787980818283848586, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667686970717273747576777879808182838485868788, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071727374757677787980818283848586878889, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667686970717273747576777879808182838485868788899091, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071727374757677787980818283848586878889909192, bool Temp_bool_Variable1, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293, EFortAthenaPlaylist Temp_byte_Variable12, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667686970717273747576777879808182838485868788899091929394, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071727374757677787980818283848586878889909192939495, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596, class FText Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667686970717273747576777879808182838485868788899091929394959697, class FText Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071727374757677787980818283848586878889909192939495969798, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122123, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122123124, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122123124125, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122123124125126, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122123124125126127, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122123124125126127128, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122123124125126127128129, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122123124125126127128129130, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122123124125126127128129130131, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122123124125126127128129130131132, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122123124125126127128129130131132133, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122123124125126127128129130131132133134, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122123124125126127128129130131132133134135, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122123124125126127128129130131132133134135136, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122123124125126127128129130131132133134135136137, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122123124125126127128129130131132133134135136137138, class FText Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122123124125126127128129130131132133134135136137138139, EFortAthenaPlaylist Temp_byte_Variable123, ESlateVisibility Temp_byte_Variable1234, ESlateVisibility Temp_byte_Variable12345, ESlateVisibility Temp_byte_Variable123456, ESlateVisibility Temp_byte_Variable1234567, ESlateVisibility Temp_byte_Variable12345678, ESlateVisibility Temp_byte_Variable123456789, ESlateVisibility Temp_byte_Variable12345678910, ESlateVisibility Temp_byte_Variable1234567891011, ESlateVisibility Temp_byte_Variable123456789101112, ESlateVisibility Temp_byte_Variable12345678910111213, ESlateVisibility Temp_byte_Variable1234567891011121314, ESlateVisibility Temp_byte_Variable123456789101112131415, ESlateVisibility Temp_byte_Variable12345678910111213141516, ESlateVisibility Temp_byte_Variable1234567891011121314151617, ESlateVisibility Temp_byte_Variable123456789101112131415161718, ESlateVisibility Temp_byte_Variable12345678910111213141516171819, ESlateVisibility Temp_byte_Variable1234567891011121314151617181920, ESlateVisibility Temp_byte_Variable123456789101112131415161718192021, ESlateVisibility Temp_byte_Variable12345678910111213141516171819202122, ESlateVisibility Temp_byte_Variable1234567891011121314151617181920212223, ESlateVisibility Temp_byte_Variable123456789101112131415161718192021222324, ESlateVisibility Temp_byte_Variable12345678910111213141516171819202122232425, ESlateVisibility Temp_byte_Variable1234567891011121314151617181920212223242526, ESlateVisibility Temp_byte_Variable123456789101112131415161718192021222324252627, ESlateVisibility Temp_byte_Variable12345678910111213141516171819202122232425262728, ESlateVisibility Temp_byte_Variable1234567891011121314151617181920212223242526272829, ESlateVisibility Temp_byte_Variable123456789101112131415161718192021222324252627282930, ESlateVisibility Temp_byte_Variable12345678910111213141516171819202122232425262728293031, ESlateVisibility Temp_byte_Variable1234567891011121314151617181920212223242526272829303132, ESlateVisibility Temp_byte_Variable123456789101112131415161718192021222324252627282930313233, ESlateVisibility Temp_byte_Variable12345678910111213141516171819202122232425262728293031323334, ESlateVisibility Temp_byte_Variable1234567891011121314151617181920212223242526272829303132333435, ESlateVisibility Temp_byte_Variable123456789101112131415161718192021222324252627282930313233343536, ESlateVisibility Temp_byte_Variable12345678910111213141516171819202122232425262728293031323334353637, ESlateVisibility Temp_byte_Variable1234567891011121314151617181920212223242526272829303132333435363738, ESlateVisibility Temp_byte_Variable123456789101112131415161718192021222324252627282930313233343536373839, ESlateVisibility Temp_byte_Variable12345678910111213141516171819202122232425262728293031323334353637383940, ESlateVisibility Temp_byte_Variable1234567891011121314151617181920212223242526272829303132333435363738394041, ESlateVisibility Temp_byte_Variable123456789101112131415161718192021222324252627282930313233343536373839404142, ESlateVisibility Temp_byte_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243, ESlateVisibility Temp_byte_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344, ESlateVisibility Temp_byte_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445, ESlateVisibility Temp_byte_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546, ESlateVisibility Temp_byte_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647, ESlateVisibility Temp_byte_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748, ESlateVisibility Temp_byte_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849, bool Temp_bool_Variable12, ESlateVisibility Temp_byte_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950, ESlateVisibility Temp_byte_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051, bool Temp_bool_Variable123, ESlateVisibility Temp_byte_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152, ESlateVisibility Temp_byte_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable1234, bool CallFunc_IsUsingGamepad_ReturnValue, ESlateVisibility Temp_byte_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354, bool CallFunc_Not_PreBool_ReturnValue, ESlateVisibility Temp_byte_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455, bool K2Node_Event_bCanMatchmake, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bIsMatchmaking, class FText K2Node_Select_Default, class FText K2Node_Select1_Default, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button1, bool K2Node_DynamicCast_bSuccess1, int32 K2Node_ComponentBoundEvent_Value1, class FText K2Node_Select12_Default, class FText K2Node_Select123_Default, int32 K2Node_ComponentBoundEvent_Value, bool CallFunc_Conv_IntToBool_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button123, class FText K2Node_Select1234_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button12, bool CallFunc_CheckForLTMBangs_BangAvail, ESlateVisibility K2Node_Select12345_Default, ESlateVisibility K2Node_Select123456_Default, bool K2Node_Event_bShowPlayButton, ESlateVisibility K2Node_Select1234567_Default, bool CallFunc_IsBROnly_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select12345678_Default);
	void BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__TouchButtonChangeGameMode_K2Node_ComponentBoundEvent_95_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnPlayButtonUpdated(bool bShowPlayButton);
	void OnAvailablePlaylistsUpdated();
	void RefreshBang();
	void BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void NewModeSelected_Display();
	void BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature(int32 Value);
	void BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature(int32 Value);
	void SetCancelButtonState(bool bIsMatchmaking);
	void Construct();
	void SetPlayButtonState(bool bCanMatchmake);
	void SetAutoFillOptions(TArray<class FText>& K2Node_MakeArray_Array);
	void PlaylistChange(bool bDirection, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess);
	void FillChange(bool bDirection, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess);
	void OpenPlayOptions(class UCommonUIContext* CallFunc_GetContext_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin1, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsBROnly_ReturnValue, class UAthenaMatchmakingOptionsDisplay_v2_C* CallFunc_Create_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, const struct FMargin& K2Node_Select_Default, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void CheckForLTMBangs(bool* BangAvail, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsEvent1QueueEnabled_ReturnValue, bool CallFunc_IsPlatoonQueueEnabled_ReturnValue, bool CallFunc_IsEvent8QueueEnabled_ReturnValue, bool CallFunc_IsEvent7QueueEnabled_ReturnValue, bool CallFunc_IsEvent6QueueEnabled_ReturnValue, bool CallFunc_IsEvent5QueueEnabled_ReturnValue, bool CallFunc_IsEvent4QueueEnabled_ReturnValue, bool CallFunc_IsEvent3QueueEnabled_ReturnValue, bool CallFunc_IsEvent2QueueEnabled_ReturnValue, bool CallFunc_IsFiftyFiftyQueueEnabled_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMatchmakingPlay_C">();
	}
	static class UAthenaMatchmakingPlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMatchmakingPlay_C>();
	}
};

}

