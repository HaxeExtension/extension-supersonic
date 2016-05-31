//
//  SSRVApi.h
//  RewardedVideo
//
//  Created by yossi mozgerashvily on 11/15/15.
//  Copyright © 2015 Supersonic. All rights reserved..
//

#import <Foundation/Foundation.h>

/*
 SSRVApiGender
 */
typedef NS_ENUM(NSInteger, SSRVApiGender) {
    SSRVApiGenderUnknown,
    SSRVApiGenderMale,
    SSRVApiGenderFemale,
    SSRVApiGenderOther,
};

/*
 SSRVApiDelegate
 */
@protocol SSRVApiDelegate
- (void) availabilityChanged:(BOOL)availability;
- (void) adOpened;
- (void) adClosed;
- (void) videoPlaybackStarted;
- (void) videoPlaybackCompleted;
- (void) adRewardedWithCredits:(float)credits;
- (void) preparedSuccessfully;
- (void) prepareFailedWithError:(NSError*)error;
- (void) showFailedWithError:(NSError*)error;
@end

/*
 SSRVApi
 */
@interface SSRVApi : NSObject

@property (weak) id<SSRVApiDelegate> delegate;
@property NSUInteger userAge;
@property SSRVApiGender userGender;
@property (readonly) BOOL adAvailable;
@property NSDictionary<NSString*,NSString*>* customParameters;

- (instancetype) init NS_UNAVAILABLE;
- (instancetype) initWithApplicationKey:(NSString*)applicationKey
                                 userId:(NSString*)userId
                             sdkVersion:(NSString*)sdkVersion
                          feedUrlString:(NSString*)feedUrlString;
- (void) prepare;
- (void) showAd;
- (void) releaseAllResources;

@end
