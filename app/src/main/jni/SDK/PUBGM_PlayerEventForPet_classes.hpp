#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_PlayerEventForPet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerEventForPet.PlayerEventForPet_C
// 0x0000 (0x0020 - 0x0020)
class UPlayerEventForPet_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass PlayerEventForPet.PlayerEventForPet_C");
		return pStaticClass;
	}


	void PlayerStateChange(EPawnState State, TEnumAsByte<enum EPawnStateChangeType> changeType);
};


}

