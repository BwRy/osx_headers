//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ASKActiveProcSupport : NSObject
{
    CDUnknownFunctionPointerType _oldActiveProc;
    CDUnknownFunctionPointerType _activeProc;
}

+ (id)sharedActiveProcSupport;
- (void)setup;
- (void)didFinishLaunching:(id)arg1;
- (id)init;

@end
