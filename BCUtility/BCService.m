//
//  BCService.m
//  BCUtility
//
//  Created by 易点云 on 2024/6/18.
//

#import "BCService.h"

@implementation BCService

+ (void)registerApp:(NSString *)appKey result:(void (^)(NSInteger))completion{
    completion([appKey isEqualToString:@"999999"] ? 1 : 0);
}

@end
