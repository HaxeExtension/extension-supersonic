#include <SupersonicExtension.h>
#import <UIKit/UIKit.h>
#import <AdSupport/ASIdentifierManager.h>
#import "Supersonic/Supersonic.h"

extern "C" void reportSupersonicEvent2Haxe (const char* event, const char *data);

void reportSupersonicEvent (const char* event, const char *data){
    if ([NSThread isMainThread]){
        reportSupersonicEvent2Haxe(event,data);
    }else{
        dispatch_async(dispatch_get_main_queue(), ^{
            reportSupersonicEvent2Haxe(event,data);
        });
    }
}


NSString *placement2JSON(SupersonicPlacementInfo * pInfo){
    if(pInfo == NULL) return @"{}";
    return [NSString stringWithFormat:@"{\"placementName\":\"%@\",\"rewardName\":\"%@\",\"rewardAmount\":%@}", [pInfo placementName], [pInfo rewardName], [pInfo rewardAmount]];
}

#include "RVDelegate.mm"
#include "ISDelegate.mm"

namespace SupersonicExtension {
	
	UIViewController *root = NULL;
    
	void init(const char *__app_key){

        if ( root == NULL ){
            NSLog(@"SupersonicExtension::init");
            root = [[[UIApplication sharedApplication] keyWindow] rootViewController];

            [[Supersonic sharedInstance] setISDelegate:[ISDelegate alloc]];
            [[Supersonic sharedInstance] setRVDelegate:[RVDelegate alloc]];        
        } else {
            NSLog(@"SupersonicExtension::init again!");
        }

        NSString* appKey = [NSString stringWithUTF8String:__app_key];
        NSString* adId = @"TEST";
        if([[ASIdentifierManager sharedManager] isAdvertisingTrackingEnabled]) {
            adId = [[[ASIdentifierManager sharedManager] advertisingIdentifier] UUIDString];
        }

        [[Supersonic sharedInstance] initISWithAppKey:appKey withUserId:adId];
        [[Supersonic sharedInstance] initRVWithAppKey:appKey withUserId:adId];
    }
    
    bool showRewardedVideo(const char *placementName){
        NSString *pName = [NSString stringWithUTF8String:placementName];
        [[Supersonic sharedInstance] showRVWithPlacementName:pName];
        return true;
    }

    bool showInterstitial(const char *placementName){
        NSString *pName = [NSString stringWithUTF8String:placementName];
        [[Supersonic sharedInstance] showISWithViewController:root placementName:pName];
        return true;
    }

    void cacheInterstitial(){
        [[Supersonic sharedInstance] loadIS];
    }

    bool isInterstitialReady(){
        return [[Supersonic sharedInstance] isInterstitialAvailable];
    }

    bool isRewardedVideoAvailable(){
        return [[Supersonic sharedInstance] isAdAvailable];
    }
    
    const char *getRewardedVideoPlacementInfo(const char *placementName){
        NSString *pName = [NSString stringWithUTF8String:placementName];
        SupersonicPlacementInfo * pInfo = [[Supersonic sharedInstance] getRVPlacementInfo:pName];
        NSString *res = placement2JSON(pInfo);
        return [res UTF8String];
    }

}
