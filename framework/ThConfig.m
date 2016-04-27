//
// Created by syl on 16/4/27.
// Copyright (c) 2016 Tihom-syl. All rights reserved.
//

#import "ThConfig.h"


@implementation ThConfig {

}

+ (ThConfig *)instance {
    static ThConfig *_instance = nil;

    @synchronized (self) {
        if (_instance == nil) {
            _instance = [[self alloc] init];
        }
    }

    return _instance;
}
@end