//
//  SSLEProgressBarWidget.h
//  PresentationEngine
//
//  Created by Mira Weiss on 17/01/2016.
//  Copyright © 2016 Supersonic. All rights reserved.
//

#import "SSLEWidget.h"
#import "SSLECoordinationSystem.h"

@interface SSLEProgressBarWidget : SSLEWidget

- (instancetype)initWithFrame:(CGRect)frame coordinationSystem:(SSLECoordinationSystem)coordinationSystem __attribute__((unavailable("initWithFrame:coordinationSystem: is not available")));;

- (instancetype)initWithWidgetID:(NSString*)widgetID
                           frame:(CGRect)frame
              coordinationSystem:(SSLECoordinationSystem)coordinationSystem;

- (void) setProgress:(float)progress;

@property float animationDuration; // in seconds

@end
