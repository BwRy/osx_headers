//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSImageView, NSString, NSTextField;

@interface FBAlertPanel : NSWindowController
{
    NSImageView *imageView;
    NSTextField *alertText;
    NSTextField *infoText;
    NSButton *yesButton;
    NSButton *cancelButton;
    NSButton *thirdButton;
    NSButton *dontAskCheckbox;
    NSString *defaultsString;
    long long exitValue;
}

+ (long long)runModalForWindow:(id)arg1 withAlertDictionary:(id)arg2;
- (void)layoutAlert;
- (id)dontAskCheckbox;
- (id)thirdButton;
- (id)cancelButton;
- (id)yesButton;
- (id)infoText;
- (id)alertText;
- (id)imageView;
- (void)buttonPressed:(id)arg1;
- (void)dontAskToggled:(id)arg1;
- (void)setDefaultsString:(id)arg1;
- (id)defaultsString;
- (long long)exitValue;

@end

