/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/NSURL.h> // Unknown library


@interface NSURL (BRURLAdditions)
+ (id)URLWithString:(id)string queryParameters:(id)parameters;	// 0x34dd9d49
+ (id)queryParametersFromDictionary:(id)dictionary;	// 0x34dd9e81
- (id)URLWithQueryParameter:(id)queryParameter value:(id)value;	// 0x34dd9b65
- (id)_queryParameters;	// 0x34dd9929
- (id)decodedQueryParameters;	// 0x34dd9a51
- (BOOL)isHTTPFamilyURL;	// 0x34dd98e9
- (BOOL)isHTTPSURL;	// 0x34dd98b1
- (BOOL)isHTTPURL;	// 0x34dd9879
- (id)queryParameters;	// 0x34dd9a3d
- (id)valueForParam:(id)param;	// 0x34dd9da9
@end

@interface NSURL (AOSURLAdditions)
@end
