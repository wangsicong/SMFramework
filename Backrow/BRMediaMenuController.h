/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMenuController.h"
#import "AppleTV-Structs.h"

@class BRControl, BRTextControl, BRWaitSpinnerControl, BRFocusableImageControl, NSString, NSTimer;

@interface BRMediaMenuController : BRMenuController {
@private
	BRControl *_previewControl;	// 104 = 0x68
	BRControl *_previewContainer;	// 108 = 0x6c
	NSString *_previewControlItemHash;	// 112 = 0x70
	BRFocusableImageControl *_actionControl;	// 116 = 0x74
	BRWaitSpinnerControl *_spinner;	// 120 = 0x78
	float _controlDelay;	// 124 = 0x7c
	NSTimer *_controlDelayTimer;	// 128 = 0x80
	BRTextControl *_noContentMessageControl;	// 132 = 0x84
}
@property(retain) id noContentMessage;	// G=0x34ccda3d; S=0x34ccd959; converted property
@property(assign) BOOL showSpinner;	// G=0x34ccd31d; S=0x34ccd269; converted property
- (id)init;	// 0x34ccd039
- (void)_cleanupControlDelayTimer;	// 0x34cce4ad
- (void)_controlDelayTimerHandler:(id)handler;	// 0x34cce4e5
- (void)_playstateChanged;	// 0x34cce509
- (void)_scrollSelectionFinalized:(id)finalized;	// 0x34cce40d
- (void)_scrollWillStart:(id)_scroll;	// 0x34cce3e1
- (void)_setDislaysActionControl:(BOOL)control;	// 0x34cce0bd
- (void)_updateActionControl;	// 0x34cce2a5
- (void)_updateControls;	// 0x34cce095
- (void)_updateControlsWithDelay;	// 0x34cce421
- (void)_updatePreview;	// 0x34ccde65
- (id)accessibilityScreenContent;	// 0x34ccdd5d
- (id)actionItemAtIndex:(long)index;	// 0x34ccd955
- (id)actionSelectionHandlerForItemAtIndex:(long)index;	// 0x34ccd951
- (BOOL)allowUnplayedMark;	// 0x34ccd909
- (BOOL)brEventAction:(id)action;	// 0x34ccd779
- (void)clearPreviewController;	// 0x34ccd8a9
- (void)controlWasActivated;	// 0x34ccdb41
- (void)controlWasDeactivated;	// 0x34ccdc71
- (void)dealloc;	// 0x34ccd1a1
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x34ccd681
- (void)layoutSubcontrols;	// 0x34ccd335
// converted property getter: - (id)noContentMessage;	// 0x34ccda3d
- (id)previewControlForItem:(long)item;	// 0x34ccdd7d
- (void)refreshControllerForModelUpdate;	// 0x34ccda6d
- (void)refreshControllerForModelUpdateToObject:(id)object;	// 0x34ccdaa9
- (void)resetPreviewController;	// 0x34ccd871
// converted property setter: - (void)setNoContentMessage:(id)message;	// 0x34ccd959
// converted property setter: - (void)setShowSpinner:(BOOL)spinner;	// 0x34ccd269
// converted property getter: - (BOOL)showSpinner;	// 0x34ccd31d
- (void)updatePreviewController;	// 0x34ccd85d
@end

