//
//  SSEReachabilityNotifier.h
//  Environment
//
//  Created by Yotam Ohayon on 02/03/2016.
//  Copyright © 2016 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSEReachability.h"

@protocol SSEReachabilityNotifierP <NSObject>

@required
- (void)reachabilityChanged:(SSEReachability *)reachability;

@end

@interface SSEReachabilityNotifier : NSObject

- (SSENetworkStatus)currentReachabilityStatus;
- (instancetype)initWithDelegate:(id<SSEReachabilityNotifierP>)delegate;

@end
