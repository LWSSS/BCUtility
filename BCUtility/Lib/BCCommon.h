//
//  BCCommon.h
//  BCUtility
//
//  Created by 易点云 on 2024/6/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BCCommon : NSObject

+ (void)clickResultWith:(NSString *)origin result:(void(^)(NSString *))completion;

@end

NS_ASSUME_NONNULL_END
