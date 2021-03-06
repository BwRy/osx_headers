//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (BrowserAdditions)
+ (id)safari_localizedStringWithInt:(int)arg1;
+ (id)safari_stringWithASCIIBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)safari_stringWithData:(id)arg1 encoding:(unsigned long long)arg2;
+ (id)safari_stringByBase64EncodingData:(id)arg1;
+ (id)safari_identityPreferenceDomainForURLString:(id)arg1;
- (id)safari_stringByCapitalizingFirstWord;
- (id)safari_filenameByFixingIllegalCharacters;
- (struct _NSRange)safari_rangeOfURLScheme;
- (BOOL)safari_looksLikeAbsoluteURLString;
- (BOOL)isSearchProviderHomePageURLString;
- (BOOL)isFileURLString;
- (id)safari_stringByReplacingOccurrencesOfString:(id)arg1 withContentsOfArray:(id)arg2;
- (id)safari_base64DecodedData;
- (id)safari_stringByStrippingLineEndings;
- (id)safari_stringByReplacingTabsWithSpaces;
- (id)_safari_stringByReplacingLineEndingsWithString:(id)arg1;
- (id)safari_stringByDeletingTrailingSlash;
- (id)safari_stringByDeletingStartingSlash;
- (id)safari_stringByRightTruncatingForMenu;
- (id)safari_stringByCenterTruncatingForMenu;
- (id)safari_stringByRightTruncatingToWidth:(float)arg1 font:(id)arg2;
- (id)safari_stringByCenterTruncatingToWidth:(float)arg1 font:(id)arg2;
- (id)safari_stringByCenterTruncatingToWidth:(float)arg1;
- (float)safari_widthWithFont:(id)arg1;
- (void)safari_drawInContext:(struct CGContext *)arg1 atPoint:(struct CGPoint)arg2 withFont:(id)arg3 color:(id)arg4;
- (void)safari_drawInContext:(struct CGContext *)arg1 atPoint:(struct CGPoint)arg2 withFont:(id)arg3 color:(id)arg4 flipped:(BOOL)arg5;
- (void)safari_drawDoubledInRect:(struct CGRect)arg1 withTopColor:(id)arg2 bottomColor:(id)arg3 font:(id)arg4 centered:(BOOL)arg5 flipped:(BOOL)arg6 topColorInFront:(BOOL)arg7;
- (long long)safari_compareVersionString:(id)arg1;
- (long long)safari_compareDomain:(id)arg1;
@end

