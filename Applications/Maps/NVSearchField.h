//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVDropTargetSearchField.h"

#import "NSTextFieldDelegate.h"
#import "NVRecentsViewControllerDelegate.h"

@class NSString, NVRecentsViewController;

__attribute__((visibility("hidden")))
@interface NVSearchField : NVDropTargetSearchField <NVRecentsViewControllerDelegate, NSTextFieldDelegate>
{
    unsigned long long _displayType;
    NVRecentsViewController *_recentsController;
    BOOL _showingMenu;
    BOOL _closingMenu;
}

@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
- (void).cxx_destruct;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)recentsViewControllerShouldMakeSearchFieldFirstResponder:(id)arg1;
- (void)recentsViewController:(id)arg1 selectedContact:(id)arg2 address:(id)arg3;
- (void)recentsViewController:(id)arg1 selectedPlaceOrTrip:(id)arg2;
- (id)currentMainWindowController;
- (void)recentsViewControllerSelectedSavedLocations:(id)arg1;
- (void)closeMenu;
- (void)showMenuIfNecessary;
- (void)updateMenu;
- (BOOL)isViewOrSubviewFirstResponder:(id)arg1;
- (id)recentsController;
- (BOOL)becomeFirstResponder;
- (void)textDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

