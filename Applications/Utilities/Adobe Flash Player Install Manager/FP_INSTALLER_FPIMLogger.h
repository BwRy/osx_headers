//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle, NSString;

@interface FP_INSTALLER_FPIMLogger : NSObject
{
    NSFileHandle *mLogFH;
    int mLoggingLevel;
    NSString *mPrefix;
}

- (BOOL)assert:(BOOL)arg1 message:(id)arg2;
- (void)logString:(id)arg1 withLoggingLevel:(int)arg2;
- (void)logTimeStampedString:(id)arg1 withLoggingLevel:(int)arg2;
- (void)stampCurrentSessionEnd;
- (void)stampNewSessionStart;
- (void)setPrefix:(id)arg1;
- (void)setLoggingLevel:(int)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)init;

@end

