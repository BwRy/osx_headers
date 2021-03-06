//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCDOwnedObject.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface ABCDSocialProfile : ABCDOwnedObject
{
}

+ (id)keyPathsForValuesAffectingDisplayValue;
+ (BOOL)isStandardServiceName:(id)arg1;
+ (id)privateKeysForPublicKeys;
+ (id)keyPathsForValuesAffectingCustomValues;
+ (id)keyPathsForValuesAffectingUrl;
+ (id)parseSocialProfileURL:(id)arg1;
+ (id)builtInSocialProfileServices;
@property(copy) NSString *displayValue;
- (BOOL)abHasAddressBookRelatedContent;
- (id)dictionaryRepresentation;
- (void)applyDictionaryRepresentation:(id)arg1;
@property(copy) NSDictionary *customValues;
- (void)clearURL;
- (BOOL)_synthesizeURLFromUserIdentifier;
- (BOOL)_synthesizeURLFromUserName;
- (void)_synthesizeURL;
@property(copy) NSURL *url;
- (void)willSave;
- (void)_normalizeValues;
- (void)_makeSureItsLabeled;
- (void)_sanitizeServiceName;
- (void)_sanitizeUsername;

// Remaining properties
@property(copy) NSData *customValuesData; // @dynamic customValuesData;
@property(copy) NSString *displayname; // @dynamic displayname;
@property(copy) NSString *serviceName; // @dynamic serviceName;
@property(copy) NSString *urlString; // @dynamic urlString;
@property(copy) NSString *userIdentifier; // @dynamic userIdentifier;
@property(copy) NSString *username; // @dynamic username;

@end

