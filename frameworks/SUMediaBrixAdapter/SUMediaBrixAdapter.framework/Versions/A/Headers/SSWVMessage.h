//
//  SSWVMessage.h
//  WebView
//
//  Created by Mira Weiss on 06/03/2016.
//  Copyright © 2016 Mira Weiss. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSWVMessageFunction.h"

@interface SSWVMessage : NSObject

@property (nonatomic) SSWVMessageFunction* function;
@property (nonatomic) SSWVMessage* callback;

@end

