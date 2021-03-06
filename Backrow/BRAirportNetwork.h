/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <Foundation/Foundation.h> // Unknown library


@interface BRAirportNetwork : NSObject {
@private
	WiFiNetwork *_wiFiNetworkRef;	// 4 = 0x4
	BOOL _isDirected;	// 8 = 0x8
}
@property(assign, getter=isDirected) BOOL directed;	// G=0x34db9461; S=0x34db9471; converted property
@property(readonly, assign) WiFiNetwork *wiFiNetworkRef;	// G=0x34db91fd; converted property
+ (void)asyncNetworkWithName:(id)name error:(id *)error;	// 0x34db9185
+ (id)networkWithWiFiNetwork:(WiFiNetwork *)wiFiNetwork;	// 0x34db91a5
- (id)init;	// 0x34db920d
- (BOOL)asyncAssociateUsingPassword:(id)password error:(id *)error;	// 0x34db9481
- (void)dealloc;	// 0x34db9249
// converted property getter: - (BOOL)isDirected;	// 0x34db9461
- (id)name;	// 0x34db9289
- (int)securityType;	// 0x34db92a9
// converted property setter: - (void)setDirected:(BOOL)directed;	// 0x34db9471
// converted property getter: - (WiFiNetwork *)wiFiNetworkRef;	// 0x34db91fd
@end

