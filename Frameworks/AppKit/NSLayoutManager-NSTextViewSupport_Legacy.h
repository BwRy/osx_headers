//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLayoutManager.h"

@interface NSLayoutManager (NSTextViewSupport_Legacy)
- (void)spellCheckerDidChangeDashSubstitution:(id)arg1;
- (void)spellCheckerDidChangeQuoteSubstitution:(id)arg1;
- (void)spellCheckerDidChangeReplacement:(id)arg1;
- (void)spellCheckerDidChangeCorrection:(id)arg1;
- (void)spellCheckerDidChangeLanguage:(id)arg1;
- (void)spellCheckerDidUnlearnWord:(id)arg1;
- (void)spellCheckerDidLearnWord:(id)arg1;
- (void)showPackedGlyphs:(char *)arg1 length:(unsigned long long)arg2 glyphRange:(struct _NSRange)arg3 atPoint:(struct CGPoint)arg4 font:(id)arg5 color:(id)arg6 printingAdjustment:(struct CGSize)arg7;
- (BOOL)layoutManagerOwnsFirstResponderInWindow:(id)arg1;
@end

