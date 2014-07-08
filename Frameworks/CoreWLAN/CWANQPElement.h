//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSDictionary, NSString;

@interface CWANQPElement : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *_timestamp;
    NSString *_bssid;
    NSString *_hessid;
    unsigned long long _type;
    NSDictionary *_anqpResult;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *anqpResult; // @synthesize anqpResult=_anqpResult;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *hessid; // @synthesize hessid=_hessid;
@property(copy, nonatomic) NSString *bssid; // @synthesize bssid=_bssid;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualtoANQPElement:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)description;
- (id)typeString;
- (void)dealloc;
- (id)initWithBSSID:(id)arg1 hessid:(id)arg2 timestamp:(id)arg3 type:(unsigned long long)arg4 anqpResult:(id)arg5;

@end
