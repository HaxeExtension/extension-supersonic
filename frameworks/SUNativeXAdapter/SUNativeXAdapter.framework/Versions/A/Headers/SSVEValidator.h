//
//  SSVEValidator.h
//  ValidationEngine
//
//  Created by Yotam Ohayon on 9/6/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSVEValidationRuleP.h"

@class SSVEValidationOutcome;

@interface SSVEValidator : NSObject

- (SSVEValidationOutcome *)run:(NSArray *)rules;

@end
