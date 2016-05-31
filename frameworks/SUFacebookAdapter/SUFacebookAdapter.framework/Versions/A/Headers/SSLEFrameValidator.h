//
//  SSLEFrameValidator.h
//  LayoutEngine
//
//  Created by yossi mozgerashvily on 9/20/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SSLEDefs.h"
#import "SSLECoordinationSystem.h"

@interface SSLEFrameValidator : NSObject

- (instancetype) init NS_UNAVAILABLE; //keep this class static

+ (BOOL)validateFrame:(CGRect)frame coordincationSystem:(SSLECoordinationSystem)coordinationSystem;


@end
