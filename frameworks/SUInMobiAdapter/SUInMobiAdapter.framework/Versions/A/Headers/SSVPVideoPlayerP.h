//
//  SSVPVideoPlayerP.h
//  VideoPlayer
//
//  Created by yossi mozgerashvily on 9/9/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#ifndef VideoPlayer_SSVPVideoPlayerP_h
#define VideoPlayer_SSVPVideoPlayerP_h

@import UIKit;
#import <CoreMedia/CMTime.h>

@protocol SSVPVideoPlayerDelegateP;
@class NSError, UIView;

typedef NS_ENUM(NSUInteger, SSVPPlaybackState) {
    SSVPPlaybackStateIdle,          //The player is initialized but is not ready to play
    SSVPPlayBackStateReadyToPlay,   //The player can play a video , but it is not playing
    SSVPPlaybackStatePlaying,       //The player started to play a video and is currently playing (not paused)
    SSVPPlaybackStatePaused,        //The player started to play a video but is currently paused
    SSVPPlaybackStateNotUsable      //The player is not usable due to an error that occurred
};

@protocol SSVPVideoPlayerP

@required

- (void)prepare;

- (void)startWithError:(NSError**)error;

- (void)stopWithError:(NSError**)error;

- (void)pauseWithError:(NSError**)error;

- (void)resumeWithError:(NSError**)error;

- (void)rewindWithError:(NSError**)error;

- (void)muteWithError:(NSError**)error;

- (void)unmuteWithError:(NSError**)error;

- (SSVPPlaybackState) playbackState;

@property (readonly) UIView* playerView;
@property CMTime trackingVideoTimerInterval; //the time interval, which a block handler invokes when the video playback is playing.
@property UIApplicationState applicationStateForPlaying; //video player will play under the configured application state

@end

#endif
