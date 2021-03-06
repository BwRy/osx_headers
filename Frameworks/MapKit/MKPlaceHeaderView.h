//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "MKPlaceHeaderBackgroundViewDelegate.h"
#import "MKPlaceHeaderViewCinematics.h"
#import "MKStackingViewControllerSizableView.h"

@class MKDistanceDetailProvider, MKImageView, MKMapItem, MKPlaceHeaderBackgroundView, MKStarRatingView, NSArray, NSLayoutConstraint, NSString;

@interface MKPlaceHeaderView : NSView <MKStackingViewControllerSizableView, MKPlaceHeaderViewCinematics, MKPlaceHeaderBackgroundViewDelegate>
{
    MKPlaceHeaderBackgroundView *_background;
    NSView *_screen;
    MKImageView *_vignette;
    double _lastUnitSquareScale;
    MKDistanceDetailProvider *_distanceMonitor;
    BOOL _showBusinessDetails;
    MKStarRatingView *_ratingView;
    struct MKUILabel *_titleLabel;
    struct MKUILabel *_distanceToPlaceLabel;
    struct {
        unsigned int isPresenting;
    } _headerViewFlags;
    BOOL _needsToUpdateTitleLabel;
    MKMapItem *_mapItem;
    long long _backgroundTypeOverride;
    id <MKPlaceHeaderViewDelegate> _delegate;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
    NSArray *_labelWidthConstraints;
}

@property(retain, nonatomic) NSArray *labelWidthConstraints; // @synthesize labelWidthConstraints=_labelWidthConstraints;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelBaselineConstraint; // @synthesize titleLabelBaselineConstraint=_titleLabelBaselineConstraint;
@property(nonatomic) BOOL needsToUpdateTitleLabel; // @synthesize needsToUpdateTitleLabel=_needsToUpdateTitleLabel;
@property(nonatomic) __weak id <MKPlaceHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long backgroundTypeOverride; // @synthesize backgroundTypeOverride=_backgroundTypeOverride;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)reset;
- (void)present;
- (void)fadeOutScreen;
- (void)prepareForPresentation;
- (void)resetVignette;
- (id)viewsForPresentation;
- (void)layout;
- (void)refreshContent;
- (void)headerViewBackground:(id)arg1 willShowBackground:(id)arg2;
- (void)headerViewBackgroundDidFinishLoading:(id)arg1;
- (void)presentBackgroundIfNeeded;
- (void)resetAnimations;
- (void)restartAnimations;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)addConstraints;
- (void)addContent;
- (void)_configureLabelForHeader:(id)arg1;
- (struct MKUILabel *)newInfoLabel;
- (struct CATransform3D)perspectiveTransform;
@property(nonatomic) double rating;
@property(copy, nonatomic) NSString *subTitle;
@property(copy, nonatomic) NSString *title;
- (void)updateTitleLabel;
- (void)mouseUp:(id)arg1;
- (BOOL)isFlipped;
- (void)dealloc;
- (void)resumeAnimations;
- (void)pauseAnimations;
- (void)setupPauseAnimationWhenAppResigns;
- (void)setBackgroundViewTransform:(struct CATransform3D)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

