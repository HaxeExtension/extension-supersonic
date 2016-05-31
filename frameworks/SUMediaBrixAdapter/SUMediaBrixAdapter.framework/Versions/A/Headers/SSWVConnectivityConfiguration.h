//
//  SSWVConnectivityConfiguration.h
//  WebView
//
//  Created by Mira Weiss on 06/03/2016.
//  Copyright © 2016 Mira Weiss. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSWVJsInterfaceP.h"
#import "SSWVMessageParserP.h"

@interface SSWVConnectivityConfiguration : NSObject

@property (nonatomic) NSString* messageHandlerName;
@property (nonatomic) id<SSWVJsInterfaceP> interface;
@property (nonatomic) id<SSWVMessageParserP> parser;

@end
