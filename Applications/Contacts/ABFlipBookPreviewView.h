//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class ABFlipBookPrintMode, ABPrintInfo, NSArray, NSMutableArray;

@interface ABFlipBookPreviewView : NSView
{
    ABFlipBookPrintMode *_controller;
    NSMutableArray *_singlePrintViews;
    NSArray *_records;
    ABPrintInfo *_pageDesc;
}

- (void)removeAllSinglePrintViews;
- (void)removeSinglePrintView:(id)arg1;
- (void)addSinglePrintView:(id)arg1;
- (void)setSinglePrintViews:(id)arg1;
- (struct CGSize)flipBookSize;
- (struct CGRect)previewFrame;
- (id)pageDescription;
- (void)setPageDescription:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutViews;
- (void)setController:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
