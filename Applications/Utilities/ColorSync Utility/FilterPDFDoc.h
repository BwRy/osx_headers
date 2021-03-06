//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FilterDoc.h"

@class QuartzFilter;

@interface FilterPDFDoc : FilterDoc
{
    struct CGPDFDocument *_pdfDocument;
    long long _pdfPageCount;
    long long _currentPDFPage;
    QuartzFilter *_pdfxFilter;
    struct __CFDictionary *_origInfo;
}

- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (void)setWholeDocumentAndSettings:(id)arg1;
- (void)setWholeDocument:(void *)arg1;
- (id)wholeDocumentAndSettings;
- (struct CGSize)originalSize;
- (BOOL)writeExportDataToURL:(id)arg1 data:(void *)arg2 info:(void *)arg3;
- (void *)exportData:(int)arg1 operation:(unsigned long long)arg2;
- (struct __CFArray *)convertPDFDocumentToImageArray:(struct CGColorSpace *)arg1 count:(long long)arg2;
- (struct CGImage *)convertPageToImage:(unsigned long long)arg1 colorSpace:(struct CGColorSpace *)arg2;
- (BOOL)okToWriteMultiPage;
- (void)applyFilterAndScaleImage:(id)arg1;
- (struct __CFDictionary *)origInfo;
- (void)setOrigInfo:(struct __CFDictionary *)arg1;
- (void)setPDFDocument:(struct CGPDFDocument *)arg1;
- (long long)pageCount;
- (void)setFilterPage:(long long)arg1;
- (long long)filterPage;
- (void *)filterDocument;
- (int)filterDocumentType;
- (BOOL)softProof;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)writePDFToURL:(id)arg1 doc:(struct CGPDFDocument *)arg2 filter:(id)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)windowControllerDidLoadNib:(id)arg1;
- (void)dealloc;

@end

