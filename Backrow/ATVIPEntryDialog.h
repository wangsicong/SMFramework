/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSWUpdateServerIPController.h"
#import "BRTextFieldDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVIPEntryDialog : ATVSWUpdateServerIPController <BRTextFieldDelegate> {
@private
	NSString *_dialogID;	// 92 = 0x5c
}
@property(readonly, retain) NSString *dialogID;	// G=0x338fc775; converted property
- (BOOL)brEventAction:(id)action;	// 0x338fc6cd
- (void)dealloc;	// 0x338fc72d
// converted property getter: - (id)dialogID;	// 0x338fc775
- (id)runModal;	// 0x338fc5fd
- (void)textDidChange:(id)text;	// 0x338fc6a1
- (void)textDidEndEditing:(id)text;	// 0x338fc645
@end
