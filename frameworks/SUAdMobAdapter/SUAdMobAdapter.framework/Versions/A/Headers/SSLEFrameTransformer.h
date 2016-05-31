//
//  Header.h
//  LayoutEngine
//
//  Created by yossi mozgerashvily on 9/21/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#ifndef LayoutEngine_Header_h
#define LayoutEngine_Header_h


#import <UIKit/UIKit.h>
#import "SSLECoordinationSystem.h"
#import "SSLEAlignment.h"

@interface SSLEFrameTransformer : NSObject

- (instancetype) init NS_UNAVAILABLE; //keep this class static

/**
 *  Transforms a frame with a given coordination system (source frame) to a frame
 *  with a different coordination system (target frame)
 *
 *  @param sourceFrame              The frame to transform
 *  @param sourceBoundingFrame      The frame that hosts the source frame , we need it when there's a relative 
 *                                  coordination system involved. (like percentage)
 *  @param alignment                The alignment of the frame
 *  @param sourceCoordinationSystem The coordination system of the source frame
 *  @param targetCoordinationSystem The coordination system of the target frame
 *
 *  @return The target frame. CGRectNull returns
 */
+ (CGRect) transformSourceFrame:(CGRect)sourceFrame
            sourceBoundingFrame:(CGRect)sourceBoundingFrame
                      alignment:(SSLEAlignment)alignment
       sourceCoordinationSystem:(SSLECoordinationSystem)sourceCoordinationSystem
       targetCoordinationSystem:(SSLECoordinationSystem)targetCoordinationSystem;

@end

#endif
