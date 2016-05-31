//
//  SSCEFileCache.h
//  CacheEngine
//
//  Created by yossi mozgerashvily on 8/20/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSCECache.h"

@interface SSCEFileCache : SSCECache

-(instancetype) init __attribute__((unavailable("init not available")));

/**
 *  This method can take relatively long time (more than few millseconds) , depending on the current state
 * of the cache in the file system.
 * If it is being called from a thread that shouldn't be blocked than it should be called asynchronously.
 *
 * prameter:maxSize is in bytes.
 */
- (instancetype) initWithMaxSize:(SSCESize) maxSize rootPath:(NSString*)rootPath;
- (NSString*) objectPathAtId:(SSCEUid) uid error:(NSError**) error;
- (NSDictionary <NSString*, SSCECacheObjectMetadata*>*)allObjectsMetadataAndIds;


@end