//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImageView, NSLock, NSMutableArray, NSTextField, SPInfoDisk;

@interface SPInfoDiskCell : NSView
{
    NSImageView *_iconView;
    NSTextField *_titleField;
    SPInfoDisk *_disk;
    NSMutableArray *_partitionViews;
    NSMutableArray *_addedConstraints;
    NSLock *_scanLock;
}

+ (id)createViewForDisk:(id)arg1;
+ (id)loadFromNib;
- (void)layoutSubviews;
@property(retain, nonatomic) SPInfoDisk *disk;
- (void)dealloc;
- (void)awakeFromNib;

@end
