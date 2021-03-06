//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableAttributedString;

__attribute__((visibility("hidden")))
@interface SCROffsetMappedString : NSObject <NSCopying, NSCoding>
{
    NSMutableAttributedString *_mutableAttributedString;
    struct __CFArray *_offsetMapArray;
}

- (id)description;
- (id)_mutableAttributedString;
- (struct __CFArray *)_offsetMapArray;
- (void)setOriginalAttributedString:(id)arg1;
- (void)setOriginalString:(id)arg1;
- (void)_replaceRange:(struct _NSRange)arg1 withLength:(long long)arg2;
- (id)_initWithSCROffsetMappedString:(id)arg1;
- (long long)originalOffsetForCharacterIndex:(long long)arg1;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)substringWithRange:(struct _NSRange)arg1;
- (int)character32AtIndex:(unsigned long long)arg1 returningNumberOfComposedChars:(unsigned long long *)arg2;
- (id)composedCharacterAtIndex:(unsigned int)arg1;
- (unsigned long long)length;
- (id)attributedString;
- (id)string;
- (void)appendOffsetMappedString:(id)arg1;
- (void)appendAttributedString:(id)arg1;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)appendString:(id)arg1;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)replaceRegex:(struct URegularExpression *)arg1 withString:(id)arg2;

@end

