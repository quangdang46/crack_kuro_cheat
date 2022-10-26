#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_MapUIMarkManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MapUIMarkManager.BP_MapUIMarkManager_C
// 0x0000 (0x0200 - 0x0200)
class UBP_MapUIMarkManager_C : public UMapUIMarkManager
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_MapUIMarkManager.BP_MapUIMarkManager_C");
		return pStaticClass;
	}

};


}

