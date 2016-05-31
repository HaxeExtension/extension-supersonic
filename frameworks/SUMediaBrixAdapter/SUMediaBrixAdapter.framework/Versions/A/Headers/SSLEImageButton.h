//
//  SSLEImageButton.h
//  LayoutEngine
//
//  Created by yossi mozgerashvily on 9/20/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import "SSLEWidget.h"
#import "SSLECoordinationSystem.h"

@interface SSLEImageButton : SSLEWidget

@property id<SSLEActionP> action;

- (instancetype)initWithFrame:(CGRect)frame coordinationSystem:(SSLECoordinationSystem)coordinationSystem __attribute__((unavailable("initWithFrame:coordinationSystem: is not available")));;

- (instancetype)initWithWidgetID:(NSString*)widgetID
                           frame:(CGRect)frame
              coordinationSystem:(SSLECoordinationSystem)coordinationSystem
                defaultImagePath:(NSString*)defaultImagePath
            highlightedImagePath:(NSString*)highlightedImagePath;

@end
