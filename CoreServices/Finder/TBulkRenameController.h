//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSStackView, NSTextField, NSView, TBaseBrowserViewController, TBulkRenameAddTextController, TBulkRenameFormatterController, TBulkRenameMakeSequentialController, TBulkRenameReplaceTextController;

@interface TBulkRenameController : NSWindowController
{
    NSView *_topView;
    NSView *_bottomView;
    TBulkRenameReplaceTextController *_replaceTextViewController;
    TBulkRenameAddTextController *_addTextViewController;
    TBulkRenameMakeSequentialController *_makeSequentialViewController;
    NSTextField *_exampleFld;
    NSButton *_renameBtn;
    NSStackView *_stackView;
    TBulkRenameFormatterController *_currentFormatter;
    struct TNSRef<NSMutableArray *> _formattedPathnames;
    struct TFENodeVector _selection;
    TBaseBrowserViewController *_browserViewController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)formatterChangedFrom:(int)arg1 to:(int)arg2;
- (id)viewControllerForFormatter:(int)arg1;
- (id)menuForFormatters:(id)arg1;
- (void)addMenuItemForFormatter:(id)arg1 toMenu:(id)arg2 target:(id)arg3;
- (void)rename:(id)arg1;
- (void)cancel:(id)arg1;
- (void)bulkRenameComplete;
- (void)formattedNamesFromSelection;
- (id)formatPathnameForNode:(const struct TFENode *)arg1 formatter:(id)arg2 row:(unsigned long long *)arg3;
- (void)setSelection:(const struct TFENodeVector *)arg1;
- (void)showWithSelection:(const struct TFENodeVector *)arg1 browserViewController:(id)arg2;
- (void)updateUI;
- (void)setCurrentFormatter:(id)arg1;
- (void)aboutToTearDown;
- (void)awakeFromNib;
- (void)addStackViewWithFormatter:(id)arg1;
- (id)windowNibName;

@end
