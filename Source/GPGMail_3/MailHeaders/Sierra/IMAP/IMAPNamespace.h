//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSArray, NSString;

@interface IMAPNamespace : NSObject
{
    NSString *_prefix;	// 8 = 0x8
    NSString *_separator;	// 16 = 0x10
    NSArray *_extensions;	// 24 = 0x18
}

@property(copy, nonatomic) NSArray *extensions; // @synthesize extensions=_extensions;
@property(copy, nonatomic) NSString *separator; // @synthesize separator=_separator;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (void).cxx_destruct;	// IMP=0x0000000000044d70
- (id)description;	// IMP=0x0000000000044c15

@end

