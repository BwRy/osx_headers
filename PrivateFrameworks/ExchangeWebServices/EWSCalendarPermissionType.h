//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBasePermissionType.h>

@interface EWSCalendarPermissionType : EWSBasePermissionType
{
    int _ReadItems;
    int _CalendarPermissionLevel;
}

+ (id)definition;
@property(nonatomic) int CalendarPermissionLevel; // @synthesize CalendarPermissionLevel=_CalendarPermissionLevel;
@property(nonatomic) int ReadItems; // @synthesize ReadItems=_ReadItems;
- (id)description;

@end
