//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InternetAccounts/IAAccountSetupInput.h>

@class NSString;

@interface IAChatAccountSetupInput : IAAccountSetupInput
{
    NSString *_accountType;
    NSString *_loginName;
    NSString *_serverName;
    long long _serverPort;
    BOOL _useSSL;
    BOOL _useKerberosV5;
}

@property BOOL useKerberosV5; // @synthesize useKerberosV5=_useKerberosV5;
@property BOOL useSSL; // @synthesize useSSL=_useSSL;
@property long long serverPort; // @synthesize serverPort=_serverPort;
@property(retain) NSString *serverName; // @synthesize serverName=_serverName;
@property(retain) NSString *loginName; // @synthesize loginName=_loginName;
@property(retain) NSString *accountType; // @synthesize accountType=_accountType;
- (void).cxx_destruct;

@end
