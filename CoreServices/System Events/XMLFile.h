//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "File.h"

@class NSScriptObjectSpecifier, XMLData;

@interface XMLFile : File
{
    XMLData *_contents;
    NSScriptObjectSpecifier *_spoofObjectSpecifier;
}

- (void)setSpoofObjectSpecifier:(id)arg1;
- (id)spoofObjectSpecifier;
- (id)contents;
- (void)dealloc;
- (id)initXMLFileWithParent:(id)arg1 andURL:(id)arg2;
- (id)init;
- (id)objectSpecifier;

@end

