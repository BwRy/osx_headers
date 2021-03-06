//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableData.h"

@class MGDataPool;

@interface MGPooledData : NSMutableData
{
    MGDataPool *_dataPool;
    unsigned long long _dataPoolIndex;
    NSMutableData *_copiedBacking;
}

- (void)setLength:(unsigned long long)arg1;
- (void *)mutableBytes;
- (const void *)bytes;
- (unsigned long long)length;
- (void)dealloc;
- (id)initWithIndex:(unsigned long long)arg1 inDataPool:(id)arg2;
- (id)init;

@end

