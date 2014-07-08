//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class IPKButton, TMAFirstLaunchFeaturesViewController, TMAFirstLaunchWelcomeViewController;

@interface TMAFirstLaunchWindowController : NSWindowController
{
    IPKButton *_continueButton;
    IPKButton *_getStartedButton;
    TMAFirstLaunchWelcomeViewController *_welcomeViewController;
    TMAFirstLaunchFeaturesViewController *_featuresViewController;
    id _currentCloseSender;
    id <TMAFirstLaunchDelegate> _firstLaunchDelegate;
}

+ (BOOL)shouldShowFirstLaunchWindow;
@property(retain, nonatomic) id <TMAFirstLaunchDelegate> firstLaunchDelegate; // @synthesize firstLaunchDelegate=_firstLaunchDelegate;
- (void)windowWillClose:(id)arg1;
- (void)updateFirstLaunchVersion;
- (void)closeWithSender:(id)arg1;
- (void)getStartedButtonClicked:(id)arg1;
- (void)transitionButtons;
- (void)animateFeaturesViewContent;
- (id)timingFunctionForItemViewAtIndex:(unsigned long long)arg1;
- (id)titleTimingFunction;
- (id)opacityTimingFunction;
- (void)animateFeaturesViewText;
- (void)animateWelcomeView;
- (void)continueButtonClicked;
- (double)animationDurationMultiplier;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
