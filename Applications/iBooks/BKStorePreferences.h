//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BKPreferencesModule.h"

#import "CKPushNotificationManagerDelegate.h"

@class NSButton, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, NSTextField;

@interface BKStorePreferences : BKPreferencesModule <CKPushNotificationManagerDelegate>
{
    NSButton *_downloadNewPurchasesButton;
    NSTextField *_downloadDescriptionTextField;
    NSObject<OS_dispatch_semaphore> *_pushManagerSemaphore;
    NSObject<OS_dispatch_queue> *_pushManagerQueue;
}

- (void).cxx_destruct;
- (void)accountChangedNotification:(id)arg1;
- (void)pushNotificationManagerDidChange:(id)arg1;
- (void)pushNotificationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)pushNotificationManagerDidSucceed:(id)arg1;
- (void)downloadNewPurchasesAction:(id)arg1;
- (void)checkAutoPushState;
- (void)updateControls;
- (BOOL)isResizable;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
