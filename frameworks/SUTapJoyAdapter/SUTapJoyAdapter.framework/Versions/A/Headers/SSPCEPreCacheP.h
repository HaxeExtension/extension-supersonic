//
//  SSPCEPreCacheP.h
//  PreCacheEngine
//
//  Created by Mira Weiss on 18/01/2016.
//  Copyright © 2016 Mira Weiss. All rights reserved.
//
// A class which conform this protocol designated to download assets and save them on the device file system
//
// A delegate should be set before calling class's Async methods.
// Before use any method that cache an object, one of 'prepare' methods should be called.
// After prepare method ended successfully, prepare methods should not be called again.

#ifndef PreCacheEngine_SSPCEPreCacheP_h
#define PreCacheEngine_SSPCEPreCacheP_h

#import "SSPCEPreCacheDelegate.h"

@class SSCECacheObjectMetadata;
@class SSPCECacheUnit;

@protocol SSPCEPreCacheP <NSObject>

@property (weak) id<SSPCEPreCacheDelegate> delegate;

//Prepare synchronously PreCache instance.
-(void) prepareWithError:(NSError**)error;

//Prepare asynchronously PreCache instance.
//This method trigger delegate methods.
-(void) prepareAsync;


//Cache the unit asynchronously.
//This method should be called after a 'prepare' method ended successfully.
//This method may change filePath of assetDescriptors in cacheUnit object
-(void) cacheUnitAsync:(SSPCECacheUnit*)cacheUnit;

//Cache the unit synchronously.
//This method should be called after a 'prepare' method ended successfully.
//This method trigger delegate methods.
//This method may change filePath of assetDescriptors in cacheUnit object.
-(void) cacheUnitWithError:(NSError**)error cacheUnit:(SSPCECacheUnit*)cacheUnit;

//cache one or more units into the file system.
-(void) cacheUnitsWithError:(NSError**)error cacheUnits:(NSArray<SSPCECacheUnit *> *)cacheUnits;

//returns the representation of the files which are located in the path folder
//mapping metadata's id to SSCECacheObjectMetadata.
-(NSDictionary<NSString*, SSCECacheObjectMetadata*>*)getCachedObjectsMetadata;

//returns the representation of the files which are located in the path folder and are part of the specific cacheUnitId
-(NSDictionary<NSString*, SSCECacheObjectMetadata*> *)getCachedObjectsMetadataWithByUnitId:(NSString *)CachedUnitId;

//deletes all the files for a specific cache unit id
-(void)deleteCachedUnitWithError:(NSError **)error cachedUnitId:(NSString *)cachedUnitId;

//returns the cache size in Megabytes
-(unsigned long long)getCacheSizeInBytes;

//delete all cache
-(void)deleteCacheWithError:(NSError **)error;

//returns representation of all cached units objects and thier ids
-(NSDictionary<NSString*, SSPCECacheUnit*> *)getAllCachedUnits;

//returns cached units object by its Id
-(SSPCECacheUnit*)getCachedUnitById:(NSString *)unitId;

@end

#endif /* PreCacheEngine_SSPCEPreCacheP_h */
