//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICUWrapper : NSObject
{
    CDUnknownFunctionPointerType stub_ubrk_close;
    CDUnknownFunctionPointerType stub_ubrk_following;
    CDUnknownFunctionPointerType stub_ubrk_open;
    CDUnknownFunctionPointerType stub_ubrk_setText;
    CDUnknownFunctionPointerType stub_uloc_getKeywordValue;
    CDUnknownFunctionPointerType stub_ures_close;
    CDUnknownFunctionPointerType stub_ures_getByKey;
    CDUnknownFunctionPointerType stub_ures_getByKeyWithFallback;
    CDUnknownFunctionPointerType stub_ures_getSize;
    CDUnknownFunctionPointerType stub_ures_getStringByIndex;
    CDUnknownFunctionPointerType stub_ures_open;
}

+ (id)sharedICUWrapper;
- (struct UResourceBundle *)ures_open:(const char *)arg1 locale:(const char *)arg2 status:(int *)arg3;
- (const unsigned short *)ures_getStringByIndex:(struct UResourceBundle *)arg1 indexS:(int)arg2 len:(int *)arg3 status:(int *)arg4;
- (int)ures_getSize:(struct UResourceBundle *)arg1;
- (struct UResourceBundle *)ures_getByKeyWithFallback:(struct UResourceBundle *)arg1 key:(const char *)arg2 fillIn:(struct UResourceBundle *)arg3 status:(int *)arg4;
- (struct UResourceBundle *)ures_getByKey:(struct UResourceBundle *)arg1 key:(const char *)arg2 fillIn:(struct UResourceBundle *)arg3 status:(int *)arg4;
- (void)ures_close:(struct UResourceBundle *)arg1;
- (int)uloc_getKeywordValue:(const char *)arg1 keywordName:(const char *)arg2 buffer:(char *)arg3 bufferCapacity:(int)arg4 status:(int *)arg5;
- (void)ubrk_setText:(void *)arg1 text:(const unsigned short *)arg2 textLength:(int)arg3 status:(int *)arg4;
- (void *)ubrk_open:(int)arg1 locale:(const char *)arg2 text:(const unsigned short *)arg3 textLength:(int)arg4 status:(int *)arg5;
- (int)ubrk_following:(void *)arg1 offset:(int)arg2;
- (void)ubrk_close:(void *)arg1;
- (id)init;

@end
