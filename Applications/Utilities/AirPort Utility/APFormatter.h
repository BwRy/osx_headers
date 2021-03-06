//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFormatter.h"

@class NSCharacterSet;

@interface APFormatter : NSFormatter
{
    NSCharacterSet *_characterSet;
    NSCharacterSet *_invertedCharacterSet;
    unsigned long long _maxLength;
}

+ (id)ipv6AddressSet;
+ (id)ipv4AddressWithPrefixSet;
+ (id)ipv4AddressSet;
+ (id)hexFormatter:(unsigned long long)arg1;
+ (id)asciiFormatter:(unsigned long long)arg1;
+ (id)phoneNumberFormatter:(unsigned long long)arg1;
+ (id)sharedPhoneNumberFormatter;
+ (id)portRangeFormatter:(unsigned long long)arg1;
+ (id)nonZeroNumberOnly:(unsigned long long)arg1;
+ (id)numberOnlyFormatter:(unsigned long long)arg1;
+ (id)maxLengthFormatter:(unsigned long long)arg1;
+ (id)multipleIPFormatter:(unsigned long long)arg1;
+ (id)sharedMultipleIPFormatter;
+ (id)ipOctetFormatter:(unsigned long long)arg1;
+ (id)ipFormatter:(unsigned long long)arg1;
+ (id)sharedIPv4PrefixFormatter;
+ (id)sharedIPv6Formatter;
+ (id)sharedIPFormatter;
+ (id)romanFormatter:(unsigned long long)arg1;
+ (id)formatterForBSFormatter:(int)arg1 withMaxLen:(long long)arg2;
+ (id)formatterForSettingsFormatter:(id)arg1;
+ (id)portRangeSet;
+ (id)pogoPasswordSet;
+ (id)hexSet;
+ (id)asciiSet;
+ (id)phoneNumberSet;
+ (id)multipleIpAddressesSet;
+ (id)romanSet;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
- (BOOL)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (id)invertedCharacterSet;
- (void)setInvertedCharacterSet:(id)arg1;
- (id)characterSet;
- (void)setCharacterSet:(id)arg1;
- (void)dealloc;
- (BOOL)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)initWithMaxLength:(unsigned long long)arg1;
- (id)initWithCharacterSet:(id)arg1 withMaxLength:(unsigned long long)arg2;
- (id)initWithStringOfValidCharacters:(id)arg1 withMaxLength:(unsigned long long)arg2;

@end

