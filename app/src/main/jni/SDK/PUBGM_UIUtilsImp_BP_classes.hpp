#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_UIUtilsImp_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UIUtilsImp_BP.UIUtilsImp_BP_C
// 0x00A0 (0x01D0 - 0x0130)
class UUIUtilsImp_BP_C : public USTExtraUIBPUtils
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0130(0x0004) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FSlateBrush                                 LocalBrush;                                               // 0x0138(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass UIUtilsImp_BP.UIUtilsImp_BP_C");
		return pStaticClass;
	}


	class USaveGame* GetSettingConfigSaveGameData();
	void OnAsyncLoadOtherAsset(class UObject** AsyAsset, class UImage** TarImage, bool* KeepSize);
	void ExecuteUbergraph_UIUtilsImp_BP(int EntryPoint);
};


}

