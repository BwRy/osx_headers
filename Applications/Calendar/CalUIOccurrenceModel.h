//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALMainController, NSDate;

@interface CalUIOccurrenceModel : NSObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    BOOL _showDeclinedEvents;
    BOOL _hideAllDayEvents;
    BOOL _invalidated;
    CALMainController *_mainController;
    id <CalUIOccurrenceModelDelegate> _delegate;
}

+ (id)sharedEnumerationDispatchQueue;
@property __weak CALMainController *mainController; // @synthesize mainController=_mainController;
@property BOOL hideAllDayEvents; // @synthesize hideAllDayEvents=_hideAllDayEvents;
@property BOOL showDeclinedEvents; // @synthesize showDeclinedEvents=_showDeclinedEvents;
@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property id <CalUIOccurrenceModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_notifyModelWillChange;
- (void)_notifyModelDidChangeWithChangeInfo:(id)arg1;
- (void)_selectedCalendarsDidChange;
- (void)_filterSettingsDidChange;
- (void)calendarListModelUpdated:(id)arg1;
- (void)sourceSelectionChanged:(id)arg1;
- (void)debugForceIndexRebuild:(id)arg1;
- (void)_filterAndBinOccurrences:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_binOccurrences:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)filterOccurrences:(id)arg1;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 mainController:(id)arg2;
- (id)init;

@end
