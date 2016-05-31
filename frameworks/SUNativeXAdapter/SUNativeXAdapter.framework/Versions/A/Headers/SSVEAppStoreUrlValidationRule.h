//
//  SSVEAppStoreUrlValidationRule.h
//  ValidationEngine
//
//  Created by Itai Asaf on 24/03/2016.
//  Copyright © 2016 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSVEValidationRuleP.h"

@interface SSVEAppStoreUrlValidationRule : NSObject <SSVEValidationRuleP>

- (instancetype)initWithUrl:(NSURL*)subject;
- (instancetype) init NS_UNAVAILABLE;

@end
