//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class FilterPDFDoc, QuartzFilter;

@interface FilterPDFPrintView : NSView
{
    FilterPDFDoc *mPDFDoc;
    QuartzFilter *mFilter;
    long long currentPage;
}

- (void)drawRect:(struct CGRect)arg1;
- (struct CGPoint)locationOfPrintRect:(struct CGRect)arg1;
- (struct CGRect)rectForPage:(long long)arg1;
- (BOOL)knowsPageRange:(struct _NSRange *)arg1;
- (id)printJobTitle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 document:(id)arg2 qfilter:(id)arg3;

@end

