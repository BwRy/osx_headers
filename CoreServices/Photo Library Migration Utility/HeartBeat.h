//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSPortDelegate.h"

@class NSLock, NSMutableArray, NSPort, NSThread, NSTimer;

@interface HeartBeat : NSObject <NSPortDelegate>
{
    struct {
        double _currentDate;
        double _birthDate;
        double _lastDate;
    } _times;
    NSMutableArray *_clients;
    NSPort *_port;
    NSTimer *_msgSendTimer;
    NSThread *_heartbeatThread;
    NSLock *_clientsLock;
    int _viewCount;
}

+ (BOOL)isHeartBeatThread;
+ (void)setHeartBeatCycle:(double)arg1;
+ (double)heartBeatCycle;
+ (id)sharedHeartBeat;
- (void)removeHeartBeatView:(id)arg1;
- (void)addHeartBeatView:(id)arg1;
- (void)_activate:(id)arg1;
- (void)updateHeartBeatState;
- (void)dealloc;
- (id)init;

@end

