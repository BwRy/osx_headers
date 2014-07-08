//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFilePresenter.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "QLPreviewPanelDataSource.h"
#import "QLPreviewPanelDelegate.h"

@class NSArray, NSBox, NSButton, NSFileVersion, NSImageView, NSOperationQueue, NSPanel, NSString, NSTableView, NSURL, _NSDocumentConflictNonTableView;

__attribute__((visibility("hidden")))
@interface NSDocumentConflictPanelController : NSObject <NSTableViewDataSource, NSTableViewDelegate, QLPreviewPanelDelegate, QLPreviewPanelDataSource, NSFilePresenter>
{
    NSPanel *_panel;
    NSTableView *_tableView;
    NSButton *_keepButton;
    NSButton *_cancelButton;
    NSBox *_nonTableViewContainer;
    _NSDocumentConflictNonTableView *_nonTableView;
    NSURL *_url;
    NSArray *_conflicts;
    NSImageView *_clickedImageView;
    id _clickedConflict;
    BOOL _forceTableView;
    struct CGSize _fullPanelSize;
    double _staticHeight;
}

- (BOOL)previewPanel:(id)arg1 shouldShowShareButtonForItem:(id)arg2;
- (BOOL)previewPanel:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (BOOL)previewPanel:(id)arg1 shouldShowOpenButtonForItem:(id)arg2;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)_didClickOnImageView:(id)arg1 forConflict:(id)arg2;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentedItemDidResolveConflictVersion:(id)arg1;
- (void)presentedItemDidLoseVersion:(id)arg1;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)presentedItemDidChange;
- (void)presentedItemDidMoveToURL:(id)arg1;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (void)_windowBackingDidChange:(id)arg1;
- (void)_startLoadingThumbnailForConflict:(id)arg1 force:(BOOL)arg2;
- (void)_reloadConflictsRefreshingAll:(BOOL)arg1;
- (void)_updateConflictDisplay;
- (double)_desiredHeightOfPanel;
- (BOOL)_shouldShowTableView;
- (void)_updateNonTableView;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)_makeVersionView;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_selectedConflictsChanged;
- (void)_updateButtons;
- (id)_keepButtonTitleForNumberOfSelectedVersions:(long long)arg1 totalNumber:(long long)arg2;
@property(readonly) NSArray *unselectedVersions;
@property(readonly) NSArray *selectedVersions;
@property(readonly) NSFileVersion *currentVersion;
- (id)_unselectedConflicts;
- (id)_selectedConflicts;
- (void)cancel:(id)arg1;
- (void)keep:(id)arg1;
- (id)_panel;
- (id)_conflictsForURL:(id)arg1;
- (void)beginConflictPanelForURL:(id)arg1 modalForWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_something:(id)arg1 wasPresentedWithResult:(long long)arg2 soContinue:(CDUnknownBlockType)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end
