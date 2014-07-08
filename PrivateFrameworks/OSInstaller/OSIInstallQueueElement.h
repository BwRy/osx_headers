//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OSInstallOptions;

@interface OSIInstallQueueElement : NSObject
{
    NSObject *_delegate;
    OSInstallOptions *_options;
    double _initialEstimate;
    double _totalProgressPercentage;
}

@property double totalProgressPercentage; // @synthesize totalProgressPercentage=_totalProgressPercentage;
@property double initialEstimate; // @synthesize initialEstimate=_initialEstimate;
@property(retain) OSInstallOptions *options; // @synthesize options=_options;
@property NSObject *delegate; // @synthesize delegate=_delegate;
- (id)packagesDirectory;
- (id)initWithOptions:(id)arg1;
- (void)postTimeRemaining:(double)arg1;
- (double)estimatedTimeToComplete;
- (id)operationName;
- (BOOL)runReturningError:(id *)arg1;

@end
