//
//  IMTSessionDataTaskProperties.h
//  PodTests
//
//  Created by Martin Novák on 15/05/15.
//  Copyright (c) 2015 Avast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMTRequestSerializationParameters.h"
#import "IMTResponseSerializationParameters.h"

/**
 Parameters and settings object for AFHTTPSessionManager requests
 **/
@interface IMTSessionDataTaskParameters : NSObject

/**
 Default settings (used for testing now)
 **/
+(IMTSessionDataTaskParameters*)defaultParameters;

/**
 Containing request object / data and information how serializer should use them
 **/
@property (nonatomic, strong) IMTRequestSerializationParameters     *requestParameters;

/**
 Containing response parsing information and how serializer should serialize results
 **/
@property (nonatomic, strong) IMTResponseSerializationParameters    *responseParameters;

@end
