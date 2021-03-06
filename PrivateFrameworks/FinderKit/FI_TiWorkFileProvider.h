//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFileProvider.h"

@class NSOperationQueue, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface FI_TiWorkFileProvider : NSObject <NSFileProvider>
{
    struct TNSRef<NSOperationQueue *> _queue;
    struct TNSRef<NSURL *> _originalItem;
    struct TNSRef<NSURL *> _conversionDirectory;
    struct TNSRef<NSURL *> _convertedItem;
    _Bool _converted;
}

+ (id)convertiWorkDocument:(id)arg1;
+ (int)convertiWorkDocument:(id)arg1 destination:(id)arg2 withName:(id)arg3;
+ (struct TFENode)makeUniqueTempDirectoryWithSeed:(long long)arg1;
+ (id)providerForiWorkDocument:(struct TFENode)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
- (void)_provideItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly) NSOperationQueue *_providedItemsOperationQueue;
@property(readonly, copy) NSURL *_providedItemsURL;
- (void)autoUnregister;
- (void)unregister;
- (void)register;
- (id)initWithNode:(struct TFENode)arg1;

// Remaining properties
@property(readonly, copy) NSString *_fileReactorID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

