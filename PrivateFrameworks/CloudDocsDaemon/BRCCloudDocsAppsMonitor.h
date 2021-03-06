//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface BRCCloudDocsAppsMonitor : NSObject
{
    NSDictionary *_cloudDocsContainersByAppID;
    NSDictionary *_appIDsByContainerID;
    NSMutableSet *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (id)cloudDocsAppsMonitor;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isApplicationInstalledForContainerID:(id)arg1;
- (id)allApplicationIdentifiers;
- (id)applicationIdentifiersForContainerID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_start;
- (void)_refetchApps;

@end

