//
//  SSEDeviceStatus.h
//  RewardedVideo
//
//  Created by yossi mozgerashvily on 10/19/15.
//  Copyright © 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSEConnectionType.h"


@interface SSEDeviceStatus : NSObject

@property (readonly) NSString*              advertiserId;
@property (readonly) NSString*              language;
@property (readonly) uint64_t               diskFreeSizeInMegaBytes;
@property (readonly) BOOL                   limitAdTrackingEnabled;
@property (readonly) NSString*              carrier;
@property (readonly) SSEConnectionType      connectionType;
@property (readonly) int64_t                localTime; //milliseconds since the 1st of January 1970
@property (readonly) NSInteger              timezoneOffset; //offset in minutes from GMT
@property (readonly) BOOL                   jailBroken;
@property (readonly) NSString*              systemVersion;
@property (readonly) NSNumber*              batteryLevel;

@end
