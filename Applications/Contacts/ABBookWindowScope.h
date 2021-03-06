//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABAddressBook, ABBookGroupHelperFactory, ABCardEditModeController, ABCardView, ABCardViewController, ABCleanSplitViewController, ABCommandExecutor, ABExportArchiveService, ABGroupEntriesList, ABGroupListController, ABGroupListView, ABMainListOutlineView, ABMainWindowViewModel, ABPersonListController, ABPersonListSearchController, NSMenu, NSWindow;

@interface ABBookWindowScope : NSObject
{
    NSWindow *_window;
    ABAddressBook *_browsingAddressBook;
    id <ABMainWindowController> _mainWindowController;
    id <ABPersonMergingControllerDelegate> _mergeDelegate;
    id <ABPrintingDelegate> _printingDelegate;
    ABCleanSplitViewController *_splitViewController;
    ABMainWindowViewModel *_mainWindowViewModel;
    ABGroupListView *_groupListView;
    ABGroupEntriesList *_groupEntriesList;
    ABGroupListController *_groupListController;
    ABBookGroupHelperFactory *_helperFactory;
    ABCommandExecutor *_commandExecutor;
    ABPersonListSearchController *_searchController;
    ABMainListOutlineView *_personListView;
    ABPersonListController *_personListController;
    ABCardView *_cardView;
    ABCardViewController *_cardViewConroller;
    ABCardEditModeController *_cardEditModeController;
    id <ABShareKitTransitionProvider> _shareKitTransitionProvider;
    NSMenu *_addDropDownMenu;
    ABCardViewController *_cardViewController;
    ABExportArchiveService *_exportArchiveService;
}

@property NSMenu *addDropDownMenu; // @synthesize addDropDownMenu=_addDropDownMenu;
@property ABExportArchiveService *exportArchiveService; // @synthesize exportArchiveService=_exportArchiveService;
@property id <ABShareKitTransitionProvider> shareKitTransitionProvider; // @synthesize shareKitTransitionProvider=_shareKitTransitionProvider;
@property ABCardEditModeController *cardEditModeController; // @synthesize cardEditModeController=_cardEditModeController;
@property ABCardViewController *cardViewController; // @synthesize cardViewController=_cardViewController;
@property ABCardView *cardView; // @synthesize cardView=_cardView;
@property ABPersonListController *personListController; // @synthesize personListController=_personListController;
@property ABMainListOutlineView *personListView; // @synthesize personListView=_personListView;
@property ABPersonListSearchController *searchController; // @synthesize searchController=_searchController;
@property ABCommandExecutor *commandExecutor; // @synthesize commandExecutor=_commandExecutor;
@property ABBookGroupHelperFactory *helperFactory; // @synthesize helperFactory=_helperFactory;
@property ABGroupListController *groupListController; // @synthesize groupListController=_groupListController;
@property ABGroupEntriesList *groupEntriesList; // @synthesize groupEntriesList=_groupEntriesList;
@property ABGroupListView *groupListView; // @synthesize groupListView=_groupListView;
@property ABMainWindowViewModel *mainWindowViewModel; // @synthesize mainWindowViewModel=_mainWindowViewModel;
@property ABCleanSplitViewController *splitViewController; // @synthesize splitViewController=_splitViewController;
@property id <ABPrintingDelegate> printingDelegate; // @synthesize printingDelegate=_printingDelegate;
@property id <ABPersonMergingControllerDelegate> mergeDelegate; // @synthesize mergeDelegate=_mergeDelegate;
@property id <ABMainWindowController> mainWindowController; // @synthesize mainWindowController=_mainWindowController;
@property ABAddressBook *browsingAddressBook; // @synthesize browsingAddressBook=_browsingAddressBook;
@property NSWindow *window; // @synthesize window=_window;

@end

