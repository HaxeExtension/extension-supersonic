//
//  SSVPProgressIndicator.h
//  VideoPlayer
//
//  Created by yossi mozgerashvily on 9/9/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SSVPProgressIndicator : NSObject

@property NSUInteger numberOfFrames;
@property NSUInteger frameIndex;
@property float duration; //asset deration in seconds
@property float time; //in seconds
@property float percents; // 0 to 100
@property float triggerInterval; // the interval when indicators are triggered (in seconds)

@end