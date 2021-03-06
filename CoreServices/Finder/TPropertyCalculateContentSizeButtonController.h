//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TPropertyButtonController.h"

#import "TPBFSizingThreadCallbackProtocol.h"

@class TPropertyContentSizeController;

@interface TPropertyCalculateContentSizeButtonController : TPropertyButtonController <TPBFSizingThreadCallbackProtocol>
{
    TPropertyContentSizeController *_contentSizeController;
    struct TPBFSizingThread *_pbfSizingThread;
    struct TPBFSizingThreadCallbackCocoaBridge *_pbfSizingThreadBridge;
}

- (void)pbfSizingCompletionCallback:(unsigned long long)arg1;
- (void)buttonPressed:(id)arg1;
- (void)flush;
- (void)dealloc;
- (void)initCommon;

@end

