//
// Created by syl on 16/4/27.
// Copyright (c) 2016 Tihom-syl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ThMacro.h"

@interface ThConfig : NSObject

@prop_strong(NSString *,strTemplateUrl)

+ (ThConfig *)instance;;
@end