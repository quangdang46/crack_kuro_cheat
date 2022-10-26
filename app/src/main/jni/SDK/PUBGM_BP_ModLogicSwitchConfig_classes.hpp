#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_ModLogicSwitchConfig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ModLogicSwitchConfig.BP_ModLogicSwitchConfig_C
// 0x0000 (0x0090 - 0x0090)
class UBP_ModLogicSwitchConfig_C : public USTExtraModLogicSwitch
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_ModLogicSwitchConfig.BP_ModLogicSwitchConfig_C");
		return pStaticClass;
	}

};


}

