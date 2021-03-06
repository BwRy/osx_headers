//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface _NotificationObserver : NSObject
{
    NSSet *_notificationNames;
    id _target;
    SEL _action;
}

@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) NSSet *notificationNames; // @synthesize notificationNames=_notificationNames;
- (void).cxx_destruct;
- (void)_didReceiveNotification:(id)arg1;
- (void)_unregisterObject:(id)arg1;
- (void)_registerObject:(id)arg1;
- (void)dealloc;

@end

