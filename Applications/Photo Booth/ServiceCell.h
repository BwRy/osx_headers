//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCell.h"

@class NSButtonCell, NSProgressIndicator, NSTextFieldCell, TopAlignButton;

@interface ServiceCell : NSCell
{
    NSProgressIndicator *_progressIndicator;
    TopAlignButton *_checkboxCell;
    long long _uploadStatus;
    NSTextFieldCell *_textCell;
}

@property long long uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(retain) NSButtonCell *checkboxCell; // @synthesize checkboxCell=_checkboxCell;
- (void).cxx_destruct;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (long long)state;
- (void)setState:(long long)arg1;
- (id)textCell;
- (id)initWithSharingService:(id)arg1;

@end
