//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TOutlineViewController.h"

@class TTableViewButtonCell;

@interface TDefaultSetterOutlineViewController : TOutlineViewController
{
    TTableViewButtonCell *_tableViewCheckboxCell;
}

- (BOOL)validateMenuItem:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)validateCopy:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (void)dealloc;
- (void)viewLoaded;

@end

