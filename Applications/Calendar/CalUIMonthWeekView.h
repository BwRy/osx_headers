//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CalUIOccurrenceContainerView.h"

#import "CalUIDotOccurrenceDelegate.h"

@class CalUIMonthWeekViewController, NSDate, NSMutableArray, NSString, NSTextField;

@interface CalUIMonthWeekView : CalUIOccurrenceContainerView <CalUIDotOccurrenceDelegate>
{
    BOOL _shouldUpdateOccurrenceConstraints;
    BOOL _spansFirstOfMonth;
    BOOL _showEventTimes;
    BOOL _pendingLayoutAfterNewStartDate;
    BOOL _isThisWeek;
    NSMutableArray *_dayViews;
    CalUIMonthWeekViewController *_monthWeekViewController;
    NSDate *_lastDate;
    NSMutableArray *_arrangedOccurrencesByDayIndex;
    NSTextField *_subviewCountField;
    NSDate *_endDate;
}

+ (id)weekViewWithMonthWeekViewController:(id)arg1;
@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSTextField *subviewCountField; // @synthesize subviewCountField=_subviewCountField;
@property BOOL isThisWeek; // @synthesize isThisWeek=_isThisWeek;
@property BOOL pendingLayoutAfterNewStartDate; // @synthesize pendingLayoutAfterNewStartDate=_pendingLayoutAfterNewStartDate;
@property BOOL showEventTimes; // @synthesize showEventTimes=_showEventTimes;
@property(retain) NSMutableArray *arrangedOccurrencesByDayIndex; // @synthesize arrangedOccurrencesByDayIndex=_arrangedOccurrencesByDayIndex;
@property(retain) NSDate *lastDate; // @synthesize lastDate=_lastDate;
@property BOOL spansFirstOfMonth; // @synthesize spansFirstOfMonth=_spansFirstOfMonth;
@property __weak CalUIMonthWeekViewController *monthWeekViewController; // @synthesize monthWeekViewController=_monthWeekViewController;
@property(retain) NSMutableArray *dayViews; // @synthesize dayViews=_dayViews;
- (void).cxx_destruct;
- (double)bottomOccurrrencePadding;
- (double)dateBannerHeight;
- (double)startTimeIncrementForArrowKey:(unsigned short)arg1;
- (void)keyDown:(id)arg1;
- (void)selectAll:(id)arg1;
- (BOOL)needsUpdateOccurrenceConstraints;
- (void)setNeedsUpdateOccurrenceConstraints:(BOOL)arg1;
- (id)menuForEvent:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)mouseDragged:(id)arg1 forOccurrence:(id)arg2;
- (id)dateAtPointInWindow:(struct CGPoint)arg1;
- (id)dateAtPoint:(struct CGPoint)arg1;
- (BOOL)spansDate:(id)arg1;
- (long long)indexOfDate:(id)arg1;
- (id)dayViewAtIndex:(long long)arg1;
- (id)dayViewAtPoint:(struct CGPoint)arg1;
- (id)firstDayViewForOccurrence:(id)arg1;
- (BOOL)shouldOccurrenceShowAllDayString:(id)arg1;
- (BOOL)shouldOccurrenceShowEndTime:(id)arg1;
- (BOOL)shouldOccurrenceShowStartTime:(id)arg1;
- (double)desiredHeightForOccurrence:(id)arg1;
- (BOOL)shouldOccurrenceDrawDot:(id)arg1;
- (BOOL)shouldOccurrenceDrawBackground:(id)arg1;
- (BOOL)occurrenceAlwaysDrawsBackground:(id)arg1;
- (void)layout;
- (void)updateShowEventTimes;
- (void)layoutOccurrences;
- (long long)numberOfOccurrenceRowsDisplayedAtCurrentSize;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)updateOccurrenceFrames;
- (void)updateDayFrames;
- (void)updateDayWidthConstraints;
- (BOOL)makeUIOccurrence:(id)arg1 visible:(BOOL)arg2;
- (void)updateOccurrenceConstraints;
- (void)updateDayConstraints;
- (BOOL)occurrenceHasValidColumnLayout:(id)arg1;
- (void)occurrencesRequireRelayout:(id)arg1;
- (void)updateSubviewCount;
- (id)filteredEventsToDisplay:(id)arg1;
- (BOOL)eventBelongsInThisContainer:(id)arg1;
- (void)makeAllOccurrencesReuseable;
- (void)clearOccurrences;
- (void)removeOccurrence:(id)arg1;
- (id)addUIOccurrenceWithEvent:(id)arg1 isEphemeral:(BOOL)arg2;
- (void)addOccurrence:(id)arg1;
- (void)invalidateAccessibilityRepresentations;
- (void)configureContents;
- (void)updateConstraints;
- (BOOL)makeDayViews;
- (BOOL)wantsUpdateLayer;
- (void)setNeedsUpdateConstraints:(BOOL)arg1;
- (id)calendar;
- (id)arrangedUIOccurrencesAtDayIndex:(long long)arg1;
- (id)arrangedUIOccurrences;
- (unsigned long long)numberOfDays;
- (Class)occurrenceClass;
- (void)setStartDate:(id)arg1;
- (id)startDate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithMonthWeekViewController:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 monthWeekViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
