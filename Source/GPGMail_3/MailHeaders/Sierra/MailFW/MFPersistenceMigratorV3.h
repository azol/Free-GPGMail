//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@interface MFPersistenceMigratorV3 : NSObject
{
    id <MFPersistenceMigratorV3Delegate> _delegate;	// 8 = 0x8
}

@property(nonatomic) __weak id <MFPersistenceMigratorV3Delegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000000216b40
- (void)_migrateDefaults;	// IMP=0x0000000000216a17
- (id)_fixSmartMailboxCriteria:(id)arg1;	// IMP=0x0000000000216674
- (id)_updateSmartMailboxes:(id)arg1;	// IMP=0x0000000000216454
- (id)_fixCriteria:(id)arg1;	// IMP=0x0000000000215e8a
- (id)_updateRules:(id)arg1;	// IMP=0x0000000000215ba4
- (void)_migratePlistsContainingPaths;	// IMP=0x0000000000215936
- (void)_moveAccountsPlistFromV3BackToV2;	// IMP=0x00000000002151d6
- (void)migrate;	// IMP=0x0000000000214ddb

@end

