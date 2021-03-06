//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiClientIPCProcessor.h>

@class NSMapTable;

@interface LiClientRequestProcessor : LiClientIPCProcessor
{
    int _spinlock;
    NSMapTable *_requests;
}

@property(nonatomic) int spinlock; // @synthesize spinlock=_spinlock;
@property(retain, nonatomic) NSMapTable *requests; // @synthesize requests=_requests;
- (void).cxx_destruct;
- (void)cancelOutstandingRequests;
- (unsigned long long)onProcessCommand:(id)arg1;
- (BOOL)shouldProcessWhenResultIs:(unsigned long long)arg1;
- (void)recordCommand:(id)arg1;
- (id)initWithLibrary:(id)arg1;

@end

