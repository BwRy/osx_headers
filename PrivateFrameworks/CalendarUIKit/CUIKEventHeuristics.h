//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CUIKEventHeuristics : NSObject
{
}

+ (BOOL)_shouldFilterEvent:(id)arg1 filterOptions:(unsigned long long)arg2;
+ (id)_sortedEvents:(id)arg1 withMethod:(unsigned long long)arg2;
+ (id)_sortedAndFilteredEventsForPredicate:(id)arg1 filterOptions:(unsigned long long)arg2 sortMethod:(unsigned long long)arg3 eventStore:(id)arg4;
+ (id)upcomingEventsInCalendars:(id)arg1 onlyReturnFirstEvents:(BOOL)arg2 filterOptions:(unsigned long long)arg3 sortMethod:(unsigned long long)arg4 eventStore:(id)arg5;
+ (id)tomorrowsEventsInCalendars:(id)arg1 filterOptions:(unsigned long long)arg2 sortMethod:(unsigned long long)arg3 eventStore:(id)arg4;
+ (id)todaysEventsInCalendars:(id)arg1 filterOptions:(unsigned long long)arg2 sortMethod:(unsigned long long)arg3 eventStore:(id)arg4;

@end
