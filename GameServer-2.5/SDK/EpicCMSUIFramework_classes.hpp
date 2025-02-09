#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EpicCMSUIFramework

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "SlateCore_structs.hpp"
#include "EpicCMSUIFramework_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class EpicCMSUIFramework.EpicCMSImage
// 0x0018 (0x0228 - 0x0210)
class UEpicCMSImage final  : public UCommonLazyImage
{
public:
	uint8                                         Pad_C91[0x10];                                     // 0x0210(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bDownloadingExternalMedia;                         // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_C92[0x7];                                      // 0x0221(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSImage">();
	}
	static class UEpicCMSImage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSImage>();
	}
};

// Class EpicCMSUIFramework.EpicCMSLayoutBase
// 0x0068 (0x0270 - 0x0208)
class UEpicCMSLayoutBase final  : public UUserWidget
{
public:
	TArray<struct FSlotDescription>               CarouselSlotDescriptions;                          // 0x0208(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UEpicCMSTileCarousel>       CarouselClass;                                     // 0x0218(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_C93[0x50];                                     // 0x0220(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSLayoutBase">();
	}
	static class UEpicCMSLayoutBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSLayoutBase>();
	}
};

// Class EpicCMSUIFramework.EpicCMSManager
// 0x00B8 (0x00E0 - 0x0028)
class UEpicCMSManager final  : public UObject
{
public:
	uint8                                         Pad_C94[0x78];                                     // 0x0028(0x0078)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CmsEndpointOverride;                               // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bRefreshing;                                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_C95[0x2F];                                     // 0x00B1(0x002F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSManager">();
	}
	static class UEpicCMSManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSManager>();
	}
};

// Class EpicCMSUIFramework.EpicCMSScreenBase
// 0x0090 (0x0450 - 0x03C0)
class UEpicCMSScreenBase : public UCommonActivatablePanel
{
public:
	class FString                                 TileSetFieldName;                                  // 0x03C0(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>              TileTypeToTileClassDataTable;                      // 0x03D0(0x0028)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UClass>                   LayoutErrorClass;                                  // 0x03F8(0x0028)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UDataTable>              LayoutTypeToLayoutClassDataTable;                  // 0x0420(0x0028)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_C96[0x8];                                      // 0x0448(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSScreenBase">();
	}
	static class UEpicCMSScreenBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSScreenBase>();
	}
};

// Class EpicCMSUIFramework.EpicCMSTileBase
// 0x0118 (0x0898 - 0x0780)
class UEpicCMSTileBase final  : public UCommonButton
{
public:
	uint8                                         Pad_C97[0x8];                                      // 0x0780(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UCommonTextStyle>           DefaultTitleTextStyle;                             // 0x0788(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonTextStyle>           FeaturedTitleTextStyle;                            // 0x0790(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                   Title;                                             // 0x0798(0x0018)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FString                                 Link;                                              // 0x07B0(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bDownloadingExternalMedia;                         // 0x07C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bRefreshingMcpCatalog;                             // 0x07C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_C98[0xB6];                                     // 0x07C2(0x00B6)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonLazyImage*                       LazyImage_Icon;                                    // 0x0878(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       TitleTextBlock;                                    // 0x0880(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       SubtitleTextBlock;                                 // 0x0888(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       EyebrowTextBlock;                                  // 0x0890(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void DynamicHandleIconLoadingStateChanged(bool bIsLoading);
	void Launch();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSTileBase">();
	}
	static class UEpicCMSTileBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSTileBase>();
	}
};

// Class EpicCMSUIFramework.EpicCMSTileCarousel
// 0x0050 (0x0258 - 0x0208)
class UEpicCMSTileCarousel final  : public UUserWidget
{
public:
	struct FSlateSound                            PreviousButtonSound;                               // 0x0208(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                            NextButtonSound;                                   // 0x0220(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UCommonWidgetCarousel*                  Carousel;                                          // 0x0238(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                                NextPageButton;                                    // 0x0240(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                                PreviousPageButton;                                // 0x0248(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bShouldShowNavigationOnlyOnHover;                  // 0x0250(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bIsShowingNavigation;                              // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_C99[0x6];                                      // 0x0252(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HandleTilePageAdded(class UWidget* TileWidget);
	void NavigationVisibilityChanged(bool bShowNavigation);
	void NextPage();
	void PreviousPage();
	void SetCurrentPageByIndex(int32 PageIndex);

	int32 GetCurrentPageIndex() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSTileCarousel">();
	}
	static class UEpicCMSTileCarousel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSTileCarousel>();
	}
};

}

