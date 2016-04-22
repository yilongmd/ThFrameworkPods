/*
 Copyright (c) 2014 ideawu. All rights reserved.
 Use of this source code is governed by a license that can be
 found in the LICENSE file.
 
 @author:  ideawu
 @website: http://www.cocoaui.com/
 */

#ifndef IKit_h
#define IKit_h

#import <UIKit/UIKit.h>

#import "IKitUtil.h"
#import "IStyle.h"
#import "IView.h"
#import "ITable.h"
#import "ITableRow.h"
#import "ILabel.h"
#import "IInput.h"
#import "IButton.h"
#import "ISwitch.h"
#import "IImage.h"
#import "IPullRefresh.h"
#import "IRefreshControl.h"

#endif

//在这里添加宏会在其他文件中重复引用他们自己,按道理应该不会出现问题

#ifndef IKit_PrefixHeader_pch
#define IKit_PrefixHeader_pch

#define VER_NUM  "1.2.6"

#define L_MYLOG(level, fmt, args...) \
	my_log((level @" %@(%d): " fmt), [@(__FILE__) lastPathComponent],  __LINE__, ##args)

#ifdef DEBUG
#	define VERSION  VER_NUM "(for development only)"
#	define log_trace(...) L_MYLOG(@"[TRACE]", __VA_ARGS__)
#	define log_debug(...) L_MYLOG(@"[DEBUG]", __VA_ARGS__)
#else
#	define VERSION  VER_NUM "(for production)"
#	define log_trace(...)
#	define log_debug(...)
#endif

#define log_info(...)  L_MYLOG(@"[INFO] ", __VA_ARGS__)
#define log_error(...) L_MYLOG(@"[ERROR]", __VA_ARGS__)


#import <Foundation/Foundation.h>
inline
static void my_log(NSString *fmt, ...){
    NSDateFormatter *f = [[NSDateFormatter alloc] init];
    [f setDateFormat:@"yyyy-MM-dd HH:mm:ss.SSS"];
    NSString *time = [f stringFromDate:[NSDate date]];

    va_list args;
    va_start(args, fmt);
    NSString *msg = [[NSString alloc] initWithFormat:fmt arguments:args];
    va_end(args);

    printf("%s %s\n", time.UTF8String, msg.UTF8String);
}


#endif
