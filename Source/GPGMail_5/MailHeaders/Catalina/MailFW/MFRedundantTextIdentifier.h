//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

@class MFRedundantContentMarkup;

@interface MFRedundantTextIdentifier : NSObject
{
    MFRedundantContentMarkup *_redundantContentMarkup;
}

+ (id)_htmlMarkerForContentType:(long long)arg1;
+ (void)initialize;
+ (id)log;
@property(readonly, nonatomic) MFRedundantContentMarkup *redundantContentMarkup; // @synthesize redundantContentMarkup=_redundantContentMarkup;
//- (void).cxx_destruct;
- (id)_attachmentContextsByURLforAttachmentsByURL:(id)arg1;
- (id)init;
- (id)initWithMessage:(id)arg1 messageBody:(id)arg2 ancestorMessage:(id)arg3 ancestorMessageBody:(id)arg4;

@end

