//
//  SSPCECacheAssetDescriptor.h
//  PreCacheEngine
//
//  Created by Mira Weiss on 18/01/2016.
//  Copyright © 2016 Mira Weiss. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SSPCECacheAssetDescriptor : NSObject

@property NSString* fileName;//this is unique ID of CacheAssetDescriptor
@property NSURL* url;
@property NSString* filePath; //path in file system for the data of the downloaded url
@property float size; //asset size in bytes

@end
