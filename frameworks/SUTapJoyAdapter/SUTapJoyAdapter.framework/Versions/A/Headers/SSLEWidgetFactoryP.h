//
//  SSLEWidgetFactoryP.h
//  LayoutEngine
//
//  Created by Mira Weiss on 22/10/2015.
//  Copyright © 2015 Supersonic. All rights reserved.
//

#ifndef LayoutEngine_SSLEWidgetFactoryP_h
#define LayoutEngine_SSLEWidgetFactoryP_h

#import "SSLEWidget.h"
#import "SSLEWidgetDescriptor.h"
#import "SSLEActionFactoryP.h"

@protocol SSLEWidgetFactoryP <NSObject>

@required

-(SSLEWidget*) createWidget:(SSLEWidgetDescriptor*)widgetDescriptor actionFactory:(id<SSLEActionFactoryP>)actionFactory;

@end

#endif /* LayoutEngine_SSLEWidgetFactoryP_h */
