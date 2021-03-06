//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EKProtocolObject.h"

@class NSNumber, NSString;

@protocol EKProtocolStructuredLocation <EKProtocolObject>
@property(readonly, retain) NSString *uuid;
@property(readonly, copy, nonatomic) NSNumber *radiusNumber;
- (NSString *)routeType;
- (NSString *)geoURLString;
- (NSString *)abURLString;
- (NSString *)title;
- (NSString *)address;
@end

