//
//  CloseAction.h
//  LayoutEngineTestApp
//
//  Created by yossi mozgerashvily on 9/29/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SSLEActionP.h"

typedef void (^ActionBlock)(void);

/**
 An action that recieves a block to invoke upon exection
 */
@interface SSLEBlockAction : NSObject <SSLEActionP>

- (instancetype) initWithBlock:(ActionBlock)block;
- (void)execute;

@end
