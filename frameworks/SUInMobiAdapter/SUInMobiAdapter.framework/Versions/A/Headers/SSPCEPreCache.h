//
//  PreCacheEngine.h
//  PreCacheEngine
//
//  Created by Mira Weiss on 17/01/2016.
//  Copyright © 2016 Mira Weiss. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSPCEPreCacheP.h"

@class SSCEFileCache;

@interface SSPCEPreCache : NSObject <SSPCEPreCacheP>

-(instancetype) init __attribute__((unavailable("init not available")));
-(instancetype) initWithFileCache:(SSCEFileCache *)fileCache;

@property (weak) id<SSPCEPreCacheDelegate> delegate;

@end
