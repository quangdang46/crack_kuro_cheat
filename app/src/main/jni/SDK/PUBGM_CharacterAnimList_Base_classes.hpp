#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_CharacterAnimList_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CharacterAnimList_Base.CharacterAnimList_Base_C
// 0x0000 (0x01F0 - 0x01F0)
class UCharacterAnimList_Base_C : public UUAECharacterAnimListComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass CharacterAnimList_Base.CharacterAnimList_Base_C");
		return pStaticClass;
	}

};


}

