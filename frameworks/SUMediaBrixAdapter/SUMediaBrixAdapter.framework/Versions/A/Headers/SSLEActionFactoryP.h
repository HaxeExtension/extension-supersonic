//
//  SSLEActionFactory.h
//  LayoutEngine
//
//  Created by Mira Weiss on 22/10/2015.
//  Copyright © 2015 Supersonic. All rights reserved.
//

#ifndef LayoutEngine_SSLEActionFactoryP_h
#define LayoutEngine_SSLEActionFactoryP_h

#import "SSLEActionP.h"

@protocol SSLEActionFactoryP <NSObject>

@required

-(id<SSLEActionP>) createAction:(NSString*)actionID;

@end

#endif /* LayoutEngine_SSLEActionFactoryP_h */
