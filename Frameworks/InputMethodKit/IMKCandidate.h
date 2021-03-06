//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMKCandidates, NSArray, NSDictionary;

@interface IMKCandidate : NSObject
{
    unsigned long long identifier;
    NSArray *candidateStrings;
    IMKCandidates *subCandidates;
    NSDictionary *ccwCandidateDict;
    BOOL isAttributedString;
}

+ (id)candidateWithAttributedString:(id)arg1;
+ (id)candidateWithString:(id)arg1;
+ (void)resetCandidateIdentifier;
+ (long long)generateCandidateIdentifier;
@property(retain) NSDictionary *ccwCandidateDict; // @synthesize ccwCandidateDict;
@property BOOL isAttributedString; // @synthesize isAttributedString;
@property(retain) IMKCandidates *subCandidates; // @synthesize subCandidates;
@property(retain) NSArray *candidateStrings; // @synthesize candidateStrings;
@property unsigned long long identifier; // @synthesize identifier;
- (id)styleEntry;
- (id)candidateFont;
- (struct CGSize)candidateSize;
- (id)dictionaryEntry;
@property(readonly) unsigned long long count; // @dynamic count;
- (id)candidateString;
- (id)attributedCandidateString;
- (id)candidateStringAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCandidateDictionary:(id)arg1;
- (id)initWithStrings:(id)arg1;

@end

