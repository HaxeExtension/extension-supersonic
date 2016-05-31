//
//  SSLELayout.h
//  LayoutEngine
//
//  Created by yossi mozgerashvily on 9/20/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>


@class UIView, SSLEWidget;

@interface SSLELayout : NSObject

-(instancetype) init __attribute__((unavailable("init not available")));

- (instancetype) initWithView:(UIView*)view;
- (void) addWidget:(SSLEWidget*)widget error:(NSError**)error;
- (void) removeWidgetByID:(NSString*)widgetID error:(NSError**)error;
- (SSLEWidget*)widgetByID:(NSString*)widgetID;
- (NSDictionary*) getLayoutWidgets;

@property (readonly) UIView* view;

@end
