//
//  SSVEStringValidationRule.h
//  ValidationEngine
//
//  Created by Mira Weiss on 05/11/2015.
//  Copyright © 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSVEValidationRuleP.h"

@interface SSVEStringInArrayValidationRule : NSObject <SSVEValidationRuleP>

- (instancetype)initWithString:(NSString*)subject array:(NSArray<NSString*>*)array;
- (instancetype) init NS_UNAVAILABLE;

@end
