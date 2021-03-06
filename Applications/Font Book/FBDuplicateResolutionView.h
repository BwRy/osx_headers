//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class FBDuplicateResolutionMatrix, NSScrollView;

@interface FBDuplicateResolutionView : NSView
{
    id delegate;
    NSScrollView *scrollView;
    NSView *rootView;
    FBDuplicateResolutionMatrix *matrix;
}

@property(readonly) NSView *rootView; // @synthesize rootView;
@property(readonly) NSScrollView *scrollView; // @synthesize scrollView;
@property(readonly) FBDuplicateResolutionMatrix *matrix; // @synthesize matrix;
@property id delegate; // @synthesize delegate;
- (void)setFaces:(id)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setFaces:(id)arg1;

@end

