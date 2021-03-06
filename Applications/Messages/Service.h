//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMServiceImpl.h"

@class NSArray, NSImage;

@interface Service : IMServiceImpl
{
    NSImage *_serviceIcon;
    NSArray *_defaultBuddyIcons;
    NSArray *_defaultBuddyImages;
    BOOL _defaultBuddyIconChecked;
    BOOL _serviceIconChecked;
    BOOL _customCanonicalFormOfID;
}

+ (id)allServicesNonBlocking;
+ (id)allServices;
+ (BOOL)connectToDaemon;
+ (void)daemonConnectionLost:(id)arg1;
+ (void)daemonDidConnect:(id)arg1;
+ (void)daemonWillConnect:(id)arg1;
+ (void)initialize;
+ (void)disconnectAllServices;
- (Class)accountClass;
- (long long)compareNames:(id)arg1;
- (id)icon;
- (void)dealloc;

@end

