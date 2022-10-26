#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_IngameMapSys_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IngameMapSys.IngameMapSys_C
// 0x003D (0x00B5 - 0x0078)
class UIngameMapSys_C : public ULuaBluepirntSys
{
public:
	TMap<int, struct FLinearColor>                     mapPlayerColorTable;                                      // 0x0078(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bShowMarkerLocation;                                      // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass IngameMapSys.IngameMapSys_C");
		return pStaticClass;
	}


	void CheckNeedMiniMap(bool* bNeed);
	void CheckUseNewMap(bool* Use);
	void CheckCloseMiniMap(bool* needClose);
	void OpenOrHideEntireMap();
	void GetMapDataPath(class AGameStateBase* GameState, TEnumAsByte<enum EMapType> MapType, struct FString* Path);
	void GetShowMakerLocation(bool* bShow);
	void SetShowMakerLocation();
	void GetPlayerColorByIndexC(int Index, struct FLinearColor* Color);
};


}

