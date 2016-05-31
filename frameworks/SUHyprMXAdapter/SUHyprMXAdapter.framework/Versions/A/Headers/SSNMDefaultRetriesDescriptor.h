//
//  SSNMDefaultRetriesDescriptor.h
//  NetworkManager
//
//  Created by Mira Weiss on 26/11/2015.
//  Copyright © 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSNMRetriesDescriptor.h"

@interface SSNMDefaultRetriesDescriptor : NSObject  <SSNMRetriesDescriptor>

-(SSNMPriority) nextPriority:(SSNMPriority)currentPriority;
-(BOOL) validResponse:(SSNMHttpResponse*)response error:(NSError**)error;
@property NSUInteger retryDelay;
@property NSUInteger maxRetries;

@property NSUInteger priorityIncrement;
@property BOOL       validResponse;

@end
