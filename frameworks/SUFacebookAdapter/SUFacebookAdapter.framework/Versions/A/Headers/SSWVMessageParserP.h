//
//  SSWVMessageParser.h
//  WebView
//
//  Created by Mira Weiss on 06/03/2016.
//  Copyright © 2016 Mira Weiss. All rights reserved.
//

#ifndef SSWVMessageParserP_h
#define SSWVMessageParserP_h

#import "SSWVMessage.h"

@protocol SSWVMessageParserP

- (SSWVMessage*) convertToMessage:(NSString*)string;
- (NSString*) convertToString:(SSWVMessage*)message;

@end


#endif /* SSWVMessageParserP_h */
