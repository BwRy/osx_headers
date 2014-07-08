//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMWebKitControllerDelegate.h"

@class MMWebKitController, NSImageView, NSMutableDictionary, NSProgressIndicator, NSString, NSTextField, NSView, NSWindow;

@interface MMWebKitViewController : NSObject <MMWebKitControllerDelegate>
{
    id <MMWebKitViewControllerDelegate> _delegate;
    MMWebKitController *_webKitController;
    SEL _classCreationSelector;
    NSWindow *_window;
    NSString *_accountID;
    NSString *_password;
    NSTextField *_loadingText;
    NSProgressIndicator *_loadingProgress;
    NSView *_loadingView;
    NSImageView *_noNetworkErrorImageView;
    NSTextField *_noNetworkErrorTitle;
    NSView *_noNetworkErrorView;
    NSImageView *_serverErrorImageView;
    NSTextField *_serverErrorTitle;
    NSView *_serverErrorView;
    NSView *_contentView;
    unsigned long long _mmWebKitViewType;
    NSMutableDictionary *_webKitContext;
    struct {
        unsigned int delegateDidCancel:1;
        unsigned int delegateDidSucceed:1;
        unsigned int delegateDidFailLoading:1;
        unsigned int delegateDidFinishLoading:1;
        unsigned int delegateDidDismiss:1;
        unsigned int padding:3;
    } _delegateFlags;
}

@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long mmWebKitViewType; // @synthesize mmWebKitViewType=_mmWebKitViewType;
@property(retain, nonatomic) NSView *serverErrorView; // @synthesize serverErrorView=_serverErrorView;
@property(retain, nonatomic) NSTextField *serverErrorTitle; // @synthesize serverErrorTitle=_serverErrorTitle;
@property(retain, nonatomic) NSImageView *serverErrorImageView; // @synthesize serverErrorImageView=_serverErrorImageView;
@property(retain, nonatomic) NSView *noNetworkErrorView; // @synthesize noNetworkErrorView=_noNetworkErrorView;
@property(retain, nonatomic) NSTextField *noNetworkErrorTitle; // @synthesize noNetworkErrorTitle=_noNetworkErrorTitle;
@property(retain, nonatomic) NSImageView *noNetworkErrorImageView; // @synthesize noNetworkErrorImageView=_noNetworkErrorImageView;
@property(retain) NSMutableDictionary *webKitContext; // @synthesize webKitContext=_webKitContext;
@property(retain, nonatomic) NSView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSProgressIndicator *loadingProgress; // @synthesize loadingProgress=_loadingProgress;
@property(retain, nonatomic) NSTextField *loadingText; // @synthesize loadingText=_loadingText;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(retain, nonatomic) MMWebKitController *webKitController; // @synthesize webKitController=_webKitController;
@property(nonatomic) SEL classCreationSelector; // @synthesize classCreationSelector=_classCreationSelector;
@property(nonatomic) id <MMWebKitViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct OpaqueJSClass *)_createTOSMailNotesClass;
- (struct OpaqueJSClass *)_createQuotaClass;
- (struct OpaqueJSClass *)_createAccountCreationClass;
- (void)mmWebKitControllerDidFinishLoading:(id)arg1;
- (void)mmWebKitControllerDidFailLoading:(id)arg1 error:(id)arg2;
- (void)mmWebKitControllerDidSucceed:(id)arg1;
- (void)mmWebKitControllerDidCancel:(id)arg1;
- (void)mmWebKitControllerConfigureForFrame:(id)arg1;
- (void)mmWebView:(id)arg1 setFrame:(struct CGRect)arg2;
- (void)_window:(id)arg1 setFrame:(struct CGRect)arg2;
- (void)_hideLoadingView:(BOOL)arg1;
- (void)launchNetworkDiagnostics:(id)arg1;
- (void)okButton:(id)arg1;
- (void)handleLoadFailureWithError:(id)arg1;
- (void)transitionToServerErrorViewWithTitle:(id)arg1 image:(id)arg2 animated:(BOOL)arg3;
- (void)transitionToNetworkErrorViewWithTitle:(id)arg1 image:(id)arg2 animated:(BOOL)arg3;
- (void)transitionToWebViewAnimated:(BOOL)arg1;
- (void)transitionToLoadingViewAnimated:(BOOL)arg1;
- (void)closeModalSheet;
- (void)beginModalSheetForWindow:(id)arg1;
- (void)dealloc;
- (void)loadURLRequest:(id)arg1;
- (id)initForStorageManagementWithAccountID:(id)arg1;
- (id)initForTermsOfServiceWithAccountID:(id)arg1 password:(id)arg2;
- (id)initForNotesAccountCreationWithAccountID:(id)arg1;
- (id)initForMailAccountCreationWithAccountID:(id)arg1;
- (id)initForAccountCreation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
