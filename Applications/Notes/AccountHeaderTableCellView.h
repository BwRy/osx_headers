//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSButton, NSTrackingArea;

@interface AccountHeaderTableCellView : NSTableCellView
{
    NSButton *_plusButton;
    NSTrackingArea *_trackingArea;
}

@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) __weak NSButton *plusButton; // @synthesize plusButton=_plusButton;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_accountHeaderTableCellViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
