/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRDataStore.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRAggregateDataStore : BRDataStore {
@private
	NSArray *_dataStores;	// 40 = 0x28
}
- (id)initWithDataStores:(id)dataStores;	// 0x34d9f795
- (void)dealloc;	// 0x34d9f81d
- (id)loadData;	// 0x34d9f8a9
- (void)purge;	// 0x34d9f861
- (void)setUseLocalProvidersOnly:(BOOL)only;	// 0x34d9f941
- (BOOL)storeAppliesToObject:(id)object;	// 0x34d9f9cd
@end
