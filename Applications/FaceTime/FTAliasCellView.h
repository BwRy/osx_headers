//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

#import "ClickableTextFieldDelegate.h"

@class NSButton, NSString, WarningView;

@interface FTAliasCellView : NSTableCellView <ClickableTextFieldDelegate>
{
    id <NSObject><FTAliasCellViewDelegate> _delegate;
    NSButton *_activatedCheckbox;
    id _originalTarget;
    SEL _originalAction;
    unsigned long long _aliasNameWidth;
    unsigned long long _maxTextFieldWidth;
    unsigned long long _availableRoom;
    WarningView *_warningView;
}

+ (id)clickableStringForAliasVerificationStatus:(int)arg1;
+ (id)stringForAliasVerificationStatus:(int)arg1;
+ (long long)heightForCellType:(int)arg1;
@property(retain, nonatomic) WarningView *warningView; // @synthesize warningView=_warningView;
@property(nonatomic) unsigned long long availableRoom; // @synthesize availableRoom=_availableRoom;
@property(nonatomic) unsigned long long maxTextFieldWidth; // @synthesize maxTextFieldWidth=_maxTextFieldWidth;
@property(nonatomic) unsigned long long aliasNameWidth; // @synthesize aliasNameWidth=_aliasNameWidth;
@property(nonatomic) SEL originalAction; // @synthesize originalAction=_originalAction;
@property(nonatomic) __weak id originalTarget; // @synthesize originalTarget=_originalTarget;
@property(nonatomic) __weak NSButton *activatedCheckbox; // @synthesize activatedCheckbox=_activatedCheckbox;
@property(nonatomic) id <NSObject><FTAliasCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_detailsButtonPressed:(id)arg1;
- (void)actionCancelled:(id)arg1;
- (void)mouseDownPressed:(id)arg1;
- (void)_aliasNamePressed:(id)arg1;
- (void)activateCheckboxPressed:(id)arg1;
- (void)_updateEnabledState;
- (void)_updateActiveState;
- (void)_updateVerificationState;
- (void)setChecked:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)layoutRTL;
- (void)startEditing;
- (id)alias;
- (void)setObjectValue:(id)arg1;
- (void)viewWillDraw;
- (void)resizeTextField;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
