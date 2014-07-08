//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MGJob.h"

@class MGExportOperation, NSError, NSImage, NSString;

@interface MGDesktopExportJob : MGJob
{
    MGExportOperation *_operation;
    NSString *_name;
    NSImage *_icon;
    BOOL _saving;
    float _progress;
    NSString *_runningStatusString;
    NSError *_error;
}

+ (id)desktopExportJobWithMediaComposition:(id)arg1 exportParameters:(id)arg2;
@property(nonatomic, getter=isSaving) BOOL saving; // @synthesize saving=_saving;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSString *runningStatusString; // @synthesize runningStatusString=_runningStatusString;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)canReveal;
- (id)operations;
- (void)dealloc;
- (id)initWithMediaComposition:(id)arg1 exportParameters:(id)arg2;

@end
