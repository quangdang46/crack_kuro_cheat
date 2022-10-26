#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Main_Tips_Inventory_UIBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Lobby_Main_Tips_Inventory_UIBP.Lobby_Main_Tips_Inventory_UIBP_C
// 0x0008 (0x0220 - 0x0218)
class ULobby_Main_Tips_Inventory_UIBP_C : public UUserWidget
{
public:
	class UCanvasPanel*                                Panel_Wardrobe_DownloadTips;                              // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Main_Tips_Inventory_UIBP.Lobby_Main_Tips_Inventory_UIBP_C");
		return pStaticClass;
	}

};


}

