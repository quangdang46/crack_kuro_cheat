#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_PetEntityComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PetEntityComponent_BP.PetEntityComponent_BP_C
// 0x0000 (0x0178 - 0x0178)
class UPetEntityComponent_BP_C : public UPetEntityComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass PetEntityComponent_BP.PetEntityComponent_BP_C");
		return pStaticClass;
	}


	struct FPetAttachInfo GetAttachInfoFromTable(struct FFixPetAttachInfo* Info);
};


}

