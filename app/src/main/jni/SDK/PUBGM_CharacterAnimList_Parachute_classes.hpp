#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_CharacterAnimList_Parachute_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CharacterAnimList_Parachute.CharacterAnimList_Parachute_C
// 0x0000 (0x01A8 - 0x01A8)
class UCharacterAnimList_Parachute_C : public UUAEChaParachuteAnimListComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass CharacterAnimList_Parachute.CharacterAnimList_Parachute_C");
		return pStaticClass;
	}

};


}

