//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AVController.h"

#import "BlackWindowDelegate.h"
#import "InviteViewControllerDelegate.h"
#import "NSAnimationDelegate.h"
#import "NSUserNotificationCenterDelegate.h"
#import "PowerSaverManagerDelegate.h"
#import "SODarkWakeHelperDelegate.h"

@class BlackWindow, CALayer, FaceDetector, IMAVChat, IMHandle, IMPerson, InviteViewController, NSArray, NSDate, NSImage, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, NSTextField, NSTimer, NSView, NSViewAnimation, NSVisualEffectView, PowerSaverManager, RoundButton, SODarkWakeHelper, SideViewController, VideoHeaderViewController, VideoLayer;

@interface VideoChatController : AVController <BlackWindowDelegate, NSAnimationDelegate, PowerSaverManagerDelegate, NSUserNotificationCenterDelegate, SODarkWakeHelperDelegate, InviteViewControllerDelegate>
{
    IMAVChat *_avChat;
    NSDate *_callStartDate;
    NSDate *_callEndDate;
    IMPerson *_remotePerson;
    BlackWindow *_window;
    BOOL _windowIsNewInvite;
    BOOL _windowIsAnimatingFromNewInvite;
    BOOL _windowIsAnimatingFromEndChat;
    BOOL _windowIsClosing;
    struct CGRect _nativeFrame;
    struct CGRect _customFrame;
    BOOL _frameHasChangedSinceZoom;
    BOOL _hasShownWindow;
    BOOL _shouldShowContactList;
    BOOL _contactListIsVisible;
    BOOL _showingAlert;
    struct CGSize _windowAspectRatio;
    SideViewController *_sideViewController;
    NSLayoutConstraint *_sideViewTrailingConstraint;
    NSView *_remoteVideoView;
    NSVisualEffectView *_remotePauseView;
    VideoLayer *_remotePauseTextLayer;
    NSView *_localVideoView;
    NSVisualEffectView *_fullPauseView;
    VideoLayer *_fullPauseTextLayer;
    NSView *_overlayView;
    CALayer *_rootLayer;
    CALayer *_sidePanelSnapshotLayer;
    NSMutableDictionary *_vcPartyIDToLayerPairMap;
    VideoLayer *_localVideoLayer;
    VideoLayer *_localTransitionLayer;
    VideoLayer *_remoteTransitionLayer;
    unsigned int _currentPIPCorner;
    NSView *_sidePanelContainer;
    NSArray *_sidePanelAnimationViews;
    VideoLayer *_localUnderContactsVideoLayer;
    NSView *_localUnderView;
    BOOL _isAnimatingLocalAspectChange;
    BOOL _localAspectIsChangingDueToRemoteRotation;
    BOOL _acceptedInvite;
    NSTimer *_noFramesTimer;
    SODarkWakeHelper *_darkWakeHelper;
    BOOL _receivedFirstFrame;
    BOOL _receivedFirstOrientation;
    BOOL _receivedFirstRemoteFrame;
    BOOL _hasNoVideo;
    BOOL _isFullscreen;
    CDUnknownBlockType _fullScreenCompletionBlock;
    BOOL _isAnimatingToFullScreen;
    BOOL _isAnimatingFromFullScreen;
    BOOL _windowShouldUpdateFullscreenModeAfterMoved;
    BOOL _conferenceEndedDuringFullScreen;
    BOOL _conferenceEndedWhileEnteringFullScreen;
    BOOL _conferenceEndedWhileExitingFullScreen;
    BOOL _conferenceEndedDuringRotation;
    BOOL _conferenceEndedDuringFadeRotation;
    NSString *_failureTitle;
    NSString *_failureString;
    BOOL _failureHideCallback;
    NSViewAnimation *_contactListAnimation;
    unsigned long long _contactListAnimationPriorTopBannerARMask;
    unsigned long long _contactListAnimationPriorBottomBannerARMask;
    NSTimer *_endButtonFlashTimer;
    InviteViewController *_inviteViewController;
    NSLayoutConstraint *_inviteViewHeightConstraint;
    VideoHeaderViewController *_headerViewController;
    RoundButton *_declineButton;
    RoundButton *_acceptButton;
    RoundButton *_endButton;
    RoundButton *_muteButton;
    RoundButton *_callBackButton;
    RoundButton *_cancelButton;
    RoundButton *_callPromptCallButton;
    RoundButton *_messageButton;
    RoundButton *_fullscreenButton;
    NSView *_leftmostControl;
    NSView *_rightmostControl;
    NSArray *_allButtons;
    NSMutableArray *_buttonConstraints;
    NSTextField *_endLabel;
    NSTextField *_muteLabel;
    NSTextField *_declineLabel;
    NSTextField *_acceptLabel;
    NSTextField *_callBackLabel;
    NSTextField *_cancelLabel;
    NSTextField *_callPromptCallLabel;
    NSTextField *_messageLabel;
    NSTextField *_fullscreenLabel;
    NSArray *_allLabels;
    IMHandle *_failureHandle;
    NSMutableArray *_pendingInvites;
    PowerSaverManager *_powerSaverManager;
    IMAVChat *_callWaitingChat;
    BOOL _answeringCallWaitingChat;
    struct CGRect _priorToFullscreenWindowFrame;
    struct CGRect _priorToFullscreenScreenFrame;
    CALayer *_backgroundFadeLayer;
    BOOL _isAnimatingRotationViaWindow;
    BOOL _isAnimatingRemoteRotation;
    BOOL _isAnimatingAspectChange;
    BOOL _isAnimatingAspectChangeViaRotation;
    struct CGRect _rotationDestinationFrameForRootLayer;
    struct CGPoint _rotationPositioningOffset;
    struct CGRect _priorToRotationWindowFrame;
    unsigned int _queuedRotationOrientation;
    BOOL _hasQueuedRotationOrientation;
    BOOL _runQueuedRotationOrientationAfterPIPAspectChange;
    long long _fadeRotationViaWindowCount;
    CALayer *_cinematicShadowLayer;
    NSImage *_cinematicShadowImageActive;
    NSImage *_cinematicShadowImageInactive;
    BOOL _isAnimatingFlip;
    BOOL _skipRotateOnFlipEnd;
    BOOL _flipInstantlyAfterFlipping;
    BOOL _isAnimatingToPIP;
    BOOL _localIsPIP;
    BOOL _localIsBeingDragged;
    struct CGPoint _localDragMouseOffset;
    BOOL _pipAspectSelectedDuringConference;
    BOOL _pipForcedPortrait;
    BOOL _PIPShouldIgnoreTitleBarChanges;
    NSMutableArray *_layersToRemoveAfterChatEnds;
    NSMutableArray *_uniqueIDsOfRequestedImageData;
    NSView *_controlsView;
    NSImage *_enterFullscreenIcon;
    NSImage *_exitFullscreenIcon;
    NSImage *_pauseIcon;
    NSImage *_muteIcon;
    BOOL _gestureMagnify;
    double _gestureMagnifySum;
    BOOL _gestureRotate;
    double _gestureRotateSum;
    NSString *_previousCameraID;
    BOOL _hadPreviousCamera;
    FaceDetector *_faceDetector;
    BOOL _suppressNextPowerSaverDisplay;
    BOOL _skipStoppingPreviewOnDealloc;
}

+ (BOOL)_hasValidCamera;
+ (BOOL)_isCameraValid:(id)arg1;
+ (void)setupLocalAspectRatiosForIMAVChat:(id)arg1 screen:(id)arg2;
@property(nonatomic) BOOL skipStoppingPreviewOnDealloc; // @synthesize skipStoppingPreviewOnDealloc=_skipStoppingPreviewOnDealloc;
@property(nonatomic) BOOL suppressNextPowerSaverDisplay; // @synthesize suppressNextPowerSaverDisplay=_suppressNextPowerSaverDisplay;
@property(readonly, nonatomic) BOOL contactListIsVisible; // @synthesize contactListIsVisible=_contactListIsVisible;
- (void).cxx_destruct;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)participantPauseChanged:(id)arg1;
- (void)participantScreenPropertiesChanged:(id)arg1;
- (void)participantMediaPropertiesChanged:(id)arg1;
- (id)_remoteTransitionLayerFromLayer:(id)arg1;
- (void)participantCameraDidChange:(id)arg1;
- (void)participantReceivedFirstFrame:(id)arg1;
- (void)participantStateChanged:(id)arg1;
- (void)avChatStateChanged:(id)arg1;
- (void)remoteiMessageAddressChanged:(id)arg1;
- (void)remoteCameraChanged:(unsigned int)arg1;
- (BOOL)remoteOrientationChanged:(unsigned int)arg1 animate:(BOOL)arg2 contentsRect:(id)arg3;
- (void)animateAspectChangedFrom:(struct CGSize)arg1 toAspect:(struct CGSize)arg2;
- (BOOL)remoteAspectChanged:(struct CGSize)arg1;
- (struct CGRect)_contentsRectForLayer:(id)arg1 withAspectRatio:(struct CGSize)arg2;
- (void)_numberOfFacesChanged:(id)arg1;
- (void)_selectBestMicrophoneForCamera:(id)arg1;
- (BOOL)_isAnimationInProgress;
- (void)_updateUIForNewChatStateAfterHint;
- (void)_updateUIForNewChatState;
- (void)_flashEndButton:(id)arg1;
- (void)_positionPIPAndShowEndedUI;
- (void)_cleanupRemoteLayers;
- (void)inviteViewController:(id)arg1 sendMessage:(id)arg2;
- (void)inviteViewControllerMessageCanceled:(id)arg1;
- (void)inviteViewControllerMouseExited:(id)arg1;
- (void)inviteViewControllerMouseEntered:(id)arg1;
- (void)inviteViewController:(id)arg1 remindMeAfter:(double)arg2;
- (void)inviteViewControllerRequestedMessageUI:(id)arg1;
- (void)inviteViewControllerDeclined:(id)arg1;
- (void)inviteViewControllerAccpted:(id)arg1;
- (void)clamshellOpened;
- (void)externalDisplayAttached;
- (void)lockScreenWillBeDisplayed;
- (void)screenShieldWasLowered;
- (void)screenShieldWasRaised;
- (void)_avChatParticipantMediaStalledChanged:(id)arg1;
- (void)_avChatParticipantVideoQualityChanged:(id)arg1;
- (void)_avChatFirstFrameNotification:(id)arg1;
- (BOOL)userIsDraggingWindow;
- (BOOL)videoIsInitialized;
- (BOOL)hasActiveAVChat;
- (BOOL)isAnimatingToFromFullScreen;
- (void)powerSaverStateDidChange;
- (void)_pauseVideoForPowerSaver:(id)arg1;
- (void)removePowerSaverIfNecessary;
- (void)handleSelected:(id)arg1;
- (void)handleSelected:(id)arg1 person:(id)arg2 isAudio:(BOOL)arg3;
- (void)handleSelected:(id)arg1 person:(id)arg2;
- (struct CGSize)_adjustWidthToKeepAspectRatio:(struct CGSize)arg1;
- (struct CGSize)_adjustHeightToKeepAspectRatio:(struct CGSize)arg1;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (struct CGRect)window:(id)arg1 willSetFrame:(struct CGRect)arg2;
- (void)_windowFinishedDragging:(id)arg1;
- (void)window:(id)arg1 isTitlebarVisibleDidChange:(BOOL)arg2;
- (void)window:(id)arg1 isHidingViewsVisibleDidChange:(BOOL)arg2;
- (void)windowDidChangeScreen:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)windowDidEndLiveResize:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowDidDeminiaturize:(id)arg1;
- (void)windowDidMiniaturize:(id)arg1;
- (void)_windowDidOrderOnScreen:(id)arg1;
- (void)windowWillOrderOnScreen:(id)arg1;
- (void)_makeWindowAlert:(BOOL)arg1 withAnimation:(int)arg2;
- (void)_makeWindowAlert:(BOOL)arg1;
- (BOOL)windowShouldZoom:(id)arg1 toFrame:(struct CGRect)arg2;
- (void)windowWillMiniaturize:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)_screenChangedParameters:(id)arg1;
- (void)_updatePauseState;
- (void)_addPauseOverlay:(BOOL)arg1 animate:(BOOL)arg2;
- (void)_fadePip:(BOOL)arg1 animate:(BOOL)arg2;
- (void)_animateLocalVideo:(BOOL)arg1 animate:(BOOL)arg2;
- (void)_setPaused:(BOOL)arg1 animate:(BOOL)arg2;
- (void)_setPaused:(BOOL)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)_avControllerUpdated:(id)arg1;
- (void)togglePortraitLandscape:(id)arg1;
- (void)_setLocalPortrait;
- (void)_setLocalWide;
- (void)_setLocalAspectRatio:(struct CGSize)arg1;
- (void)_cleanupFromAspectChange;
- (void)_prepareForAspectChangeTo:(struct CGSize)arg1 withZRot:(double)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)toggleLocalVideo:(id)arg1;
- (void)togglePause:(id)arg1;
- (void)toggleMute:(id)arg1;
- (void)toggleFullScreen:(id)arg1;
- (void)_setFullScreenModeEnabled:(BOOL)arg1;
- (void)_toggleFullScreenWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)endCallAndAnswer:(id)arg1;
- (void)ignoreCall:(id)arg1;
- (void)cancelFailedCall:(id)arg1;
- (void)dismissFailureOrCallPromptUI;
- (void)retryFailedCall:(id)arg1;
- (void)acceptCallPrompt:(id)arg1;
- (void)cancelCallPrompt:(id)arg1;
- (void)endChat:(id)arg1;
- (void)acceptInvitation:(id)arg1;
- (void)_cameraChanged:(id)arg1;
- (void)_endContactListAnimation;
- (void)_animateContactList:(BOOL)arg1;
- (void)_animateContactListWithStartFrame:(struct CGRect)arg1 endFrame:(struct CGRect)arg2;
- (void)_clearContactListAnimation;
- (void)_tearDownLocalUnder;
- (void)_setupLocalUnderPositionedBelow:(id)arg1;
- (void)windowDidFailToExitFullScreen:(id)arg1;
- (void)window:(id)arg1 startCustomAnimationToExitFullScreenWithDuration:(double)arg2;
- (id)customWindowsToExitFullScreenForWindow:(id)arg1;
- (void)windowDidFailToEnterFullScreen:(id)arg1;
- (void)window:(id)arg1 startCustomAnimationToEnterFullScreenWithDuration:(double)arg2;
- (id)customWindowsToEnterFullScreenForWindow:(id)arg1;
- (struct CGRect)_fitVideoAndControlsToFullscreenWindow;
- (double)_cinematicShadowVerticalOffset;
- (double)_cinematicShadowSize;
- (id)_newCinematicShadowImageWithAlpha:(double)arg1 blurRadius:(double)arg2;
- (void)_prepareCinematicFadeRotationOfLayer:(id)arg1;
- (void)_setupShadowLayerWithBounds:(struct CGRect)arg1 position:(struct CGPoint)arg2;
- (void)_prepareCinematicRotationOfLayer:(id)arg1 toOrientation:(unsigned int)arg2;
- (struct CGRect)_validateWindowFrame:(struct CGRect)arg1 withScreenFrame:(struct CGRect)arg2;
- (void)_makeWindowNormalWithFrame:(struct CGRect)arg1;
- (void)_makeWindowClearFullScreenAndGetOriginalRect:(struct CGRect *)arg1 newContentRect:(struct CGRect *)arg2;
- (void)setPIPLandscapeAspectRatio:(struct CGSize)arg1;
- (void)setPIPPortraitAspectRatio:(struct CGSize)arg1;
- (void)setWindowAspectRatio:(struct CGSize)arg1 forOrientation:(unsigned int)arg2;
- (void)_flipLayer:(id)arg1 reverseSide:(id)arg2;
- (void)_mainThreadOrientationChanged;
- (void)_checkQueuedAnimations;
- (void)_checkFlipInstantlyAfterFlipping;
- (void)_fadeLayer:(id)arg1 toLayer:(id)arg2 toContentsRect:(id)arg3;
- (void)_rotateLayer:(id)arg1 toOrientation:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)_rotateLayer:(id)arg1 toOrientation:(unsigned int)arg2 animated:(BOOL)arg3 contentsRect:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (double)_radiansForOrientation:(unsigned int)arg1;
- (void)_positionLocalLayersWithOffset:(struct CGPoint)arg1;
- (void)_clearEndButtonFlashTimer;
- (void)_clearNoFramesTimer;
- (void)_setLocalIsPIP:(BOOL)arg1;
- (void)_setVideoLayerFrames;
- (void)_clearVideoLayerAnimations;
- (struct CGSize)getFrameSize:(BOOL)arg1 withContentsRect:(BOOL)arg2;
- (void)_fixBadgeZRotationForLayer:(id)arg1;
- (struct CGRect)_frameForLayer:(id)arg1 forRootFrame:(struct CGRect)arg2;
- (double)_PIPBorderSize;
- (void)_pushPIPToCurrentCorner;
- (BOOL)_shouldRaisePIPForBottomControls;
- (struct CGRect)_pushRect:(struct CGRect)arg1 toCorner:(unsigned int)arg2 inRect:(struct CGRect)arg3 horizontalPadding:(double)arg4 verticalPadding:(double)arg5;
- (struct CGRect)_pushFrameToNC:(struct CGRect)arg1;
- (unsigned int)_closestPIPCorner;
- (struct CGRect)_fitRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2;
- (void)_performConferenceStartPIPAnimation;
- (void)endGestureWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)_updateAspectTogglerWithMousePositionInRoot:(struct CGPoint)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_setSystemMute:(BOOL)arg1;
- (BOOL)_hasSidePanels;
- (void)_updateWindowSizeConstraintsForOrientation:(unsigned int)arg1;
- (id)_remoteHiddenLayer;
- (id)_remoteShowingLayer;
- (void)_setLocalAspectRatiosOnAVChat;
- (void)_noFramesTimeout:(id)arg1;
- (struct CGRect)_morphRectFrom:(struct CGRect)arg1 toRectWithAspectRatio:(struct CGSize)arg2 withMinimumSize:(struct CGSize)arg3;
- (struct CGRect)_morphRectFrom:(struct CGRect)arg1 toRectWithAspectRatio:(struct CGSize)arg2;
- (void)_pictureChanged:(id)arg1;
- (unsigned int)_windowOrientation;
- (void)_updateMuteButton;
- (void)_endChatNotification:(id)arg1;
- (void)prepareForAccountDeletion;
- (void)showCallPrompt:(id)arg1 outgoingCall:(id)arg2;
- (void)cancel:(id)arg1;
- (void)doCancel;
- (BOOL)_canPause;
- (BOOL)_canMute;
- (BOOL)_isMute;
- (id)call;
- (BOOL)hasCallPromptUI;
- (BOOL)hasFailureUI;
- (BOOL)hasCallObject;
- (void)showWindow;
- (void)showWindowAsNotification;
- (void)close;
- (void)setHidden:(BOOL)arg1;
- (void)notifyHasSetupAV;
- (id)window;
- (void)setRemotePerson:(id)arg1;
- (void)_updateLocalOverlays:(BOOL)arg1;
- (void)_updateUI;
- (void)_updateFailureTitle;
- (void)_declineAllPendingInvitesExcept:(id)arg1;
- (void)_removePendingInvite:(id)arg1;
- (void)_addPendingInvite:(id)arg1;
- (void)_removeAllIncomingCallNotifications;
- (void)_replyWithMessage:(id)arg1;
- (void)_restoreWindowFrame;
- (void)_saveWindowFrame;
- (void)_checkAutoAccept;
- (void)_attachToAVChat:(id)arg1;
- (void)setCallWaitingCall:(id)arg1;
- (void)setCall:(id)arg1;
- (void)putCurrentCallOnHoldAndAddCall:(id)arg1;
- (void)_endAndCleanupChat;
- (void)_cleanupCallWaiting;
- (void)_startCamera;
- (void)createLocalLayerIfNecessary;
- (void)_showWindow;
- (void)_createWindowWithSize:(struct CGSize)arg1 minSize:(struct CGSize)arg2;
- (void)_createInviteWindow;
- (void)_createWindow;
- (void)dealloc;
- (id)initWithAVChat:(id)arg1;
- (id)init;
- (void)_sharedSetup;
- (void)_setupCinematicShadowImages;
- (BOOL)receiveInvitationFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
