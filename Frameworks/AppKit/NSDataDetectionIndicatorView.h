//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSString, NSTrackingArea;

@interface NSDataDetectionIndicatorView : NSView
{
    NSTrackingArea *_trackingArea;
    id _dataResult;
    NSString *_string;
    id _delegate;
}

- (void)copy:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_showMenu:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setString:(id)arg1;
- (void)setDataResult:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

