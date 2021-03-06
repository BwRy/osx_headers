//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImage, NSImageView;

@interface IMProgressView : NSView
{
    NSImage *_progressImage;
    NSImage *_trackImage;
    double _progress;
    NSImageView *_trackImageView;
    NSImageView *_progressImageView;
}

@property(retain, nonatomic) NSImageView *progressImageView; // @synthesize progressImageView=_progressImageView;
@property(retain, nonatomic) NSImageView *trackImageView; // @synthesize trackImageView=_trackImageView;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSImage *trackImage; // @synthesize trackImage=_trackImage;
@property(retain, nonatomic) NSImage *progressImage; // @synthesize progressImage=_progressImage;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)updateTrackImage;
- (void)updateProgressImageAnimated:(BOOL)arg1;
- (void)setProgress:(double)arg1 animated:(BOOL)arg2;
- (void)performLayout;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

