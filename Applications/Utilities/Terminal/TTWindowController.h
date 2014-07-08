//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "TTBlinking.h"
#import "TTTabViewDelegate.h"

@class NSMenu, NSMutableArray, NSString, NSTimer, NSWindow, TTTabController, TTTabView, TTTabViewItem;

@interface TTWindowController : NSWindowController <TTTabViewDelegate, TTBlinking>
{
    NSMenu *_contextualMenuForSelection;
    NSMenu *_contextualMenuForTabItems;
    NSMenu *_contextualMenuForTabView;
    TTTabView *_tabView;
    NSMutableArray *_tabControllers;
    unsigned long long _windowProfileID;
    TTTabController *_selectedTabController;
    TTWindowController *_draggedController;
    TTWindowController *_receiverController;
    TTTabViewItem *_draggedTab;
    NSTimer *_draggingOrderFrontTimer;
    NSWindow *_draggingSacrificialWindow;
    BOOL _isBeingDragged;
    id _delegate;
    struct CGRect _idealContentRect;
    long long _geometryUpdateDepth;
    BOOL _closeDialogExpected;
    struct CGPoint _cascadePoint;
    BOOL _hasAssignedFrame;
}

+ (void)initialize;
@property BOOL hasAssignedFrame; // @synthesize hasAssignedFrame=_hasAssignedFrame;
- (id)thumbnailOfSize:(struct CGSize)arg1 forProfile:(id)arg2;
- (void)settingsPickerDidSelectProfile:(id)arg1;
- (id)contextualMenuForTabView;
- (id)contextualMenuForTabItems;
- (id)contextualMenuForSelection;
- (BOOL)closeDialogExpected;
- (void)setCloseDialogExpected:(BOOL)arg1;
- (BOOL)isGeometryUpdateInProgress;
- (void)setGeometryUpdateInProgress:(BOOL)arg1;
- (void)setIsBeingDragged:(BOOL)arg1;
- (BOOL)isBeingDragged;
- (void)scanForDirtyTabControllers;
- (id)selectedTabController;
- (id)tabView;
- (unsigned long long)numberOfTabs;
- (id)tabControllers;
- (void)removeTabController:(id)arg1;
- (void)removeTabViewItem:(id)arg1;
- (void)addExistingTabViewItem:(id)arg1;
- (void)addExistingTabViewItem:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)makeTabWithProfile:(id)arg1 customFont:(id)arg2 command:(id)arg3 runAsShell:(BOOL)arg4 restorable:(BOOL)arg5 workingDirectory:(id)arg6 sessionClass:(id)arg7 restoreSession:(id)arg8;
- (id)makeTabWithProfile:(id)arg1;
- (void)newTabAtDirectoryURL:(id)arg1;
- (void)closeActivePane:(id)arg1;
- (void)splitActivePane:(id)arg1;
- (void)inspectTab:(id)arg1;
- (void)inspectTabWithController:(id)arg1;
- (void)moveTabToNewWindow:(id)arg1;
- (void)mergeAllWindows:(id)arg1;
- (void)toggleTabBarShown:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)selectPreviousTab:(id)arg1;
- (void)selectNextTab:(id)arg1;
- (void)moveTabViewItemToThisWindow:(id)arg1 fromWindowController:(id)arg2;
- (void)moveTabViewItemToNewWindow:(id)arg1;
- (int)countOfTabsThatNeedClosePrompt;
- (void)closeWindowIfNoMoreTabs;
- (void)autoCloseAllTabs;
- (void)autoCloseSpecificTab:(id)arg1;
- (void)closeOtherTabs:(id)arg1;
- (void)closeTab:(id)arg1;
- (id)resolveTargetTabControllerForSender:(id)arg1;
- (void)applyProfileToAllShellsInWindow:(id)arg1;
- (void)newTab:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (struct CGSize)window:(id)arg1 willUseFullScreenContentSize:(struct CGSize)arg2;
- (void)windowDidResignMain:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)closeSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)displayWindowCloseSheet:(int)arg1;
- (id)warningNamesForProcesses:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)switchAllTabsToMainScreen;
- (BOOL)acceptsFirstResponder;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)menu:(id)arg1 updateItem:(id)arg2 atIndex:(long long)arg3 shouldCancel:(BOOL)arg4;
- (void)windowWillMiniaturize:(id)arg1;
- (void)blinker:(id)arg1 didBlink:(BOOL)arg2;
- (void)updateDockTileBadge;
- (void)updateDockTile;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_makeWindowOpaque;
- (BOOL)_windowShouldBeOpaque;
- (BOOL)_isTerminalBackgroundOpaque;
- (double)_blurForWindow;
- (id)findWindowControllerAtPoint:(struct CGPoint)arg1;
- (void)invalidateDraggingOrderFrontTimer;
- (void)draggingOrderFrontTimer:(id)arg1;
- (void)tabView:(id)arg1 didDragTabViewItemOutOfWindow:(id)arg2 toPoint:(struct CGPoint)arg3;
- (void)tabView:(id)arg1 draggingTabViewItemOutOfWindow:(id)arg2 toPoint:(struct CGPoint)arg3;
- (void)tabView:(id)arg1 didDropTabViewItemOutOfWindow:(struct CGPoint)arg2;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)setSelectedTabController:(id)arg1;
- (void)tabView:(id)arg1 didCloseTabViewItem:(id)arg2;
- (BOOL)shouldCloseTabViewItem:(id)arg1;
- (BOOL)window:(id)arg1 shouldDragDocumentWithEvent:(id)arg2 from:(struct CGPoint)arg3 withPasteboard:(id)arg4;
- (BOOL)window:(id)arg1 shouldPopUpDocumentPathMenu:(id)arg2;
- (struct CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(struct CGRect)arg2;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (id)_targetPane;
- (void)updateWindowGeometry;
- (struct CGSize)contentSize;
- (struct CGSize)tabContentSize;
- (void)updateAutosaveName;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)updateAllTitles;
- (void)updateRepresentedURL;
- (id)_proxyIconForNonValidatedURL:(id)arg1;
- (void)updateTitle;
- (unsigned long long)windowProfileID;
- (void)setWindowProfileID:(unsigned long long)arg1;
- (void)awakeFromNib;
- (id)windowNibName;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
