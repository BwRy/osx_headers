//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ISDDataDirectoryVersion : NSObject
{
    int _version;
}

- (id)arrayAsGlobalIds:(id)arg1;
- (id)asGlobalId:(id)arg1;
- (BOOL)usesISDGlobalId;
- (int)dataDirectoryType;
- (BOOL)isSnowLeopard;
- (BOOL)isLeopard;
- (BOOL)isTiger;
- (id)initWithDataVersion:(int)arg1;
- (id)initFromPath:(id)arg1;

@end
