#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_GrenadeAvatarComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C
// 0x00D0 (0x0420 - 0x0350)
class UGrenadeAvatarComponent_BP_C : public UGrenadeAvatarComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0004) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0354(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.ExplodeEffect
	unsigned char                                      UnknownData02[0x28];                                      // 0x0380(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.ExplodeSound
	unsigned char                                      UnknownData03[0x28];                                      // 0x03A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GrenadeFuzeAkSoundEvent
	unsigned char                                      UnknownData04[0x28];                                      // 0x03D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GrenadeThrowAkSoundEvent
	unsigned char                                      UnknownData05[0x28];                                      // 0x03F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GrenadeWallCollideAkSoundEvent

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C");
		return pStaticClass;
	}


	int GetDefaultAvatarID(int* InAvatarID);
	struct FString GetItemAvatarHandlePath(int* ItemId);
	class UBackpackCommonAvatarHandle* GetItemAvatarHandle(int* ItemId);
	void GrenadeAvatarEquiped();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GrenadeAvatarComponent_BP(int EntryPoint);
};


}

