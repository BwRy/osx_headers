//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@interface RDSearchableProperty : RDModel
{
}

+ (void)deleteUnusedStringsForDatabase:(id)arg1;
+ (id)renameCustomProperty:(id)arg1 toProperty:(id)arg2 inDatabase:(id)arg3;
+ (id)removeFromAllVersionsCustomProperty:(id)arg1 inDatabase:(id)arg2;
+ (void)addCustomProperty:(id)arg1 inDatabase:(id)arg2;
+ (unsigned long long)countOfVersionsUsingCustomProperty:(id)arg1 inDatabase:(id)arg2;
+ (id)allCustomPropertyKeysForDatabase:(id)arg1;
+ (void)removeSearchablePropertyFromDatabase:(id)arg1 forKey:(id)arg2 type:(unsigned short)arg3 versionId:(id)arg4;
+ (void)updateBasicProperties:(id)arg1 inDatabase:(id)arg2 versionId:(id)arg3;
+ (void)updateSearchableProperties:(id)arg1 inDatabase:(id)arg2 type:(unsigned short)arg3 versionId:(id)arg4;
+ (id)_convertStringPropertiesToStringIds:(id)arg1 forDatabase:(id)arg2;
+ (void)updateSearchableProperty:(id)arg1 inDatabase:(id)arg2 forKey:(id)arg3 type:(unsigned short)arg4 faceNameId:(id)arg5;
+ (void)updateSearchableProperty:(id)arg1 inDatabase:(id)arg2 forKey:(id)arg3 type:(unsigned short)arg4 versionId:(id)arg5;
+ (id)numberPropertyForValue:(id)arg1 withValueType:(unsigned char)arg2;
+ (id)stringPropertyForValue:(id)arg1 withValueType:(unsigned char)arg2;
+ (unsigned char)propertyValueTypeFromKey:(id)arg1 propertyType:(unsigned short)arg2;
+ (BOOL)isBasicPropertyKey:(id)arg1;
+ (id)convertKeyPath:(id)arg1 toKeyAndType:(unsigned short *)arg2;
+ (id)prefixForKeyPath:(id)arg1;
+ (unsigned char)propertyValueTypeForKeyPath:(id)arg1;
+ (id)keyPathForKey:(id)arg1 propertyType:(unsigned short)arg2;
+ (id)stringFromPropertyType:(unsigned short)arg1;
+ (unsigned short)propertyTypeForKeyPath:(id)arg1;
+ (unsigned short)propertyTypeFromString:(id)arg1;
+ (id)reusablePropertyKey:(id)arg1;
+ (void)initialize;
- (id)initWithUuid:(id)arg1 inDatabase:(id)arg2;
- (id)initWithUuid:(id)arg1 forTable:(id)arg2;
- (id)init;

@end
