/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class NSSet, NSPredicate, NSString, NSArray;

@interface BRDataStore : NSObject {
@private
	NSString *_entityName;	// 4 = 0x4
	NSPredicate *_predicate;	// 8 = 0x8
	NSPredicate *_predicateForMatching;	// 12 = 0xc
	NSPredicate *_predicateForIncompleteObject;	// 16 = 0x10
	NSSet *_mediaTypes;	// 20 = 0x14
	NSArray *_descriptors;	// 24 = 0x18
	NSArray *_data;	// 28 = 0x1c
	BOOL _localProvidersOnly;	// 32 = 0x20
	BOOL _useAnyMatchingMediaType;	// 33 = 0x21
	BOOL _isAssetStore;	// 34 = 0x22
	BOOL _needsUpdate;	// 35 = 0x23
	BOOL _includeHidden;	// 36 = 0x24
}
@property(readonly, retain) NSArray *data;	// G=0x34d9f2b1; converted property
@property(readonly, retain) NSSet *mediaTypes;	// G=0x34d9f135; converted property
@property(assign) BOOL useLocalProvidersOnly;	// G=0x34d9f415; S=0x34d9f405; converted property
+ (id)aggregateDataStoreWithDataStores:(id)dataStores;	// 0x34d9ee11
- (id)initWithEntityName:(id)entityName predicate:(id)predicate mediaTypes:(id)types;	// 0x34d9ee51
- (id)initWithEntityName:(id)entityName predicate:(id)predicate withAnyOfMediaTypesIn:(id)anIn;	// 0x34d9eef9
- (id)_dataFromAllMatchingProviders;	// 0x34d9fae1
- (id)_dataFromFirstMatchingProvider;	// 0x34d9fa2d
- (id)_predicateForMatching;	// 0x34d9f425
- (void)addObject:(id)object;	// 0x34d9f521
- (void)checkIncompleteObject:(id)object;	// 0x34d9f4e5
- (long)count;	// 0x34d9f3e1
// converted property getter: - (id)data;	// 0x34d9f2b1
- (void)dealloc;	// 0x34d9ef31
- (void)hostAvailabilityChanged;	// 0x34d9f739
- (long)indexOfObject:(id)object;	// 0x34d9f709
- (id)loadData;	// 0x34d9f1c5
// converted property getter: - (id)mediaTypes;	// 0x34d9f135
- (void)objectModified:(id)modified;	// 0x34d9f60d
- (void)purge;	// 0x34d9f1f1
- (void)removeObject:(id)object;	// 0x34d9f669
- (void)setIncludeHidden:(BOOL)hidden;	// 0x34d9f1b5
- (void)setNeedsUpdate;	// 0x34d9f74d
- (void)setPredicateForIncompleteObject:(id)incompleteObject;	// 0x34d9f17d
- (void)setPredicateForMatching:(id)matching;	// 0x34d9f145
- (void)setSortDescriptors:(id)descriptors;	// 0x34d9efe1
// converted property setter: - (void)setUseLocalProvidersOnly:(BOOL)only;	// 0x34d9f405
- (BOOL)storeAppliesToObject:(id)object;	// 0x34d9f445
- (BOOL)updateDataIfNeeded;	// 0x34d9f75d
// converted property getter: - (BOOL)useLocalProvidersOnly;	// 0x34d9f415
@end

