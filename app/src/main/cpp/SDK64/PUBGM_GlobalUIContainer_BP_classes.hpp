#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_GlobalUIContainer_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GlobalUIContainer_BP.GlobalUIContainer_BP_C
// 0x0010 (0x03F0 - 0x03E0)
class UGlobalUIContainer_BP_C : public UUAEWidgetContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                CanvasContainer;                                          // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass GlobalUIContainer_BP.GlobalUIContainer_BP_C");
		return pStaticClass;
	}


	void AddWidgetInternal(class UUserWidget** Widget);
	void RemoveWidgetInternal(class UUserWidget** Widget);
	void AddWidgetWithZOrderInternal(class UUserWidget** Widget, int* ZOrder);
	void ExecuteUbergraph_GlobalUIContainer_BP(int EntryPoint);
};


}

