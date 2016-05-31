//
//  MoatAdEvent.h
//  MoatMobileAppKit
//
//  Created by Moat on 2/5/16.
//  Copyright © 2016 Moat. All rights reserved.
//
//  This class is simply a data object that encapsulates info relevant to a particular playback event.

#import <Foundation/Foundation.h>

typedef enum MBRXMoatAdEventType : NSUInteger {
    MOAT_AD_EVT_COMPLETE
    , MOAT_AD_EVT_START
    , MOAT_AD_EVT_FIRST_QUARTILE
    , MOAT_AD_EVT_MID_POINT
    , MOAT_AD_EVT_THIRD_QUARTILE
    , MOAT_AD_EVT_SKIPPED
    , MOAT_AD_EVT_STOPPED
    , MOAT_AD_EVT_PAUSED
    , MOAT_AD_EVT_PLAYING
    , MOAT_AD_EVT_VOLUME_CHANGE
    , MOAT_AD_EVT_NONE
} MBRXMoatAdEventType;

static NSTimeInterval const MOAT_TIME_UNAVAILABLE = NAN;
static float const MOAT_VOLUME_UNAVAILABLE = NAN;

@interface MBRXMoatAdEvent : NSObject

@property MBRXMoatAdEventType eventType;
@property NSTimeInterval adPlayhead;
@property float adVolume;
@property (readonly) NSTimeInterval timeStamp;

- (id)initWithType:(MBRXMoatAdEventType)eventType withPlayheadMillis:(NSTimeInterval)playhead;
- (id)initWithType:(MBRXMoatAdEventType)eventType withPlayheadMillis:(NSTimeInterval)playhead withVolume:(float)volume;
- (NSDictionary *)asDict;
- (NSString *)eventAsString;

@end
