//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QCPlugIn.h"

@interface IndexChanged : QCPlugIn
{
    unsigned long long _previousIndex;
}

+ (id)attributes;
+ (int)timeMode;
+ (int)executionMode;
- (BOOL)execute:(id)arg1 atTime:(double)arg2 withArguments:(id)arg3;
- (id)init;

@end
