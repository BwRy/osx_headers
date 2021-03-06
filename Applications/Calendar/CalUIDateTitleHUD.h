//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "NSAnimationDelegate.h"

@class CalUIDateTitleHUDContainerLayer, CalUIFontSmoothedTextLayer, CalUILayerOpacityAnimation, NSString;

@interface CalUIDateTitleHUD : CALayer <NSAnimationDelegate>
{
    CALayer *_anchorLayer;
    double _dateBannerHeight;
    CalUIFontSmoothedTextLayer *_textLayer;
    CalUIDateTitleHUDContainerLayer *_containerLayer;
    CalUILayerOpacityAnimation *_animation;
}

+ (id)hudBackgroundImageWithTotalWidth:(double)arg1 grayWidth:(double)arg2;
+ (id)imageWithLeftRect:(struct CGRect)arg1 rightRect:(struct CGRect)arg2;
+ (id)newRadialAlphaGradientImageForColor:(id)arg1;
+ (id)newRadialAlphaGradientForColor:(id)arg1;
@property(retain) CalUILayerOpacityAnimation *animation; // @synthesize animation=_animation;
@property __weak CalUIDateTitleHUDContainerLayer *containerLayer; // @synthesize containerLayer=_containerLayer;
@property(retain) CalUIFontSmoothedTextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property double dateBannerHeight; // @synthesize dateBannerHeight=_dateBannerHeight;
@property __weak CALayer *anchorLayer; // @synthesize anchorLayer=_anchorLayer;
- (void).cxx_destruct;
- (void)enableAnimations:(BOOL)arg1;
- (void)prepareTitleAndBackground;
- (double)topInsetFromAnchor;
- (void)setShown:(BOOL)arg1;
- (BOOL)isShown;
- (void)setOrigin:(struct CGPoint)arg1;
- (void)windowDidChangeBackingProperties:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)_cancelOpacityAnimation;
- (id)initWithAnchorLayer:(id)arg1 containerLayer:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property id <CalUIDateTitleHUDDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

