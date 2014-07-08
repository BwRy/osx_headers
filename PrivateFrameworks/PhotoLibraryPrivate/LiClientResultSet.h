//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiResultSet.h>

@class LiQuery, NSArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface LiClientResultSet : LiResultSet
{
    BOOL _ready;
    int _waiterCount;
    LiQuery *_query;
    CDUnknownBlockType _completionBlock;
    NSArray *_properties;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property int waiterCount; // @synthesize waiterCount=_waiterCount;
@property(retain) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property BOOL ready; // @synthesize ready=_ready;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSArray *properties; // @synthesize properties=_properties;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain) LiQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)deleteModels:(CDUnknownBlockType)arg1;
- (void)waitForModelIdsFromService;
- (void)setReady;
- (void)performQueryAndThen:(CDUnknownBlockType)arg1 onLibrary:(id)arg2;
- (void)performQueryAndThen:(CDUnknownBlockType)arg1;
- (void)receiveReply:(id)arg1;
- (id)initWithQuery:(id)arg1 loadProperties:(id)arg2;

@end
