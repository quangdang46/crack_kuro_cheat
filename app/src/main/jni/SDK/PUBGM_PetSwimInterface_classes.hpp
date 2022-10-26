#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_PetSwimInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PetSwimInterface.PetSwimInterface_C
// 0x0000 (0x0020 - 0x0020)
class UPetSwimInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass PetSwimInterface.PetSwimInterface_C");
		return pStaticClass;
	}


	void ISetLeaveSwimMode();
	void ISetEnterSwimMode(float WaterSurface);
};


}

