//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IIDatePickerWithMiniCal;

@protocol IIDatePickerWithMiniCalDelegate <NSObject>
- (double)additionalVerticalOffsetForPickerPopover;
- (void)datePickerDidResignFirstResponder:(IIDatePickerWithMiniCal *)arg1;
- (void)datePickerWithMiniCalChanged:(IIDatePickerWithMiniCal *)arg1;
- (BOOL)datePickerShouldDisplayTimeSuggestions:(IIDatePickerWithMiniCal *)arg1;
- (BOOL)datePickerShouldDisplayMiniCal:(IIDatePickerWithMiniCal *)arg1;
@end
