//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldCell.h"

@class NSAttributedString, NSTextView;

__attribute__((visibility("hidden")))
@interface ABShadowTextFieldCell : NSTextFieldCell
{
    NSTextView *_fieldEditor;
    NSAttributedString *_originalPlaceholder;
    NSAttributedString *_alternatePlaceholder;
    BOOL _displaysAlternatePlaceholder;
    BOOL _ignoredByAccessibility;
}

@property(getter=accessibilityIsIgnored) BOOL ignoredByAccessibility; // @synthesize ignoredByAccessibility=_ignoredByAccessibility;
@property(nonatomic) BOOL displaysAlternatePlaceholder; // @synthesize displaysAlternatePlaceholder=_displaysAlternatePlaceholder;
@property(copy) NSAttributedString *alternatePlaceholder; // @synthesize alternatePlaceholder=_alternatePlaceholder;
@property(copy) NSAttributedString *originalPlaceholder; // @synthesize originalPlaceholder=_originalPlaceholder;
- (id)fieldEditorForView:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

