//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "BKMacRolloverTableViewDelegate.h"
#import "BKMacSelectionColorMatrixDelegate.h"
#import "BKPlatformPopoverDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class BKMacRolloverTableView, BKMacSelectionColorMatrix, BKMacSelectionPopover, NSColor, NSImage, NSMutableArray, NSMutableDictionary, NSShadow, NSString, NSView;

@interface BKMacSelectionPopoverViewController : NSViewController <BKPlatformPopoverDelegate, NSTableViewDataSource, NSTableViewDelegate, BKMacRolloverTableViewDelegate, BKMacSelectionColorMatrixDelegate>
{
    NSColor *_disabledTextColor;
    NSColor *_enabledTextColor;
    NSColor *_highlightTextColor;
    NSShadow *_highlightShadow;
    BOOL _shouldCloseMainPopover;
    BOOL _touchedMoreMenu;
    id <BKMacSelectionPopoverViewControllerDelegate> _delegate;
    NSMutableArray *_mainTableRowAttributes;
    NSMutableArray *_moreTableRowAttributes;
    BKMacRolloverTableView *_mainTableView;
    NSView *_moreView;
    BKMacRolloverTableView *_moreTableView;
    BKMacSelectionPopover *_mainPopover;
    BKMacSelectionPopover *_morePopover;
    BKMacSelectionColorMatrix *_colorMatrix;
    long long _colorMatrixRow;
    long long _prevSelectedMainRow;
    long long _prevSelectedMoreRow;
    double _openTime;
    NSMutableDictionary *_sharingServicesMap;
    NSImage *_colorCellOverlay;
    NSImage *_colorCellUnderlay;
    struct CGSize _mainTableSize;
    struct CGSize _moreTableSize;
}

+ (id)pickerImageForAnnotationStyle:(int)arg1;
@property(readonly, retain, nonatomic) NSImage *colorCellUnderlay; // @synthesize colorCellUnderlay=_colorCellUnderlay;
@property(readonly, retain, nonatomic) NSImage *colorCellOverlay; // @synthesize colorCellOverlay=_colorCellOverlay;
@property(readonly, retain, nonatomic) NSMutableDictionary *sharingServicesMap; // @synthesize sharingServicesMap=_sharingServicesMap;
@property(readonly, nonatomic) BOOL touchedMoreMenu; // @synthesize touchedMoreMenu=_touchedMoreMenu;
@property(readonly, nonatomic) double openTime; // @synthesize openTime=_openTime;
@property(readonly, nonatomic) struct CGSize moreTableSize; // @synthesize moreTableSize=_moreTableSize;
@property(readonly, nonatomic) struct CGSize mainTableSize; // @synthesize mainTableSize=_mainTableSize;
@property(readonly, nonatomic) long long prevSelectedMoreRow; // @synthesize prevSelectedMoreRow=_prevSelectedMoreRow;
@property(readonly, nonatomic) long long prevSelectedMainRow; // @synthesize prevSelectedMainRow=_prevSelectedMainRow;
@property(nonatomic) BOOL shouldCloseMainPopover; // @synthesize shouldCloseMainPopover=_shouldCloseMainPopover;
@property(readonly, nonatomic) long long colorMatrixRow; // @synthesize colorMatrixRow=_colorMatrixRow;
@property(readonly, retain, nonatomic) BKMacSelectionColorMatrix *colorMatrix; // @synthesize colorMatrix=_colorMatrix;
@property(retain, nonatomic) BKMacSelectionPopover *morePopover; // @synthesize morePopover=_morePopover;
@property(nonatomic) __weak BKMacSelectionPopover *mainPopover; // @synthesize mainPopover=_mainPopover;
@property(nonatomic) __weak BKMacRolloverTableView *moreTableView; // @synthesize moreTableView=_moreTableView;
@property(nonatomic) __weak NSView *moreView; // @synthesize moreView=_moreView;
@property(nonatomic) __weak BKMacRolloverTableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) NSMutableArray *moreTableRowAttributes; // @synthesize moreTableRowAttributes=_moreTableRowAttributes;
@property(retain, nonatomic) NSMutableArray *mainTableRowAttributes; // @synthesize mainTableRowAttributes=_mainTableRowAttributes;
@property(readonly, nonatomic) __weak id <BKMacSelectionPopoverViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)rolloverTableViewShouldClose:(id)arg1;
- (void)rolloverTableView:(id)arg1 moveLeftForRowIndex:(unsigned long long)arg2;
- (void)rolloverTableView:(id)arg1 moveRightForRowIndex:(unsigned long long)arg2;
- (BOOL)wasSubmenuTouchedForRolloverTableView:(id)arg1;
- (void)touchedRolloverTableView:(id)arg1;
- (BOOL)rolloverTableView:(id)arg1 showingSubmenuForRowIndex:(unsigned long long)arg2;
- (void)mouseUpOutsideRolloverTableView:(id)arg1;
- (void)didDeselectAllInRolloverTableView:(id)arg1;
- (void)rolloverTableView:(id)arg1 hoverRowIndex:(unsigned long long)arg2;
- (void)p_delayedShowMorePopoverAtRow:(id)arg1;
- (void)p_showMorePopoverAtRow:(long long)arg1;
- (void)rolloverTableView:(id)arg1 clickedRowIndex:(unsigned long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)p_configureImageForColorMatrixCell:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)bkPopoverDidClose:(id)arg1;
- (void)colorMatrixSelectionDidChange:(id)arg1;
- (void)p_closeMorePopover;
- (void)p_closeAllPopovers;
- (void)cleanup;
- (void)p_showInspector:(id)arg1;
- (void)p_stopSpeaking:(id)arg1;
- (void)p_startSpeaking:(id)arg1;
- (void)p_searchWikipedia:(id)arg1;
- (void)p_searchWeb:(id)arg1;
- (void)p_search:(id)arg1;
- (void)p_define:(id)arg1;
- (void)p_showGlossary:(id)arg1;
- (void)p_copy:(id)arg1;
- (void)p_removeHighlight:(id)arg1;
- (void)p_removeNote:(id)arg1;
- (void)p_addNote:(id)arg1;
- (void)p_share:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (id)highlightShadow;
- (id)highlightTextColor;
- (id)enabledTextColor;
- (id)disabledTextColor;
- (void)p_buildMoreTableAttributes;
- (void)p_buildMainTableAttributes;
- (id)p_attributedString:(id)arg1;
- (void)p_renderNoteForAttributes:(id)arg1 withStrikethrough:(BOOL)arg2 effect:(int)arg3;
- (id)p_arrowImageWithColor:(id)arg1;
- (struct CGSize)p_dimensionsOfTable:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1 andPopover:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
