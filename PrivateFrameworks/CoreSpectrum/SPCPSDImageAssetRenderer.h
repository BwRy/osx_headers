//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSpectrum/SPCImageAssetRenderer.h>

@interface SPCPSDImageAssetRenderer : SPCImageAssetRenderer
{
}

- (id)imageWithSize:(struct CGSize)arg1;
- (void)drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)_drawNinePartInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)_drawThreePartVerticalInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)_drawThreePartHorizontalInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)_drawOnePartPSDInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;

@end

