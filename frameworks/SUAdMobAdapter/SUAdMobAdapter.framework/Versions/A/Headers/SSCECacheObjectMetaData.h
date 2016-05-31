//
//  SSCECacheObjectMetadata.h
//  CacheEngine
//
//  Created by yossi mozgerashvily on 8/18/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSCEDefs.h"

@interface SSCECacheObjectMetadata : NSObject <NSCopying>

-(instancetype) init __attribute__((unavailable("init not available")));

-(instancetype) initWithUid:(SSCEUid)uid groupId:(SSCEUid)groupId creationTime:(NSDate*)creationTime;

- (void) encodeToData:(NSMutableData*)data;
+ (instancetype) decodeFromData:(NSData*)data;
@property (atomic,copy,readonly) SSCEUid uid;
@property (atomic,copy,readonly) SSCEUid groupId;
@property (atomic,copy,readonly) NSDate* creationTime;

@end
