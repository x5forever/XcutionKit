//
//  SVCution.h
//
//  Created by x5.
//  Copyright © 2019 x5. All rights reserved.
//  V3.0.0 update on 6/16/2020.

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, SVCutionOrientation) {
    SVCutionOrientationPortrait = 0,
    SVCutionOrientationLandscape,
    SVCutionOrientationAll
};

typedef NS_ENUM(NSInteger, SVCutionType) {
    SVCutionTypeDefault = 0,
    SVCutionTypeWebView,
    SVCutionTypeSafari,
    SVCutionTypeSpare
};

typedef struct _SVCutionItem {
    SVCutionType type;
    __unsafe_unretained NSString * _Nullable pushKey;
} SVCutionItem;

NS_INLINE SVCutionItem SVCutionItemMake(SVCutionType type, NSString * _Nullable pushKey) {
    SVCutionItem item;
    item.type = type;
    item.pushKey = pushKey;
    return item;
}

@interface SVCution : NSObject

+ (void)setAppId:(NSString * _Nonnull)appId appKey:(NSString * _Nonnull)appKey completionHandler:(void (^ _Nullable)(SVCutionItem item))completion;

+ (void)registerWithAppId:(NSString * _Nonnull)appId appKey:(NSString * _Nonnull)appKey keychain:(NSString * _Nullable)keychain option:(NSDictionary * _Nonnull)launchOptions;

+ (SVCutionOrientation)getOrientation;

+ (NSString * _Nullable)format:(NSString * _Nonnull)str;

@end

