//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSArray, NSByteCountFormatter, NSColor, NSString, NSTextField;

@interface MMInfoCapacityBarCategory : NSObject
{
    BOOL _showsSizeInLabel;
    unsigned long long _sizeInBytes;
    unsigned long long _categoryIndex;
    NSString *_displayName;
    NSArray *_alternateDisplayNames;
    NSString *_toolTipLabel;
    NSString *_sizeDescription;
    CALayer *_layer;
    NSTextField *_label;
    NSColor *_color;
    NSByteCountFormatter *_byteCountFormatter;
}

@property(retain) NSByteCountFormatter *byteCountFormatter; // @synthesize byteCountFormatter=_byteCountFormatter;
@property(readonly) NSColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) NSTextField *label; // @synthesize label=_label;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(nonatomic) BOOL showsSizeInLabel; // @synthesize showsSizeInLabel=_showsSizeInLabel;
@property(retain) NSString *sizeDescription; // @synthesize sizeDescription=_sizeDescription;
@property(retain) NSString *toolTipLabel; // @synthesize toolTipLabel=_toolTipLabel;
@property(copy) NSArray *alternateDisplayNames; // @synthesize alternateDisplayNames=_alternateDisplayNames;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) unsigned long long categoryIndex; // @synthesize categoryIndex=_categoryIndex;
@property unsigned long long sizeInBytes; // @synthesize sizeInBytes=_sizeInBytes;
@property(nonatomic) unsigned long long textAlignment;
- (id)allDisplayNames;
- (void)dealloc;
- (id)initWithCategoryIndex:(unsigned long long)arg1;

@end
