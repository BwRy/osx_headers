//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CalUIOccurrenceDelegate.h"

@class CalUIDotOccurrence, CalUIOccurrence, NSColor;

@protocol CalUIDotOccurrenceDelegate <CalUIOccurrenceDelegate>
- (BOOL)occurrenceHasValidColumnLayout:(CalUIDotOccurrence *)arg1;
- (BOOL)shouldOccurrenceShowAllDayString:(CalUIOccurrence *)arg1;
- (BOOL)shouldOccurrenceShowEndTime:(CalUIOccurrence *)arg1;
- (BOOL)shouldOccurrenceShowStartTime:(CalUIOccurrence *)arg1;
- (double)desiredHeightForOccurrence:(CalUIOccurrence *)arg1;
- (BOOL)shouldOccurrenceDrawDot:(CalUIOccurrence *)arg1;
- (BOOL)shouldOccurrenceDrawBackground:(CalUIOccurrence *)arg1;
- (BOOL)occurrenceAlwaysDrawsBackground:(CalUIOccurrence *)arg1;

@optional
- (NSColor *)dateColor;
- (NSColor *)titleColor;
@end

