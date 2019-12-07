//
//  SVRequest.h
//  SVRequestDemo
//
//  Created by x5 on 2018/7/7.
//  Copyright © 2018年 x5. All rights reserved.
//  V1.1.2 HKSV

#import <Foundation/Foundation.h>

typedef void (^SVResultBlock)(NSDictionary * _Nullable result, NSError * _Nullable error);

@interface SVRequest : NSObject

+ (void)setAppId:(NSString * _Nonnull)appId appKey:(NSString * _Nonnull)appKey;
+ (void)sv_requestWithBlock:(SVResultBlock _Nullable)block;
+ (void)sv_requestWithPath:(NSString *_Nonnull)path bodyParams:(NSDictionary *_Nullable)bodyParams block:(SVResultBlock _Nullable)block;
+ (void)sv_requestWithBaseUrl:(NSString *_Nullable)url path:(NSString *_Nonnull)path bodyParams:(NSDictionary *_Nullable)bodyParams block:(SVResultBlock _Nullable)block;

@end
