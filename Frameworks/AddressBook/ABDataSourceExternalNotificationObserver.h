//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABAccountRepository;

__attribute__((visibility("hidden")))
@interface ABDataSourceExternalNotificationObserver : NSObject
{
    ABAccountRepository *_repository;
}

- (void)postInvalidatedExternallyNotificationFromDistributedNotification:(id)arg1;
- (void)postRemovedExternallyNotificationFromDistributedNotification:(id)arg1;
- (void)postChangedExternallyNotificationFromDistributedNotification:(id)arg1;
- (void)postAddedExternallyNotificationFromDistributedNotification:(id)arg1;
- (void)extractUidFromNotification:(id)arg1 andRunBlock:(CDUnknownBlockType)arg2;
- (void)distributedAccountConfigurationDidChange:(id)arg1;
- (void)distributedSourcesInvalidated:(id)arg1;
- (void)removeSourceWithExternalNotification:(id)arg1;
- (void)distributedSourceRemoved:(id)arg1;
- (void)addSourceWithExternalNotification:(id)arg1;
- (void)distributedSourceAdded:(id)arg1;
- (void)distributedSourceChanged:(id)arg1;
- (void)stopObservingNotifications;
- (void)startObservingNotifications;
- (void)dealloc;
- (id)initWithRepository:(id)arg1;

@end

