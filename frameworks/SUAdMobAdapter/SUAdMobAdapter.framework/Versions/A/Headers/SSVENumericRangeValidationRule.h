//
//  SSVENumericRangeValidationRule.h
//  ValidationEngine
//
//  Created by Mira Weiss on 20/10/2015.
//  Copyright © 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSVEValidationRuleP.h"
#import "SSVEValidationRuleResult.h"

@interface SSVENumericRangeValidationRule : NSObject <SSVEValidationRuleP>

- (instancetype)initWithExact:(NSNumber*)subject exactRange:(NSNumber*)exact;
- (instancetype)initWithRange:(NSNumber*)subject minRange:(NSNumber*)min maxRange:(NSNumber*)max;
- (instancetype) init NS_UNAVAILABLE;

@end