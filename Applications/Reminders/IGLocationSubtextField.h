//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTextView.h"

@class RemindMeLocationDelegate;

@interface IGLocationSubtextField : IGTextView
{
    RemindMeLocationDelegate *_delegate;
}

@property(retain) RemindMeLocationDelegate *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)inspectorDidClose;
- (BOOL)respectWidth;
- (void)setTitle:(id)arg1;
- (void)updateFromReminder;
- (BOOL)isVisible;
- (void)sizeToFit;
- (id)initWithLocationDelegate:(id)arg1;

@end

