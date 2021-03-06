/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRReflectedImageControl, BRTextControl;
@protocol BRMediaAsset;

@interface ATVRentalExpiryUserNotification : BRControl {
@private
	BRControl *_dialogBox;	// 44 = 0x2c
	BRReflectedImageControl *_imageControl;	// 48 = 0x30
	BRTextControl *_titleControl;	// 52 = 0x34
	id<BRMediaAsset> _asset;	// 56 = 0x38
}
+ (void)postExpiryNotificationForAsset:(id)asset;	// 0x34c35ce1
- (id)init;	// 0x34c35d69
- (void)_playAsset;	// 0x34c36551
- (void)_setAsset:(id)asset;	// 0x34c362c9
- (BOOL)brEventAction:(id)action;	// 0x34c3607d
- (void)dealloc;	// 0x34c36025
- (void)layoutSubcontrols;	// 0x34c36125
@end

