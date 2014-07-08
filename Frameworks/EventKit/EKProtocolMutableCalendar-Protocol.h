//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EKProtocolCalendar.h"
#import "EKProtocolMutableObject.h"

@class NSString, NSURL;

@protocol EKProtocolMutableCalendar <EKProtocolCalendar, EKProtocolMutableObject>
@property(copy, nonatomic) NSURL *publishURL;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *notes;
@property(nonatomic) BOOL ignoreAlarms;
@property(nonatomic) int displayOrder;
@property(copy, nonatomic) id <EKProtocolCalendarSource> containerSource;
@property(copy, nonatomic) NSString *symbolicColorName;
@property(copy, nonatomic) NSString *colorString;
- (void)setSuppressEventSchedulingNotifications:(BOOL)arg1;
@end
