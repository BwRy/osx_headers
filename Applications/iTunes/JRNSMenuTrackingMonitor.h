//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMenu;

@interface JRNSMenuTrackingMonitor : NSObject
{
    NSMenu *_currentlyTrackedMenu;
}

- (void)_handleMenuEndTracking:(id)arg1;
- (void)_handleMenuBeginTracking:(id)arg1;
- (BOOL)currentlyTrackingMenu:(id)arg1;
- (void)dealloc;
- (id)init;

@end

