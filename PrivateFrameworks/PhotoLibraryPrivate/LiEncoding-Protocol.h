//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LiTransportDataConsumer, LiTransportDataProvider;

@protocol LiEncoding <NSObject>
- (void)encodeToConsumer:(LiTransportDataConsumer *)arg1 forLibrary:(id <LiLibrary>)arg2;
- (id)initWithDataProvider:(LiTransportDataProvider *)arg1 forLibrary:(id <LiLibrary>)arg2;
- (int)LiClassCode;
@end

