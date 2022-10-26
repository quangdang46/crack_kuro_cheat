#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_ShineInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShineInterface.ShineInterface_C
// 0x0000 (0x0020 - 0x0020)
class UShineInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass ShineInterface.ShineInterface_C");
		return pStaticClass;
	}


	void ShowNormal();
	void ShowShine();
};


}

