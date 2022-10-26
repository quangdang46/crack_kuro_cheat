#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_OnHitByGrenade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OnHitByGrenade.OnHitByGrenade_C
// 0x0000 (0x0020 - 0x0020)
class UOnHitByGrenade_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass OnHitByGrenade.OnHitByGrenade_C");
		return pStaticClass;
	}


	void OnHitByCake();
};


}

