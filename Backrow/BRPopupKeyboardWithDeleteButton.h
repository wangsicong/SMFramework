/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRKeyboard.h"

@class BRPopupKeyboardVariableWidthKeyRowPlane, BREvent, NSTimer;

__attribute__((visibility("hidden")))
@interface BRPopupKeyboardWithDeleteButton : BRKeyboard {
@private
	BREvent *_currentEvent;	// 32 = 0x20
	BRPopupKeyboardVariableWidthKeyRowPlane *_customKeyRow;	// 36 = 0x24
	NSTimer *_retriggerTimer;	// 40 = 0x28
	long _retriggerCount;	// 44 = 0x2c
	BOOL _initialDeleteHoldTimePassed;	// 48 = 0x30
}
- (BOOL)_baseKeyControlIsStringTypeGlyph;	// 0x34d48941
- (id)_filterRawKeyboardData:(id)data;	// 0x34d48269
- (id)_keyRows;	// 0x34d48821
- (void)_retriggerEvent:(id)event;	// 0x34d48a69
- (void)_retriggerEvent:(id)event afterDelay:(float)delay;	// 0x34d489a5
- (void)dealloc;	// 0x34d47e51
- (BOOL)handleEvent:(id)event;	// 0x34d47ef1
- (BOOL)popupKeyboardShouldRemainDisplayedAfterCharacterSelection;	// 0x34d47ea9
- (float)popupKeyboardWidth:(id)width;	// 0x34d481fd
@end
