//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSBundle, NSImageView, NSTextField, SPInfoOpticalDisk;

@interface SPInfoOpticalDiskCell : NSView
{
    NSBundle *_bundle;
    NSImageView *_iconView;
    NSTextField *_titleField;
    NSTextField *_formatsField;
    NSTextField *_modelLabel;
    NSTextField *_modelField;
    SPInfoOpticalDisk *_disk;
}

+ (id)createViewForDisk:(id)arg1;
+ (id)loadFromNib;
- (void)layoutSubviews;
@property(retain, nonatomic) SPInfoOpticalDisk *disk;
- (void)dealloc;
- (id)localizedString:(id)arg1;

@end

