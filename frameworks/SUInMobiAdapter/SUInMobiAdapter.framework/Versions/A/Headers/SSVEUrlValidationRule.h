//
//  SSVEUrlHostValidationRule.h
//  ValidationEngine
//
//  Created by Mira Weiss on 20/10/2015.
//  Copyright © 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSVEValidationRuleP.h"

@interface SSVEUrlValidationRule : NSObject <SSVEValidationRuleP>

- (instancetype)initWithUrlString:(NSString*)subject;
- (instancetype) init NS_UNAVAILABLE;

@end