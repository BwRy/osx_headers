//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

@class NSNumber;

@interface ConfigKeyEditor : NSTextView
{
    id _master;
    NSNumber *_virtualKey;
    unsigned long long _modifiers;
    id _textField;
    BOOL _operationModeEnabled;
    unsigned int _savedHotKeyOperatingMode;
}

- (void)setTextField:(id)arg1;
- (id)textField;
- (id)modifier;
- (id)key;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (id)initConfigKeyEditorWithMaster:(id)arg1;
- (void)_windowDidResignKeyNotification:(id)arg1;
- (void)_windowDidBecomeKeyNotification:(id)arg1;
- (void)_restoreHotKeyOperationMode;
- (void)_disableHotKeyOperationMode;

@end
