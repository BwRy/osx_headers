//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSBundle, NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _NSStoryboardPrivateData : NSObject
{
    NSBundle *bundle;
    NSString *storyboardFileName;
    NSDictionary *identifierToNibNameMap;
    NSString *designatedEntryPointIdentifier;
    NSMutableDictionary *identifierToUINibMap;
    NSString *mainMenu;
    NSArray *topLevelObjects;
    NSBundle *ownerBundle;
}

- (void)dealloc;

@end

