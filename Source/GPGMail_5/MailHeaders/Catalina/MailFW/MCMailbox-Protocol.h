//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ECMailbox-Protocol.h>
//#import <Mail/NSCopying-Protocol.h>

@class NSString;

@protocol MCMailbox <ECMailbox, NSCopying>
@property(readonly, nonatomic) BOOL useTotalInsteadOfUnread;
@property BOOL useStatusCounts;
@property(readonly) BOOL unseenCountIsKnown;
@property(readonly) unsigned long long unseenCount;
@property(readonly, copy, nonatomic) NSString *URLString;
@property(readonly, copy, nonatomic) NSString *extendedDisplayNameWithoutPII;
@property(readonly, copy, nonatomic) NSString *extendedDisplayName;
@property(readonly, copy, nonatomic) NSString *displayNameWithoutPII;
@property(readonly, copy, nonatomic) NSString *displayName;
- (void)setUserInfoObject:(id)arg1 forKey:(NSString *)arg2;
- (id)userInfoObjectForKey:(NSString *)arg1;
- (void)setUserInfoBool:(BOOL)arg1 forKey:(NSString *)arg2;
- (BOOL)userInfoBoolForKey:(NSString *)arg1;
- (void)queueUpdateDisplayCountFromStatus:(unsigned long long)arg1;
@end

