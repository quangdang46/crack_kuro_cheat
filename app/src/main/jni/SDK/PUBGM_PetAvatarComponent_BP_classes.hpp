#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_PetAvatarComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PetAvatarComponent_BP.PetAvatarComponent_BP_C
// 0x0000 (0x0600 - 0x0600)
class UPetAvatarComponent_BP_C : public UPetAvatarComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass PetAvatarComponent_BP.PetAvatarComponent_BP_C");
		return pStaticClass;
	}


	void PetHasEquippedItem(int ID, bool* Out);
	void PetUnequipItemById(int ID);
	void PetEquipItemById(int ID);
	struct FAvatarTableData MakeAvatarTableData(struct FItemDefineID* InItemID);
};


}

