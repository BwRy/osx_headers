//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EWSItemIdType;

@interface EWSSyncFolderItemsReadFlagType : NSObject
{
    EWSItemIdType *_ItemId;
    BOOL _IsRead;
}

+ (id)definition;
@property(nonatomic) BOOL IsRead; // @synthesize IsRead=_IsRead;
@property(retain, nonatomic) EWSItemIdType *ItemId; // @synthesize ItemId=_ItemId;
- (void)dealloc;
- (id)description;

@end

