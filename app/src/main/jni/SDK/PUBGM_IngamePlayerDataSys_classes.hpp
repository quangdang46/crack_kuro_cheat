#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_IngamePlayerDataSys_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IngamePlayerDataSys.IngamePlayerDataSys_C
// 0x0000 (0x0078 - 0x0078)
class UIngamePlayerDataSys_C : public ULuaBluepirntSys
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass IngamePlayerDataSys.IngamePlayerDataSys_C");
		return pStaticClass;
	}


	void GetPlayerLevel(int* Level);
};


}

