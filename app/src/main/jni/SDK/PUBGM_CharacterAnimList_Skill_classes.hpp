#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_CharacterAnimList_Skill_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CharacterAnimList_Skill.CharacterAnimList_Skill_C
// 0x0000 (0x01F0 - 0x01F0)
class UCharacterAnimList_Skill_C : public UUAECharacterAnimListComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass CharacterAnimList_Skill.CharacterAnimList_Skill_C");
		return pStaticClass;
	}

};


}

