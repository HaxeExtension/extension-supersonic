//
//  SSLEWidgetDescriptor.h
//  LayoutEngine
//
//  Created by Mira Weiss on 21/10/2015.
//  Copyright © 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SSLECoordinationSystem.h"
#import "SSLEAlignment.h"

@interface SSLEWidgetDescriptor : NSObject

@property NSString* widgetID;
@property NSString* widgetType;
@property CGRect frame;
@property SSLECoordinationSystem coordinateSystem;
@property SSLEAlignment alignment;
@property NSString* touchActionID;
@property NSString* highLightedImagePath;
@property NSString* defaultImagePath;
@property NSString* rgbColor;
@property NSString* rgbBackgroundColor;
@property float animationDuration; // in seconds
@property BOOL visibility;

@end
