//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPCompoundDownload.h>

@class MCMimePart;

@interface IMAPMessageDownload : IMAPCompoundDownload
{
    id <IMAPMessage> _message;
    unsigned int _usingPartialDownloads:1;
    unsigned int _startedFetch:1;
    unsigned int _fetchingBodyText:1;
    unsigned int _doneAddingSubdownloads:1;
    BOOL _allowsPartialDownloads;
    BOOL _writesCacheFile;
    MCMimePart *_topLevelPart;
}

@property BOOL writesCacheFile; // @synthesize writesCacheFile=_writesCacheFile;
@property BOOL allowsPartialDownloads; // @synthesize allowsPartialDownloads=_allowsPartialDownloads;
@property(retain) MCMimePart *topLevelPart; // @synthesize topLevelPart=_topLevelPart;
- (void).cxx_destruct;
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (void)_addMimeSubdownloadsToPipeline:(id)arg1 withCache:(id)arg2;
- (void)processResults;
- (void)handleFetchResult:(id)arg1;
- (BOOL)isComplete;
- (id)data;
@property(retain) id <IMAPMessage> message;
- (id)createCopy;
- (id)initWithMessage:(id)arg1;
- (void)dealloc;

@end
