//
//  SSVEAlphaNumericStringValidationRule.h
//  ValidationEngine
//
//  Created by Mira Weiss on 19/10/2015.
//  Copyright © 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSVEValidationRuleP.h"
#import "SSVEValidationRuleResult.h"

@interface SSVEAlphaNumericStringValidationRule : NSObject <SSVEValidationRuleP>

- (instancetype)initWithString:(NSString*)subject;
- (instancetype) init NS_UNAVAILABLE;

@end