#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_PetMiniTvAvatar_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PetMiniTvAvatar_01.PetMiniTvAvatar_01_C
// 0x0000 (0x0268 - 0x0268)
class UPetMiniTvAvatar_01_C : public UPetAvatarHandle
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass PetMiniTvAvatar_01.PetMiniTvAvatar_01_C");
		return pStaticClass;
	}

};


}

