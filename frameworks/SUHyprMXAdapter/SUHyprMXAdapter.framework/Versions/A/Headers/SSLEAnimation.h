//
//  SSLEAnimation.h
//  LayoutEngine
//
//  Created by yossi mozgerashvily on 9/21/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SSLEActionP.h"

@class SSLEWidget;

typedef NS_ENUM(NSUInteger, SSLEAnimationType) {
    SSLEAnimationTypeAlpha,
    SSLEAnimationTypeUnknown
};

typedef void (^AnimationCompletionBlock)(void);

@interface SSLEAnimation : NSObject <SSLEActionP>

@property (readonly) Float32 duration;
@property (weak,readonly) SSLEWidget* targetWidget;
@property (readonly) NSString* targetValue;
@property (readonly) AnimationCompletionBlock completionBlock;

- (instancetype) init NS_UNAVAILABLE;

+ (instancetype) animationForType:(SSLEAnimationType)type
                         duration:(Float32)duration
                     targetWidget:(SSLEWidget*)targetWidget
                      targetValue:(NSString*)targetValue
                  completionBlock:(AnimationCompletionBlock)completionBlock;

@end
