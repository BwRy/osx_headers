//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiFilter.h>

@interface LiFilter_AnyText : LiFilter
{
    unsigned char _comparator;
    id _argument;
}

@property(retain, nonatomic) id argument; // @synthesize argument=_argument;
@property(nonatomic) unsigned char comparator; // @synthesize comparator=_comparator;
- (void).cxx_destruct;
- (void)encodeToConsumer:(id)arg1 forLibrary:(id)arg2;
- (id)initWithDataProvider:(id)arg1 forLibrary:(id)arg2;
- (int)LiClassCode;
- (id)description;
- (unsigned char)filterType;
- (id)initWithTable:(id)arg1 comparator:(unsigned char)arg2 argument:(id)arg3;

@end
