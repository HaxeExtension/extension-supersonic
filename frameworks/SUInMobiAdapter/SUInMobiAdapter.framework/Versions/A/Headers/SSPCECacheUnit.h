//
//  SSPCECacheUnit.h
//  PreCacheEngine
//
//  Created by Mira Weiss on 18/01/2016.
//  Copyright © 2016 Mira Weiss. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSPCECacheAssetDescriptor.h"

@interface SSPCECacheUnit : NSObject

@property NSString* ID;
@property NSDictionary<NSString*,SSPCECacheAssetDescriptor*>* cacheAssetDescriptors;
@property NSDate* update; //last time cache unit updated

@end
