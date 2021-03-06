/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@protocol BRMediaAsset;

@interface BRMediaAssetExpiryInfo : NSObject {
@private
	id<BRMediaAsset> _mediaAsset;	// 4 = 0x4
}
@property(retain) id expiryDate;	// G=0x34da0051; S=0x34da0071; converted property
+ (id)expiryInfoForMediaAsset:(id)mediaAsset;	// 0x34d9ff6d
+ (void)setImplementationClass:(Class)aClass;	// 0x34d9ff61
- (id)initWithMediaAsset:(id)mediaAsset;	// 0x34d9ffad
- (id)asset;	// 0x34d9fff9
- (int)compare:(id)compare;	// 0x34da00b9
- (void)dealloc;	// 0x34da0009
// converted property getter: - (id)expiryDate;	// 0x34da0051
- (id)expiryDescription;	// 0x34da00ed
- (BOOL)hasBeenPlayed;	// 0x34da017d
- (BOOL)isExpired;	// 0x34da004d
- (unsigned)rentalPlaybackDuration;	// 0x34da00b5
- (id)rentalPlaybackDurationDescription;	// 0x34da0111
// converted property setter: - (void)setExpiryDate:(id)date;	// 0x34da0071
@end

