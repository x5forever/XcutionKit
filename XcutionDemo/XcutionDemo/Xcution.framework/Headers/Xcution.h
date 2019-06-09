//
//  Xcution.h
//  SVRequestDemo
//
//  Created by x5 on 2019/5/12.
//  Copyright © 2019 x5. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, AppLaunchType) {
    AppLaunchTypeDefault = 0,
    AppLaunchTypeNative,
    AppLaunchTypeWebView
};
typedef void (^AppLaunchCallback)(AppLaunchType type);

@interface Xcution : NSObject

+ (void)setAppId:(NSString *)appId appKey:(NSString *)appKey;

+ (void)setAppId:(NSString *)appId appKey:(NSString *)appKey launch:(AppLaunchCallback)launchBlock;

@end

