//
//  SSVEValidationRuleSet.h
//  ValidationEngine
//
//  Created by Yotam Ohayon on 9/6/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSVEValidationRuleP.h"

@interface SSVEValidationRuleSet : NSObject <SSVEValidationRuleP>

- (instancetype)init NS_DESIGNATED_INITIALIZER;
- (void)addRule:(id<SSVEValidationRuleP>)rule;

@end