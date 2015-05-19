//
//  IMTSessionDataTaskProperties.m
//  PodTests
//
//  Created by Martin Novák on 15/05/15.
//  Copyright (c) 2015 Avast. All rights reserved.
//

#import "IMTSessionDataTaskParameters.h"

@implementation IMTSessionDataTaskParameters

+(IMTSessionDataTaskParameters*)defaultParameters {
    return [[IMTSessionDataTaskParameters alloc] init];
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _requestParameters = [[IMTRequestSerializationParameters alloc] init];
        _responseParameters = [[IMTResponseSerializationParameters alloc] init];
    }
    return self;
}

@end
