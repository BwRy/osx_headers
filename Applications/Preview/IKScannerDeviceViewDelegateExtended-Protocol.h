//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IKScannerDeviceView, NSURL;

@protocol IKScannerDeviceViewDelegateExtended

@optional
- (BOOL)handlesPostProcessingForScannerDeviceView:(IKScannerDeviceView *)arg1;
- (void)scannerDeviceViewUserWantsToUseScannedItems:(IKScannerDeviceView *)arg1 image:(struct CGImage *)arg2 imageRectInDeviceView:(struct CGRect)arg3;
- (void)scannerDeviceViewDoneButtonPressed:(IKScannerDeviceView *)arg1;
- (void)scannerDeviceViewWillBeginScanningPages:(IKScannerDeviceView *)arg1 orderReversed:(BOOL)arg2;
- (void)scannerDeviceView:(IKScannerDeviceView *)arg1 didOverviewscanToURL:(NSURL *)arg2;
@end
