//
//  SSCEAsyncCacheDelegate.h
//  CacheEngine
//
//  Created by yossi mozgerashvily on 8/23/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#ifndef CacheEngine_SSCEAsyncCacheDelegate_h
#define CacheEngine_SSCEAsyncCacheDelegate_h

#import "SSCEDefs.h"

@protocol SSCECacheObject, SSCECacheObjectMetadata;
@class NSError;

@protocol SSCEAsyncCacheDelegateP

@optional

- addObjectCompleted:(SSCEAsyncCacheProxy*)sender cacheObject:(SSCECacheObject*)cacheObject error:(NSError*)error;
- removeObjectCompleted:(SSCEAsyncCacheProxy*)sender cacheObjectId:(SSCEUid)cacheObjectUid error:(NSError*)error;
- objectAtIdCompleted:(SSCEAsyncCacheProxy*)sender cacheObjectId:(SSCEUid)cacheObjectUid cacheObject:(SSCECacheObject*)cacheObject error:(NSError*)error;
- objectMetadataAtIdCompleted:(SSCEAsyncCacheProxy*)sender cacheObjectId:(SSCEUid)cacheObjectUid cacheObject:(SSCECacheObjectMetadata*)cacheObject error:(NSError*)error;
- resetCompleted:(SSCEAsyncCacheProxy*)sender error:(NSError*)error;

@end

#endif