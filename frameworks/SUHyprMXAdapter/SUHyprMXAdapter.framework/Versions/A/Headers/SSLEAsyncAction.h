//
//  SSLEAsyncAction.h
//  LayoutEngine
//
//  Created by yossi mozgerashvily on 9/21/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import "SSLEActionDecorator.h"

@class SSLEAsyncAction;

@protocol SSLEAsyncActioDelegateP
- (void)executeCompletedWithAction:(SSLEAsyncAction*)asyncAction targetAction:(id<SSLEActionP>)targetAction error:(NSError*)error;
@end

@interface SSLEAsyncAction : SSLEActionDecorator

@property id<SSLEAsyncActioDelegateP> delegate;

- (instancetype)init NS_UNAVAILABLE;
- (void) execute;

@end
