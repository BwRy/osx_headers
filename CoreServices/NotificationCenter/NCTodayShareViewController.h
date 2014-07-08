//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NCTodayItemViewController.h"

#import "NSSharingServiceDelegate.h"

@class NCShareWidgetService, NCTodayShareEditViewController, NSArray, NSDictionary, NSImageView, NSLayoutConstraint, NSObject<OS_dispatch_source>, NSString, NSTextField, NSView;

@interface NCTodayShareViewController : NCTodayItemViewController <NSSharingServiceDelegate>
{
    NSArray *_services;
    NSArray *_serviceOrder;
    NSArray *_disabledServices;
    NSObject<OS_dispatch_source> *_refreshSource;
    NSView *_serviceView;
    id _shareRestoreState;
    NSString *_shareRestoreService;
    NCShareWidgetService *_sharingService;
    NCTodayShareEditViewController *_editViewController;
    NSArray *_shareVerticalConstraints;
    int _notify_token;
    BOOL _configurationHasBeenUpdated;
    BOOL _loading;
    BOOL _showingShareSheet;
    BOOL _saveShareState;
    BOOL _showing;
    NSObject<OS_dispatch_source> *_refresh_source;
    NSView *_buttonView;
    NSLayoutConstraint *_bottomConstraint;
    NSView *_headerView;
    NSImageView *_headerImageView;
    NSTextField *_headerTextView;
}

@property NSTextField *headerTextView; // @synthesize headerTextView=_headerTextView;
@property NSImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain) NSView *headerView; // @synthesize headerView=_headerView;
@property(retain) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain) NSView *buttonView; // @synthesize buttonView=_buttonView;
- (void).cxx_destruct;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
- (void)sharingService:(id)arg1 willShareItems:(id)arg2;
- (void)sharingService:(id)arg1 hideView:(id)arg2;
- (void)sharingService:(id)arg1 showView:(id)arg2;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (void)_shareWithService:(id)arg1 restoreState:(id)arg2;
- (void)configure:(id)arg1;
- (void)_shareToService:(id)arg1;
- (void)_shareToServiceIndex:(unsigned long long)arg1;
- (void)share:(id)arg1;
- (void)_layoutSharebuttons;
- (void)_refreshConfiguredServices;
- (void)_requestRefresh;
- (void)_tearDownEditViewController;
- (void)_setupEditViewController;
@property(readonly) NSDictionary *preferences;
- (void)_syncronizeServces:(id)arg1;
- (void)setVisible:(_Bool)arg1;
- (void)setEditMode:(int)arg1;
- (_Bool)supportsEditMode;
- (id)headerImage;
- (id)headerTitle;
- (_Bool)hasHeader;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
