/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class NSError, NSMutableDictionary, BRURLDocumentManager, NSURLRequest, NSThread, NSURLResponse, NSMutableData, NSDate, NSURLConnection;

@interface BRURLDocument : NSObject {
@private
	NSURLRequest *_request;	// 4 = 0x4
	NSURLResponse *_response;	// 8 = 0x8
	NSError *_error;	// 12 = 0xc
	NSMutableData *_content;	// 16 = 0x10
	BRURLDocumentManager *_manager;	// 20 = 0x14
	NSURLConnection *_connection;	// 24 = 0x18
	NSThread *_callingThread;	// 28 = 0x1c
	NSMutableDictionary *_metadata;	// 32 = 0x20
	unsigned _documentNumber;	// 36 = 0x24
	NSDate *_requestDate;	// 40 = 0x28
	NSDate *_loadedDate;	// 44 = 0x2c
	BOOL _wasRedirected;	// 48 = 0x30
	BOOL _cancelled;	// 49 = 0x31
}
@property(retain) id URLRequest;	// G=0x34ddb0a1; S=0x34ddaf7d; converted property
@property(readonly, retain) NSThread *callingThread;	// G=0x34ddb129; converted property
@property(readonly, assign) BOOL cancelled;	// G=0x34ddb281; converted property
@property(retain) NSMutableData *content;	// G=0x34ddb181; S=0x34ddc715; converted property
@property(retain) NSError *error;	// G=0x34ddb171; S=0x34ddb139; converted property
@property(readonly, retain) NSDate *loadedDate;	// G=0x34ddb271; converted property
@property(readonly, retain) BRURLDocumentManager *manager;	// G=0x34ddc705; converted property
@property(readonly, retain) NSDate *requestDate;	// G=0x34ddb261; converted property
@property(readonly, assign) BOOL wasRedirected;	// G=0x34ddb291; converted property
+ (id)documentWithURLRequest:(id)urlrequest;	// 0x34ddad6d
- (id)init;	// 0x34ddae8d
- (id)initWithURLRequest:(id)urlrequest;	// 0x34ddada1
// converted property getter: - (id)URLRequest;	// 0x34ddb0a1
- (id)URLResponse;	// 0x34ddb0b1
- (void)_cancel;	// 0x34ddb2c1
- (unsigned)_documentNumber;	// 0x34ddb44d
- (void)_extractCookies;	// 0x34ddba0d
- (id)_manager;	// 0x34ddb2b1
- (void)_setConnection:(id)connection;	// 0x34ddb3d1
- (void)_setDocumentNumber:(unsigned)number;	// 0x34ddb43d
- (void)_setManager:(id)manager;	// 0x34ddb2a1
- (void)_setRequestDate:(id)date;	// 0x34ddb45d
- (void)_threadDeath:(id)death;	// 0x34ddb409
- (void)_verifyDocument;	// 0x34ddb495
- (void)_verifyTypesInFeed:(id)feed parentKeys:(id)keys learnTypes:(BOOL)types;	// 0x34ddb721
// converted property getter: - (id)callingThread;	// 0x34ddb129
- (void)cancel;	// 0x34ddb205
// converted property getter: - (BOOL)cancelled;	// 0x34ddb281
- (void)clearError;	// 0x34ddb239
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x34ddc2f1
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x34ddbb11
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x34ddc475
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x34ddbded
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x34ddbc7d
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x34ddc6c5
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x34ddbee9
- (void)connectionDidFinishLoading:(id)connection;	// 0x34ddc031
// converted property getter: - (id)content;	// 0x34ddb181
- (void)dealloc;	// 0x34ddae91
- (void)documentLoaded;	// 0x34ddb191
// converted property getter: - (id)error;	// 0x34ddb171
// converted property getter: - (id)loadedDate;	// 0x34ddb271
// converted property getter: - (id)manager;	// 0x34ddc705
- (id)metadataForKey:(id)key;	// 0x34ddb1bd
// converted property getter: - (id)requestDate;	// 0x34ddb261
// converted property setter: - (void)setContent:(id)content;	// 0x34ddc715
// converted property setter: - (void)setError:(id)error;	// 0x34ddb139
- (void)setMetadata:(id)metadata forKey:(id)key;	// 0x34ddb195
// converted property setter: - (void)setURLRequest:(id)request;	// 0x34ddaf7d
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x34ddb1f1
- (int)statusCode;	// 0x34ddb0c1
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x34ddb1dd
// converted property getter: - (BOOL)wasRedirected;	// 0x34ddb291
@end

