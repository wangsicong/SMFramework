/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextFieldCharacterInputDelegate.h"
#import "BRControl.h"
#import "AppleTV-Structs.h"
#import "BRTabControlDelegate.h"

@class NSString, BRTextFieldBackgroundLayer, NSAttributedString, BRTabControl, NSMutableSet, BRTextControl, BRInputMethod, BRTextFieldControl, BRKeyboard, NSArray, BRCursorControl, BRDeviceKeyboardMessage, BRScrollControl, BRTextEntryPlayPauseMessage;

@interface BRTextEntryControl : BRControl <BRTabControlDelegate, BRTextFieldCharacterInputDelegate> {
@private
	int _textEntryStyle;	// 44 = 0x2c
	BRInputMethod *_inputMethod;	// 48 = 0x30
	BRKeyboard *_activeKeyboard;	// 52 = 0x34
	NSMutableSet *_validInputCharacterSet;	// 56 = 0x38
	BOOL _displayTextEntryHistory;	// 60 = 0x3c
	NSString *_textEntryHistoryClient;	// 64 = 0x40
	NSString *_textEntryHistoryBehavior;	// 68 = 0x44
	BRTextEntryPlayPauseMessage *_playPauseMessage;	// 72 = 0x48
	BRControl *_candidatesBackground;	// 76 = 0x4c
	BRScrollControl *_candidatesKeysContainer;	// 80 = 0x50
	BRScrollControl *_keyboardContainer;	// 84 = 0x54
	BRControl *_actionKeysContainer;	// 88 = 0x58
	BRTextFieldBackgroundLayer *_textFieldBackground;	// 92 = 0x5c
	BRTextControl *_textFieldLabel;	// 96 = 0x60
	NSAttributedString *_textFieldLabelString;	// 100 = 0x64
	BRTextFieldControl *_textField;	// 104 = 0x68
	BRTabControl *_tabControl;	// 108 = 0x6c
	BRCursorControl *_cursor;	// 112 = 0x70
	BOOL _providesOwnCursor;	// 116 = 0x74
	NSArray *_customizedTextFieldControls;	// 120 = 0x78
	BRDeviceKeyboardMessage *_deviceKeyboardMessage;	// 124 = 0x7c
	BRKeyboard *_popupKeyboard;	// 128 = 0x80
	CGPoint _focusedMainKeyRemembery;	// 132 = 0x84
	BOOL _displayPopupKeyboardAfterKeyboardSwitch;	// 140 = 0x8c
	CGColorRef _popupBackgroundColor;	// 144 = 0x90
	CGColorRef _popupBorderColor;	// 148 = 0x94
	int _popupShadowStyle;	// 152 = 0x98
	BOOL _constrainCursorToPopupKeyboard;	// 156 = 0x9c
	BRScrollControl *_popupKeyboardControl;	// 160 = 0xa0
	CGPoint _previousKeyboardFocus;	// 164 = 0xa4
	int _textLengthLimit;	// 172 = 0xac
	BOOL _showUserEnteredText;	// 176 = 0xb0
	BOOL _textFieldIsInternal;	// 177 = 0xb1
	BOOL _shouldRestoreTextFieldCursor;	// 178 = 0xb2
	BOOL _shouldWrapHorizontally;	// 179 = 0xb3
	BOOL _shouldWrapVertically;	// 180 = 0xb4
	BOOL _clientHasSpecifiedHorizontalWrapping;	// 181 = 0xb5
	BOOL _clientHasSpecifiedVerticalWrapping;	// 182 = 0xb6
	BOOL _displayPlayPauseMessage;	// 183 = 0xb7
	BOOL _previousAppDelegateIgnorePlayPauseState;	// 184 = 0xb8
}
@property(assign) BOOL canWrapHorizontally;	// G=0x34d410a5; S=0x34d410c5; converted property
@property(assign) BOOL canWrapVertically;	// G=0x34d41109; S=0x34d41129; converted property
@property(assign) BOOL providesOwnFocusCursor;	// G=0x34d413a5; S=0x34d413b5; converted property
@property(retain) BRTabControl *tabControl;	// G=0x34d4186d; S=0x34d4187d; converted property
@property(assign) int textEntryStyle;	// G=0x34d40b71; S=0x34d406f9; converted property
@property(retain) BRTextFieldControl *textField;	// G=0x34d40ec5; S=0x34d40ed5; converted property
@property(assign) id textFieldDelegate;	// G=0x34d411e1; S=0x34d411c1; converted property
@property(assign) int textLengthLimit;	// G=0x34d40e81; S=0x34d40e91; converted property
- (id)init;	// 0x34d3f35d
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x34d3f63d
- (id)initWithTextEntryStyle:(int)textEntryStyle textField:(id)field;	// 0x34d3f6a5
- (void)_addActionKeysRowForKeyboard:(id)keyboard;	// 0x34d42459
- (void)_addCursor;	// 0x34d41ded
- (void)_addCustomizedTextFieldControls;	// 0x34d42dad
- (void)_addMainKeyboardContainerForKeyboard:(id)keyboard;	// 0x34d42275
- (void)_addOrRemoveCandidatesContainer:(id)container;	// 0x34d42655
- (void)_addOrRemoveTabControl;	// 0x34d41ecd
- (id)_bestKeyboardLanguage:(int)language;	// 0x34d43345
- (id)_currentTextEntryStyleName;	// 0x34d45549
- (void)_customizeTextEntryControls;	// 0x34d42b09
- (void)_finalizeControlWasFocused;	// 0x34d434c1
- (void)_generateKeyEventWithCharacters:(id)characters;	// 0x34d444d9
- (void)_handleCharacterSelectionEvent:(id)event;	// 0x34d43559
- (void)_handleCustomActionKeyEvent:(id)event;	// 0x34d43515
- (void)_handlePopupKeyboardEvent:(BOOL)event;	// 0x34d445d9
- (void)_historyItemDeleted:(id)deleted;	// 0x34d452b9
- (void)_inputActionAppendCandidate:(id)candidate;	// 0x34d438d9
- (void)_inputActionAppendText:(id)text;	// 0x34d436b5
- (void)_inputActionClearText:(id)text;	// 0x34d43939
- (void)_inputActionDeleteText:(id)text;	// 0x34d439d1
- (void)_inputActionEscape:(id)escape;	// 0x34d44451
- (void)_inputActionSwitchInputMethod:(id)method;	// 0x34d44275
- (void)_inputActionSwitchKeyboard:(id)keyboard;	// 0x34d43ab9
- (void)_invokeInputActionWithDictionary:(id)dictionary;	// 0x34d435bd
- (id)_keyboardMappingData;	// 0x34d41cd5
- (void)_registerAsTextFieldCharacterInputDelegate;	// 0x34d4533d
- (void)_removeActionKeysRow;	// 0x34d425fd
- (void)_removeCursor;	// 0x34d41e91
- (void)_removeCustomizedTextFieldControls;	// 0x34d42e55
- (void)_removePopupKeyboard;	// 0x34d450ad
- (void)_saveTextEntryHistory;	// 0x34d451cd
- (void)_setActiveKeyboard:(id)keyboard;	// 0x34d42241
- (BOOL)_shouldIgnoreKey:(id)key forTextField:(id)textField;	// 0x34d41c49
- (id)_stringFromRect:(CGRect)rect;	// 0x34d454e1
- (void)_stripTrailingDotIfNecessary:(id)necessary;	// 0x34d4378d
- (void)_swapPopupkeyboard;	// 0x34d445a1
- (void)_unregisterAsTextFieldCharacterInputDelegate;	// 0x34d4549d
- (void)_wrapAroundEdge:(int)edge;	// 0x34d42eb5
- (id)accessibilityLabel;	// 0x34d3f985
- (id)accessibilityScreenContent;	// 0x34d3f9c5
- (id)accessibilityTraits;	// 0x34d3f959
- (id)accessibilityValue;	// 0x34d3f9a5
- (void)addSelectionHandlerForControl:(id)control forKeyboard:(id)keyboard;	// 0x34d419d5
- (BOOL)brEventAction:(id)action;	// 0x34d401bd
// converted property getter: - (BOOL)canWrapHorizontally;	// 0x34d410a5
// converted property getter: - (BOOL)canWrapVertically;	// 0x34d41109
- (void)completeTextEntry;	// 0x34d4104d
- (void)controlWasActivated;	// 0x34d3fa19
- (void)controlWasDeactivated;	// 0x34d3fa79
- (void)controlWasFocused;	// 0x34d400b5
- (void)controlWasUnfocused;	// 0x34d40149
- (void)dealloc;	// 0x34d3f749
- (void)deleteAllHistoryItemsForClients:(id)clients;	// 0x34d40e21
- (void)deleteTextEntryHistoryItem:(id)item forTextEntryHistoryClients:(id)textEntryHistoryClients textEntryBehaviors:(id)behaviors;	// 0x34d40d81
- (void)deviceKeyboardClose;	// 0x34d45591
- (void)deviceKeyboardMessageHandler:(id)handler;	// 0x34d45761
- (void)deviceKeyboardUpdate:(BOOL)update;	// 0x34d45601
- (void)dismissPopupKeyboard;	// 0x34d419b1
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x34d40bd9
- (BOOL)focusIsAtRightEdge;	// 0x34d415e5
- (CGPoint)keyboardFocus;	// 0x34d4168d
- (void)layoutSubcontrols;	// 0x34d3fad5
// converted property getter: - (BOOL)providesOwnFocusCursor;	// 0x34d413a5
- (void)reset;	// 0x34d4126d
- (void)saveTextEntryHistory;	// 0x34d40d59
- (void)saveTextEntryHistoryUsingClient:(id)client textEntryBehavior:(id)behavior;	// 0x34d40d1d
// converted property setter: - (void)setCanWrapHorizontally:(BOOL)horizontally;	// 0x34d410c5
// converted property setter: - (void)setCanWrapVertically:(BOOL)vertically;	// 0x34d41129
- (void)setConstrainCursorToPopupKeyboard:(BOOL)popupKeyboard;	// 0x34d419a1
- (void)setDeviceKeyboardTitle:(id)title subText:(id)text;	// 0x34d41821
- (void)setDisplayPlayPauseMessage:(BOOL)message;	// 0x34d41aa5
- (void)setDisplayTextEntryHistory:(BOOL)history;	// 0x34d40b81
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x34d413f9
- (void)setInitialText:(id)text;	// 0x34d41201
- (BOOL)setKeyboardFocus:(CGPoint)focus;	// 0x34d416b9
- (void)setPopupBackgroundColor:(CGColorRef)color;	// 0x34d41931
- (void)setPopupOutlineColor:(CGColorRef)color;	// 0x34d41971
- (void)setPopupShadowStyle:(int)style;	// 0x34d41961
// converted property setter: - (void)setProvidesOwnFocusCursor:(BOOL)cursor;	// 0x34d413b5
- (void)setShowUserEnteredText:(BOOL)text;	// 0x34d4116d
// converted property setter: - (void)setTabControl:(id)control;	// 0x34d4187d
- (void)setTextEntryHistoryClient:(id)client textEntryBehavior:(id)behavior;	// 0x34d40ca5
// converted property setter: - (void)setTextEntryStyle:(int)style;	// 0x34d406f9
// converted property setter: - (void)setTextField:(id)field;	// 0x34d40ed5
// converted property setter: - (void)setTextFieldDelegate:(id)delegate;	// 0x34d411c1
- (void)setTextFieldLabel:(id)label;	// 0x34d412f1
// converted property setter: - (void)setTextLengthLimit:(int)limit;	// 0x34d40e91
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x34d3f9e5
- (void)startSpinning;	// 0x34d41065
- (void)stopSpinning;	// 0x34d41085
- (void)switchToKeyboardNamed:(id)keyboardNamed focusOnKeyboardAfterSwitch:(BOOL)aSwitch;	// 0x34d41771
// converted property getter: - (id)tabControl;	// 0x34d4186d
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x34d41c75
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x34d41ccd
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x34d41cd1
// converted property getter: - (int)textEntryStyle;	// 0x34d40b71
// converted property getter: - (id)textField;	// 0x34d40ec5
// converted property getter: - (id)textFieldDelegate;	// 0x34d411e1
// converted property getter: - (int)textLengthLimit;	// 0x34d40e81
@end
