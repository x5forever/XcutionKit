//
//  AppDelegate+init.h
//  SuperVest
//
//  Created by x5 on 2017/11/3.
//  Copyright © 2017年 Xcution. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate (init)
// 注册极光推送
- (void)registerAppPushWithOption:(NSDictionary *)launchOptions;

@end