//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ViewBridge/NSViewBridge.h>

@class NSRemoteViewBase;

@interface NSViewRemoteBridge : NSViewBridge
{
    NSRemoteViewBase *_remoteView;
}

@property(readonly) NSRemoteViewBase *remoteView; // @synthesize remoteView=_remoteView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)registerKey:(id)arg1 defaultObject:(id)arg2 owner:(unsigned char)arg3;
- (CDStruct_6ad76789)auditToken;
- (int)processIdentifier;
- (id)initWithRemoteView:(id)arg1;

@end

