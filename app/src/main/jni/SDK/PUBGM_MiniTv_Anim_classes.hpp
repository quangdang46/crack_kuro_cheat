#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_MiniTv_Anim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass MiniTv_Anim.MiniTv_Anim_C
// 0x0B80 (0x0E70 - 0x02F0)
class UMiniTv_Anim_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0004) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root_08B11A174EC514BEC5718882DF0694B4;      // 0x02F8(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D7B72BE24EB04364FE178FA026E65FE8;// 0x0330(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0521CBB44E0764B8E506168619B29A22;// 0x0368(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_811140BD498D35A8201AB8B06403744E;// 0x03A0(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_349A9286459785A6CB82098B48FCF413;// 0x03D8(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A93D5F8A437DED85C8B89B9E294029A3;// 0x0410(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0E5571924803012EA1CFC59830FE0225;// 0x0448(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4CB4C5BE4408EC09DBEE9E870E288122;// 0x0480(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11656A624D79C3DC29F0D295D7CA8E92;// 0x04B8(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6C82B2B94DC6B6124AB64C9B16986275;// 0x04F0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_50B2D83C49FCFEBAA0C66690BB547CC1;// 0x0550(0x0060)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_F687C8584002A801512D1DAF2DDCCDBA;// 0x05B0(0x0098)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_ABC4182C40F5631C99CE1A9DD7D88D05;// 0x0648(0x0038)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3C0D3C8A4900719BE1ABE094CC1DDEE6;// 0x0680(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_845B86564C1C5616585BA6A9D7E9CACE;// 0x0770(0x0038)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_FC35BFAE4A181D44BE9A8A8BBA1B0930;// 0x07A8(0x0098)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0A287ED04F1F139739ED75A408C8F23C;// 0x0840(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1C1F5FD84276BEC4F90F089C2B5B3C4E;// 0x08A0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_60CA9EAF49B1B1A9FA49EF8DC6AE54D8;// 0x0900(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CC84DB55440EEAAF56501DA63DB25227;// 0x0938(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D8EC7C874F3EDFDE51853B86BA6C4D91;// 0x0998(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B980C78D41E73DDD6E275789333FEA60;// 0x09F8(0x0060)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_56D75B364E148F814C2A84BA44A164EB;// 0x0A58(0x0098)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FBA9529D42F96C12A81DA68CBB3BC818;// 0x0AF0(0x0038)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_B794831A434D87C0385C60A7F2BD37F6;// 0x0B28(0x0098)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_70A1BC124B94725E3F818E8C45ABFF22;// 0x0BC0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E1EAF320477428B9FE06A684837F6733;// 0x0C20(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F85F89DB49653DC5E62B58A377FF4EB9;// 0x0C80(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0354D8144427E351A277C68424D354D7;// 0x0CB8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_73DD72644053FB7030ED09B702D27900;// 0x0D18(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3E2B818E407DC77B185786B072C94F9F;// 0x0D50(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_80DC844D4570789EAAC2F3AEB7A9301D;      // 0x0DF8(0x0058)
	int                                                IdleState;                                                // 0x0E50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BStartDrag;                                               // 0x0E54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BRotate;                                                  // 0x0E55(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BWalk;                                                    // 0x0E56(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BWin;                                                     // 0x0E57(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DoubleState;                                              // 0x0E58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnWalkEnd;                                                // 0x0E5C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              Speed;                                                    // 0x0E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                dragType;                                                 // 0x0E6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("AnimBlueprintGeneratedClass MiniTv_Anim.MiniTv_Anim_C");
		return pStaticClass;
	}


	void SetDragType(int dragType);
	void SetSpeed(float Speed);
	void SetDouble(int Double);
	void SetWin(bool win);
	void SetWalk(bool Walk);
	void SetRotate(bool rotate);
	void SetIdleState(int State);
	void SetDrag(bool Drag);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_TransitionResult_0E5571924803012EA1CFC59830FE0225();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_TransitionResult_4CB4C5BE4408EC09DBEE9E870E288122();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_TransitionResult_349A9286459785A6CB82098B48FCF413();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_TransitionResult_11656A624D79C3DC29F0D295D7CA8E92();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_BlendListByInt_F687C8584002A801512D1DAF2DDCCDBA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_BlendSpacePlayer_3C0D3C8A4900719BE1ABE094CC1DDEE6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_TransitionResult_811140BD498D35A8201AB8B06403744E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_BlendListByInt_FC35BFAE4A181D44BE9A8A8BBA1B0930();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_BlendListByInt_56D75B364E148F814C2A84BA44A164EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_TransitionResult_0521CBB44E0764B8E506168619B29A22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_BlendListByInt_B794831A434D87C0385C60A7F2BD37F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_TransitionResult_D7B72BE24EB04364FE178FA026E65FE8();
	void ExecuteUbergraph_MiniTv_Anim(int EntryPoint);
	void OnWalkEnd__DelegateSignature();
};


}

