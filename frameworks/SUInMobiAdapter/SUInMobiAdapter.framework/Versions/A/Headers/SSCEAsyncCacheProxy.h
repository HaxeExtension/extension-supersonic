//
//  SSCEAsyncCacheProxy.h
//  CacheEngine
//
//  Created by yossi mozgerashvily on 8/23/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSCEDefs.h"
#import "SSCEAsyncCacheP.h"

@protocol SSCECacheP, SSCEAsyncCacheDelegateP;

@interface SSCEAsyncCacheProxy : NSObject <SSCEAsyncCacheP>

-(instancetype) init __attribute__((unavailable("init not available")));
- (instancetype) initWithCache:(id<SSCECacheP>)cache delegate:(id<SSCEAsyncCacheDelegateP>)delegate;
@property (readonly) SSCESize maxSize;
@property (readonly) SSCESize currentSize;
@property (readonly) id<SSCEAsyncCacheDelegateP> delegate;
@property (readonly) id<SSCECacheP> targetCache;

@end