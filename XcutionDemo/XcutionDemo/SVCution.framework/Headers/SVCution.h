//
//  SVCution.h
//  SVRequestDemo
//
//  Created by x5.
//  Copyright © 2019 x5. All rights reserved.
//  V2.1.1 update on 2019/9/9.

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

