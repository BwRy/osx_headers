//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DVDEvent : NSObject
{
    unsigned long mEventCode;
    unsigned long mEventData1;
    unsigned long mEventData2;
}

- (unsigned long)eventData2;
- (unsigned long)eventData1;
- (unsigned long)eventCode;
- (id)initWithData:(unsigned long)arg1 data1:(unsigned long)arg2 data2:(unsigned long)arg3;

@end
