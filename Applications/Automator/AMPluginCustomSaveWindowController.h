//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSString, NSTextField, NSWindow;

__attribute__((visibility("hidden")))
@interface AMPluginCustomSaveWindowController : NSWindowController
{
    NSWindow *_targetWindow;
    NSString *_documentName;
    BOOL _shouldAllowDontSaveOption;
    NSString *_unlocalizedWorkflowType;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _filenameCheckHandler;
    NSTextField *_saveNameTextField;
}

@property(copy) CDUnknownBlockType filenameCheckHandler; // @synthesize filenameCheckHandler=_filenameCheckHandler;
@property(retain) NSTextField *saveNameTextField; // @synthesize saveNameTextField=_saveNameTextField;
@property(retain) NSString *unlocalizedWorkflowType; // @synthesize unlocalizedWorkflowType=_unlocalizedWorkflowType;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property BOOL shouldAllowDontSaveOption; // @synthesize shouldAllowDontSaveOption=_shouldAllowDontSaveOption;
@property(retain) NSString *documentName; // @synthesize documentName=_documentName;
@property(retain) NSWindow *targetWindow; // @synthesize targetWindow=_targetWindow;
- (void)showWindow:(id)arg1;
- (void)beginSheetModalWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)modalSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)loadWindow;
- (id)generateWindowContentView;
- (id)textFieldWithString:(id)arg1 font:(id)arg2 labelMode:(BOOL)arg3;
- (id)generateAutomatorIconImageView;
- (void)_enableConstraintLayoutForView:(id)arg1;
- (void)dontSaveButtonClicked:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)okButtonClicked:(id)arg1;
- (id)replaceFileAlertWithProposedName:(id)arg1;
- (void)replaceAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)initWithTargetWindow:(id)arg1;
- (void)dealloc;

@end

