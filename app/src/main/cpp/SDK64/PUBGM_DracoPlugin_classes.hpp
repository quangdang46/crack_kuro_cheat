#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_DracoPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DracoPlugin.Draco
// 0x0000 (0x0028 - 0x0028)
class UDraco : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class DracoPlugin.Draco");
		return pStaticClass;
	}

};


// Class DracoPlugin.DracoSkeletal
// 0x0000 (0x0028 - 0x0028)
class UDracoSkeletal : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class DracoPlugin.DracoSkeletal");
		return pStaticClass;
	}

};


}

