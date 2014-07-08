//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTableView.h"

#import "TShrinkToFitDelegateProtocol.h"

@class TTableViewShrinkToFitController;

@interface TTagColumnTableView : TTableView <TShrinkToFitDelegateProtocol>
{
    TTableViewShrinkToFitController *_stfController;
}

- (void)shrinkToFitTextViewAboutToClose;
- (void)shrinkToFitTextViewEditingComplete:(id)arg1;
- (_Bool)shrinkToFitTextViewAboutToOpen;
- (void)updateSTFEditorLocation;
- (void)stopEditing:(_Bool)arg1;
- (void)startEditingWithNode:(const struct TFENode *)arg1 afterDelay:(_Bool)arg2;
- (void)keyDown:(id)arg1;
- (id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2;
- (id)stfEditorController;
- (id)menuForEvent:(id)arg1;
- (BOOL)canDragRowsWithIndexes:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)aboutToTearDown;
- (id)tagColumnController;
- (void)awakeCommon;

@end
