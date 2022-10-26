#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_SkillManagerComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SkillManagerComponent.BP_SkillManagerComponent_C
// 0x0000 (0x0720 - 0x0720)
class UBP_SkillManagerComponent_C : public UUAECharacterSkillManagerComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_SkillManagerComponent.BP_SkillManagerComponent_C");
		return pStaticClass;
	}

};


}

