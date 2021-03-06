//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MCActivityTarget-Protocol.h"

@class MCActivityMonitor, NSData, NSString;

@interface ImageConverter : NSObject <MCActivityTarget>
{
    struct CGRect _targetBounds;
    BOOL _forceConversionToJPEG;
    unsigned int _sourceFileType;
    NSData *_resultImageData;
    id /*<ImageConverterDelegate>*/ _delegate;
    id _representedObject;
    unsigned long long _maxFileBytes;
    NSData *_sourceData;
    NSString *_resultUTI;
    MCActivityMonitor *_monitor;
    struct CGSize _resultImageSize;
}

+ (struct CGSize)scaleSize:(struct CGSize)arg1 toContainSize:(struct CGSize)arg2;
+ (struct CGSize)scaleSize:(struct CGSize)arg1 toFitSize:(struct CGSize)arg2;
+ (BOOL)isFileResizableImage:(id)arg1;
@property(retain, nonatomic) MCActivityMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) NSString *resultUTI; // @synthesize resultUTI=_resultUTI;
@property(readonly, nonatomic) unsigned int sourceFileType; // @synthesize sourceFileType=_sourceFileType;
@property(readonly, copy, nonatomic) NSData *sourceData; // @synthesize sourceData=_sourceData;
@property(nonatomic) unsigned long long maxFileBytes; // @synthesize maxFileBytes=_maxFileBytes;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) __weak id /*<ImageConverterDelegate>*/ delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize resultImageSize; // @synthesize resultImageSize=_resultImageSize;
@property(retain, nonatomic) NSData *resultImageData; // @synthesize resultImageData=_resultImageData;
@property(nonatomic) BOOL forceConversionToJPEG; // @synthesize forceConversionToJPEG=_forceConversionToJPEG;
//- (void).cxx_destruct;
- (void)_convert;
- (void)_didFinishConversionWithResultCode:(id)arg1;
@property(readonly, copy, nonatomic) NSString *resultMimeType;
@property(readonly, copy, nonatomic) NSString *resultFileExtension;
- (void)cancel;
@property(readonly, nonatomic) BOOL isConverting;
- (void)convert;
@property(nonatomic) struct CGSize targetImageSize;
- (id)init;
- (id)initWithImageData:(id)arg1 sourceFileType:(unsigned int)arg2;
- (id)invocationQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

