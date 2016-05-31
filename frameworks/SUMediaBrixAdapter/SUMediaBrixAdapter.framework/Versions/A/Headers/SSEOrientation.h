//
//  SSEOrientation.h
//  Environment
//
//  Created by yossi mozgerashvily on 10/20/15.
//  Copyright © 2015 Supersonic. All rights reserved.
//

#ifndef SSEOrientation_h
#define SSEOrientation_h

#import <Foundation/Foundation.h>

typedef NS_OPTIONS(NSInteger, SSEOrientation) {
    SSEOrientationPortrait = 1 << 0,
    SSEOrientationPortraitUpsideDown = 1 << 1,
    SSEOrientationLandscapeRight = 1 << 2,
    SSEOrientationLandscapeLeft = 1 << 3,
    SSEOrientationLast = 1 << 4
};

NSString* SSEApplicationOrientationToString(SSEOrientation orientation);

#endif /* SSEOrientation_h */