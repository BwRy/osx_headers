//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTAccessibleView.h"

#import "NSAnimationDelegate.h"
#import "NSTextFinderClient.h"
#import "NSTextInputClient.h"
#import "TTBlinking.h"

@class NSArray, NSAttributedString, NSColor, NSCursor, NSImage, NSInvocation, NSMutableIndexSet, NSString, NSTextFinder, NSTimer, NSURL, TTLogicalScreen, TTPane, TTProfile, TTTabController, TTViewAttributedString, TTViewVisualBellAnimation;

@interface TTView : TTAccessibleView <TTBlinking, NSTextInputClient, NSAnimationDelegate, NSTextFinderClient>
{
    struct CGSize _cellSize;
    double _kern;
    double _descender;
    double _leading;
    double _baselineOffset;
    TTLogicalScreen *_logicalScreen;
    TTViewAttributedString *_attributedString;
    TTProfile *_profile;
    unsigned long long _lowMemoryLineCountLimit;
    TTPane *pane;
    TTTabController *_controller;
    NSTimer *_needsDisplayTimer;
    BOOL _shouldUpdateDirtyFlag;
    BOOL _shouldUpdateAXCursorLocation;
    BOOL _isDrawingThumbnail;
    BOOL _isUpdatingBusyFlag;
    BOOL _isClearingBusyFlag;
    BOOL _isWaitingForEchoOutput;
    CDStruct_bff1fa32 *_glyphsBuffer;
    CDStruct_bff1fa32 *_advancesBuffer;
    CDStruct_bff1fa32 *_indicesBuffer;
    BOOL _isTextBlinkActive;
    BOOL _isCursorBlinkActive;
    BOOL _shouldSuppressCursorBlink;
    BOOL _doRectangularSelection;
    BOOL _doAppendSelection;
    BOOL _doDiscontinuousSelection;
    BOOL _doPathOrURLSelection;
    NSURL *_clickedURL;
    unsigned long long _selectionStyle;
    BOOL _isTransientSelection;
    BOOL _isDraggingSelection;
    BOOL _isPrintable;
    BOOL _isHandlingContextualMenu;
    NSURL *_contextualMenuURL;
    NSMutableIndexSet *_activeTextSelection;
    NSMutableIndexSet *_textSelectionRanges;
    NSMutableIndexSet *_selectionSetDifference;
    NSMutableIndexSet *_savedTextSelectionRanges;
    CDStruct_c3ca3989 _initialSelectionPoint;
    CDStruct_c3ca3989 _endSelectionPoint;
    CDStruct_c3ca3989 _previousSelectionStart;
    CDStruct_c3ca3989 _previousSelectionEnd;
    NSCursor *_mouseCursor;
    BOOL _dragAndDropIsActive;
    unsigned long long _printRange;
    CDStruct_9b71c0a5 _ttaxLastCursorPosition;
    unsigned long long _ttaxLastLineCount;
    BOOL _hasMarkedText;
    NSAttributedString *_markedText;
    struct _NSRange _markedTextSelectedRange;
    CDStruct_9b71c0a5 _markedTextAnchor;
    unsigned long long _markedTextWidth;
    BOOL _hasUnprocessedInsertion;
    NSInvocation *_markedTextInvocation;
    BOOL _didChangeInputSource;
    NSString *_savedKeyboardInputSource;
    NSString *_autoSelectedKeyboardInputSource;
    NSMutableIndexSet *_dirtyLines;
    BOOL _shouldDirtyAllLines;
    NSMutableIndexSet *_blinkingLines;
    unsigned long long _scrollingLineOffset;
    BOOL _isScrollingPinned;
    NSImage *_backgroundImage;
    NSColor *_currentBackgroundColor;
    double _backgroundColorAlpha;
    BOOL _alertsSuppressed;
    NSURL *_alertSoundURL;
    unsigned int _alertSoundID;
    unsigned long long _alertQueueCount;
    BOOL _alertSoundWaitForCompletion;
    BOOL _isVisualBellActive;
    double _visualBellFraction;
    TTViewVisualBellAnimation *_visualBellAnimation;
    BOOL _shouldFocusFollowMouse;
    BOOL _shouldFocusFollowMouseInBackground;
    BOOL _isMouseFocusWindow;
    double _accelLastEntry;
    double _accelCount;
    SEL _accelSelector;
    id _accelTarget;
    NSTextFinder *_textFinder;
}

+ (struct CGRect)rectWithoutPadding:(struct CGRect)arg1 font:(id)arg2;
+ (struct CGSize)cellSizeForProfile:(id)arg1 controller:(id)arg2 kern:(double *)arg3;
+ (id)trustedFontFamilyNames;
+ (id)markedTextAttributes;
+ (struct CGRect)unpaddedContentRectForProfile:(id)arg1;
+ (struct CGSize)logicalContentSizeForRect:(struct CGRect)arg1 profile:(id)arg2 controller:(id)arg3;
+ (struct CGSize)logicalContentSizeForRect:(struct CGRect)arg1 cellSize:(struct CGSize)arg2 font:(id)arg3;
+ (void)initialize;
+ (struct CGRect)convertScreenToAccessibility:(struct CGRect)arg1;
+ (double)dragAndDropTextDelay;
@property(nonatomic) double backgroundColorAlpha; // @synthesize backgroundColorAlpha=_backgroundColorAlpha;
@property(nonatomic) double visualBellFraction; // @synthesize visualBellFraction=_visualBellFraction;
@property(retain, nonatomic) NSURL *alertSoundURL; // @synthesize alertSoundURL=_alertSoundURL;
@property(readonly) NSMutableIndexSet *dirtyLines; // @synthesize dirtyLines=_dirtyLines;
@property BOOL scrollingIsPinned; // @synthesize scrollingIsPinned=_isScrollingPinned;
@property(nonatomic) TTPane *pane; // @synthesize pane;
- (void)handleAlertCompletion;
- (CDStruct_4bcfbbae)displayPositionForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForDisplayPosition:(CDStruct_4bcfbbae)arg1;
- (void)drawSelectedTextRanges:(id)arg1 withColor:(id)arg2;
- (double)descenderInPixels;
- (void)calculateCellSize;
- (void)setNeedsImmediateDisplay;
- (void)setNeedsDisplayInRanges:(id)arg1;
- (void)delayedSetNeedsDisplay:(BOOL)arg1;
- (void)scheduleDelayedDisplayTimer:(BOOL)arg1;
- (void)delayedSetNeedsDisplayInLines:(id)arg1;
- (void)delayedSetNeedsDisplayInLine:(unsigned long long)arg1;
- (id)bezierPathForRanges:(id)arg1 intersectingRect:(struct CGRect)arg2;
- (id)bezierPathForRanges:(id)arg1;
- (struct CGRect)rectForLineRange:(struct _NSRange)arg1;
- (id)NSRectArrayForRange:(struct _NSRange)arg1;
- (id)NSRectArrayForRanges:(id)arg1;
- (void)drawCharactersInRange:(struct _NSRange)arg1 forContentView:(id)arg2;
@property(readonly, copy) NSArray *visibleCharacterRanges;
- (id)rectsForCharacterRange:(struct _NSRange)arg1;
- (id)contentViewAtIndex:(unsigned long long)arg1 effectiveCharacterRange:(struct _NSRange *)arg2;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
@property(copy) NSArray *selectedRanges;
@property(readonly) struct _NSRange firstSelectedRange;
- (void)performTextFinderAction:(id)arg1;
- (id)textFinder;
- (BOOL)deleteTextForReplacementRange:(struct _NSRange)arg1;
- (void)removeMarkedText;
- (id)validAttributesForMarkedText;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
- (double)baselineDeltaForCharacterAtIndex:(unsigned long long)arg1;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (struct _NSRange)selectedRange;
- (struct _NSRange)markedRange;
- (id)attributedSubstringForProposedRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (BOOL)hasMarkedText;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (void)doCommandBySelector:(SEL)arg1;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (void)draggingEnded:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (BOOL)autoscroll:(id)arg1;
- (BOOL)shouldAutoscrollForEvent:(id)arg1;
- (struct CGPoint)_autoscrollAmountForEvent:(id)arg1;
- (struct CGPoint)_autoscrollAmountForWindowPoint:(struct CGPoint)arg1;
- (id)_screenAtPoint:(struct CGPoint)arg1;
- (void)updateScroller;
- (void)scrollLinesTo:(unsigned long long)arg1;
- (struct CGRect)adjustScroll:(struct CGRect)arg1;
- (unsigned long long)lastScrollableLine;
- (void)scrollLinesBy:(long long)arg1;
- (void)scrollWheel:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)isKeyFocusWindow;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;
- (BOOL)readSelectionFromString:(id)arg1;
- (BOOL)readFilePathFromString:(id)arg1 escapeTilde:(BOOL)arg2 isCommand:(BOOL)arg3 forceEscape:(BOOL)arg4;
- (BOOL)readSelectionFromPasteboard:(id)arg1 isDragAndDrop:(BOOL)arg2 isCommand:(BOOL)arg3 sender:(id)arg4;
- (BOOL)readSelectionFromPasteboard:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)pasteboardHasText:(id)arg1;
- (void)pasteSelectionEscaped:(id)arg1;
- (void)pasteSelection:(id)arg1;
- (id)updatedSelectionPasteboard;
- (id)selectionPasteboard;
- (void)pasteEscaped:(id)arg1;
- (void)paste:(id)arg1;
- (void)copyPlainText:(id)arg1;
- (void)copyWithoutBackgroundColor:(id)arg1;
- (void)copy:(id)arg1;
- (void)copySelectionToPasteboard:(id)arg1;
- (void)copySelectedAttributedText:(id)arg1 withProfile:(id)arg2;
- (void)copySelectedText:(id)arg1;
- (id)selectedTextParagraphCounts;
- (id)selectedAttributedTextWithProfile:(id)arg1;
- (id)selectedAttributedText;
- (id)selectedText;
- (id)allText;
- (id)attributedSubstringForRange:(struct _NSRange)arg1 withProfile:(id)arg2 withKerning:(BOOL)arg3;
- (id)attributedString;
- (void)sendHardReset:(id)arg1;
- (void)sendSoftReset:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)exportPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)exportSettings:(id)arg1;
- (void)didPresentSaveErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (void)savePanelDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)saveSelectedTextAs:(id)arg1;
- (void)saveTextAs:(id)arg1;
- (void)printOperationDidRun:(id)arg1 success:(BOOL)arg2 contextInfo:(void *)arg3;
- (struct CGRect)rectForPage:(int)arg1;
- (BOOL)knowsPageRange:(struct _NSRange *)arg1;
- (void)beginPageInRect:(struct CGRect)arg1 atPlacement:(struct CGPoint)arg2;
- (unsigned long long)linesPerPrintingPageReturningUnScaledSize:(struct CGSize *)arg1;
- (struct CGSize)scaledCellSizeForScaleFactor:(double)arg1;
- (double)getScaleFactor;
- (struct CGSize)pageSize;
- (struct _NSRange)lineRangeForPrintRange:(unsigned long long)arg1;
- (struct CGRect)boundsForPrintRange:(unsigned long long)arg1;
- (void)setPrintable:(BOOL)arg1;
- (unsigned long long)printRange;
- (void)setPrintRange:(unsigned long long)arg1;
- (CDStruct_bff1fa32 *)createUTF16FromUTF8:(CDStruct_bff1fa32 *)arg1;
- (BOOL)isInverted;
- (void)updateBlinker;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)changeFont:(id)arg1;
- (void)restoreDefaultFontSize:(id)arg1;
- (void)blinker:(id)arg1 didBlink:(BOOL)arg2;
- (void)needsDisplayTimer:(id)arg1;
- (void)emulatorDidBeep:(id)arg1;
- (void)emulatorDidDecodeData:(id)arg1;
- (void)emulatorWillDecodeData:(id)arg1;
- (void)finishChangingContents;
- (void)prepareToChangeContents;
- (void)updateKeyboardInputSource;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidChangeMain:(id)arg1;
- (void)windowDidChangeMainOrKey;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)separatorMenuItem2:(id)arg1;
- (void)separatorMenuItem1:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)sendInterrupt:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)mappedKeyForCharacter:(unsigned short)arg1 withModifiers:(unsigned long long)arg2;
- (BOOL)_wantsKeyDownForEvent:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)_immediateUpdateTabIsBusy;
- (void)_scheduleUpdateTabIsBusy;
- (void)_doUpdateTabIsBusy:(id)arg1;
- (void)_doSetTabIsBusy:(id)arg1;
- (void)_clearTabIsBusyForInput;
- (void)_clearWaitingForEchoOutput:(id)arg1;
- (void)_clearTabIsBusy:(id)arg1;
- (BOOL)_terminalIsBusy;
- (BOOL)_terminalIsNonInteractive;
- (void)selectTitleField:(id)arg1;
- (void)searchManPages:(id)arg1;
- (void)searchManPagesForSelection:(id)arg1;
- (void)openManPage:(id)arg1;
- (void)openManPageForSelection:(id)arg1;
- (id)selectedManPageActionTextIncludingURLs:(BOOL)arg1;
- (id)urlAtOrBeforeDisplayPosition:(CDStruct_4bcfbbae)arg1;
- (id)wordAtOrBeforeDisplayPosition:(CDStruct_4bcfbbae)arg1;
- (void)lookUp:(id)arg1;
- (void)searchInGoogle:(id)arg1;
- (void)searchInSpotlight:(id)arg1;
- (void)newTabAtFolder:(id)arg1;
- (void)newWindowAtFolder:(id)arg1;
- (void)newTerminalAtFolder:(id)arg1 inTab:(BOOL)arg2;
- (void)openURL:(id)arg1;
- (void)returnToDefaultSize:(id)arg1;
- (void)toggleShowAlternateDisplay:(id)arg1;
- (void)centerSelectionInVisibleArea:(id)arg1;
- (void)setSelectedProfile:(id)arg1;
- (void)takeProfileFrom:(id)arg1;
- (void)restoreFactoryDefaultProfile:(id)arg1;
- (void)applyFrontMostWindowProfileToAllShells:(id)arg1;
- (void)saveProfileImmediately:(id)arg1;
- (void)profileSavePanelDidEnd:(id)arg1 returnCode:(long long)arg2;
- (void)saveProfileAsDefault:(BOOL)arg1;
- (void)saveProfileAndSetAsDefault:(id)arg1;
- (void)saveProfile:(id)arg1;
- (void)setProfileAsDefault:(id)arg1;
- (void)runPrintTerminalOperation;
- (void)printTerminalSelection:(id)arg1;
- (void)printTerminal:(id)arg1;
- (void)pageDown:(id)arg1;
- (void)pageUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)lineDown:(id)arg1;
- (void)lineUp:(id)arg1;
- (void)acceleratingApplySelector:(SEL)arg1 withTarget:(id)arg2 withObject:(id)arg3 withMaximum:(double)arg4 withGrowthRate:(double)arg5;
- (void)scrollToBottom:(id)arg1;
- (void)scrollToTop:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)clearAll:(id)arg1;
- (void)clearScrollback:(id)arg1;
- (float)animation:(id)arg1 valueForProgress:(float)arg2;
- (void)animationDidEnd:(id)arg1;
- (void)updateBackgroundAlpha;
@property(readonly) double alphaForBackground;
- (double)alphaForBackgroundFullScreen:(BOOL)arg1;
- (id)colorForANSIColor:(unsigned long long)arg1 adjustedRelativeToColor:(id)arg2 withProfile:(id)arg3;
- (id)colorForANSIColor:(unsigned long long)arg1 adjustedRelativeToColor:(id)arg2;
- (id)contrastColorForColor:(id)arg1 high:(BOOL)arg2;
- (id)colorForExtendedANSIColor:(unsigned long long)arg1 adjustedRelativeToColor:(id)arg2 withProfile:(id)arg3;
- (id)colorForANSIColor:(unsigned long long)arg1;
- (void)printColor:(unsigned long long)arg1;
- (id)adjustedColorWithColor:(id)arg1 withBackgroundColor:(id)arg2 force:(BOOL)arg3;
- (id)adjustedColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 withBackgroundColor:(id)arg5 force:(BOOL)arg6;
- (void)drawCursorInMarkedText:(BOOL)arg1;
- (void)drawCustomString:(id)arg1 inContext:(struct CGContext *)arg2 atPoint:(struct CGPoint)arg3;
- (void)drawAttributedString:(id)arg1 forLine:(unsigned long long)arg2 inContext:(struct CGContext *)arg3 atPoint:(struct CGPoint)arg4 isTextMarked:(BOOL)arg5 size:(unsigned long long)arg6 containsCursor:(BOOL)arg7 atColumn:(unsigned long long)arg8 selectedTextRanges:(id)arg9 selectionColor:(id)arg10 withANSIBackgroundColor:(unsigned long long)arg11;
- (void)drawAttributedStringsToScreen:(BOOL)arg1 inRect:(struct CGRect)arg2 selectedTextRanges:(id)arg3 selectionColor:(id)arg4;
- (void)drawRect:(struct CGRect)arg1;
- (id)newBackgroundImageWithContentsOfBookmark:(id)arg1;
- (struct _NSRange)lineRangeForRect:(struct CGRect)arg1;
- (void)viewDidEndLiveResize;
- (BOOL)preservesContentDuringLiveResize;
- (BOOL)isOpaque;
- (void)sizeToFit:(struct CGRect)arg1;
- (void)updateShellContentSize;
- (struct CGRect)unpaddedContentRect;
- (struct CGSize)roundedContentSizeForContentSize:(struct CGSize)arg1;
- (struct CGSize)logicalSizeForContentSize:(struct CGSize)arg1;
- (struct CGSize)contentSizeForLogicalContentSize:(struct CGSize)arg1;
- (struct _NSRange)visibleLineRange;
- (unsigned long long)visibleLineCount;
- (unsigned long long)visibleRowCount;
- (unsigned long long)rowCount;
- (struct CGSize)contentMinSize;
- (struct CGSize)contentSize;
- (struct CGSize)visibleContentSize;
- (struct CGSize)logicalContentSize;
- (struct CGSize)cellSize;
@property(readonly) NSString *string;
- (void)screenDidRewrap:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setLogicalScreen:(id)arg1;
- (id)logicalScreen;
- (void)setObserversForLogicalScreen:(BOOL)arg1;
- (void)setProfile:(id)arg1;
- (id)profile;
- (void)setController:(id)arg1;
- (id)controller;
- (void)dealloc;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)autorelease;
- (void)notifyAccessiblityAboutCursorLocation;
- (void)ttaxEmulatorDidDecodeData:(id)arg1;
- (id)ttaxBoundsForRangeAttributeForParameter:(id)arg1;
- (id)ttaxRangeForIndexAttributeForParameter:(id)arg1;
- (id)ttaxRangeForPositionAttributeForParameter:(id)arg1;
- (id)ttaxStringForRangeAttributeForParameter:(id)arg1;
- (id)ttaxRangeForLineAttributeForParameter:(id)arg1;
- (id)ttaxLineForIndexAttributeForParameter:(id)arg1;
- (BOOL)ttaxIsVisibleCharacterRangeAttributeMutable;
- (id)ttaxVisibleCharacterRangeAttribute;
- (BOOL)ttaxIsInsertionPointLineNumberAttributeMutable;
- (id)ttaxInsertionPointLineNumberAttribute;
- (BOOL)ttaxIsSelectedTextRangesAttributeMutable;
- (void)ttaxSetSelectedTextRangesAttribute:(id)arg1;
- (id)ttaxSelectedTextRangesAttribute;
- (BOOL)ttaxIsSelectedTextRangeAttributeMutable;
- (void)ttaxSetSelectedTextRangeAttribute:(id)arg1;
- (id)ttaxSelectedTextRangeAttribute;
- (BOOL)ttaxIsSelectedTextAttributeMutable;
- (id)ttaxSelectedTextAttribute;
- (BOOL)ttaxIsNumberOfCharactersAttributeMutable;
- (id)ttaxNumberOfCharactersAttribute;
- (BOOL)ttaxIsValueAttributeMutable;
- (id)ttaxValueAttribute;
- (BOOL)ttaxIsPositionAttributeMutable;
- (id)ttaxPositionAttribute;
- (BOOL)ttaxIsSizeAttributeMutable;
- (id)ttaxSizeAttribute;
- (BOOL)ttaxIsDescriptionAttributeMutable;
- (id)ttaxDescriptionAttribute;
- (BOOL)ttaxIsRoleAttributeMutable;
- (id)ttaxRoleAttribute;
- (id)accessibilityParameterizedAttributeNames;
- (id)accessibilityAttributeNames;
- (void)scrollLineRangeToVisible:(struct _NSRange)arg1;
- (void)moveCursorToPosition:(CDStruct_4bcfbbae)arg1 event:(id)arg2;
- (unsigned short)matchingCharacterForCharacter:(unsigned short)arg1 matchType:(unsigned long long *)arg2;
- (void)extendSelectionToMatchingCharacter;
- (struct CGPoint)pointByRoundingToCellBoundary:(struct CGPoint)arg1;
- (void)deallocSelection;
- (void)initSelection;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)dragSelectionWithEvent:(id)arg1;
- (void)selectionOtherMouseDown:(id)arg1;
- (void)selectionMouseDragged:(id)arg1;
- (void)selectionMouseUp:(id)arg1;
- (void)selectionMouseDown:(id)arg1;
- (void)selectionFlagsChanged:(id)arg1;
- (BOOL)hasContiguousSelection;
- (BOOL)hasActiveSelection;
- (BOOL)hasSelection;
- (void)setSelectedIndexes:(id)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)clearTextSelectionAndPoint;
- (void)clearTextSelection;
- (void)clipSelectionRanges;
- (BOOL)selectionContainsDisplayPosition:(CDStruct_4bcfbbae)arg1;
- (void)findPathAtPosition:(CDStruct_4bcfbbae)arg1 startPosition:(CDStruct_4bcfbbae *)arg2 endPosition:(CDStruct_4bcfbbae *)arg3;
- (void)findLineAtPosition:(CDStruct_4bcfbbae)arg1 startPosition:(CDStruct_4bcfbbae *)arg2 endPosition:(CDStruct_4bcfbbae *)arg3;
- (void)findWordAtOrBeforePosition:(CDStruct_4bcfbbae)arg1 startPosition:(CDStruct_4bcfbbae *)arg2 endPosition:(CDStruct_4bcfbbae *)arg3;
- (void)findWordAtPosition:(CDStruct_4bcfbbae)arg1 startPosition:(CDStruct_4bcfbbae *)arg2 endPosition:(CDStruct_4bcfbbae *)arg3;
- (void)findWordAtPosition:(CDStruct_4bcfbbae)arg1 startPosition:(CDStruct_4bcfbbae *)arg2 endPosition:(CDStruct_4bcfbbae *)arg3 searchingBefore:(BOOL)arg4;
- (void)appendSelectionToDisplayPosition:(CDStruct_4bcfbbae)arg1 rememberPositions:(BOOL)arg2;
- (void)selectTextBetweenDisplayPositions:(CDStruct_4bcfbbae)arg1 positionTwo:(CDStruct_4bcfbbae)arg2 rememberPositions:(BOOL)arg3;
- (id)focusedThumbnailImageWithProfile:(id)arg1 size:(struct CGSize)arg2;
- (id)thumbnailImageWithProfile:(id)arg1 size:(struct CGSize)arg2;
- (id)dockTileImageOfSize:(struct CGSize)arg1;
- (double)thumbnailFitScaleFactorForSize:(struct CGSize)arg1;
- (struct CGRect)thumbnailFitVisibleRect;
- (struct CGSize)thumbnailSizeForSize:(struct CGSize)arg1;
- (double)thumbnailScaleFactorForSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly) BOOL allowsMultipleSelection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, getter=isEditable) BOOL editable;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isSelectable) BOOL selectable;
@property(readonly) Class superclass;

@end

