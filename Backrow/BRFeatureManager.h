/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSLock, NSMutableDictionary;

@interface BRFeatureManager : BRSingleton {
@private
	NSMutableDictionary *_featureDatabase;	// 4 = 0x4
	NSMutableDictionary *_featureCodeLookupTable;	// 8 = 0x8
	NSLock *_featureLock;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x34d94e21
+ (id)singleton;	// 0x34d94e15
- (id)init;	// 0x34d94e2d
- (void)_buildFeatureCodeLookupTable;	// 0x34d95c1d
- (id)_featureNameForCode:(id)code;	// 0x34d95731
- (void)_loadSavedCodes;	// 0x34d95789
- (void)_saveFeatureCodes;	// 0x34d959c5
- (id)availableFeatures;	// 0x34d95489
- (void)dealloc;	// 0x34d94ef9
- (void)disableFeatureNamed:(id)named;	// 0x34d9512d
- (void)enableFeatureNamed:(id)named;	// 0x34d94f61
- (BOOL)isFeatureEnabled:(id)enabled;	// 0x34d952f9
- (void)resetFeatures;	// 0x34d955f9
- (void)toggleSettingForCode:(id)code;	// 0x34d956a1
@end

