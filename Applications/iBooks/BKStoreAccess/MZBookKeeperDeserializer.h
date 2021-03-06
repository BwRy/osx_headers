//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MZBookKeeperController, MZBookKeeperTransaction, NSDictionary, NSMutableArray, NSObject<IMCloudsyncDeserializeOperationDelegate>;

@interface MZBookKeeperDeserializer : NSObject
{
    BOOL _isDirty;
    MZBookKeeperTransaction *_transaction;
    MZBookKeeperController *_cloudSyncController;
    NSDictionary *_serverResponse;
    NSObject<IMCloudsyncDeserializeOperationDelegate> *_delegate;
    long long _status;
    unsigned long long _retrySeconds;
    NSMutableArray *_pendingDeserializations;
}

@property(retain) NSMutableArray *pendingDeserializations; // @synthesize pendingDeserializations=_pendingDeserializations;
@property(readonly, nonatomic) unsigned long long retrySeconds; // @synthesize retrySeconds=_retrySeconds;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) __weak NSObject<IMCloudsyncDeserializeOperationDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *serverResponse; // @synthesize serverResponse=_serverResponse;
@property(retain, nonatomic) MZBookKeeperController *cloudSyncController; // @synthesize cloudSyncController=_cloudSyncController;
@property(retain, nonatomic) MZBookKeeperTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasBackoff; // @dynamic hasBackoff;
@property(readonly, nonatomic) BOOL genericError; // @dynamic genericError;
@property(readonly, nonatomic) BOOL versionMismatch; // @dynamic versionMismatch;
@property(readonly, nonatomic) BOOL success; // @dynamic success;
@property(readonly, nonatomic) BOOL validationError; // @dynamic validationError;
@property(readonly, nonatomic) BOOL authenticationError; // @dynamic authenticationError;
@property(readonly, nonatomic) BOOL unsupportedClient; // @dynamic unsupportedClient;
- (void)_delegateOperationDidFinish;
- (void)finishedDeserializationForKey:(id)arg1;
- (void)deserialize;
- (id)initWithTransaction:(id)arg1 response:(id)arg2;

@end

