//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMUserDataCull : NSObject
{
}

+ (BOOL)isTimestampNewerThanMaxDeletedAge:(unsigned long long)arg1;
+ (BOOL)isTimestamp:(unsigned long long)arg1 newerThanMaxAgeFromRightNow:(unsigned long long)arg2;
+ (BOOL)isTimestampTrustworthy:(unsigned long long)arg1;
+ (unsigned long long)maxDeletedAge;

@end
