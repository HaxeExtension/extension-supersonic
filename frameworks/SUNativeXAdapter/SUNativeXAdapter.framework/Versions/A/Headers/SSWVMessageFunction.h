//
//  SSWVMessageFunction.h
//  WebView
//
//  Created by Mira Weiss on 08/03/2016.
//  Copyright © 2016 Mira Weiss. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSWVMessageFunctionParameter.h"

@interface SSWVMessageFunction : NSObject

@property (nonatomic) NSString* name;
@property (nonatomic) NSMutableArray<SSWVMessageFunctionParameter*>* params;

@end