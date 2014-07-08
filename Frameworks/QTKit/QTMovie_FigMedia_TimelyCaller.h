//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface QTMovie_FigMedia_TimelyCaller : NSObject
{
    struct dispatch_queue_s *_timerQueue;
    struct OpaqueFigPlaybackItem *_playbackItem;
    struct dispatch_source_s *_timerSource;
    BOOL _isInvalidated;
    struct OpaqueCMTimebase *_timebase;
    double _lastRate;
    double _currentRate;
}

- (void)_timebaseDidChange;
- (struct OpaqueFigPlaybackItem *)playbackItem;
- (void)_effectiveRateChanged;
- (void)_handleTimeDiscontinuity;
- (void)_resetNextFireTime;
- (void)invalidate;
- (void)_startObservingTimebaseNotificationsForCurrentItem;
- (void)_stopObservingTimebaseNotifications;
- (void)_removeCurrentTimebaseFromTimerSource;
- (void)finalize;
- (void)dealloc;
- (id)initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 queue:(struct dispatch_queue_s *)arg2;

@end
