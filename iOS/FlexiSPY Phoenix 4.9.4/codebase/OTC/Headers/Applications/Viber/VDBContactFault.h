/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MTLModel.h"

//#import "MTLManagedObjectSerializing-Protocol.h"

@class NSNumber;

@interface VDBContactFault : MTLModel //<MTLManagedObjectSerializing>
{
    NSNumber *_recordID;
}

+ (id)propertyKeysForManagedObjectUniquing;
+ (id)managedObjectKeysByPropertyKey;
+ (id)managedObjectEntityName;
@property(copy, nonatomic) NSNumber *recordID; // @synthesize recordID=_recordID;
//- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

