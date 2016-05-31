#include <SupersonicExtension.h>
#import <UIKit/UIKit.h>
#import <AdSupport/ASIdentifierManager.h>
#import "Supersonic/Supersonic.h"

extern "C" void reportSupersonicEvent (const char* event, const char *data);

NSString *placement2JSON(SupersonicPlacementInfo * pInfo){
    if(pInfo == NULL) return @"{}";
    return [NSString stringWithFormat:@"{\"placementName\":\"%@\",\"rewardName\":\"%@\",\"rewardAmount\":%@}", [pInfo placementName], [pInfo rewardName], [pInfo rewardAmount]];
}

#include "RVDelegate.mm"
#include "ISDelegate.mm"


namespace SupersonicExtension {
	
	UIViewController *root;
    
	void init(const char *__app_key){
		root = [[[UIApplication sharedApplication] keyWindow] rootViewController];
        NSString* appKey = [NSString stringWithUTF8String:__app_key];
        NSString* adId = @"TEST";
        if([[ASIdentifierManager sharedManager] isAdvertisingTrackingEnabled]) {
            adId = [[[ASIdentifierManager sharedManager] advertisingIdentifier] UUIDString];
        }

        [[Supersonic sharedInstance] setISDelegate:[ISDelegate alloc]];
        [[Supersonic sharedInstance] setRVDelegate:[RVDelegate alloc]];

        [[Supersonic sharedInstance] initISWithAppKey:appKey withUserId:adId];
        [[Supersonic sharedInstance] initRVWithAppKey:appKey withUserId:adId];
        
        NSLog(@"SupersonicExtension init complete");
    }
    
    bool showRewardedVideo(const char *placementName){
        NSLog(@"SupersonicExtension showRewardedVideo");
        NSString *pName = [NSString stringWithUTF8String:placementName];
        [[Supersonic sharedInstance] showRVWithPlacementName:pName];
        return true;
    }

    bool showInterstitial(const char *placementName){
        NSLog(@"SupersonicExtension showInterstitial");
        NSString *pName = [NSString stringWithUTF8String:placementName];
        [[Supersonic sharedInstance] showISWithViewController:root placementName:pName];
        return true;
    }

    void cacheInterstitial(){
        NSLog(@"SupersonicExtension cacheInterstitial");
        [[Supersonic sharedInstance] loadIS];
    }

    bool isInterstitialReady(){
        NSLog(@"SupersonicExtension isInterstitialReady");
        return [[Supersonic sharedInstance] isInterstitialAvailable];
    }

    bool isRewardedVideoAvailable(){
        NSLog(@"SupersonicExtension isRewardedVideoAvailable");
        return [[Supersonic sharedInstance] isAdAvailable];
    }
    
    const char *getRewardedVideoPlacementInfo(const char *placementName){
        NSLog(@"SupersonicExtension getRewardedVideoPlacementInfo");
        NSString *pName = [NSString stringWithUTF8String:placementName];
        SupersonicPlacementInfo * pInfo = [[Supersonic sharedInstance] getRVPlacementInfo:pName];
        NSString *res = placement2JSON(pInfo);
        return [res UTF8String];
    }

}
