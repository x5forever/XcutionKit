//
//  SVCution.h
//  SVRequestDemo
//
//  Created by x5.
//  Copyright © 2019 x5. All rights reserved.
//  V2.6.0 update on 2/7/2020.

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
    __unsafe_unretained NSString *pushKey;
} SVCutionItem;

NS_INLINE SVCutionItem SVCutionItemMake(SVCutionType type, NSString *pushKey) {
    SVCutionItem item;
    item.type = type;
    item.pushKey = pushKey;
    return item;
}

@interface SVCution : NSObject

+ (void)setAppId:(NSString *)appId appKey:(NSString *)appKey __deprecated_msg("Please use 'setAppId:appKey:completionHandler:' instead");

+ (void)setAppId:(NSString *)appId appKey:(NSString *)appKey completionHandler:(void (^)(SVCutionItem item))completion;

+ (SVCutionOrientation)getCurrentOrientation;

@end

