/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@protocol BRPosterImageDataSource;

__attribute__((visibility("hidden")))
@interface BRPosterImageControl : BRControl {
@private
	id<BRPosterImageDataSource> _imageDataSource;	// 44 = 0x2c
	float _cornerRadius;	// 48 = 0x30
	float _posterBorderWidth;	// 52 = 0x34
	CGColorRef _posterBorderColor;	// 56 = 0x38
}
- (id)initWithImageDataSource:(id)imageDataSource cornerRadius:(float)radius borderWidth:(float)width borderColor:(CGColorRef)color;	// 0x34d699f1
- (void)dealloc;	// 0x34d69a79
- (void)drawInContext:(CGContextRef)context;	// 0x34d69ab9
@end
