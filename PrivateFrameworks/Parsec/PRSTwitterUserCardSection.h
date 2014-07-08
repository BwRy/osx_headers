//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Parsec/PRSTitleCardSection.h>

#import "NSCoding.h"
#import "NSSecureCoding.h"

@class NSImage;

@interface PRSTwitterUserCardSection : PRSTitleCardSection <NSCoding, NSSecureCoding>
{
    NSImage *_title_glyph;
    NSImage *_image;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSImage *title_glyph; // @synthesize title_glyph=_title_glyph;
- (void).cxx_destruct;
- (long long)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 dict:(id)arg2;
- (id)initWithTitle:(id)arg1 glyph:(id)arg2 subtitle:(id)arg3 image:(id)arg4;

@end
