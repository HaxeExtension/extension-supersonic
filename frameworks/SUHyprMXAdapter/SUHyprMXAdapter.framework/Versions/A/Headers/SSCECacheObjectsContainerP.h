//
//  SSCECacheObjectsContainerP.h
//  CacheEngine
//
//  Created by yossi mozgerashvily on 8/18/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#ifndef CacheEngine_SSCECachePObjectsContainerP_h
#define CacheEngine_SSCECachePObjectsContainerP_h

#import "SSCEDefs.h"

@class SSCECacheObjectMetadata, SSCECacheObject;

@protocol SSCECacheObjectsContainerP <NSObject>

@required

- (void) addObject:(SSCECacheObject*)object error:(NSError**)error;
- (void) removeObjectAtId:(SSCEUid)uid error:(NSError**)error;
- (SSCECacheObject*) objectAtId:(SSCEUid)uid error:(NSError**)error;
- (SSCECacheObjectMetadata*) objectMetadataAtId:(SSCEUid)uid error:(NSError**)error;
- (void) resetWithError:(NSError**)error;
- (NSArray*) allObjectsMetadataWithError:(NSError**)error;

@end

#endif