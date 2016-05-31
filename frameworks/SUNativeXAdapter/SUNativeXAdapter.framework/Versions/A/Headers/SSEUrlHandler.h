//
//  SSEUrlHandler.h
//  Environment
//
//  Created by Itai Asaf on 22/03/2016.
//  Copyright © 2016 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIKit/UIKit.h"

@interface SSEUrlHandler : NSObject

// will try to open web url in external browser or another installed app
// (in case the url scheme can be processed by another app)
-(void)openUrl:(NSURL*)url;

@end
