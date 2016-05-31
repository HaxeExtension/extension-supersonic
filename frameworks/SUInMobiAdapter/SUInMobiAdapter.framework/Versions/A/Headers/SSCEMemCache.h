//
//  SSCEMemCache.h
//  CacheEngine
//
//  Created by yossi mozgerashvily on 8/19/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSCECache.h"

@interface SSCEMemCache : SSCECache

-(instancetype) init __attribute__((unavailable("init not available")));
- (instancetype) initWithMaxSize:(SSCESize)maxSize;

@end