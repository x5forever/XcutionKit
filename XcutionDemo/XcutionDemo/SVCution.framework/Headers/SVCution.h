//
//  SVCution.h
//  SVRequestDemo
//
//  Created by x5 on 2019/7/2.
//  Copyright © 2019 x5. All rights reserved.
//  V2.0.0

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, AppLaunchOrientation) {
    AppLaunchOrientationPortrait = 0,
    AppLaunchOrientationLandscape,
    AppLaunchOrientationAll
};

@interface SVCution : NSObject

+ (void)setAppId:(NSString *)appId appKey:(NSString *)appKey;

+ (AppLaunchOrientation)getCurrentOrientation;

@end

