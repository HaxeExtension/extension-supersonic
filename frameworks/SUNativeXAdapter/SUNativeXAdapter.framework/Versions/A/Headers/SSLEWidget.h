//
//  SSLEWidget.h
//  LayoutEngine
//
//  Created by yossi mozgerashvily on 9/20/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "SSLECoordinationSystem.h"
#import "SSLEAlignment.h"

@protocol SSLEActionP;

@interface SSLEWidget : NSObject

@property (readonly) CGRect frame;
@property (readonly) SSLECoordinationSystem coordinationSystem;
@property SSLEAlignment alignment;
@property UIView* view;
@property NSString* widgetID;

- (instancetype) init NS_UNAVAILABLE;

- (instancetype)initWithWidgetID:(NSString*)widgetID
                           frame:(CGRect)frame
              coordinationSystem:(SSLECoordinationSystem)coordinationSystem;

- (void) adjustFrameToBounds:(CGRect)bounds targetCoordinationSystem:(SSLECoordinationSystem)targetCoordinationSystem;
- (void) resetFrame;

- (void) setVisibility:(BOOL)visibility;
- (BOOL) isVisible;

- (void) setViewColor:(UIColor*)color;
- (void) setBackgroundViewColor:(UIColor*)color;

@end
