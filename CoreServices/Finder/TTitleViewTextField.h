//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class TListTableColumn;

@interface TTitleViewTextField : NSTextField
{
    long long _columnNumber;
    TListTableColumn *_tableColumn;
}

@property(nonatomic) TListTableColumn *tableColumn; // @synthesize tableColumn=_tableColumn;
@property(nonatomic) long long columnNumber; // @synthesize columnNumber=_columnNumber;

@end

