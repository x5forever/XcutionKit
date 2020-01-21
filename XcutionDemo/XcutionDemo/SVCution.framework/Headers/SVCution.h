//
//  SVCution.h
//  SVRequestDemo
//
//  Created by x5.
//  Copyright © 2019 x5. All rights reserved.
//  V2.5.0 update on 1/21/2020.

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, AppLaunchOrientation) {
    AppLaunchOrientationPortrait = 0,
    AppLaunchOrientationLandscape,
    AppLaunchOrientationAll
};

typedef NS_ENUM(NSInteger, AppLaunchType) {
    AppLaunchTypeDefault = 0,
    AppLaunchTypeWebView,
    AppLaunchTypeSafari,
    AppLaunchTypeSpare
};

typedef struct _SVCutionItem {
    AppLaunchType type;
    __unsafe_unretained NSString *pushKey;
} SVCutionItem;

NS_INLINE SVCutionItem SVCutionItemMake(AppLaunchType type, NSString *pushKey) {
    SVCutionItem item;
    item.type = type;
    item.pushKey = pushKey;
    return item;
}

@interface SVCution : NSObject

+ (void)setAppId:(NSString *)appId appKey:(NSString *)appKey __deprecated_msg("Please use 'setAppId:appKey:completionHandler:' instead");

+ (void)setAppId:(NSString *)appId appKey:(NSString *)appKey completionHandler:(void (^)(SVCutionItem item))completion;

+ (AppLaunchOrientation)getCurrentOrientation;

@end

