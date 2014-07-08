//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFAssistantPane.h"

@class NSButton, NSControl, NSObjectController, NSPopUpButton, NSTextField, NSWindow;

@interface CAChooseIssuingCA : AFAssistantPane
{
    NSObjectController *_panelObjectController;
    NSPopUpButton *_caCAConfigPopup;
    NSControl *_caMakeDefault;
    NSWindow *_learnMoreWindow;
    NSButton *_caLetMeOverrideDefaultsForThisRequest;
    NSTextField *_caPanelMessageStr;
    struct __SecTrust *_invitationTrustRef;
}

- (void)_learnMoreSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_learnMoreOKClicked:(id)arg1;
- (void)_learnMoreClicked:(id)arg1;
- (id)nextPane;
- (void)_cantReadConfigFileErrorSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_doSheet:(id)arg1;
- (void)_CAConfigFilePopupChosen:(id)arg1;
- (void)_trustPanelSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_revertToLastSelectedCA;
- (void)willEnterPane:(unsigned int)arg1;
- (void)_releaseTrustObject;
- (void)didEnterPane:(unsigned int)arg1;
- (void)_selectLetMeChooseMenuItem;

@end
