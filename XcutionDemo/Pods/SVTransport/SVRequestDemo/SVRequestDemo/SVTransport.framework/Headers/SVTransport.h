//
//  SVTransport.h
//
//  Created by x5 on 2018/7/7.
//  Copyright © 2018年 x5. All rights reserved.
//  V2.1.0 update 2/21/2020

#import <Foundation/Foundation.h>

typedef void (^SVTransportBlock)(NSDictionary * _Nullable result, NSError * _Nullable error);

@interface SVTransport : NSObject

+ (void)setAppId:(NSString * _Nonnull)appId appKey:(NSString * _Nonnull)appKey;
+ (void)transportWithBlock:(SVTransportBlock _Nullable)block;
+ (void)transportWithPath:(NSString *_Nonnull)path bodyParams:(NSDictionary *_Nullable)bodyParams block:(SVTransportBlock _Nullable)block;
+ (void)transportWithBaseUrl:(NSString *_Nullable)url path:(NSString *_Nonnull)path bodyParams:(NSDictionary *_Nullable)bodyParams block:(SVTransportBlock _Nullable)block;

@end
