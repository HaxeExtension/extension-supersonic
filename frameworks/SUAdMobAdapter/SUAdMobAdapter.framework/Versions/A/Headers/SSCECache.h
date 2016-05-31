//
//  SSCECache.h
//  CacheEngine
//
//  Created by yossi mozgerashvily on 8/19/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSCECacheP.h"

@interface SSCECache : NSObject <SSCECacheP> {
    /**
     *  this value should be set only during initialization
     */
    @protected SSCESize _currentSize;
}

- (instancetype) init __attribute__((unavailable("init not available")));
- (instancetype) initWithMaxSize:(SSCESize)maxSize;
@property (readonly) SSCESize maxSize;
@property (readonly) SSCESize currentSize;

@end