/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImageControl;

@interface BRHeaderControl : BRControl {
@private
	BRTextControl *_title;	// 44 = 0x2c
	BRTextControl *_subtitle;	// 48 = 0x30
	BRImageControl *_icon;	// 52 = 0x34
	float _iconHorizontalOffset;	// 56 = 0x38
	float _iconKerningFactor;	// 60 = 0x3c
	float _iconScaleFactor;	// 64 = 0x40
	float _iconEdgeSpace;	// 68 = 0x44
	int _iconPosition;	// 72 = 0x48
	BOOL _titleHidesIcon;	// 76 = 0x4c
}
@property(readonly, retain) BRImageControl *icon;	// G=0x34d10111; converted property
@property(assign) float iconEdgeSpace;	// G=0x34d10245; S=0x34d101f9; converted property
@property(assign) float iconHorizontalOffset;	// G=0x34d10151; S=0x34d10131; converted property
@property(assign) float iconKerningFactor;	// G=0x34d10181; S=0x34d10161; converted property
@property(assign) int iconPosition;	// G=0x34d101e9; S=0x34d101c1; converted property
@property(assign) float iconScaleFactor;	// G=0x34d101b1; S=0x34d10191; converted property
@property(retain) BRTextControl *subtitle;	// G=0x34d0ff6d; S=0x34d0ff55; converted property
@property(retain) BRTextControl *title;	// G=0x34d0fe65; S=0x34d0fe4d; converted property
@property(assign, nonatomic) BOOL titleHidesIcon;	// G=0x34d10859; S=0x34d10869; @synthesize=_titleHidesIcon
- (id)init;	// 0x34d0fc35
- (id)accessibilityLabel;	// 0x34d10801
- (void)dealloc;	// 0x34d0fd25
// converted property getter: - (id)icon;	// 0x34d10111
// converted property getter: - (float)iconEdgeSpace;	// 0x34d10245
- (CGRect)iconFrame;	// 0x34d10255
// converted property getter: - (float)iconHorizontalOffset;	// 0x34d10151
// converted property getter: - (float)iconKerningFactor;	// 0x34d10181
// converted property getter: - (int)iconPosition;	// 0x34d101e9
// converted property getter: - (float)iconScaleFactor;	// 0x34d101b1
- (void)layoutSubcontrols;	// 0x34d10409
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x34d0ff9d
- (void)setIcon:(id)icon position:(int)position edgeSpace:(float)space;	// 0x34d100a9
// converted property setter: - (void)setIconEdgeSpace:(float)space;	// 0x34d101f9
- (void)setIconHidden:(BOOL)hidden;	// 0x34d10285
// converted property setter: - (void)setIconHorizontalOffset:(float)offset;	// 0x34d10131
// converted property setter: - (void)setIconKerningFactor:(float)factor;	// 0x34d10161
// converted property setter: - (void)setIconPosition:(int)position;	// 0x34d101c1
// converted property setter: - (void)setIconScaleFactor:(float)factor;	// 0x34d10191
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x34d0ff55
- (void)setSubtitle:(id)subtitle withAttributes:(id)attributes;	// 0x34d0fe95
// converted property setter: - (void)setTitle:(id)title;	// 0x34d0fe4d
- (void)setTitle:(id)title withAttributes:(id)attributes;	// 0x34d0fd8d
// declared property setter: - (void)setTitleHidesIcon:(BOOL)icon;	// 0x34d10869
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x34d102a5
// converted property getter: - (id)subtitle;	// 0x34d0ff6d
// converted property getter: - (id)title;	// 0x34d0fe65
// declared property getter: - (BOOL)titleHidesIcon;	// 0x34d10859
@end
