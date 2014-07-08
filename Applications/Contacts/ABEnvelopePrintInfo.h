//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABPrintInfo.h"

@class NSString;

@interface ABEnvelopePrintInfo : ABPrintInfo
{
    NSString *_abLayoutName;
    double _abEnvelopeWidth;
    double _abEnvelopeHeight;
    double _abSenderTop;
    double _abSenderLeft;
    double _abSenderBottom;
    double _abSenderRight;
    double _abRecipientTop;
    double _abRecipientLeft;
    double _abRecipientBottom;
    double _abRecipientRight;
    BOOL _abPrintReturnAddress;
    NSString *_abReturnAddressLabel;
    NSString *_menuGrouping;
}

+ (id)printInfoWithDictionary:(id)arg1;
- (void)setMenuGrouping:(id)arg1;
- (id)menuGrouping;
- (void)abSetRecipientRight:(double)arg1;
- (double)abRecipientRight;
- (void)abSetRecipientBottom:(double)arg1;
- (double)abRecipientBottom;
- (void)abSetRecipientLeft:(double)arg1;
- (double)abRecipientLeft;
- (void)abSetRecipientTop:(double)arg1;
- (double)abRecipientTop;
- (struct CGRect)abRecipientRect;
- (struct CGSize)abRecipientSize;
- (void)abSetSenderRight:(double)arg1;
- (double)abSenderRight;
- (void)abSetSenderBottom:(double)arg1;
- (double)abSenderBottom;
- (void)abSetSenderLeft:(double)arg1;
- (double)abSenderLeft;
- (void)abSetSenderTop:(double)arg1;
- (double)abSenderTop;
- (struct CGRect)abSenderRect;
- (struct CGSize)abSenderSize;
- (void)abSetEnvelopeHeight:(double)arg1;
- (double)abEnvelopeHeight;
- (void)abSetEnvelopeWidth:(double)arg1;
- (double)abEnvelopeWidth;
- (struct CGSize)abEnvelopeSize;
- (struct CGSize)abLabelSize;
- (long long)abLabelCount;
- (void)abSetReturnAddressLabel:(id)arg1;
- (id)abReturnAddressLabel;
- (void)abSetPrintReturnAddress:(BOOL)arg1;
- (BOOL)abPrintReturnAddress;
- (void)abSetLayoutName:(id)arg1;
- (id)abLayoutName;
- (id)abDictionaryRep;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end
