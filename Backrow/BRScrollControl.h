/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ScrollAnimationDelegate, BRFadeMaskLayer;

@interface BRScrollControl : BRControl {
@private
	BRControl *_content;	// 44 = 0x2c
	BRControl *_topFade;	// 48 = 0x30
	BRControl *_bottomFade;	// 52 = 0x34
	BRControl *_leftFade;	// 56 = 0x38
	BRControl *_rightFade;	// 60 = 0x3c
	BRFadeMaskLayer *_mask;	// 64 = 0x40
	ScrollAnimationDelegate *_animationDelegate;	// 68 = 0x44
	int _scrollDirection;	// 72 = 0x48
	int _mode;	// 76 = 0x4c
	int _defaultAnimationMode;	// 80 = 0x50
	int _fastAnimationMode;	// 84 = 0x54
	BOOL _switchAnimationModes;	// 88 = 0x58
	float _edgeFadePercent;	// 92 = 0x5c
	float _extraBottomSpace;	// 96 = 0x60
	float _extraTopSpace;	// 100 = 0x64
	float _extraLeftSpace;	// 104 = 0x68
	float _extraRightSpace;	// 108 = 0x6c
	BOOL _scrollPointSet;	// 112 = 0x70
	BOOL _constrainAllContentToEdges;	// 113 = 0x71
	BOOL _useRealMasks;	// 114 = 0x72
	BOOL _followsFocus;	// 115 = 0x73
	BOOL _repeatActive;	// 116 = 0x74
	BOOL _autoChangeAnimationModes;	// 117 = 0x75
}
@property(assign) int animationMode;	// G=0x34d30279; S=0x34d300b5; converted property
@property(assign, nonatomic) BOOL autoChangeAnimationModes;	// G=0x34d3064d; S=0x34d3065d; @synthesize=_autoChangeAnimationModes
@property(assign) BOOL constrainAllContentToEdges;	// G=0x34d300a5; S=0x34d3008d; converted property
@property(retain) BRControl *content;	// G=0x34d2fc4d; S=0x34d2fb49; converted property
@property(assign) float edgeFadePercentage;	// G=0x34d3007d; S=0x34d30021; converted property
@property(assign) BOOL followsFocus;	// G=0x34d2fe79; S=0x34d2fe2d; converted property
@property(assign) int scrollDirection;	// G=0x34d302a1; S=0x34d30289; converted property
@property(assign) BOOL useRealMasks;	// G=0x34d30011; S=0x34d2ffe5; converted property
- (id)init;	// 0x34d2f955
- (BOOL)_animatingPositionChange;	// 0x34d308a1
- (void)_attemptToRemoveFadeMask;	// 0x34d31e19
- (id)_bottomFadeFilters;	// 0x34d31ffd
- (float)_calculateXPositionForPlane:(CGPoint)plane halfScrollerWidth:(float)width halfPlaneWidth:(float)width3;	// 0x34d30bf9
- (float)_calculateYPositionForPlane:(CGPoint)plane halfScrollerHeight:(float)height halfPlaneHeight:(float)height3;	// 0x34d30c79
- (void)_enlargeScrollPlaneHeight:(CGPoint)height oldPosition:(CGPoint)position;	// 0x34d30cf9
- (void)_enlargeScrollPlaneWidth:(CGPoint)width oldPosition:(CGPoint)position;	// 0x34d30dad
- (id)_fadeMaskForBounds:(CGSize)bounds;	// 0x34d31d65
- (void)_focusChanged:(id)changed;	// 0x34d31431
- (id)_leftFadeFilters;	// 0x34d320f5
- (void)_minimizeVisiblePlaneArea;	// 0x34d30e61
- (id)_parentScrollControl;	// 0x34d30ee9
- (id)_rightFadeFilters;	// 0x34d321ed
- (void)_scrollPoint:(CGPoint)point fromControl:(id)control;	// 0x34d31145
- (void)_scrollRect:(CGRect)rect fromControl:(id)control;	// 0x34d31189
- (BOOL)_setPlanePosition:(CGPoint)position;	// 0x34d308f5
- (id)_topFadeFilters;	// 0x34d31f05
- (void)_updateEdgeFading;	// 0x34d31475
- (void)_updateFocusNotifications;	// 0x34d3139d
- (void)_updateHorizontalEdgeFading;	// 0x34d3192d
- (void)_updateScrollPositionForFocus;	// 0x34d3120d
- (void)_updateVerticalEdgeFading;	// 0x34d314c5
- (CGRect)_visibleRectOfControl:(id)control;	// 0x34d30eed
// converted property getter: - (int)animationMode;	// 0x34d30279
// declared property getter: - (BOOL)autoChangeAnimationModes;	// 0x34d3064d
- (BOOL)autoScrolling;	// 0x34d2fddd
- (BOOL)brEventAction:(id)action;	// 0x34d2fc5d
// converted property getter: - (BOOL)constrainAllContentToEdges;	// 0x34d300a5
// converted property getter: - (id)content;	// 0x34d2fc4d
- (void)controlWasActivated;	// 0x34d302b1
- (void)controlWasDeactivated;	// 0x34d302ed
- (void)dealloc;	// 0x34d2fa25
// converted property getter: - (float)edgeFadePercentage;	// 0x34d3007d
// converted property getter: - (BOOL)followsFocus;	// 0x34d2fe79
- (void)layoutSubcontrols;	// 0x34d30329
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x34d305d9
// converted property getter: - (int)scrollDirection;	// 0x34d302a1
- (void)scrollToControl:(id)control;	// 0x34d2fef9
- (void)scrollToPoint:(CGPoint)point;	// 0x34d2fe89
- (void)scrollToRect:(CGRect)rect;	// 0x34d2feb9
- (BOOL)scrolling;	// 0x34d2fdbd
- (void)scrollingCompleted;	// 0x34d30615
// converted property setter: - (void)setAnimationMode:(int)mode;	// 0x34d300b5
// declared property setter: - (void)setAutoChangeAnimationModes:(BOOL)modes;	// 0x34d3065d
// converted property setter: - (void)setConstrainAllContentToEdges:(BOOL)edges;	// 0x34d3008d
// converted property setter: - (void)setContent:(id)content;	// 0x34d2fb49
// converted property setter: - (void)setEdgeFadePercentage:(float)percentage;	// 0x34d30021
// converted property setter: - (void)setFollowsFocus:(BOOL)focus;	// 0x34d2fe2d
// converted property setter: - (void)setScrollDirection:(int)direction;	// 0x34d30289
// converted property setter: - (void)setUseRealMasks:(BOOL)masks;	// 0x34d2ffe5
// converted property getter: - (BOOL)useRealMasks;	// 0x34d30011
@end
