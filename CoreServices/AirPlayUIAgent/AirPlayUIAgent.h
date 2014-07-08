//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AirPlayUIAgent.h"
#import "NSApplicationDelegate.h"
#import "NSXPCListenerDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString, NSXPCListener;

@interface AirPlayUIAgent : NSObject <NSApplicationDelegate, NSXPCListenerDelegate, AirPlayUIAgent>
{
    unsigned char _airplayActive;
    unsigned char _airplayScreenActive;
    unsigned char _airplayScreenSuspended;
    unsigned char _airplayStarted;
    unsigned char _uiActive;
    struct __SFOperation *_airDropOperation;
    unsigned char _airDropEnabled;
    int _stopNotifyToken;
    int _suspendedNotifyToken;
    int _suspendCount;
    NSMutableDictionary *_suspendedRoute;
    unsigned long long _suspendTicks;
    NSXPCListener *_xpcListener;
    unsigned char _xpcTransactionActive;
    NSObject<OS_dispatch_queue> *_helperXPCQueue;
    NSObject<OS_xpc_object> *_helperXPCListener;
}

- (void)_resumeAirPlayScreen:(BOOL)arg1;
- (void)resumeAirPlayScreen:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_suspendAirPlayScreen;
- (void)suspendAirPlayScreen:(CDUnknownBlockType)arg1;
- (void)stoppedAirPlay;
- (void)startingAirPlayWithRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setBestForAirPlayMode:(BOOL)arg1 forRoute:(id)arg2;
- (void)getBestForAirPlayModeForRoute:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_handleConnectionInvalidated:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_updateActivity;
- (void)_handleUIDidDisappear:(id)arg1;
- (void)_handleUIWillAppear:(id)arg1;
- (void)_handleStateEvent:(id)arg1;
- (void)_handleSessionBecomingInactive:(id)arg1;
- (void)_handleProfileChangedEvent;
- (void)_enableManagedProfileLogging;
- (void)_updateDeviceFilter;
- (void)_handlePasswordEvent:(id)arg1;
- (void)_clearSuspendInfo;
- (void)_airDropStopTracking;
- (void)_airDropStartTracking;
- (void)dealloc;
- (void)applicationDidFinishLaunching:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
