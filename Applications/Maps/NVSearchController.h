//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NVPlace, NVSideViewController;

__attribute__((visibility("hidden")))
@interface NVSearchController : NSObject
{
    NVSideViewController *sideViewController;
}

+ (id)keyPathsForValuesAffectingSelectedSearchPlace;
- (void).cxx_destruct;
@property(retain, nonatomic) NVPlace *selectedSearchPlace;
@property(copy) NSArray *searchPlaces;
- (id)sideViewController;

@end
