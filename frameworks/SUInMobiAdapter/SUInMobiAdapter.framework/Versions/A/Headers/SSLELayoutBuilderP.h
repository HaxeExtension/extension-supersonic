//
//  SSLELayoutBuilderP.h
//  LayoutEngine
//
//  Created by Mira Weiss on 22/10/2015.
//  Copyright © 2015 Supersonic. All rights reserved.
//

#ifndef LayoutEngine_SSLELayoutBuilderP_h
#define LayoutEngine_SSLELayoutBuilderP_h

#import "SSLELayout.h"
#import "SSLELayoutDescriptor.h"
#import "SSLEWidgetFactoryP.h"
#import "SSLEActionFactoryP.h"

@protocol SSLELayoutBuilderP <NSObject>

@required

-(SSLELayout *)buildLayout:(UIView *)parentView
          layoutDescriptor:(SSLELayoutDescriptor*)layoutDescriptor
             widgetFactory:(id<SSLEWidgetFactoryP>)widgetFactory
             actionFactory:(id<SSLEActionFactoryP>)actionFactory
                     error:(NSError**)error;
@end

#endif /* LayoutEngine_SSLELayoutBuilderP_h */