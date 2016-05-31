//
//  SSLEActionDescorator.h
//  LayoutEngine
//
//  Created by yossi mozgerashvily on 9/21/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSLEActionP.h"

@interface SSLEActionDecorator : NSObject <SSLEActionP>

@property (readonly) id<SSLEActionP> targetAction;

- (instancetype) initWithTargetAction:(id<SSLEActionP>)targetAction;
- (void)execute;

@end
