//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSView, VisualTabPickerTileContainerView;

@protocol VisualTabPickerTileContainerDataSource <NSObject>
- (struct CGRect)visualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1 originalFrameForTileAtIndex:(unsigned long long)arg2;
- (NSView *)visualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1 viewForTileAtIndex:(unsigned long long)arg2;
- (NSString *)visualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1 titleForTileAtIndex:(unsigned long long)arg2;
- (NSString *)titleForVisualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1;
- (unsigned long long)numberOfTilesInVisualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1;
@end

