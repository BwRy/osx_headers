//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSButton, NSColor, NSPopUpButton;

@interface CalUIColorCheckboxButton : NSView
{
    NSColor *_currentColor;
    long long _backgroundStyle;
    id <CalUIColorCheckboxButtonDelegate> _delegate;
    NSButton *_checkboxButton;
    NSPopUpButton *_colorChooserButton;
}

@property(retain) NSPopUpButton *colorChooserButton; // @synthesize colorChooserButton=_colorChooserButton;
@property(retain) NSButton *checkboxButton; // @synthesize checkboxButton=_checkboxButton;
@property id <CalUIColorCheckboxButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(retain) NSColor *currentColor; // @synthesize currentColor=_currentColor;
- (void).cxx_destruct;
- (void)checkboxClicked:(id)arg1;
- (void)updateCheckboxImage;
- (struct CGSize)intrinsicContentSize;
@property long long state;
- (void)setButtonColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2 delegate:(id)arg3;

@end

