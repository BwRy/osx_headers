//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OSAScriptController.h"

@class NSProgress, NSProgressIndicator, NSTextField, SEDocument;

@interface SEScriptController : OSAScriptController
{
    SEDocument *_document;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_progressText;
    NSProgress *_progress;
}

+ (id)keyPathsForValuesAffectingLocalizedProgressDescription;
+ (void)initialize;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
- (void)compileScript:(id)arg1;
- (void)runScriptApplication:(id)arg1;
- (void)saveBeforeRunAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (void)scriptDocument:(id)arg1 didSave:(BOOL)arg2 beforeRunningScriptApplication:(id)arg3;
- (void)doRunScriptApplication;
- (void)runScriptOnMainThread:(id)arg1;
- (void)runScript:(id)arg1;
- (void)runScriptWithContext:(void *)arg1 sender:(id)arg2;
- (void)confirmRunScriptAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)doRunScriptWithContext:(void *)arg1;
- (void)stopScript:(id)arg1;
- (void)recordScript:(id)arg1;
- (id)runScriptReturningResult:(id)arg1 displayValue:(id *)arg2;
- (void)runScriptInBackground:(id)arg1;
- (void)doRunScriptInBackground:(id)arg1;
- (void)_executeScript:(id)arg1;
- (void)_processScriptResults:(id)arg1;
- (void)endProgress;
- (void)beginProgress;
- (id)localizedProgressDescription;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)compile:(id)arg1;
- (id)scriptFromSource;
- (id)document;

@end
