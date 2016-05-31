//
//  SSVEValidationOutcome.h
//  ValidationEngine
//
//  Created by Yotam Ohayon on 9/6/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SSVEValidationRuleResult;

@interface SSVEValidationOutcome : NSObject

- (instancetype)initWithResults:(NSArray *)rulesResults NS_DESIGNATED_INITIALIZER;
- (instancetype) init __attribute__((unavailable("init not available for the class SSVEValidationOutcome")));

- (NSArray *)getRulesResult:(BOOL)passed;

@end
