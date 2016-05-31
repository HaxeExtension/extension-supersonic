//
//  SSWVStructureFactory.h
//  WebView
//
//  Created by Mira Weiss on 06/03/2016.
//  Copyright © 2016 Mira Weiss. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;

#import "SSWVWebViewP.h"
@class SSWVConnectivityConfiguration;

@interface SSWVWebViewFactory : NSObject

+ (id<SSWVWebViewP>) defaultWebViewWithFrame:(CGRect)frame;
    
+ (id<SSWVWebViewP>) defaultWebViewWithFrame:(CGRect)frame connectivityConfiguration:(SSWVConnectivityConfiguration*)config;

@end
