/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRScrollingTextPlane : BRControl {
@private
	NSAttributedString *_string;	// 44 = 0x2c
	float _pursuitGap;	// 48 = 0x30
	CGSize _cachedNaturalTextSize;	// 52 = 0x34
}
@property(retain) id attributedString;	// G=0x34d1ef69; S=0x34d1eedd; converted property
+ (Class)layerClass;	// 0x34d1ee79
// converted property getter: - (id)attributedString;	// 0x34d1ef69
- (void)dealloc;	// 0x34d1ee99
- (void)drawInContext:(CGContextRef)context;	// 0x34d1f07d
- (CGSize)naturalTextSize;	// 0x34d1efdd
// converted property setter: - (void)setAttributedString:(id)string;	// 0x34d1eedd
- (void)setPursuitGap:(float)gap;	// 0x34d1ef79
- (void)setTileSize:(CGSize)size;	// 0x34d1efb1
@end

