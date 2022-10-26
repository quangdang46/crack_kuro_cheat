#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_PlaneAvatarHandleBase_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlaneAvatarHandleBase_BP.PlaneAvatarHandleBase_BP_C
// 0x0004 (0x011C - 0x0118)
class UPlaneAvatarHandleBase_BP_C : public UBackpackPlaneAvatarHandle
{
public:
	class UClass*                                      PlaneActorClass;                                          // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass PlaneAvatarHandleBase_BP.PlaneAvatarHandleBase_BP_C");
		return pStaticClass;
	}

};


}

