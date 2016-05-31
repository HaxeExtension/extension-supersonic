//
//  SSLEWidgetAttributs.h
//  PresentationEngine
//
//  Created by Mira Weiss on 11/01/2016.
//  Copyright © 2016 Supersonic. All rights reserved.
//

#ifndef SSLEWidgetTypes_h
#define SSLEWidgetTypes_h

//to add widget_type, define it and add it to SSLE_SUPPORTED_WIDGET_types array
#define SSLE_WIDGET_TYPE_UNKNOWN           @"unknown"
#define SSLE_WIDGET_TYPE_IMAGE_BUTTON      @"imageButton"
#define SSLE_WIDGET_TYPE_SPINNER           @"spinner"
#define SSLE_WIDGET_TYPE_PROGRESS_BAR      @"progressBar"

#define SSLE_SUPPORTED_WIDGET_TYPES @[SSLE_WIDGET_TYPE_IMAGE_BUTTON, SSLE_WIDGET_TYPE_SPINNER, SSLE_WIDGET_TYPE_PROGRESS_BAR]

#endif /* SSLEWidgetTypes_h */
