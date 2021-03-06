//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "PVEventInterceptorDelegate.h"

@class HistView, NSMapTable, NSObject<PVMediaElement><PVAdjustColorProvider>, NSValueTransformer, PVExponentiationTransformer, PVHistogramSlider, PVWindowController;

@interface PVAdjustColor : NSWindowController <PVEventInterceptorDelegate>
{
    PVWindowController *_currentImageWindowController;
    NSObject<PVMediaElement><PVAdjustColorProvider> *_mediaElement;
    NSMapTable *_undoGroupOldPropertiesPerStack;
    NSValueTransformer *_gammaValueTransformer;
    PVExponentiationTransformer *_inputLevelsTransformer;
    HistView *_histogramView;
    PVHistogramSlider *_histogramSlider;
}

+ (id)keyValueObservingUndoInfo;
+ (id)sharedAdjustColor;
- (void)setFilterStackProperties:(id)arg1;
- (void)observeUndoManagerCheckpoint:(id)arg1;
- (void)setObservedWindowController:(id)arg1;
- (void)histogramSliderAction:(id)arg1;
- (void)resetAllAction:(id)arg1;
- (void)autoLevelsAction:(id)arg1;
- (void)whitePointDropper:(id)arg1;
- (void)imageGeometryChanged:(id)arg1;
- (void)imageCorrectionClosed:(id)arg1;
@property(retain) NSObject<PVMediaElement><PVAdjustColorProvider> *representedImage;
@property(readonly) PVWindowController *observedWindowController;
- (void)openImageCorrection:(id)arg1;
- (BOOL)interceptEvent:(id)arg1;
- (id)windowWillReturnUndoManager:(id)arg1;
- (id)windowFrameAutosaveName;
- (void)awakeFromNib;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

