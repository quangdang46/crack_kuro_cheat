#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Common_DragDrop_Item_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Common_DragDrop_Item.Common_DragDrop_Item_C
// 0x0151 (0x0369 - 0x0218)
class UCommon_DragDrop_Item_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	int                                                dragStyle;                                                // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SLOT_COMMON_ITEM;                                         // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SLOT_EMOJI_ITEM;                                          // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                dragItem;                                                 // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                dragInst;                                                 // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	struct FString                                     dragExtendData;                                           // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnDragStarted;                                            // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragCanceled;                                           // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UCommon_DragDrop_Data_C*                     dragOperation;                                            // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnDragReadyToShape;                                       // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               isTouching;                                               // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDragClicked;                                            // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UUserWidget*                                 dragDropWidget;                                           // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        acceptableDragType;                                       // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnDragSuccess;                                            // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               dragEnable;                                               // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               dropEnable;                                               // 0x02C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x02C2(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnItemTouchStarted;                                       // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemTouchEnded;                                         // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FVector2D                                   touchPos;                                                 // 0x02E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TMap<int, class UUserWidget*>                      dragDropItemMap;                                          // 0x02F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               NewVar_1;                                                 // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	struct FString                                     DragPath;                                                 // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnItemTouchMoved;                                         // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               allDirectionEnable;                                       // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Common_DragDrop_Item.Common_DragDrop_Item_C");
		return pStaticClass;
	}


	void SetAllDirectionEnable(bool Enable);
	void RegisterDragWithDragPath(int Style, int ItemId, int InstID, const struct FString& ExtraData, const struct FString& extraPath);
	void CreateWidgetByDragDropType(int Type, class UUserWidget** Output);
	void GetDragDropWidget(int dragDropType, class UUserWidget** Output);
	struct FEventReply OnTouchMoved(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent);
	void SetDropEnable(bool Enable);
	void SetDragEnable(bool Enable);
	void SetEnable(bool Enable);
	void UnRegisterDrop();
	bool RegisterDrop(int dragType);
	bool OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	struct FEventReply OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent);
	struct FEventReply OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent);
	void GetDefaultTexture(class UTexture2D** Texture);
	void RegisterDrag(int Style, int ItemId, int InstID, const struct FString& ExtraData);
	void OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void Construct();
	void OnDragCancelled(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void ForceStartDrag();
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void ExecuteUbergraph_Common_DragDrop_Item(int EntryPoint);
	void OnItemTouchMoved__DelegateSignature();
	void OnItemTouchEnded__DelegateSignature();
	void OnItemTouchStarted__DelegateSignature();
	void OnDragSuccess__DelegateSignature(class UCommon_DragDrop_Data_C* Operation);
	void OnDragClicked__DelegateSignature();
	void OnDragReadyToShape__DelegateSignature(class UWidget* generatedWidget, class UCommon_DragDrop_Data_C* dragOperation);
	void OnDragCanceled__DelegateSignature(class UCommon_DragDrop_Data_C* Operation);
	void OnDragStarted__DelegateSignature(class UCommon_DragDrop_Data_C* Operation);
};


}

