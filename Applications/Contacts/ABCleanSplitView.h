//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSplitView.h"

@interface ABCleanSplitView : NSSplitView
{
    BOOL _ab_inMouseDown;
}

@property BOOL ab_inMouseDown; // @synthesize ab_inMouseDown=_ab_inMouseDown;
- (id)ab_delegate;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)restoreStateWithCoder:(id)arg1;
- (id)dividerColor;

@end
