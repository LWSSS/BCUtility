//
//  BCService.h
//  BCUtility
//
//  Created by 易点云 on 2024/6/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BCService : NSObject

+ (void)registerApp:(NSString *)appKey result:(void(^)(NSInteger))completion;

@end

NS_ASSUME_NONNULL_END
