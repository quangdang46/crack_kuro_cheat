#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Reddot_Anchor_Item03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Reddot_Anchor_Item03.Reddot_Anchor_Item03_C
// 0x000C (0x0294 - 0x0288)
class UReddot_Anchor_Item03_C : public ULuaUserWidget
{
public:
	class UWidgetAnimation*                            Breathing;                                                // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                PosTemplate;                                              // 0x0290(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Reddot_Anchor_Item03.Reddot_Anchor_Item03_C");
		return pStaticClass;
	}

};


}

