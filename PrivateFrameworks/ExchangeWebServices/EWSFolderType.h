//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseFolderType.h>

@class EWSPermissionSetType;

@interface EWSFolderType : EWSBaseFolderType
{
    EWSPermissionSetType *_PermissionSet;
    long long _UnreadCount;
    BOOL _UnreadCountSpecified;
}

+ (id)definition;
@property(nonatomic) BOOL UnreadCountSpecified; // @synthesize UnreadCountSpecified=_UnreadCountSpecified;
@property(nonatomic) long long UnreadCount; // @synthesize UnreadCount=_UnreadCount;
@property(retain, nonatomic) EWSPermissionSetType *PermissionSet; // @synthesize PermissionSet=_PermissionSet;
- (id)description;
- (void)dealloc;

@end
