//
//  SSVCViewControllerFactory.h
//  PresentationEngine
//
//  Created by Mira Weiss on 22/12/2015.
//  Copyright © 2015 Supersonic. All rights reserved.
//
//
//  The class provide a factory API which create a costum view controller known as 'SSVCBaseViewController'.
//
//  'SSVCBaseViewController' present its view without display status bar or navigation controllers bar.
//  'SSVCBaseViewController' present its view on landscape orientation.
//  For applications that support only portrait orientation,'SSVCBaseViewController' will display its view on landscape orientation
//    without the ability for 180 degrees rotation.


#import <Foundation/Foundation.h>

@class SSVCBaseViewController;

@interface SSVCViewControllerFactory : NSObject

+ (SSVCBaseViewController*) createViewController;

@end
