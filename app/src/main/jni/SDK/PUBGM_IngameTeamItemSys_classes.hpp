#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_IngameTeamItemSys_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IngameTeamItemSys.IngameTeamItemSys_C
// 0x0000 (0x0078 - 0x0078)
class UIngameTeamItemSys_C : public ULuaBluepirntSys
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass IngameTeamItemSys.IngameTeamItemSys_C");
		return pStaticClass;
	}


	void GetItemAddonMap(TMap<struct FString, struct FString> AddonMap, TMap<struct FString, struct FString>* Path);
};


}

