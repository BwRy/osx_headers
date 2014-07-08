//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSMutableArray, UACPanelViewController;

@interface UACMainWindowController : NSWindowController
{
    NSMutableArray *_otherDisplayWindowControllers;
    UACPanelViewController *_panelViewController;
    BOOL _isHiding;
}

- (void)dealloc;
- (void)_setupWindowFrame;
- (id)_otherDisplayWindowWithFrame:(struct CGRect)arg1;
- (void)speakSelectedItem;
- (void)clickBackground:(id)arg1;
- (void)pressDoneButton:(id)arg1;
- (void)pressQuitButton:(id)arg1;
- (void)hideWindow:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)windowDidLoad;
- (void)loadMainView:(id)arg1;
- (void)unloadMainView;
- (id)initWithWindow:(id)arg1;
- (void)userActionOccured;
- (void)_informSystemUniversalAccessControlRunning:(BOOL)arg1;
- (id)init;

@end
