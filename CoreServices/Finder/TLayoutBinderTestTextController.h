//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLayoutBinderTestViewController.h"

@class NSString, TLayoutBinder, TLayoutBinderTestBox, TTextField;

@interface TLayoutBinderTestTextController : TLayoutBinderTestViewController
{
    TLayoutBinderTestBox *_slaveBox;
    TTextField *_masterTextField;
    TLayoutBinder *_masterTextFieldLayoutBinder;
    NSString *_text;
    struct CGRect _initialSlaveFrame;
    struct CGRect _initialMasterFrame;
}

- (id).cxx_construct;
- (_Bool)runTest:(_Bool *)arg1;
- (void)reset;
- (void)setIsFlipped:(BOOL)arg1;
- (void)dealloc;
- (void)viewLoaded;

@end
