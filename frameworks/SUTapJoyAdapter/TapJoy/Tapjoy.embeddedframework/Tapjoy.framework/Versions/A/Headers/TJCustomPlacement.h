//
//  TJPlacementMediationAdapter.h
//  Tapjoy
//
//  Created by Melinda Tang on 6/10/15.
//  Copyright (c) 2015 Tapjoy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class TJCustomPlacement;

@protocol TJCustomPlacementDelegate <NSObject>
//TODO: what is ad for?
- (void)customPlacement:(TJCustomPlacement*)customPlacement didLoadAd:(id)ad;
- (void)customPlacement:(TJCustomPlacement*)customPlacement didFailWithError:(NSError*)error;
- (void)customPlacementContentDidAppear:(TJCustomPlacement*)customPlacement;
- (void)customPlacementContentDidDisappear:(TJCustomPlacement*)customPlacement;
- (void)customPlacement:(TJCustomPlacement*)customPlacement shouldReward:(NSString*)type amount:(int)amount;
@end

@interface TJCustomPlacement : NSObject

- (void)requestContentWithCustomPlacementParams:(NSDictionary *)params;
- (void)showContentWithViewController:(UIViewController*)viewController;

@property (nonatomic, weak) id<TJCustomPlacementDelegate> delegate;

@end

