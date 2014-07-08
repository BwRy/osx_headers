//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSControlTextEditingDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSTextFieldDelegate.h"

@class NSArray, NSBox, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSProgressIndicator, NSSet, NSString, NSTableView, NSTextField, UISearchManager;

@interface VoiceOverOptions : NSWindowController <NSTableViewDelegate, NSTableViewDataSource, NSTextFieldDelegate, NSControlTextEditingDelegate>
{
    NSTableView *_tableSideBar;
    NSLayoutConstraint *_tableSideBarWidthConstraint;
    NSBox *_mainBox;
    NSLayoutConstraint *_mainBoxWidthConstraint;
    UISearchManager *_uiSearchManager;
    NSMutableArray *_sideBarElements;
    NSArray *_nibObjects;
    NSTextField *_waitLabel;
    NSProgressIndicator *_waitProgress;
    NSSet *_domains;
    NSMutableDictionary *_profileViews;
    NSMutableDictionary *_profileSideBarElements;
}

+ (BOOL)isViewMenuSelector:(SEL)arg1;
+ (BOOL)isRTL;
@property(readonly, nonatomic) UISearchManager *uiSearchManager; // @synthesize uiSearchManager=_uiSearchManager;
- (void)setWaitMessage:(id)arg1;
- (void)toggleStateForMenuItem:(id)arg1;
- (void)stopPortablePreferences;
- (void)startPortablePreferences;
- (void)showPortablePreferenceSheet;
- (void)showOptions;
- (void)handleAssignCustomOpenWithCommandForMenuItem:(id)arg1;
- (void)handleReassignFactoryCommandForMenuItem:(id)arg1;
- (void)handleUnassignCommandForMenuItem:(id)arg1;
- (void)handleAssignCommandForMenuItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)moveToSearchField:(id)arg1;
- (void)showHelp:(id)arg1;
- (void)newEntry:(id)arg1;
- (void)resetSpecificPreferences:(id)arg1;
- (void)resetPreferencesForDomain:(id)arg1;
- (void)resetAllPreferences;
- (void)resetBasicPreferences;
- (void)resetAlertDidEndSelector:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)paneView;
- (id)selectedSideBarElement;
- (void)selectSideBarElement:(long long)arg1;
- (id)viewForProfileMask:(long long)arg1 sideBarElement:(id *)arg2;
- (id)sideBarElements;
- (void)terminate;
- (void)windowWillClose:(id)arg1;
- (id)windowNibName;
- (id)sharedUserDefaults;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (void)_resetPreferencesForDomain:(id)arg1;
- (id)_validDomains;
- (void)_assignFileToPath:(id)arg1 withCommand:(id)arg2;
- (void)_setUpSideBar;
- (id)_currentPrefs;
- (id)_titleForSideBarID:(int)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
