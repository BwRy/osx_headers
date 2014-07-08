//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class AUInternetModel, NSTextField;

@interface AUSmallInternetViewController : NSViewController
{
    AUInternetModel *dataModel;
    NSTextField *connection;
    NSTextField *routerAddress;
    NSTextField *connectionLabel;
    NSTextField *routerAddressLabel;
    NSTextField *dnsServersLabel;
    NSTextField *primaryDNSServerTextField;
    NSTextField *secondaryDNSServerTextField;
    NSTextField *domainNameLabel;
    NSTextField *domainNameTextField;
}

@property(retain, nonatomic) AUInternetModel *dataModel; // @synthesize dataModel;
@property NSTextField *domainNameTextField; // @synthesize domainNameTextField;
@property NSTextField *domainNameLabel; // @synthesize domainNameLabel;
@property NSTextField *secondaryDNSServerTextField; // @synthesize secondaryDNSServerTextField;
@property NSTextField *primaryDNSServerTextField; // @synthesize primaryDNSServerTextField;
@property NSTextField *dnsServersLabel; // @synthesize dnsServersLabel;
@property NSTextField *routerAddressLabel; // @synthesize routerAddressLabel;
@property NSTextField *connectionLabel; // @synthesize connectionLabel;
@property NSTextField *routerAddress; // @synthesize routerAddress;
@property NSTextField *connection; // @synthesize connection;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
