//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface RDLibrarySearchResultCategoryData : NSObject
{
    int _type;
    NSString *_fullString;
    NSArray *_tokens;
}

@property(retain) NSArray *tokens; // @synthesize tokens=_tokens;
@property int type; // @synthesize type=_type;
@property(retain) NSString *fullString; // @synthesize fullString=_fullString;
- (void).cxx_destruct;
- (id)description;
- (id)tokenOffsets;
- (id)escapedFullString;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
