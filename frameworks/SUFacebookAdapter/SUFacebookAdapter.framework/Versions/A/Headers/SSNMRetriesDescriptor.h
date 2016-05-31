//
//  SSNMRetriesDescriptor.h
//  NetworkManager
//
//  Created by yossi mozgerashvily on 7/20/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#ifndef NetworkManager_SSNMRetriesDescriptor_h
#define NetworkManager_SSNMRetriesDescriptor_h

#import "SSNMDefs.h"
@class NSError;
@class SSNMHttpResponse;

@protocol SSNMRetriesDescriptor

@required

-(SSNMPriority) nextPriority:(SSNMPriority)currentPriority;
-(BOOL) validResponse:(SSNMHttpResponse*)response error:(NSError**)error;
@property NSUInteger retryDelay;
@property NSUInteger maxRetries;


@end

#endif
