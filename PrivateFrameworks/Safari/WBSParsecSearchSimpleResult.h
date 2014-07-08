//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/WBSParsecSearchResult.h>

@class NSArray, NSNumber, NSString, WBSParsecImageRepresentation;

__attribute__((visibility("hidden")))
@interface WBSParsecSearchSimpleResult : WBSParsecSearchResult
{
    WBSParsecImageRepresentation *_titleGlyph;
    NSArray *_moreIconRepresentations;
    BOOL _descriptionTextCanWrap;
    BOOL _hasSingleLineDescriptionAndTitle;
    NSNumber *_titleMaximumNumberOfLines;
    NSNumber *_descriptionMaximumNumberOfLines;
    NSString *_footnote;
}

@property(readonly, nonatomic) BOOL hasSingleLineDescriptionAndTitle; // @synthesize hasSingleLineDescriptionAndTitle=_hasSingleLineDescriptionAndTitle;
@property(readonly, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(readonly, nonatomic) BOOL descriptionTextCanWrap; // @synthesize descriptionTextCanWrap=_descriptionTextCanWrap;
@property(readonly, nonatomic) NSNumber *descriptionMaximumNumberOfLines; // @synthesize descriptionMaximumNumberOfLines=_descriptionMaximumNumberOfLines;
@property(readonly, nonatomic) NSNumber *titleMaximumNumberOfLines; // @synthesize titleMaximumNumberOfLines=_titleMaximumNumberOfLines;
- (void).cxx_destruct;
- (id)moreIconsWithSession:(id)arg1;
@property(readonly, nonatomic) BOOL hasMoreIcons;
- (id)titleGlyphWithSession:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
