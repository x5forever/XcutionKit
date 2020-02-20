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


static NSString *kSVCutionAppID = @"";
static NSString *kSVCutionAppKey = @"";

@interface AppDelegate ()<JPUSHRegisterDelegate>
@end

@implementation AppDelegate (init)

- (void)registerSVPushWithOption:(NSDictionary *)launchOptions {
    [SVCution setAppId:kSVCutionAppID appKey:kSVCutionAppKey completionHandler:^(SVCutionItem item) {
        if (item.pushKey.length) {
            JPUSHRegisterEntity *entity = [[JPUSHRegisterEntity alloc] init];
            entity.types = JPAuthorizationOptionAlert|JPAuthorizationOptionBadge|JPAuthorizationOptionSound;
            [JPUSHService registerForRemoteNotificationConfig:entity delegate:self];
            [JPUSHService setupWithOption:launchOptions appKey:item.pushKey
                                  channel:svAppName()
                         apsForProduction:TRUE
                    advertisingIdentifier:nil];
        }
    }];
}
- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken {
    [JPUSHService registerDeviceToken:deviceToken];
}
- (void)applicationDidBecomeActive:(UIApplication *)application {
    [application setApplicationIconBadgeNumber:0];
    [application cancelAllLocalNotifications];
}
- (UIInterfaceOrientationMask)application:(UIApplication *)application supportedInterfaceOrientationsForWindow:(UIWindow *)window {
    SVCutionOrientation orientation= [SVCution getCurrentOrientation];
    switch (orientation) {
        case SVCutionOrientationPortrait:
            return UIInterfaceOrientationMaskPortrait;
            break;
        case SVCutionOrientationLandscape:
            return UIInterfaceOrientationMaskLandscape;
            break;
        case SVCutionOrientationAll:
            return UIInterfaceOrientationMaskAllButUpsideDown;
            break;
        default:
            return UIInterfaceOrientationMaskAllButUpsideDown;
            break;
    }
}
static inline NSString * svAppName() {
    NSString *appNameKey = @"CFBundleDisplayName";
    NSString *appName = [NSBundle mainBundle].infoDictionary[appNameKey];
    return appName.length ? appName : @"";
}
@end
