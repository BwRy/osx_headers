//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseItemIdType.h>

@class NSString;

@interface EWSRecurringMasterItemIdType : EWSBaseItemIdType
{
    NSString *_OccurrenceId;
    NSString *_ChangeKey;
}

+ (id)definition;
@property(copy, nonatomic) NSString *ChangeKey; // @synthesize ChangeKey=_ChangeKey;
@property(copy, nonatomic) NSString *OccurrenceId; // @synthesize OccurrenceId=_OccurrenceId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;

@end
