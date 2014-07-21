//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DBButton : NSObject
{
    unsigned int _connectionID;
    unsigned int _windowID;
    NSString *_imageName;
    struct CGSize _size;
    _Bool _pressed;
    float _scaleFactor;
}

@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
- (void).cxx_destruct;
- (void)orderAbove:(unsigned int)arg1;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (void)moveTo:(struct CGPoint)arg1;
- (void)_renderWithState:(_Bool)arg1;
@property(nonatomic) float alpha; // @dynamic alpha;
@property(nonatomic) int windowLevel; // @dynamic windowLevel;
@property(readonly, nonatomic) unsigned int windowID;
- (void)dealloc;
- (id)initWithImageName:(id)arg1 andScaleFactor:(float)arg2 usingConnectionID:(unsigned int)arg3;

@end
