//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TViewController.h"

@class NSWindow;

@interface TPaneController : TViewController
{
    NSWindow *_window;
}

@property(readonly) NSWindow *window; // @synthesize window=_window;
- (void)preferencesUpdated:(id)arg1;
- (void)setBoolValue:(_Bool)arg1 forKey:(int)arg2;
- (void)configureControl:(id)arg1 withValue:(long long)arg2 andCommand:(SEL)arg3;
- (void)close:(_Bool)arg1;
- (void)open;
- (void)dealloc;
- (void)initCommon;

@end

