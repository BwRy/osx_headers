//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SMToolBox : NSObject
{
}

+ (void)sendSignal:(int)arg1 toAllProcesses:(id)arg2;
+ (void)sendSignal:(int)arg1 toProcess:(id)arg2;
+ (void)sendSignal:(int)arg1 toProcess:(id)arg2 andPID:(int)arg3;
+ (BOOL)copyAllDSRecords:(id)arg1 fromSourceSystem:(id)arg2 toSystem:(id)arg3;

@end

