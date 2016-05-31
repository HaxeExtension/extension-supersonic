//
//  SSVEStringLengthValidationRule.h
//  ValidationEngine
//
//  Created by Mira Weiss on 19/10/2015.
//  Copyright © 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSVEValidationRuleP.h"
#import "SSVEValidationRuleResult.h"

@interface SSVEStringLengthValidationRule : NSObject <SSVEValidationRuleP>

- (instancetype)initWithExact:(NSString*)subject exactLength:(NSUInteger)exact;
- (instancetype)initWithRange:(NSString*)subject minLength:(NSUInteger)min maxLength:(NSUInteger)max;
- (instancetype) init NS_UNAVAILABLE;

@end