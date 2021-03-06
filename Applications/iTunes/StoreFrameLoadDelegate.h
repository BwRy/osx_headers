//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface StoreFrameLoadDelegate : NSObject
{
    struct StorePageContext *mStoreContext;
    CDUnknownFunctionPointerType mLoadCompleteProc;
    struct weak_ptr<StoreXMLDisplay> mStoreXMLDisplay;
    _Bool mFixHistoryItemTitlePostLoad;
    NSString *mTitleForPostLoad;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 postProcessLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)setFixHistoryItemTitlePostLoad;
- (void)callLoadCompleteProc;
- (void)setLoadCompleteProc:(CDUnknownFunctionPointerType)arg1 andData:(shared_ptr_18972007)arg2;
- (id)initWithStoreContext:(struct StorePageContext *)arg1;

@end

