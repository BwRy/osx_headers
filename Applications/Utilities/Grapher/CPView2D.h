//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPView.h"

@interface CPView2D : CPView
{
    BOOL inLiveResize;
    id <CPView2DSource> mSource;
}

- (void)setSource:(id)arg1;
- (id)source;
- (BOOL)isFlipped;
- (void)drawInteriorWithRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)viewWillStartLiveResize;
- (void)viewDidEndLiveResize;

@end

