//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MenuButton.h"

@class Account, ExtendedComboBox, IMHandle, NSArray, NSButton, NSWindow, ServicePopUp;

@interface ChooseBuddyButton : MenuButton
{
    Account *_account;
    int _buddiesShown;
    IMHandle *_selectedIMHandle;
    BOOL _registered;
    BOOL _menuIsValid;
    NSArray *_cachedPresentites;
    NSArray *_ignoredIMHandles;
    NSWindow *_customIDSheet;
    ExtendedComboBox *_customIDText;
    NSButton *_customIDOK;
    NSButton *_customIDCancel;
    ServicePopUp *_customIDService;
}

@property(nonatomic) int buddiesShown; // @synthesize buddiesShown=_buddiesShown;
- (void)_chooseIDDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)cancelCustomID:(id)arg1;
- (void)acceptCustomID:(id)arg1;
- (void)windowDidUpdate:(id)arg1;
- (void)selectedAccountStatusChanged:(id)arg1;
- (void)customIDServiceSelected:(id)arg1;
- (void)chooseCustomID:(id)arg1;
- (void)_personSelected:(id)arg1;
- (void)_selectIMHandle:(id)arg1;
- (void)runPopUpInFrame:(struct CGRect)arg1 ofView:(id)arg2;
- (void)invalidateMenu;
- (id)comboBox:(id)arg1 completedString:(id)arg2;
- (unsigned long long)comboBox:(id)arg1 indexOfItemWithStringValue:(id)arg2;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)_recacheIMHandleInformation;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_rebuildBuddyMenu;
- (void)_loadChooseIDNibIfNecessary;
- (id)_addItemForAccount:(id)arg1 atTop:(BOOL)arg2;
- (id)_addItemForEmptyList;
- (id)_addItemForIMHandle:(id)arg1 toMenu:(id)arg2 showingDetails:(BOOL)arg3;
- (void)_invalidateMenu:(id)arg1;
- (void)_registerForNotifications;
- (id)selectedIMHandle;
- (void)setIgnoredIMHandles:(id)arg1;
@property(nonatomic) Account *account;
- (void)dealloc;
- (void)awakeFromNib;

@end
