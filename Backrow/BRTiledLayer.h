/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <QuartzCore/CALayer.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRTiledLayer : CALayer {
@private
	CGSize _tileSize;	// 48 = 0x30
}
@property(assign) CGSize tileSize;	// G=0x34d80685; S=0x34d80605; converted property
+ (id)defaultActionForKey:(id)key;	// 0x34d805b1
- (id)init;	// 0x34d805c1
- (void)display;	// 0x34d806a1
// converted property setter: - (void)setTileSize:(CGSize)size;	// 0x34d80605
// converted property getter: - (CGSize)tileSize;	// 0x34d80685
@end

