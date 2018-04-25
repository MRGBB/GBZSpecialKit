//
//  Target_Special.m
//  AFNetworking
//
//  Created by admin on 2018/4/25.
//

#import "Target_Special.h"
#import"FFSpecialDetailController.h"
#import"FFSpecialListReformer.h"
#import"SpecialAPIRequest.h"
@implementation Target_Special
- (UIViewController *)Action_specialDetailViewController:(NSDictionary *)params {
    
    return[[FFSpecialDetailController alloc]init];
    
}

- (NSDictionary *)Action_specialReformerWithOriginData:(NSDictionary *)params {
    
    FFSpecialListReformer *reformer = [[FFSpecialListReformer alloc]init];
    
    return params ? [reformer reformData:params] :nil;
    
}

- (NSDictionary *)Action_specialReformer:(NSDictionary *)params {
    
    return[[FFSpecialListReformer alloc]init];
    
}

- (APIRequest *)Action_specialAPIRequest:(NSDictionary *)params {
    
    return[[SpecialAPIRequest alloc]init];
    
}

@end
