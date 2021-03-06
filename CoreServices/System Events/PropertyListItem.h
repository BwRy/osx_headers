//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Element.h"

@class NSMutableArray;

@interface PropertyListItem : Element
{
    id _value;
    long long _kind;
    NSMutableArray *_plistItems;
}

+ (id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4;
- (void)insertInPlistItems:(id)arg1;
- (void)insertInPlistItems:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)valueInPlistItemsWithName:(id)arg1;
- (id)valueInPlistItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfPlistItems;
- (id)plistItems;
- (id)scriptingProperties;
- (id)contents;
- (void)setText:(id)arg1;
- (id)text;
- (void)setValue:(id)arg1;
- (id)evaluateDescriptor:(id)arg1;
- (void)propogateValue:(id)arg1;
- (void)privateSetValue:(id)arg1;
- (id)value;
- (void)setKind:(long long)arg1;
- (long long)kind;
- (void)dealloc;
- (id)initPropertyListItemWithParent:(id)arg1 andSiblings:(id)arg2;
- (id)init;
- (id)objectSpecifier;

@end

