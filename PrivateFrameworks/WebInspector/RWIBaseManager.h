//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RWIServiceConnectionDelegate.h"

@class NSMutableDictionary, NSSet, NSString;

@interface RWIBaseManager : NSObject <RWIServiceConnectionDelegate>
{
    id <RWIBaseManagerDelegate> _delegate;
    NSMutableDictionary *_targets;
    NSMutableDictionary *_floatingDebuggables;
    NSString *_uuid;
}

@property(readonly, retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) id <RWIBaseManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)serviceConnectionDidClose:(id)arg1;
- (void)_fetchListingForApplication:(id)arg1;
- (void)_fetchApplicationListingForTarget:(id)arg1;
- (void)_sendIdentifierToTarget:(id)arg1;
- (void)_removeFloatingDebuggable:(id)arg1;
- (void)_adoptFloatingDebuggables:(id)arg1;
- (void)_addFloatingDebuggable:(id)arg1 forApplicationIdentifier:(id)arg2;
- (void)_removeDebuggable:(id)arg1;
- (void)_addDebuggable:(id)arg1;
- (void)_removeApplication:(id)arg1;
- (void)_addApplication:(id)arg1;
- (void)_addApplication:(id)arg1 immediatelyFetchListing:(BOOL)arg2;
- (id)managedTargetWithKey:(id)arg1;
- (void)unmanageTargetWithKey:(id)arg1;
- (id)manageTarget:(id)arg1 withKey:(id)arg2;
- (id)managedDeviceWithRef:(struct _AMDevice *)arg1;
- (void)unmanageDevice:(struct _AMDevice *)arg1;
- (id)manageDevice:(struct _AMDevice *)arg1;
- (void)targetEstablishedServiceConnection:(id)arg1;
- (void)openServiceConnectionForTarget:(id)arg1;
- (void)targetHasBasicInformation:(id)arg1;
@property(readonly, nonatomic) NSSet *targets; // @dynamic targets;
- (id)_keyForDeviceRef:(struct _AMDevice *)arg1;
- (void)dealloc;
- (id)init;
- (void)_rpc_reportSetup:(id)arg1;
- (void)_rpc_applicationSentData:(id)arg1;
- (void)_rpc_applicationSentListing:(id)arg1;
- (void)_rpc_applicationDisconnected:(id)arg1;
- (void)_rpc_applicationUpdated:(id)arg1;
- (void)_rpc_applicationConnected:(id)arg1;
- (void)_rpc_reportConnectedApplicationList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
