#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_LobbyRefitVehicle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C
// 0x01B5 (0x0735 - 0x0580)
class ABP_LobbyRefitVehicle_C : public ABP_LobbyVehicle_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        DefaultStaticMesh;                                        // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeLine_LerpPosition_degree_BC84527D4F1E3F8A299259BA82D05CD5;// 0x05A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               TimeLine_LerpPosition__Direction_BC84527D4F1E3F8A299259BA82D05CD5;// 0x05A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TimeLine_LerpPosition;                                    // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_AutoPlay_yaw_87093ECB435381EB481155BD1C007A5B;   // 0x05B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_AutoPlay_pitch_87093ECB435381EB481155BD1C007A5B; // 0x05B4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               Timeline_AutoPlay__Direction_87093ECB435381EB481155BD1C007A5B;// 0x05B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05B9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_AutoPlay;                                        // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeLine_BlendCamera_time_16B4579C4F72C1371A81BFBE1D6CF40B;// 0x05C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               TimeLine_BlendCamera__Direction_16B4579C4F72C1371A81BFBE1D6CF40B;// 0x05CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x05CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TimeLine_BlendCamera;                                     // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_Vehicle_Update_Zoom_in_cameraX_4617DA274820636AAC83688C648EE214;// 0x05D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               Timeline_Vehicle_Update_Zoom_in__Direction_4617DA274820636AAC83688C648EE214;// 0x05DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x05DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Vehicle_Update_Zoom_in;                          // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_Vehicle_Update_Zoom_out_cameraX_C9815D554EBF979651AC3BA48613EE7F;// 0x05E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               Timeline_Vehicle_Update_Zoom_out__Direction_C9815D554EBF979651AC3BA48613EE7F;// 0x05EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x05ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Vehicle_Update_Zoom_out;                         // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeLine_LerpRotator_time_88CF9F274BE419FD7F606D9F8C5776A8;// 0x05F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               TimeLine_LerpRotator__Direction_88CF9F274BE419FD7F606D9F8C5776A8;// 0x05FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x05FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TimeLine_LerpRotator;                                     // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETouchIndex>                      inputFingerIndex;                                         // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0609(0x0003) MISSED OFFSET
	float                                              initX;                                                    // 0x060C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              initY;                                                    // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              tempX;                                                    // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              tempY;                                                    // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isCloseUp;                                                // 0x061C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isTickRefitTips;                                          // 0x061D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x061E(0x0002) MISSED OFFSET
	struct FTransform                                  tempTransform_ForBlendCameraActor;                        // 0x0620(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  initTransform;                                            // 0x0650(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  TargetTransform;                                          // 0x0680(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              shortRadius;                                              // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              longRadius;                                               // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_LobbyRefitCloseUp_C*                     cameraCloseUp;                                            // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     centerPoint;                                              // 0x06C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     shortVector;                                              // 0x06CC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     longVector;                                               // 0x06D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                ellipseRotateDirection;                                   // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                targetCloseUpSlotId;                                      // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               canAutoPlay;                                              // 0x06EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x06ED(0x0003) MISSED OFFSET
	float                                              lastAutoPlayTime;                                         // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               showAllTips;                                              // 0x06F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x06F5(0x0003) MISSED OFFSET
	float                                              autoPlayInitRotateYaw;                                    // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isPlayingUpgradeEffect;                                   // 0x06FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isAutoPlaying;                                            // 0x06FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isResetingCloseUpCamera;                                  // 0x06FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isSwitchCameraEllipse;                                    // 0x06FF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isAllMeshLoaded;                                          // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0701(0x0003) MISSED OFFSET
	float                                              MeshScale;                                                // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URefitVehicleHandle*                         vehicleHandle;                                            // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           vehicleGroundMaterialInterface;                           // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ALobbyModelShowActorBP_C*                    refitVehicleShowActor;                                    // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x10];                                      // 0x0720(0x0010) UNKNOWN PROPERTY: ArrayProperty BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.RefitVehicleSTMesh
	int                                                TryTime;                                                  // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HightlightSuccess;                                        // 0x0734(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C");
		return pStaticClass;
	}


	void CanAutoPlayLua(bool* Param);
	void CheckRefitTipsFadeLua(float Yaw, bool showAllTips);
	void ShowLoading(bool Show);
	void ResetCameraRotation();
	void CreateDefaultRefitVehicleMesh();
	void HasRefitVehicleDownloaded(bool* HasDownloaded);
	void ChangeGroundShadow(const struct FString& Path);
	void GetRefitVehicleHandle(int VehicleID, class URefitVehicleHandle** RefitVehicleHandle);
	void InitSlotSocket(TMap<int, struct FString> slotSocket);
	void TryResetCloseUp();
	void SetCastShadow(bool CastShadow);
	void EnableCameraRotationLag(bool Enable);
	void UpdateLastAutoPlayTime();
	void CheckAutoPlay();
	void TryRotateSceneByTouch(bool* rotated);
	void TryStopAutoPlay();
	struct FTransform GetSlotSocketTransform(int inInt);
	void GetVectorAngle(float* degree);
	void DestroyFreeCamera();
	float GetYawToMesh(const struct FVector& Location);
	void CheckRefitTipsFade(bool forceShowAll);
	void InterpVelocity(float New, float Old, float* Velocity);
	void UserConstructionScript();
	void TimeLine_LerpRotator__FinishedFunc();
	void TimeLine_LerpRotator__UpdateFunc();
	void TimeLine_LerpPosition__FinishedFunc();
	void TimeLine_LerpPosition__UpdateFunc();
	void Timeline_AutoPlay__FinishedFunc();
	void Timeline_AutoPlay__UpdateFunc();
	void TimeLine_BlendCamera__FinishedFunc();
	void TimeLine_BlendCamera__UpdateFunc();
	void Timeline_Vehicle_Update_Zoom_out__FinishedFunc();
	void Timeline_Vehicle_Update_Zoom_out__UpdateFunc();
	void Timeline_Vehicle_Update_Zoom_in__FinishedFunc();
	void Timeline_Vehicle_Update_Zoom_in__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void ReceivePossessed(class AController** NewController);
	void SwitchCloseupCameraEllipse(int SlotID);
	void AutoPlay();
	void BlendCameraActor(class USceneComponent* CameraActor, const struct FTransform& toTransform);
	void SwitchCloseUpCameraLinear(int SlotID);
	void OnVehicleUpgradeSuccess();
	void ResetCloseUpCamera();
	void EventOnAllMeshLoad();
	void ShowLoadingForTime(float Time);
	void SetHighLight(float* invincible, float* FreExp, float* Speed);
	void TrySetHilight(float invincible, float Freq, float Speed);
	void LuaBeginPlay();
	void ExecuteUbergraph_BP_LobbyRefitVehicle(int EntryPoint);
};


}

