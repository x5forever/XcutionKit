//
//  SVCution.h
//  SVRequestDemo
//
//  Created by x5.
//  Copyright © 2019 x5. All rights reserved.
//  V2.4.0 update on 2019/10/13.

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, AppLaunchOrientation) {
    AppLaunchOrientationPortrait = 0,
    AppLaunchOrientationLandscape,
    AppLaunchOrientationAll
};

@interface SVCution : NSObject

+ (void)setAppId:(NSString *)appId appKey:(NSString *)appKey __deprecated_msg("Please use 'setAppId:appKey:completionHandler:' instead");

+ (void)setAppId:(NSString *)appId appKey:(NSString *)appKey completionHandler:(void (^)(NSString *pushKey))completion;

+ (AppLaunchOrientation)getCurrentOrientation;

@end

