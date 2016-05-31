//
//  SSNMHttpResponse.h
//  NetworkManager
//
//  Created by yossi mozgerashvily on 7/20/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSNMDefs.h"

@interface SSNMHttpResponse : NSObject

SSNM_NO_INIT

- (instancetype) initWithStatusCode:(NSUInteger)statusCode
                        withHeaders:(NSDictionary*)headers
                           withBody:(NSData*)body;

@property (readonly) NSUInteger statusCode;
@property (readonly) NSDictionary* headers;
@property (readonly) NSData* body;

@end
