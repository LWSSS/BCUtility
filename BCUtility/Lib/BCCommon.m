//
//  BCCommon.m
//  BCUtility
//
//  Created by 易点云 on 2024/6/18.
//

#import "BCCommon.h"

@implementation BCCommon

+ (void)clickResultWith:(NSString *)origin result:(void (^)(NSString * _Nonnull))completion{
    completion([NSString stringWithFormat:@"%@_BCBCBC",origin]);
}

@end
