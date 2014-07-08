//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSMutableSet, NSObject<OS_dispatch_semaphore>;

@interface TUCallCenterCallsCache : NSObject
{
    NSMutableSet *_currentCallSet;
    NSMapTable *_callRefToTelephonyCall;
    NSObject<OS_dispatch_semaphore> *_callRefToTelephonyCallSemaphore;
    NSMapTable *_chatGUIDToFaceTimeCall;
    NSObject<OS_dispatch_semaphore> *_chatGUIDToFaceTimeCallSemaphore;
    NSMapTable *_uniqueProxyIdentifierToProxyCall;
    NSObject<OS_dispatch_semaphore> *_uniqueProxyIdentifierToProxyCallSemaphore;
    NSMapTable *_conferenceIdentifierToFaceTimeProxyCall;
    NSObject<OS_dispatch_semaphore> *_conferenceIdentifierToFaceTimeProxyCallSemaphore;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *conferenceIdentifierToFaceTimeProxyCallSemaphore; // @synthesize conferenceIdentifierToFaceTimeProxyCallSemaphore=_conferenceIdentifierToFaceTimeProxyCallSemaphore;
@property(retain, nonatomic) NSMapTable *conferenceIdentifierToFaceTimeProxyCall; // @synthesize conferenceIdentifierToFaceTimeProxyCall=_conferenceIdentifierToFaceTimeProxyCall;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *uniqueProxyIdentifierToProxyCallSemaphore; // @synthesize uniqueProxyIdentifierToProxyCallSemaphore=_uniqueProxyIdentifierToProxyCallSemaphore;
@property(retain, nonatomic) NSMapTable *uniqueProxyIdentifierToProxyCall; // @synthesize uniqueProxyIdentifierToProxyCall=_uniqueProxyIdentifierToProxyCall;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *chatGUIDToFaceTimeCallSemaphore; // @synthesize chatGUIDToFaceTimeCallSemaphore=_chatGUIDToFaceTimeCallSemaphore;
@property(retain, nonatomic) NSMapTable *chatGUIDToFaceTimeCall; // @synthesize chatGUIDToFaceTimeCall=_chatGUIDToFaceTimeCall;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *callRefToTelephonyCallSemaphore; // @synthesize callRefToTelephonyCallSemaphore=_callRefToTelephonyCallSemaphore;
@property(retain, nonatomic) NSMapTable *callRefToTelephonyCall; // @synthesize callRefToTelephonyCall=_callRefToTelephonyCall;
@property(retain, nonatomic) NSMutableSet *currentCallSet; // @synthesize currentCallSet=_currentCallSet;
- (void)_updateCallWithPersistentValues:(id)arg1;
- (id)_callForChat:(id)arg1 proxyCall:(id)arg2;
- (id)proxyCallForProxyCall:(id)arg1;
- (id)callForChat:(id)arg1;
- (void)dealloc;
- (id)init;

@end
