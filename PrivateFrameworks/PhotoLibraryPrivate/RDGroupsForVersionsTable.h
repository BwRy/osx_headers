//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDGroupsForVersionsTable : RDTable
{
    LiKeyPath *_groupIdKeyPath;
    LiKeyPath *_versionIdKeyPath;
    LiKeyPath *_versionUuidKeyPath;
    LiKeyPath *_relationshipTypeKeyPath;
}

+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *relationshipTypeKeyPath; // @synthesize relationshipTypeKeyPath=_relationshipTypeKeyPath;
@property(readonly, nonatomic) LiKeyPath *versionUuidKeyPath; // @synthesize versionUuidKeyPath=_versionUuidKeyPath;
@property(readonly, nonatomic) LiKeyPath *versionIdKeyPath; // @synthesize versionIdKeyPath=_versionIdKeyPath;
@property(readonly, nonatomic) LiKeyPath *groupIdKeyPath; // @synthesize groupIdKeyPath=_groupIdKeyPath;
- (void).cxx_destruct;
- (id)defaultLoadPropertyPaths;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (id)notifyUpdateKeyPaths;
- (unsigned long long *)faultedKeyPath;
- (unsigned long long *)faultedModelKeyPath;

@end

