//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICSTimeZoneChange : NSObject
{
    double _interval;
    long long _tzOffsetTo;
}

- (long long)compare:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (long long)tzOffsetTo;
- (double)interval;
- (id)initWithTimeInterval:(double)arg1 tzOffsetTo:(long long)arg2;

@end

