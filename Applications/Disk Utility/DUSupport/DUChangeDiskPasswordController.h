//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DUDisk, DUIndicatorSecureTextField, NSButton, NSObject<DUChangeDiskPasswordDelegateProtocol>, NSSecureTextField, NSTextField, NSWindow, SFPasswordAssistantInspectorController, SFPasswordStrengthView;

@interface DUChangeDiskPasswordController : NSObject
{
    NSWindow *passwordWindow;
    NSSecureTextField *oldPasswordField;
    DUIndicatorSecureTextField *newPasswordField;
    NSSecureTextField *verifyPasswordField;
    NSTextField *hintField;
    NSTextField *errorStringField;
    NSButton *cancelButton;
    NSButton *okayButton;
    SFPasswordStrengthView *passwordStrengthView;
    SFPasswordAssistantInspectorController *passwordAssistant;
    NSObject<DUChangeDiskPasswordDelegateProtocol> *delegate;
    DUDisk *targetDisk;
}

- (void)setTargetDisk:(id)arg1;
- (id)targetDisk;
- (void)passwordAssistantButton:(id)arg1;
- (void)changePasswordButton:(id)arg1;
- (void)cancelButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)showChangePasswordSheetForWindow:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_setErrorString:(id)arg1;

@end

