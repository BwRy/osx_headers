//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@interface FigNeroLayer : CALayer
{
    struct dispatch_queue_s *_neroQueue;
    struct OpaqueFigNeroid *_neroid;
    id <FigNeroLayerDelegate> _neroDelegate;
}

- (void)setBounds:(struct CGRect)arg1;
- (void)stop;
- (void)_start;
- (void)start;
@property(nonatomic) id <FigNeroLayerDelegate> neroDelegate;
- (void)dealloc;
- (id)init;
- (void)_dispatchNotification:(id)arg1 value:(id)arg2;

@end

