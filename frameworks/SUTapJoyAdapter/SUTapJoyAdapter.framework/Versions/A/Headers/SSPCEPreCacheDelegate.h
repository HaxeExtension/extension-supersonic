//
//  SSPCEPreCacheDelegate.h
//  PreCacheEngine
//
//  Created by Mira Weiss on 18/01/2016.
//  Copyright © 2016 Mira Weiss. All rights reserved.
//

#import <Foundation/Foundation.h>
@class SSPCECacheUnit;

@protocol SSPCEPreCacheDelegate

-(void) dPrepareSuccess;
-(void) dPrepareFailedWithError:(NSError*)error;
-(void) dCacheUnitSuccessWithCacheUnit:(SSPCECacheUnit*)cacheUnit;
-(void) dCacheUnitFailedWithError:(NSError*)error cacheUnit:(SSPCECacheUnit*)cacheUnit ;

@end
