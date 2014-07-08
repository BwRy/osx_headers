//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVSerializableObject.h"

@class GEODirectionsRequest, GEODirectionsResponse, MSPBookmarkStorage, MSPSearchRequestStorage, NSArray, NSString, NVPlace;

__attribute__((visibility("hidden")))
@interface NVTrip : NVSerializableObject
{
    NSArray *_places;
    unsigned long long _directionMode;
    GEODirectionsRequest *_geoRequest;
    GEODirectionsResponse *_geoResponse;
}

+ (id)keyPathsForValuesAffectingDestinationTitle;
+ (id)keyPathsForValuesAffectingOriginTitle;
+ (id)serializedKeys;
+ (id)_bookmarksTripWithPlaces:(id)arg1 routeRequestStorage:(id)arg2 mode:(unsigned long long)arg3;
+ (id)bookmarksTripWithRecentsOrBookmarksTrip:(id)arg1;
+ (id)bookmarksTripWithPlaces:(id)arg1 mode:(unsigned long long)arg2;
+ (id)_recentsTripWithPlaces:(id)arg1 routeRequestStorage:(id)arg2 mode:(unsigned long long)arg3;
+ (id)recentsTripWithRecentsOrBookmarksTrip:(id)arg1;
+ (id)recentsTripWithPlaces:(id)arg1 mode:(unsigned long long)arg2;
+ (id)keyPathsForValuesAffectingDestinationPlace;
+ (id)keyPathsForValuesAffectingOriginPlace;
+ (id)keyPathsForValuesAffectingSyncData;
+ (id)privatePasteboardType;
@property(retain, nonatomic) GEODirectionsResponse *geoResponse; // @synthesize geoResponse=_geoResponse;
@property(retain, nonatomic) GEODirectionsRequest *geoRequest; // @synthesize geoRequest=_geoRequest;
@property unsigned long long directionMode; // @synthesize directionMode=_directionMode;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSString *title;
- (id)description;
@property(readonly) NSString *destinationTitle;
@property(readonly) NSString *originTitle;
- (id)titleForPlace:(id)arg1;
@property(readonly) NVPlace *destinationPlace;
@property(readonly) NVPlace *originPlace;
- (unsigned long long)serializationObjectType;
- (void)updateWithRouteRequestStorage:(id)arg1;
- (void)_setPlaces:(id)arg1 sourcedFromRouteRequestStorage:(BOOL)arg2;
@property(copy) NSArray *places; // @synthesize places=_places;
- (id)copy;
- (id)initWithBookmarkStorage:(id)arg1;
- (id)initWithSearchRequestStorage:(id)arg1;
- (id)init;
- (id)_initWithPlaces:(id)arg1 directionMode:(unsigned long long)arg2;
- (id)bookmarkRepresentation;
- (BOOL)updateFromBookmarkRepresentation:(id)arg1 needsResync:(char *)arg2;
- (BOOL)updateFromMSPHistoryStorage:(id)arg1;
- (BOOL)updateFromMSPBookmarkStorage:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (id)mapsURL;
- (id)addressPartOfMapsURLForPlace:(id)arg1;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)listIcon;
- (id)_altSearchString;
- (id)_mainSearchString;

// Remaining properties
@property(copy, nonatomic) MSPBookmarkStorage *bookmarkStorage;
@property(copy, nonatomic) MSPSearchRequestStorage *historyStorage;

@end
