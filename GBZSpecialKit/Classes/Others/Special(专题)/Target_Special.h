//
//  Target_Special.h
//  AFNetworking
//
//  Created by admin on 2018/4/25.
//

#import <Foundation/Foundation.h>
#import "GBZSpecialKit.h"
@interface Target_Special : NSObject
- (UIViewController *)Action_specialDetailViewController:(NSDictionary *)params;

- (NSDictionary *)Action_specialReformerWithOriginData:(NSDictionary *)params;

- (NSDictionary *)Action_specialReformer:(NSDictionary *)params;

- (APIRequest *)Action_specialAPIRequest:(NSDictionary *)params;

@end
