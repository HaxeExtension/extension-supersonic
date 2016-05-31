//
//  SSNMController.h
//  NetworkManager
//
//  Created by yossi mozgerashvily on 7/21/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#ifndef NetworkManager_SSNMController_h
#define NetworkManager_SSNMController_h

#import <Foundation/Foundation.h>
#import "SSNMDefs.h"

@interface SSNMController : NSObject

+ (void) setCapacity:(NSUInteger)capacity;
+ (NSUInteger) getCapacity;

+ (void) setNumberOfThreads:(NSUInteger)numberOfThreads;
+ (NSUInteger) getNumberOfThreads;

+ (void) start;
+ (void) stop;
+ (void) pause;
+ (void) resume;

+ (void) enableLog;
+ (void) disableLog;
+ (BOOL) logEnabled;

@end

#endif
