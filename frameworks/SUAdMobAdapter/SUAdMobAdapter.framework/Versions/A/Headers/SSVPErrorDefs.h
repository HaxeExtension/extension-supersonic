//
//  SSVPErrorDefs.h
//  VideoPlayer
//
//  Created by Mira Weiss on 14/02/2016.
//  Copyright © 2016 Supersonic. All rights reserved.
//

#ifndef SSVPErrorDefs_h
#define SSVPErrorDefs_h

#define SSVP_DOMAIN @"com.supersonic.ssvp"

#define SSVP_ERROR_CODE_PLAYBACK_STATE_INCOMPATIBLE             0
#define SSVP_ERROR_CODE_PLAYER_ITEM_STATUS_FAILED               1
#define SSVP_ERROR_CODE_VIDEO_PLAYER_FAILED_TO_PROGRESS         2
#define SSVP_ERROR_CODE_VIDEO_PLAYER_IS_NIL_ON_ACTION           3

#define SSVP_ERROR(_code,_desc) [[NSError alloc] initWithDomain:SSVP_DOMAIN  \
code:_code \
userInfo:@{NSLocalizedDescriptionKey : _desc}];

#endif /* SSVPErrorDefs_h */
