//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class HiCloudController, NSButton, NSLayoutConstraint, NSMutableArray, NSObject<OS_dispatch_queue>, NSProgressIndicator, NSString, NSTextField, NSTextView, NSView, NSViewController<ViewNavigating>, PrincessShieldWindow, TIMRollOverButton;

@interface HiCloudWindowController : NSWindowController <NSWindowDelegate>
{
    NSView *_mainView;
    NSButton *prevButton;
    NSButton *nextButton;
    NSButton *alternateButton;
    NSButton *secondAlternateButton;
    NSProgressIndicator *_spinner;
    NSTextField *_statusText;
    TIMRollOverButton *_inputMenu;
    NSTextField *_titleText;
    NSTextField *_headerText;
    NSTextView *_headerAttributedText;
    NSViewController<ViewNavigating> *_vc;
    HiCloudController *hiCloudController;
    NSMutableArray *_shieldWindows;
    PrincessShieldWindow *_mainShieldWindow;
    BOOL _registeredDisplayListener;
    NSView *mbExtraTextView;
    NSTextField *mbExtraTextField;
    NSObject<OS_dispatch_queue> *applySettingsQueue;
    BOOL _isMiniBuddy;
    unsigned long long _spid;
    BOOL _isMigrationBuddy;
    BOOL _isDrawingWithDesktopImage;
    BOOL _windowLevelApplicationUIVisible;
    NSTextField *nextButtonLabel;
    NSTextField *prevButtonLabel;
    NSTextField *alternateButtonLabel;
    NSTextField *secondAlternateButtonLabel;
    NSTextField *titleField;
    NSLayoutConstraint *titleTopConstraint;
    NSLayoutConstraint *prevLabelConstraint;
    NSLayoutConstraint *nextLabelConstraint;
    NSLayoutConstraint *alternateLabelConstraint;
    NSLayoutConstraint *secondAlternateLabelConstraint;
    NSViewController<ViewNavigating> *originatingViewController;
    NSLayoutConstraint *headerTextWidthContraint;
    NSString *_windowLevelApplicationUIString;
}

@property(copy) NSString *windowLevelApplicationUIString; // @synthesize windowLevelApplicationUIString=_windowLevelApplicationUIString;
@property BOOL windowLevelApplicationUIVisible; // @synthesize windowLevelApplicationUIVisible=_windowLevelApplicationUIVisible;
@property BOOL isDrawingWithDesktopImage; // @synthesize isDrawingWithDesktopImage=_isDrawingWithDesktopImage;
@property(retain) NSLayoutConstraint *headerTextWidthContraint; // @synthesize headerTextWidthContraint;
@property(retain) NSViewController<ViewNavigating> *originatingViewController; // @synthesize originatingViewController;
@property(retain) NSLayoutConstraint *secondAlternateLabelConstraint; // @synthesize secondAlternateLabelConstraint;
@property(retain) NSLayoutConstraint *alternateLabelConstraint; // @synthesize alternateLabelConstraint;
@property(retain) NSLayoutConstraint *nextLabelConstraint; // @synthesize nextLabelConstraint;
@property(retain) NSLayoutConstraint *prevLabelConstraint; // @synthesize prevLabelConstraint;
@property NSLayoutConstraint *titleTopConstraint; // @synthesize titleTopConstraint;
@property NSTextField *titleField; // @synthesize titleField;
@property NSTextField *secondAlternateButtonLabel; // @synthesize secondAlternateButtonLabel;
@property NSTextField *alternateButtonLabel; // @synthesize alternateButtonLabel;
@property NSTextField *prevButtonLabel; // @synthesize prevButtonLabel;
@property NSTextField *nextButtonLabel; // @synthesize nextButtonLabel;
@property(readonly) NSButton *secondAlternateButton; // @synthesize secondAlternateButton;
@property(readonly) NSButton *alternateButton; // @synthesize alternateButton;
@property(readonly) NSButton *prevButton; // @synthesize prevButton;
@property(readonly) NSButton *nextButton; // @synthesize nextButton;
@property BOOL isMigrationBuddy; // @synthesize isMigrationBuddy=_isMigrationBuddy;
@property BOOL isMiniBuddy; // @synthesize isMiniBuddy=_isMiniBuddy;
@property(retain) HiCloudController *hiCloudController; // @synthesize hiCloudController;
@property(retain) NSViewController<ViewNavigating> *currentViewController; // @synthesize currentViewController=_vc;
- (void)buddyIsExiting;
- (void)_showWindowLevelApplicationUI:(id)arg1;
- (void)_hideWindowLevelApplicationUI;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)checkHeaderFieldMetrics;
- (BOOL)_swallowEvent:(id)arg1;
- (void)_startInputMenuForcedForNonAscii:(id)arg1;
- (void)_startInputMenu:(id)arg1;
- (void)fadeOutAllVisibleElements;
- (void)setShieldWindowsToDesktopImage;
- (void)returnToStandardSpace;
- (void)moveToUnmanagedSpace;
- (void)refreshShieldWindows;
- (void)_handleDisplaysChanged;
- (void)_makeShieldWindows;
- (void)didClickThirdAlternate:(id)arg1;
- (void)didClickSecondAlternate:(id)arg1;
- (void)didClickAlternate:(id)arg1;
- (void)didClickBack:(id)arg1;
- (void)didClickContinue:(id)arg1;
- (void)centerNextButton;
- (void)centerPreviousButton;
- (void)centerNextOrBackButton:(id)arg1;
- (void)_processUserInputOnThirdAlternate;
- (void)_processUserInputOnSecondAlternate;
- (void)_processUserInputOnAlternate;
- (void)_processUserInputOnBack;
- (void)_processUserInputOnNext;
- (void)_showThirdAlternatePane;
- (void)_showSecondAlternatePane;
- (void)_showAlternatePane;
- (void)_showPreviousPane;
- (void)_showNextPane;
- (void)_showFirstPane;
- (void)_returnFromSidetrip;
- (void)_sidetripToSpecificPane:(id)arg1;
- (void)goToThirdAlternatePane;
- (void)goToSecondAlternatePane;
- (void)goToAlternatePane;
- (void)goToPreviousPane;
- (void)goToNextPane;
- (id)_chooseAFirstResponderFromView:(id)arg1;
- (void)_setShieldTextPrevious:(id)arg1 next:(id)arg2;
- (void)_activateViewController:(id)arg1;
- (void)showErrorWithDictionary:(id)arg1;
- (void)stopSettingsApplicationUI:(id)arg1;
- (void)startSettingsApplicationUI:(id)arg1;
- (void)stopPerpetualStatusUI:(id)arg1;
- (void)startPerpetualStatusUI:(id)arg1;
- (void)dealloc;
- (void)alignWindowsToLevel:(int)arg1;
- (void)setupHISpec;
- (void)setTheme:(id)arg1 onButton:(id)arg2;
- (void)setTheme:(id)arg1 onLabel:(id)arg2;
- (id)setupConstraint:(id)arg1 forNavigationButton:(id)arg2 andLabel:(id)arg3;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
