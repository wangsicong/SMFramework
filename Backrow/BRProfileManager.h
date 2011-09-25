/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "MCProfileConnectionObserver.h"
#import "BRSingleton.h"


@interface BRProfileManager : BRSingleton <MCProfileConnectionObserver> {
@private
	unsigned _installedProfileCount;	// 4 = 0x4
}
@property(assign, nonatomic) unsigned installedProfileCount;	// G=0x34dd23dd; S=0x34dd2439; @synthesize=_installedProfileCount
+ (void)setSingleton:(id)singleton;	// 0x34dd236d
+ (id)singleton;	// 0x34dd2361
// declared property getter: - (unsigned)installedProfileCount;	// 0x34dd23dd
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)profileConnection userInfo:(id)info;	// 0x34dd23ed
// declared property setter: - (void)setInstalledProfileCount:(unsigned)count;	// 0x34dd2439
- (void)startWatchingForConfigurationChanges;	// 0x34dd2379
@end
