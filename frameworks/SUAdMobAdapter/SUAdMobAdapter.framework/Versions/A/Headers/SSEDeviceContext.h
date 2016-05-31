//
//  SSEDeviceContext.h
//  RewardedVideo
//
//  Created by yossi mozgerashvily on 10/19/15.
//  Copyright © 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SSEDeviceContext : NSObject

+ (SSEDeviceContext*) defaultDeviceContext;

@property NSString*     deviceOSName;
@property NSString*     deviceOSVersion;
@property NSString*     deviceModel;
@property NSString*     deviceOEM;

@end
