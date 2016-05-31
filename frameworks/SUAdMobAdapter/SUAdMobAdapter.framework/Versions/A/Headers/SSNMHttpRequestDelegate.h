//
//  SSNMHttpRequestDelegate.h
//  NetworkManager
//
//  Created by yossi mozgerashvily on 7/20/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#ifndef NetworkManager_SSNMHttpRequestDelegate_h
#define NetworkManager_SSNMHttpRequestDelegate_h

@class SSNMHttpResponse;
@class SSNMHttpRequest;
@class NSError;

@protocol SSNMHttpRequestDelegate

@required

- (void) onBeforeSendRequestWithUrl:(NSURL*)url
                        withHeaders:(NSDictionary*)dictionary
                           withBody:(NSData*)data
                        withTimeout:(float)timeOut;
- (void) onRetry:(SSNMHttpRequest*)request;
- (void) onSuccessWithRequest:(SSNMHttpRequest*)request withResponse:(SSNMHttpResponse*)response;
- (void) onFailureWithRequest:(SSNMHttpRequest*)request withError:(NSError*)error;

@end

#endif
