//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FigCaptionLayer, QTCALayerRenderer, QTMovie, QTSubtitleLayer;

__attribute__((visibility("hidden")))
@interface QTMovieLayerPrivate : NSObject
{
    QTCALayerRenderer *consumer;
    QTMovie *movie;
    QTSubtitleLayer *subtitleLayer;
    FigCaptionLayer *closedCaptionLayer;
}

@end

