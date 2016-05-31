//
//  SSVPVideoPlayer.h
//  VideoPlayer
//
//  Created by yossi mozgerashvily on 9/9/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSVPVideoPlayerP.h"


@interface SSVPVideoPlayer : NSObject <SSVPVideoPlayerP>

-(instancetype) init __attribute__((unavailable("init not available")));

- (instancetype)initWithUrl:(NSURL*)url parentView:(UIView*)parentView delegate:(id<SSVPVideoPlayerDelegateP>) delegate;

- (void) setVideoTimeToleranceWhenBackToForeground:(CMTime)toleranceBefore toleranceAfter:(CMTime)toleranceAfter;

@property (readonly) UIView* playerView;
@property CMTime trackingVideoTimerInterval;
@property NSInteger applicationStateForPlaying;
@property (nonatomic, assign) BOOL continueWhenAudioLineUnplugged;

@end