//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSResponder.h"

#import "CalCalendarPopupTarget.h"
#import "NSSplitViewDelegate.h"
#import "NSUserActivityDelegate.h"
#import "NSWindowDelegate.h"

@class CALCMManager, CALImportProgressController, CALUserActionManager, CALViewSwitcherSegmentedControl, CALWindow, CalAnimatedSplitView, CalCalDAVTaskManager, CalEventStore, CalManagedObjectContext, CalMessagePopoverController, CalMessageTableController, CalQuickEventPopoverController, CalResendInvitationsController, CalUICalendarSidebar, CalUICalendarViewsController, CalUIEventEditingManager, CalUISearchViewController, CalUISelectionManager, NSDate, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface CALMainController : NSResponder <NSWindowDelegate, NSSplitViewDelegate, CalCalendarPopupTarget, NSUserActivityDelegate>
{
    BOOL _canvasIsScrolling;
    BOOL _sheetNotificationBlocked;
    BOOL _isFullScreen;
    BOOL _isInModalSheet;
    BOOL _isQuitEnabled;
    BOOL _isEnteringFullScreen;
    BOOL _isExitingFullScreen;
    BOOL _updatingTextPending;
    BOOL _wantsDeferredSetupAfterEventStoreInitialization;
    BOOL _eventStoreIsInitialized;
    BOOL _calendarsHaveLoadedAfterLaunch;
    CalEventStore *_eventStore;
    CALWindow *_window;
    CALCMManager *_cmManager;
    CALUserActionManager *_userActionManager;
    CalCalDAVTaskManager *_calDAVTaskManager;
    CalUISelectionManager *_selectionManager;
    CalUIEventEditingManager *_eventEditingManager;
    CalUISearchViewController *_searchViewController;
    CalMessageTableController *_messageTableController;
    CalMessagePopoverController *_messagePopoverController;
    CalUICalendarViewsController *_calendarViewsController;
    CalResendInvitationsController *_invitationsController;
    CalQuickEventPopoverController *_quickEventPopoverController;
    CalManagedObjectContext *_persistentContext;
    NSMutableSet *_principalIDsWithErrorDialogs;
    NSMutableDictionary *_currentlyRunningSharingTaskGroups;
    NSString *_delegateAccountUID;
    NSDate *_lastUpdatingTextChange;
    CalAnimatedSplitView *_mainSplitView;
    CalUICalendarSidebar *_calendarSidebar;
    CALViewSwitcherSegmentedControl *_viewSwitcher;
    CALImportProgressController *_importProgressController;
    NSMutableDictionary *_queueViewers;
    NSObject<OS_dispatch_queue> *_deferredSetupQueue;
    NSMutableDictionary *_principleIDsBusyStatus;
}

+ (unsigned long long)defaultStartHourForNewEvents;
+ (void)eventDidCommit:(id)arg1;
+ (void)setLastCreatedEventLocalUID:(id)arg1;
+ (id)lastCreatedEventLocalUID;
+ (void)logPerfFor:(id)arg1;
+ (BOOL)documentHasEvents:(id)arg1;
@property(retain) NSMutableDictionary *principleIDsBusyStatus; // @synthesize principleIDsBusyStatus=_principleIDsBusyStatus;
@property BOOL calendarsHaveLoadedAfterLaunch; // @synthesize calendarsHaveLoadedAfterLaunch=_calendarsHaveLoadedAfterLaunch;
@property BOOL eventStoreIsInitialized; // @synthesize eventStoreIsInitialized=_eventStoreIsInitialized;
@property BOOL wantsDeferredSetupAfterEventStoreInitialization; // @synthesize wantsDeferredSetupAfterEventStoreInitialization=_wantsDeferredSetupAfterEventStoreInitialization;
@property(retain) NSObject<OS_dispatch_queue> *deferredSetupQueue; // @synthesize deferredSetupQueue=_deferredSetupQueue;
@property(retain) NSMutableDictionary *queueViewers; // @synthesize queueViewers=_queueViewers;
@property(retain) CALImportProgressController *importProgressController; // @synthesize importProgressController=_importProgressController;
@property BOOL updatingTextPending; // @synthesize updatingTextPending=_updatingTextPending;
@property BOOL isExitingFullScreen; // @synthesize isExitingFullScreen=_isExitingFullScreen;
@property BOOL isEnteringFullScreen; // @synthesize isEnteringFullScreen=_isEnteringFullScreen;
@property(retain) CALViewSwitcherSegmentedControl *viewSwitcher; // @synthesize viewSwitcher=_viewSwitcher;
@property(retain) CalUICalendarSidebar *calendarSidebar; // @synthesize calendarSidebar=_calendarSidebar;
@property(retain) CalAnimatedSplitView *mainSplitView; // @synthesize mainSplitView=_mainSplitView;
@property(retain, nonatomic) NSDate *lastUpdatingTextChange; // @synthesize lastUpdatingTextChange=_lastUpdatingTextChange;
@property(copy) NSString *delegateAccountUID; // @synthesize delegateAccountUID=_delegateAccountUID;
@property(retain) NSMutableDictionary *currentlyRunningSharingTaskGroups; // @synthesize currentlyRunningSharingTaskGroups=_currentlyRunningSharingTaskGroups;
@property(retain) NSMutableSet *principalIDsWithErrorDialogs; // @synthesize principalIDsWithErrorDialogs=_principalIDsWithErrorDialogs;
@property(readonly) CalManagedObjectContext *persistentContext; // @synthesize persistentContext=_persistentContext;
@property(retain, nonatomic) CalQuickEventPopoverController *quickEventPopoverController; // @synthesize quickEventPopoverController=_quickEventPopoverController;
@property(retain) CalResendInvitationsController *invitationsController; // @synthesize invitationsController=_invitationsController;
@property(retain) CalUICalendarViewsController *calendarViewsController; // @synthesize calendarViewsController=_calendarViewsController;
@property(retain) CalMessagePopoverController *messagePopoverController; // @synthesize messagePopoverController=_messagePopoverController;
@property(retain) CalMessageTableController *messageTableController; // @synthesize messageTableController=_messageTableController;
@property(retain) CalUISearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain) CalUIEventEditingManager *eventEditingManager; // @synthesize eventEditingManager=_eventEditingManager;
@property(retain) CalUISelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(retain) CalCalDAVTaskManager *calDAVTaskManager; // @synthesize calDAVTaskManager=_calDAVTaskManager;
@property(retain) CALUserActionManager *userActionManager; // @synthesize userActionManager=_userActionManager;
@property(retain) CALCMManager *cmManager; // @synthesize cmManager=_cmManager;
@property(retain) CALWindow *window; // @synthesize window=_window;
@property BOOL isQuitEnabled; // @synthesize isQuitEnabled=_isQuitEnabled;
@property BOOL isInModalSheet; // @synthesize isInModalSheet=_isInModalSheet;
@property BOOL isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property BOOL sheetNotificationBlocked; // @synthesize sheetNotificationBlocked=_sheetNotificationBlocked;
@property BOOL canvasIsScrolling; // @synthesize canvasIsScrolling=_canvasIsScrolling;
@property(retain) CalEventStore *eventStore; // @synthesize eventStore=_eventStore;
- (void).cxx_destruct;
- (void)restoreUserActivityState:(id)arg1;
- (void)userActivityWillSave:(id)arg1;
- (void)updateUserActivityState:(id)arg1;
- (void)_trackUserActivityType:(id)arg1 activityObject:(id)arg2;
- (void)trackDateSelection:(id)arg1;
- (void)trackEventSelection:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)windowWillReturnUndoManager:(id)arg1;
- (void)closeInlineInspector;
- (void)errorStateDidUpdate:(id)arg1;
- (void)handleErrorForPrincipal:(id)arg1;
- (void)moveEvents:(id)arg1 toCalendar:(id)arg2 save:(BOOL)arg3;
- (void)moveAllSelectedEventsToCalendar:(id)arg1;
- (void)calendarSelected:(id)arg1;
- (void)endPropogatingLegacyChangesToEK;
- (void)beginPropogatingLegacyChangesToEK;
- (void)removeInvitationsForEvents:(id)arg1;
- (void)removeMessagesForOccurrenceID:(id)arg1;
- (void)removeMessagesForEventWithLocalUID:(id)arg1;
- (BOOL)hasMessagesForOccurrenceID:(id)arg1;
- (id)messagesForOccurrenceID:(id)arg1;
- (id)messagesForEventWithLocalUID:(id)arg1;
- (unsigned long long)countForMessages;
- (void)newCalendarSubmenuNeedsUpdate:(id)arg1;
- (BOOL)_allowLocalCalendarCreation;
- (void)newSubmenuNeedsUpdateOldBroken:(id)arg1;
- (void)newSubmenuNeedsUpdate:(id)arg1;
- (void)fileMenuNeedsUpdate:(id)arg1;
- (void)addGroup:(id)arg1 select:(BOOL)arg2 edit:(BOOL)arg3;
- (void)addCalendar:(id)arg1 select:(BOOL)arg2 edit:(BOOL)arg3;
- (void)newGroup:(id)arg1;
- (void)newCalendarInGroup:(id)arg1;
- (void)newLocalCalendar:(id)arg1;
- (void)newCalendar:(id)arg1;
- (id)nextCalendarColor;
- (unsigned long long)nextNodeOrderForNodes:(id)arg1;
- (unsigned long long)nextNodeOrderForGroup:(id)arg1;
- (unsigned long long)nextNodeOrderForCalendar:(id)arg1;
- (id)checkedManagedCalendars;
- (id)managedCalendars;
- (id)_managedCalendarsFromEKCalendars:(id)arg1;
- (id)checkedCalendars;
- (id)checkedCalendarIDs;
- (id)calendars;
- (unsigned long long)numberOfServerGroups;
- (unsigned long long)numberOfCalendars;
- (id)nodes;
- (id)topLevelItems;
- (void)selectCalendar:(id)arg1;
- (void)selectNode:(id)arg1 checked:(long long)arg2;
- (void)resortCalendars;
- (void)reloadCalendars;
- (BOOL)isDefaultCalendarLastSelected;
- (void)setDefaultCalendarToLastSelected;
- (void)setDefaultCalendarToFirstServerCalendar;
- (void)setDefaultManagedCalendar:(id)arg1 userSelected:(BOOL)arg2;
- (void)setDefaultCalendar:(id)arg1 userSelected:(BOOL)arg2;
- (void)setDefaultManagedCalendar:(id)arg1;
- (id)defaultManagedCalendar;
- (id)defaultCalendar;
- (id)selectedOrSenderNode:(id)arg1;
- (id)selectedManagedCalendar;
- (id)selectedCalendar;
- (id)selectedNode;
- (void)toggleCalendarAvailability:(id)arg1;
- (void)_queueHelperForSender:(id)arg1 nibName:(id)arg2 groupType:(Class)arg3 viewerType:(Class)arg4;
- (void)showExchangeQueue:(id)arg1;
- (void)showCalDAVQueue:(id)arg1;
- (void)copyLinkToClipboard:(id)arg1;
- (void)changeLocation:(id)arg1;
- (void)sendPublishEmail:(id)arg1;
- (void)resendInvitations:(id)arg1;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)unpublish:(id)arg1;
- (void)stopSharing:(id)arg1;
- (void)stopSharingSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)publishNode:(id)arg1;
- (void)publish:(id)arg1;
- (void)showSharingPopoverForNode:(id)arg1;
- (void)showSharingPopover:(id)arg1;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowDidFailToExitFullScreen:(id)arg1;
- (void)windowWillExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)windowDidFailToEnterFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (void)_updateWindowLayoutForFullScreen:(BOOL)arg1;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)timeZoneEnabledPrefChanged:(id)arg1;
- (void)overlayCalendarPrefChanged:(id)arg1;
- (void)checkQueueStatus:(id)arg1;
- (void)indicateInvitationIsNotValid;
- (BOOL)isAddressBookOK;
- (void)fileSystemChanged:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)performClose:(id)arg1;
- (void)performZoom:(id)arg1;
- (void)performMiniaturize:(id)arg1;
- (void)prepareWindowForTermination;
- (void)saveVisibleDates;
- (void)saveSidebarState;
- (void)saveViewRects;
- (void)visibleDateRangeChanged;
- (void)showUIOccurrence:(id)arg1 event:(id)arg2 openInspector:(BOOL)arg3 inspectorType:(int)arg4;
- (void)showEvent:(id)arg1 openInspector:(BOOL)arg2 inspectorType:(int)arg3;
- (void)showEventWithEventOccurrenceID:(id)arg1 openInspector:(BOOL)arg2;
- (void)showEventWithLegacyOccurrenceID:(id)arg1 openInspector:(BOOL)arg2;
- (BOOL)isInlineInspectorOpenForEventOccurrenceID:(id)arg1;
- (id)windowUID;
- (id)calendarListViewController;
- (id)calendarListDataSource;
- (void)openRetargetableInspector;
- (void)toggleRetargetableInspector;
- (void)openStandaloneInspector;
- (id)inlineInspector;
- (id)inspectorManager;
- (void)updateNoBo;
- (void)resetMiniMonths;
- (void)splitViewDidEndResize:(id)arg1;
- (void)splitViewWillBeginResize:(id)arg1;
- (BOOL)calendarListIsShown;
- (void)hideCalendarList;
- (void)showCalendarList;
- (void)toggleCalendarList:(id)arg1;
- (void)setLeftPaneShown:(BOOL)arg1;
- (BOOL)leftPaneShown;
- (void)showHideLeftPane:(id)arg1;
- (void)entriesInNoBoHasChanged:(id)arg1;
- (void)showNotificationBox:(id)arg1;
- (void)updateUpdatingText:(BOOL)arg1 forceUpdate:(BOOL)arg2;
- (void)_scheduleTitleUpdate;
- (void)_setUpdatingText:(BOOL)arg1;
- (void)principalStatusDidChange:(id)arg1;
- (void)handleGoogleAuthNotification:(id)arg1;
- (void)initAccessibility;
- (void)printCalendars:(id)arg1;
- (void)toggleFullScreen:(id)arg1;
- (void)moveToBeginningOfLine:(id)arg1;
- (void)moveToEndOfLine:(id)arg1;
- (void)makeTextSmaller:(id)arg1;
- (void)makeTextBigger:(id)arg1;
- (void)moveBackward:(id)arg1;
- (void)moveForward:(id)arg1;
- (void)switchToYearView:(id)arg1;
- (void)switchToMonthView:(id)arg1;
- (void)switchToWeekView:(id)arg1;
- (void)switchToDayView:(id)arg1;
- (void)goToDay:(id)arg1;
- (void)goToCurrentDay:(id)arg1;
- (void)showInspector:(id)arg1;
- (void)editEvent:(id)arg1;
- (void)getInfo:(id)arg1;
- (long long)stateForCalendarWithUID:(id)arg1;
- (void)setCalendarWithUID:(id)arg1 state:(long long)arg2;
- (void)saveChangesToEvent:(id)arg1;
- (void)saveNewEventAndOpenInspector:(id)arg1;
- (void)focusOnMainView;
- (void)newEventWithStartDate:(id)arg1 endDate:(id)arg2 allDay:(BOOL)arg3 title:(id)arg4 location:(id)arg5 calendar:(id)arg6;
- (void)_prepareWindowForEventCreation;
- (void)newEventAtDate:(id)arg1 isAllDay:(BOOL)arg2;
- (void)addEventClicked:(id)arg1;
- (void)newEventCommand:(id)arg1;
- (id)changeInfoForChangedEventOccIDs:(id)arg1;
- (void)eventsChanged:(id)arg1;
- (void)eventsImportedNotification:(id)arg1;
- (void)eventsChangedNotification:(id)arg1;
- (void)eventsUpdatedNotification:(id)arg1;
- (BOOL)isEventCreationValidInCalendar:(id)arg1;
- (void)setCalendarViewTo:(id)arg1 withStartDate:(id)arg2;
- (id)findNewStartDate;
- (void)setCalendarViewTo:(id)arg1;
- (void)switchToYearView;
- (void)switchToMonthView;
- (void)switchToWeekView;
- (void)switchToOneDayView;
- (id)activeDateInCanvas;
- (void)goToDate:(id)arg1;
- (void)calendarStoreResetExternallyNotificationHandler:(id)arg1;
- (BOOL)calendarListContainsNodeUID:(id)arg1;
- (BOOL)shouldResetCacheForCalendarUIDs:(id)arg1;
- (void)screenResolutionChangedNotificationHandler:(id)arg1;
- (void)datetimeFormatChangedNotificationHandler:(id)arg1;
- (id)currentViewName;
- (void)find:(id)arg1;
- (BOOL)searchResultsIsOpened;
- (void)showHideSearchResults:(id)arg1;
- (void)setIsSearchActive:(BOOL)arg1;
- (void)setSearchResultsOpen:(BOOL)arg1;
- (BOOL)isSearchActive;
- (void)searchDidFinish:(id)arg1;
- (void)dismissImportDialog;
- (void)showImportDialogWithMessage:(id)arg1;
- (id)resendInvitationsController;
- (id)publishController;
- (id)subscribeController;
- (id)mainCalendarView;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)stopSheetModal:(id)arg1;
- (void)beginSheetModal:(id)arg1 withQuit:(BOOL)arg2 withUserNotification:(BOOL)arg3 stayHidden:(BOOL)arg4;
- (void)beginSheetModal:(id)arg1;
- (void)didStopSheetModal:(id)arg1;
- (void)willStopSheetModal:(id)arg1;
- (void)didBeginSheetModal:(id)arg1 withQuit:(BOOL)arg2 withUserNotification:(BOOL)arg3;
- (void)willBeginSheetModal:(id)arg1 withQuit:(BOOL)arg2 withUserNotification:(BOOL)arg3 stayHidden:(BOOL)arg4;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (BOOL)splitView:(id)arg1 shouldHideDividerAtIndex:(long long)arg2;
- (void)windowDidBecomeMain:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)beSureWindowIsVisible;
- (void)beSureWindowIsVisibleForSheet:(BOOL)arg1;
- (void)saveWindowFrameUsingName:(id)arg1;
- (void)calendarsDidChange;
- (void)deferredSetup;
- (BOOL)isMainWindowController;
- (void)windowWillCloseNotification:(id)arg1;
- (void)dealloc;
- (void)removeFromNotificationCenter;
- (id)initWithDelegateUID:(id)arg1;
- (void)prefetchAdditionalEventsAfterAllVisibleContainersLoadedAfterLaunch;
- (void)warmupEventKitCacheForView:(id)arg1 startDate:(id)arg2;
- (void)_handleCalendarItemExternalIdentifierURL:(id)arg1;
- (void)_handleOpenDateURL:(id)arg1;
- (id)dateFromDateString:(id)arg1;
- (void)handleICalURL:(id)arg1;
- (id)bestPrincipalForMessage:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)_attendeeInMessage:(id)arg1 matchesPrincipalForAccount:(id)arg2;
- (BOOL)openFile:(id)arg1;
- (BOOL)_warnAboutDroppingReminders:(unsigned long long)arg1;
- (id)pathForDragAtURL:(id)arg1 withName:(id)arg2;
- (BOOL)exportNode:(id)arg1 toURL:(id)arg2;
- (void)exportPanelDidEnd:(id)arg1 returnCode:(long long)arg2 nodeToExport:(id)arg3;
- (void)export:(id)arg1;
- (void)import:(id)arg1;
- (void)_forceUpdateEKAndUIAfterImportOfManagedObjectIDs:(id)arg1 inContext:(id)arg2;
- (BOOL)importFiles:(id)arg1 toEventCalendar:(id)arg2 autoSelectCalendar:(BOOL)arg3 context:(id)arg4;
- (BOOL)importFiles:(id)arg1 toCalendar:(id)arg2 autoSelectCalendar:(BOOL)arg3;
- (id)_createCalendarForFirstFileWithEvents:(id)arg1 context:(id)arg2;
- (void)_warnAboutDroppingReminders:(unsigned long long)arg1 files:(id)arg2;
- (BOOL)_displayDialogForIssue:(id)arg1 issueCount:(unsigned long long)arg2 totalEvents:(unsigned long long)arg3 dismissPermanently:(BOOL)arg4 answerCallBack:(CDUnknownBlockType)arg5;
- (void)_showICSImportDialog;
- (BOOL)_importFilesForDrag:(id)arg1;
- (BOOL)importCalendarFilesForDrag:(id)arg1;
- (void)exchangeWarningSheetDidEndWithCancel:(BOOL)arg1 contextInfo:(id)arg2;
- (void)exchangeErrorSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)importFinalizeCalendarFromVCS:(id)arg1 numMalformedEntities:(long long)arg2 inManagedObjectContext:(id)arg3;
- (void)importVCSFinishedWithNumMalformedEntities:(unsigned long long)arg1 inCalendar:(id)arg2;
- (BOOL)importVCSFile:(id)arg1 toCalendar:(id *)arg2 numMalformedEntities:(unsigned long long *)arg3 inManagedObjectContext:(id)arg4 numReminders:(unsigned long long *)arg5;
- (id)createImportCalendarFromFile:(id)arg1 withTitle:(id)arg2 withNotes:(id)arg3 isEvent:(BOOL)arg4 isTask:(BOOL)arg5 withColor:(id)arg6 inManagedObjectContext:(id)arg7;
- (id)createImportCalendarFromICS:(id)arg1 fromFile:(id)arg2 isEvent:(BOOL)arg3 isTask:(BOOL)arg4 inManagedObjectContext:(id)arg5;
- (id)_topmostPrincipal;
- (id)_calendarEntityNameForPrincipal:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
