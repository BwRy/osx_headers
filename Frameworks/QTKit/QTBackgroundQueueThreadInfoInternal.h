//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface QTBackgroundQueueThreadInfoInternal : NSObject
{
    NSMutableArray *_invocationQueue;
    struct _opaque_pthread_mutex_t _queueMutex;
    struct _opaque_pthread_cond_t _invocationsAvailableCond;
    int _runningState;
}

@end

