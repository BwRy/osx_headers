//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSLayoutConstraint, NSTextField;

@interface PVBookmarkCellView : NSTableCellView
{
    NSTextField *_page;
    NSTextField *_content;
    NSLayoutConstraint *_contentHeightConstraint;
}

+ (id)attributedPageNumberStringForStringValue:(id)arg1;
+ (id)attributedContentStringForStringValue:(id)arg1;
+ (double)withContentOnlyBaseHeight;
@property(retain) NSLayoutConstraint *contentHeightConstraint; // @synthesize contentHeightConstraint=_contentHeightConstraint;
@property(retain) NSTextField *content; // @synthesize content=_content;
@property(retain) NSTextField *page; // @synthesize page=_page;
- (void)setContentHeightConstraintConstant:(double)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

@end
