//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface ARDLocalDesktopImage : NSObject
{
    NSSet *_fezWindows;
    unsigned int _fezCID;
    unsigned int _displayID;
}

- (struct CGImage *)snapshotIgnoringWindows:(id)arg1;
- (struct CGImage *)_captureWindows:(unsigned int *)arg1 count:(long long)arg2;
- (void)_setWindowNumbersToIgnore:(id)arg1;
@property unsigned int displayID;
- (void)dealloc;
- (id)init;

@end
