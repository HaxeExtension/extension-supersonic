//
//  SSVEValidationRuleResult.h
//  ValidationEngine
//
//  Created by Yotam Ohayon on 9/6/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SSVEValidationRuleResult : NSObject

@property (nonatomic, readonly) BOOL passed;
@property (nonatomic, readonly, copy) NSString *ruleDescription;

- (instancetype)initWithResult:(BOOL)passed Description:(NSString *)description NS_DESIGNATED_INITIALIZER;
- (instancetype) init __attribute__((unavailable("init not available for the class SSVEValidationRuleResult")));

@end