//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTextView;

@interface SETextSelection : NSObject
{
    NSTextView *_textView;
    id _subtextStorage;
}

+ (id)selectionForTextView:(id)arg1;
- (id)objectSpecifier;
- (id)characterRange;
- (void)setContents:(id)arg1;
- (id)contents;
- (id)textView;
- (void)dealloc;
- (id)initForTextView:(id)arg1;

@end
