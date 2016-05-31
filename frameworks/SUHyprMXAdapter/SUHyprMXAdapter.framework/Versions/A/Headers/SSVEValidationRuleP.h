//
//  SSVEValidationRuleP.h
//  ValidationEngine
//
//  Created by Yotam Ohayon on 9/6/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SSVEValidationRuleResult;

@protocol SSVEValidationRuleP <NSObject>

@required
- (SSVEValidationRuleResult *)execute;

@end