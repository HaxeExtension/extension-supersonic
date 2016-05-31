//
//  SSVPVideoPlayerDelegateP.h
//  VideoPlayer
//
//  Created by yossi mozgerashvily on 9/9/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#ifndef VideoPlayer_SSVPVideoPlayerDelegateP_h
#define VideoPlayer_SSVPVideoPlayerDelegateP_h

@protocol SSVPVideoPlayerP;
@class SSVPProgressIndicator;

@protocol SSVPVideoPlayerDelegateP

@required

- (void) dVideoPlayerPrepared:(id<SSVPVideoPlayerP>)sender;
- (void) dVideoPlayerFailedToPrepareWithError:(id<SSVPVideoPlayerP>)sender error:(NSError*)error;

//Invoked when the first video frame has been made ready for display.
//Until then, layer will not have any user-visible content.
- (void) dVideoPlayerReadyForDisplay:(id<SSVPVideoPlayerP>)sender;

- (void) dVideoPlayerStarted:(id<SSVPVideoPlayerP>)sender;
- (void) dVideoPlayerStopped:(id<SSVPVideoPlayerP>)sender;
- (void) dVideoPlayerResumed:(id<SSVPVideoPlayerP>)sender;
- (void) dVideoPlayerPaused:(id<SSVPVideoPlayerP>)sender;
- (void) dVideoPlayerRewinded:(id<SSVPVideoPlayerP>)sender;
- (void) dVideoPlayerProgress:(id<SSVPVideoPlayerP>)sender indicator:(SSVPProgressIndicator*)indicator;
- (void) dVideoPlayerFailedToProgressWithError:(id<SSVPVideoPlayerP>)sender error:(NSError*)error;
- (void) dVideoPlayerEnded:(id<SSVPVideoPlayerP>)sender;

@end

#endif
