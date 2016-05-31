//
//  SSCECacheObject.h
//  CacheEngine
//
//  Created by yossi mozgerashvily on 8/18/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSCECacheObject.h"
#import "SSCECacheObjectMetadata.h"

@interface SSCECacheObject : NSObject <NSCopying>

-(instancetype) init __attribute__((unavailable("init not available")));
-(instancetype) initWithMetadata:(SSCECacheObjectMetadata*)metadata data:(NSData*)data;

@property (atomic,copy,readonly) SSCECacheObjectMetadata* metadata;
@property (atomic,copy,readonly) NSData*  data;

@end