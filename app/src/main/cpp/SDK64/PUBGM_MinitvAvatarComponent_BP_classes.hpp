#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_MinitvAvatarComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MinitvAvatarComponent_BP.MinitvAvatarComponent_BP_C
// 0x0000 (0x0868 - 0x0868)
class UMinitvAvatarComponent_BP_C : public UPetAvatarComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass MinitvAvatarComponent_BP.MinitvAvatarComponent_BP_C");
		return pStaticClass;
	}


	struct FAvatarTableData MakeAvatarTableData(struct FItemDefineID* InItemID);
	void RayEquipItemById(int ID);
};


}

