//
//  SSNMRedirectionHandler.h
//  NetworkManager
//
//  Created by Itai Asaf on 22/03/2016.
//  Copyright © 2016 Supersonic. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SSNMRedirectionHandlerDelegate <NSObject>
@required
-(void)didFinishRedirectionWithFinalUrl:(NSURL*)url;
//can send nil for URL in case the url is unsopported (the error onject will contain the data)
-(void)didFailToRedirectUrl:(NSURL*)url error:(NSError *)error;
@end

@interface SSNMRedirectionHandler : NSObject

@property (assign) NSUInteger timeoutForRedirection;
@property (weak) id<SSNMRedirectionHandlerDelegate> delegate;

-(void)redirectUrl:(NSURL*)url;

@end
