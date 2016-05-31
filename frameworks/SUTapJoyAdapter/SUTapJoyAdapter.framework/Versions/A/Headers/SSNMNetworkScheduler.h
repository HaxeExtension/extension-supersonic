//
//  SSNMNetworkScheduler.h
//  NetworkManager
//
//  Created by yossi mozgerashvily on 7/14/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSNMNetworkRequest.h"
#import "SSNMInternalDefs.h"
#import "SSNMController.h"
#import "SSNMRequestContainer.h"

@interface SSNMNetworkScheduler : NSObject <SSNMRequestContainer>

@property NSUInteger numberOfThreads;
@property NSUInteger capacity;

SSNM_NO_INIT

+ (instancetype) shareInstance;
- (BOOL) addRequest:(id<SSNMNetworkRequest>)request;
- (BOOL) addRequestByForce:(id<SSNMNetworkRequest>)request;
- (BOOL) removeRequest:(id<SSNMNetworkRequest>)request;
- (void) start;
- (void) stop;
- (void) pause;
- (void) resume;

@end
