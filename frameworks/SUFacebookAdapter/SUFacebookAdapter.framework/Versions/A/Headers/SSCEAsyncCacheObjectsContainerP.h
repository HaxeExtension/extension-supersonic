//
//  SSCEAsyncCacheObjectsContainerP.h
//  CacheEngine
//
//  Created by yossi mozgerashvily on 8/25/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#ifndef CacheEngine_SSCEAsyncCacheObjectsContainerP_h
#define CacheEngine_SSCEAsyncCacheObjectsContainerP_h

@protocol SSCEAsyncCacheDelegateP , SSCECacheP;
@class SSCECacheObjectMetadata, SSCECacheObject;

@protocol SSCEAsyncCacheObjectsContainerP <NSObject>

@required

- (void) addObject:(SSCECacheObject*)object;
- (void) removeObjectAtId:(SSCEUid)uid;
- (void) objectAtId:(SSCEUid)uid;
- (void) objectMetadataAtId:(SSCEUid)uid;
- (void) reset;

@property (readonly) id<SSCEAsyncCacheDelegateP> delegate;
@property (readonly) id<SSCECacheP> targetCache;

@end

#endif