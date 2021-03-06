/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImage;

__attribute__((visibility("hidden")))
@interface ATVScorePosterReflectionControl : BRControl {
@private
	BRImage *_backgroundImage;	// 44 = 0x2c
	float _sizeFactor;	// 48 = 0x30
	BRImage *_image;	// 52 = 0x34
}
@property(retain, nonatomic) BRImage *backgroundImage;	// G=0x34c95ec5; S=0x34c95bd5; @synthesize=_backgroundImage
@property(retain, nonatomic) BRImage *image;	// G=0x34c95eb5; S=0x34c95c1d; @synthesize=_image
@property(assign, nonatomic) float sizeFactor;	// G=0x34c95ed5; S=0x34c95ee5; @synthesize=_sizeFactor
- (id)init;	// 0x34c95b85
// declared property getter: - (id)backgroundImage;	// 0x34c95ec5
- (void)dealloc;	// 0x34c95c65
- (void)drawInContext:(CGContextRef)context;	// 0x34c95cbd
// declared property getter: - (id)image;	// 0x34c95eb5
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x34c95bd5
// declared property setter: - (void)setImage:(id)image;	// 0x34c95c1d
// declared property setter: - (void)setSizeFactor:(float)factor;	// 0x34c95ee5
// declared property getter: - (float)sizeFactor;	// 0x34c95ed5
@end

