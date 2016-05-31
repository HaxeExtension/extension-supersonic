//
//  SSEApplicationContext.h
//  RewardedVideo
//
//  Created by yossi mozgerashvily on 10/19/15.
//  Copyright © 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSEOrientation.h"

@interface SSEApplicationContext : NSObject

+ (SSEApplicationContext*) defaultApplicationContext;

@property NSString* applicationBundleId;
@property SSEOrientation applicationOrientation;
@property NSString* filePathCacheDirectory;

@end
