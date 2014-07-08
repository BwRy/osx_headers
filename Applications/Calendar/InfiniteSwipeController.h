//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSAnimationDelegate.h"
#import "NSScrollViewDelegate.h"

@class ISCMTSwipeData, ISCVisualizer, InfiniteSwipeControllerAnimation, InfiniteSwipeControllerContainer, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface InfiniteSwipeController : NSObject <NSScrollViewDelegate, NSAnimationDelegate>
{
    BOOL _dontLayout;
    BOOL _dontAlwaysSnap;
    BOOL _dontCalloutForScrollPointChangeOnInfiniteAxis;
    BOOL _scrollResetPending;
    BOOL _newSwipeBegan;
    BOOL _isSwiping;
    BOOL _isInLiveResize;
    BOOL _isTestingScrollPerformance;
    int _directionOfScrollingAlongInfiniteAxis;
    id <InfiniteSwipeControllerDelegate> _delegate;
    NSMutableDictionary *_containers;
    InfiniteSwipeControllerContainer *_primaryContainer;
    long long _axis;
    unsigned long long _numObjects;
    unsigned long long _firstPageIndex;
    unsigned long long _lastPageIndex;
    unsigned long long _firstVisiblePageIndex;
    unsigned long long _lastVisiblePageIndex;
    unsigned long long _firstLivePageIndex;
    unsigned long long _lastLivePageIndex;
    NSMutableArray *_pages;
    NSMutableSet *_unusedPages;
    NSMutableArray *_precomputedPages;
    NSMutableArray *_majorBoundaries;
    NSMutableDictionary *_pagesByObject;
    double _baseSize;
    unsigned long long _extraPixels;
    id <NSCopying> _preferredObjectForExtraPixelAllotment;
    long long _indexOffsetForExtraPixel;
    InfiniteSwipeControllerAnimation *_swipeAnimation;
    double _oldScrollPointOnInfiniteAxis;
    double _oldClipViewSizeOnInfiniteAxis;
    NSObject<OS_dispatch_queue> *_sideQueueForPopulatingViewControllerContent;
    double _targetOrigin;
    double _presentationOrigin;
    long long _swipeOrdinality;
    ISCMTSwipeData *_swipeData;
    NSMutableDictionary *_timeSetForRepresentedObject;
    double _averageTimeToDisplay;
    unsigned long long _count;
    unsigned long long _successfulDisplayCount;
    ISCVisualizer *_visualizer;
}

+ (void)initialize;
+ (void)setGestureDelegate:(id)arg1;
+ (void)setFlickThreshold:(double)arg1 forAxis:(long long)arg2;
+ (double)flickThresholdForAxis:(long long)arg1;
+ (void)initializeFlickThresholds;
+ (void)setFrozen:(BOOL)arg1;
+ (void)setRemoveUnusedPages:(BOOL)arg1;
@property(retain) ISCVisualizer *visualizer; // @synthesize visualizer=_visualizer;
@property unsigned long long successfulDisplayCount; // @synthesize successfulDisplayCount=_successfulDisplayCount;
@property unsigned long long count; // @synthesize count=_count;
@property double averageTimeToDisplay; // @synthesize averageTimeToDisplay=_averageTimeToDisplay;
@property(retain) NSMutableDictionary *timeSetForRepresentedObject; // @synthesize timeSetForRepresentedObject=_timeSetForRepresentedObject;
@property BOOL isTestingScrollPerformance; // @synthesize isTestingScrollPerformance=_isTestingScrollPerformance;
@property BOOL isInLiveResize; // @synthesize isInLiveResize=_isInLiveResize;
@property(retain) ISCMTSwipeData *swipeData; // @synthesize swipeData=_swipeData;
@property int directionOfScrollingAlongInfiniteAxis; // @synthesize directionOfScrollingAlongInfiniteAxis=_directionOfScrollingAlongInfiniteAxis;
@property long long swipeOrdinality; // @synthesize swipeOrdinality=_swipeOrdinality;
@property BOOL isSwiping; // @synthesize isSwiping=_isSwiping;
@property double presentationOrigin; // @synthesize presentationOrigin=_presentationOrigin;
@property double targetOrigin; // @synthesize targetOrigin=_targetOrigin;
@property(retain) NSObject<OS_dispatch_queue> *sideQueueForPopulatingViewControllerContent; // @synthesize sideQueueForPopulatingViewControllerContent=_sideQueueForPopulatingViewControllerContent;
@property BOOL newSwipeBegan; // @synthesize newSwipeBegan=_newSwipeBegan;
@property double oldClipViewSizeOnInfiniteAxis; // @synthesize oldClipViewSizeOnInfiniteAxis=_oldClipViewSizeOnInfiniteAxis;
@property double oldScrollPointOnInfiniteAxis; // @synthesize oldScrollPointOnInfiniteAxis=_oldScrollPointOnInfiniteAxis;
@property(retain) InfiniteSwipeControllerAnimation *swipeAnimation; // @synthesize swipeAnimation=_swipeAnimation;
@property BOOL scrollResetPending; // @synthesize scrollResetPending=_scrollResetPending;
@property BOOL dontCalloutForScrollPointChangeOnInfiniteAxis; // @synthesize dontCalloutForScrollPointChangeOnInfiniteAxis=_dontCalloutForScrollPointChangeOnInfiniteAxis;
@property long long indexOffsetForExtraPixel; // @synthesize indexOffsetForExtraPixel=_indexOffsetForExtraPixel;
@property(retain) id <NSCopying> preferredObjectForExtraPixelAllotment; // @synthesize preferredObjectForExtraPixelAllotment=_preferredObjectForExtraPixelAllotment;
@property unsigned long long extraPixels; // @synthesize extraPixels=_extraPixels;
@property double baseSize; // @synthesize baseSize=_baseSize;
@property(retain) NSMutableDictionary *pagesByObject; // @synthesize pagesByObject=_pagesByObject;
@property(retain) NSMutableArray *majorBoundaries; // @synthesize majorBoundaries=_majorBoundaries;
@property(retain) NSMutableArray *precomputedPages; // @synthesize precomputedPages=_precomputedPages;
@property(retain) NSMutableSet *unusedPages; // @synthesize unusedPages=_unusedPages;
@property(retain) NSMutableArray *pages; // @synthesize pages=_pages;
@property unsigned long long lastLivePageIndex; // @synthesize lastLivePageIndex=_lastLivePageIndex;
@property unsigned long long firstLivePageIndex; // @synthesize firstLivePageIndex=_firstLivePageIndex;
@property unsigned long long lastVisiblePageIndex; // @synthesize lastVisiblePageIndex=_lastVisiblePageIndex;
@property unsigned long long firstVisiblePageIndex; // @synthesize firstVisiblePageIndex=_firstVisiblePageIndex;
@property unsigned long long lastPageIndex; // @synthesize lastPageIndex=_lastPageIndex;
@property unsigned long long firstPageIndex; // @synthesize firstPageIndex=_firstPageIndex;
@property unsigned long long numObjects; // @synthesize numObjects=_numObjects;
@property long long axis; // @synthesize axis=_axis;
@property(retain) InfiniteSwipeControllerContainer *primaryContainer; // @synthesize primaryContainer=_primaryContainer;
@property(retain) NSMutableDictionary *containers; // @synthesize containers=_containers;
@property id <InfiniteSwipeControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL dontAlwaysSnap; // @synthesize dontAlwaysSnap=_dontAlwaysSnap;
@property(nonatomic) BOOL dontLayout; // @synthesize dontLayout=_dontLayout;
- (void).cxx_destruct;
- (void)showVisualizer;
- (double)scrollView:(id)arg1 pageAlignedOriginOnAxis:(long long)arg2 forProposedDestination:(double)arg3 currentOrigin:(double)arg4 initialOrigin:(double)arg5 velocity:(double)arg6;
- (void)_precomputePages;
- (void)_viewControllerDidPopulateFirstTime:(id)arg1;
- (void)scrollActuallyEndedInScrollView:(id)arg1 inInfiniteDirection:(BOOL)arg2;
- (void)didEndScrollInScrollView:(id)arg1;
- (void)didBeginScrollInScrollView:(id)arg1;
- (void)scrollView:(id)arg1 didChangePresentationOrigin:(struct CGPoint)arg2 active:(BOOL)arg3;
- (void)invalidateAccessibilityObjects;
- (void)setAltScrollable:(BOOL)arg1 inContainerWithKey:(id)arg2;
- (double)_roundToNearestMajorBoundary:(double)arg1 preferringDirection:(int)arg2;
- (double)_roundToNearestBoundary:(double)arg1;
- (double)_ceilToNearestBoundary:(double)arg1;
- (double)_floorToNearestBoundary:(double)arg1;
- (BOOL)_isObjectMajorBoundary:(id)arg1;
- (id)_roundToNearestPage:(double)arg1;
- (id)_pageContainingPoint:(double)arg1;
- (id)_findPage:(double)arg1 withAlgorithm:(int)arg2;
- (id)_dummyPageAtIndex:(unsigned long long)arg1;
- (id)_referencePage;
- (BOOL)_pageForIndexIsVisible:(unsigned long long)arg1;
- (BOOL)_pageForIndexExists:(unsigned long long)arg1;
- (void)_resetSpanningViewIndexes;
- (void)_cancelSwipeAnimation;
- (void)_resetScrollPosition;
- (void)_scrollToPoint:(double)arg1 withCallout:(BOOL)arg2;
- (void)_updateVisiblePageIndicesNotify:(BOOL)arg1;
- (void)_layout;
- (void)_clipViewBoundsDidChangeNotify:(BOOL)arg1;
- (void)_clipViewBoundsDidChange:(id)arg1;
- (void)_clipViewFrameDidChange:(id)arg1;
- (void)_prepareContentRect:(struct CGRect)arg1;
- (void)liveResizeDidEnd;
- (void)liveResizeWillBegin;
- (void)_removePages:(unsigned long long)arg1 fromEdge:(int)arg2;
- (void)_addPages:(long long)arg1 toEdge:(int)arg2;
- (id)_anyUnusedPage;
- (id)_viewControllerForContainerKey:(id)arg1;
- (id)_lastVisiblePage;
- (id)_firstVisiblePage;
- (id)_notVisiblePages;
- (id)_notVisiblePagesAfter;
- (id)_notVisiblePagesBefore;
- (id)_visiblePages;
- (id)_lastPage;
- (id)_firstPage;
- (id)_pagesFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)_pageAtIndex:(unsigned long long)arg1;
- (long long)_distanceBetweenObjectA:(id)arg1 objectB:(id)arg2;
- (BOOL)_objectA:(id)arg1 isEqualTo:(id)arg2;
- (void)_updatePreparedContentRect;
- (void)_firstVisibleObjectDidChange;
- (id)containerWithKey:(id)arg1;
- (void)setAccessibiltyIgnoredForNodeAndChildren:(BOOL)arg1 forContainerWithKey:(id)arg2;
- (void)setAccessibiltyIgnoredForNode:(BOOL)arg1 forContainerWithKey:(id)arg2;
- (void)setAxRoleDescription:(id)arg1 forContainerWithKey:(id)arg2;
- (BOOL)isAligned;
- (void)_updateIndexOffsetForExtraPixelWithFirstVisibleObject:(id)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1 inContainerWithKey:(id)arg2;
- (id)allSpanningViewKeysInContainerWithKey:(id)arg1;
- (void)removeSpanningViewWithKey:(id)arg1 fromContainerWithKey:(id)arg2;
- (void)setPosition:(double)arg1 size:(double)arg2 forSpanningViewWithKey:(id)arg3 inContainerWithKey:(id)arg4;
- (void)setStartObject:(id)arg1 endObject:(id)arg2 startInset:(double)arg3 endInset:(double)arg4 position:(double)arg5 size:(double)arg6 forSpanningViewWithKey:(id)arg7 inContainerWithKey:(id)arg8;
- (void)addSpanningView:(id)arg1 withKey:(id)arg2 startObject:(id)arg3 endObject:(id)arg4 startInset:(double)arg5 endInset:(double)arg6 position:(double)arg7 size:(double)arg8 toContainerWithKey:(id)arg9;
- (void)setDocumentCompressionResistancePriority:(float)arg1 forContainerWithKey:(id)arg2;
- (double)sizeOnFiniteAxisForContainerWithKey:(id)arg1;
- (double)scrollPointOnFiniteAxisForContainerWithKey:(id)arg1;
- (void)setScrollPointOnFiniteAxis:(double)arg1 forContainerWithKey:(id)arg2;
- (void)_automatedLiveScrollingDidEnd;
- (void)viewController:(id)arg1 finishedDisplay:(BOOL)arg2;
- (void)_automatedLiveScrollingWillBegin;
- (void)_setLiveScrollMinMaxValues;
- (id)viewControllerForObject:(id)arg1 containerKey:(id)arg2;
- (id)allViewControllersForContainerWithKey:(id)arg1;
- (id)notVisibleActiveViewControllersForContainerWithKey:(id)arg1;
- (id)lastVisibleViewControllerForContainerWithKey:(id)arg1;
- (id)firstVisibleViewControllerForContainerWithKey:(id)arg1;
- (id)visibleViewControllersForContainerWithKey:(id)arg1;
- (id)lastActiveViewControllerForContainerWithKey:(id)arg1;
- (id)firstActiveViewControllerForContainerWithKey:(id)arg1;
- (id)activeViewControllersForContainerWithKey:(id)arg1;
- (id)lastVisibleObject;
- (id)firstVisibleObject;
- (BOOL)animateToObject:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)setNumberOfVisibleObjects:(unsigned long long)arg1;
- (unsigned long long)numberOfVisibleObjects;
- (void)setFirstVisibleObject:(id)arg1;
- (void)setFirstVisibleObject:(id)arg1 withPreferredObjectForExtraPixel:(id)arg2;
- (void)setFirstVisibleObject:(id)arg1 withForcedReset:(BOOL)arg2;
- (void)invalidateCachedMajorBoundaries;
- (id)addContainerForKey:(id)arg1;
- (id)addContainerForKey:(id)arg1 yAxisFlipped:(BOOL)arg2;
- (void)reset;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1 axis:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
