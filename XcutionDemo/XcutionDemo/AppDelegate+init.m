//
//  AppDelegate+init.m
//  SuperVest
//
//  Created by x5 on 2017/11/3.
//  Copyright © 2017年 Xcution. All rights reserved.
//

#import "AppDelegate+init.h"
#import <SVCution/SVCution.h>
#import "JPUSHService.h"

// channelId
static NSString *kSVChannelId = @"XcutionDemo";
// SVRequest
static NSString *kSVCutionAppID = @"";
static NSString *kSVCutionAppKey = @"";
// JPush
static NSString *kJPushAppKey = @"98fc329f04b452df37ec103e";
#ifdef DEBUG
static BOOL isProduction = FALSE;
#else
static BOOL isProduction = TRUE;
#endif

@interface AppDelegate ()<JPUSHRegisterDelegate>
@end

@implementation AppDelegate (init)
// 注册 JPush APNS
- (void)registerAppPushWithOption:(NSDictionary *)launchOptions {
    JPUSHRegisterEntity * entity = [[JPUSHRegisterEntity alloc] init];
    [SVCution setAppId:kSVCutionAppID appKey:kSVCutionAppKey];
    entity.types = JPAuthorizationOptionAlert|JPAuthorizationOptionBadge|JPAuthorizationOptionSound;
    [JPUSHService registerForRemoteNotificationConfig:entity delegate:self];
    [JPUSHService setupWithOption:launchOptions appKey:kJPushAppKey
                          channel:kSVChannelId
                 apsForProduction:isProduction
            advertisingIdentifier:nil];
}
- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken {
    [JPUSHService registerDeviceToken:deviceToken];
}
- (void)applicationDidBecomeActive:(UIApplication *)application {
    [application setApplicationIconBadgeNumber:0];
    [application cancelAllLocalNotifications];
}
- (UIInterfaceOrientationMask)application:(UIApplication *)application supportedInterfaceOrientationsForWindow:(UIWindow *)window {
    AppLaunchOrientation orientation= [SVCution getCurrentOrientation];
    switch (orientation) {
        case AppLaunchOrientationPortrait:
            return UIInterfaceOrientationMaskPortrait;
            break;
        case AppLaunchOrientationLandscape:
            return UIInterfaceOrientationMaskLandscape;
            break;
        case AppLaunchOrientationAll:
            return UIInterfaceOrientationMaskAllButUpsideDown;
            break;
        default:
            return UIInterfaceOrientationMaskAllButUpsideDown;
            break;
    }
}
@end
