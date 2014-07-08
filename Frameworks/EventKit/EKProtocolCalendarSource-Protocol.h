//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EKProtocolObject.h"

@class NSSet, NSString, NSURL;

@protocol EKProtocolCalendarSource <EKProtocolObject>
@property(readonly, nonatomic) NSURL *serverURL;
@property(readonly, nonatomic) NSString *dropBoxPathString;
@property(readonly, nonatomic) int displayOrder;
@property(readonly, nonatomic) BOOL isWritable;
@property(readonly, nonatomic) BOOL supportsSharingScheduling;
@property(readonly, nonatomic) BOOL supportsPrivateEvents;
@property(readonly, nonatomic) BOOL supportsFreebusy;
@property(readonly, nonatomic) BOOL supportsAttendeeComments;
@property(readonly, nonatomic) BOOL supportsUnbind;
@property(readonly, nonatomic) BOOL supportsManagedAttachments;
@property(readonly, nonatomic) BOOL supportsDropBoxAttachments;
@property(readonly, nonatomic) NSSet *ownerAddresses;
@property(readonly, retain, nonatomic) NSString *typeString;
@property(readonly, retain, nonatomic) NSString *providerIdentifier;
@property(readonly, retain, nonatomic) NSString *sourceIdentifier;
- (BOOL)supportsEmailValidation;
- (BOOL)supportsTaskCalendarCreation;
- (BOOL)supportsEventCalendarCreation;
- (BOOL)isDelegate;
- (NSString *)title;
- (BOOL)isEnabledForReminders;
- (BOOL)isEnabledForEvents;
@end
