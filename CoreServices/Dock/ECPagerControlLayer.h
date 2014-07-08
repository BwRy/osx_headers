//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "ECEventHandlingDelegate.h"

@class ECPager, NSArray, NSMutableArray, NSString;

@interface ECPagerControlLayer : CALayer <ECEventHandlingDelegate>
{
    ECPager *_pager;
    NSMutableArray *_indicatorLayers;
}

@property(readonly, nonatomic) NSArray *indicatorLayers; // @synthesize indicatorLayers=_indicatorLayers;
- (void).cxx_destruct;
- (BOOL)leftMouseUp:(id)arg1 inLayer:(id)arg2;
- (BOOL)leftMouseDragged:(id)arg1 inLayer:(id)arg2;
- (BOOL)leftMouseDown:(id)arg1 inLayer:(id)arg2;
- (void)layout;
- (id)initWithPager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
