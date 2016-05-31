//
//  SSNMHttpRequest.h
//  NetworkManager
//
//  Created by yossi mozgerashvily on 7/20/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSNMNetworkRequest.h"
#import "SSNMHttpRequestMethod.h"
#import "SSNMDefs.h"

@protocol SSNMRetriesDescriptor;
@protocol SSNMHttpRequestDelegate;
@class SSNMHttpResponse;

@interface SSNMHttpRequest : NSObject <SSNMNetworkRequest>

SSNM_NO_INIT

@property NSString* ID; //optional
@property NSUInteger requestTimeout;
@property NSUInteger resourceTimeout;
@property SSNMPriority priority;
@property NSURL* url;
@property SSNMHttpRequestMethod method;
@property (weak) id<SSNMHttpRequestDelegate> delegate;

- (instancetype) initWithRequestMethod:(SSNMHttpRequestMethod)requestMethod
                               withUrl:(NSURL*)url;
- (instancetype) initWithRequestMethod:(SSNMHttpRequestMethod)requestMethod
                               withUrl:(NSURL*)url
                 withRetriesDescriptor:(id<SSNMRetriesDescriptor>)retriesDescriptor;
- (void) addHeaderWithKey:(NSString*)key withValue:(NSString*)value;
- (void) addQueryParameterWithkey:(NSString*)key withValue:(NSString*)value;
- (void) setBodyWithInput:(NSData*)input;

- (BOOL) execute;
- (BOOL) cancel;
- (void) run;

@end

