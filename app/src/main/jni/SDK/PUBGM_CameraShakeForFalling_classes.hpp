#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_CameraShakeForFalling_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CameraShakeForFalling.CameraShakeForFalling_C
// 0x0004 (0x0144 - 0x0140)
class UCameraShakeForFalling_C : public UCameraShake
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0140(0x0004) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass CameraShakeForFalling.CameraShakeForFalling_C");
		return pStaticClass;
	}


	void ReceivePlayShake(float* Scale);
	void ExecuteUbergraph_CameraShakeForFalling(int EntryPoint);
};


}

