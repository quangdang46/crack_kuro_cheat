#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LuaHotReload_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LuaHotReload.LuaHotReloadHelper
// 0x0010 (0x0038 - 0x0028)
class ULuaHotReloadHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnScriptChangedDelegate;                                  // 0x0028(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class LuaHotReload.LuaHotReloadHelper");
		return pStaticClass;
	}


	void OnLuaFileHotUpdate(const struct FString& NotifyMessage);
};


}

