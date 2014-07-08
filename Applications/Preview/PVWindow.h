//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@interface PVWindow : NSWindow
{
    BOOL _fullScreenToolbarAutohidingDisabled;
    BOOL _fullScreenToolbarHidden;
    BOOL _firstResponderLocked;
}

@property BOOL firstResponderLocked; // @synthesize firstResponderLocked=_firstResponderLocked;
@property(nonatomic) BOOL toolbarHiddenInFullScreen; // @synthesize toolbarHiddenInFullScreen=_fullScreenToolbarHidden;
- (BOOL)_toolbarWindowShouldUseLayers;
- (void)restoreStateWithCoder:(id)arg1;
- (BOOL)toolbarAutohidingEnabled;
- (void)toggleToolbarShown:(id)arg1;
- (struct CGRect)_frameForFullScreenMode;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)setStyleMask:(unsigned long long)arg1;
- (id)undoManager;
- (id)_batchClose;
- (void)_close:(id)arg1;
- (BOOL)makeFirstResponder:(id)arg1;
- (void)setAlphaNumber:(id)arg1;
- (void)sendEvent:(id)arg1;

@end
