//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSPrintPanelAccessorizing.h"

@class NSPDFPanel, NSPrintOperation, NSString, PVMediaContainerBase;

@interface PVPDFExportPrintingController : NSViewController <NSPrintPanelAccessorizing>
{
    BOOL _useEncryption;
    NSPDFPanel *_PDFPanel;
    NSString *_password;
    NSString *_passwordVerify;
    PVMediaContainerBase *_containerToExport;
    NSPrintOperation *_printOperation;
}

+ (id)keyPathsForValuesAffectingPasswordValidityString;
+ (id)keyPathsForValuesAffectingPasswordIsValid;
@property NSPrintOperation *printOperation; // @synthesize printOperation=_printOperation;
@property(retain) PVMediaContainerBase *containerToExport; // @synthesize containerToExport=_containerToExport;
@property(copy) NSString *passwordVerify; // @synthesize passwordVerify=_passwordVerify;
@property(copy) NSString *password; // @synthesize password=_password;
@property BOOL useEncryption; // @synthesize useEncryption=_useEncryption;
@property NSPDFPanel *PDFPanel; // @synthesize PDFPanel=_PDFPanel;
- (long long)checkPasswordValidity;
- (void)initializeApplicationDataInPrintInfo:(id)arg1;
- (id)localizedSummaryItems;
- (id)passwordValidityString;
@property(readonly) BOOL passwordIsValid;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithContainer:(id)arg1 printOperation:(id)arg2;

@end

