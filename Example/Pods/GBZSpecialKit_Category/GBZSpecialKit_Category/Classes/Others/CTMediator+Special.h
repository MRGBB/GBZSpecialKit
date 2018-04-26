//
//  CTMediator+Special.h
//  AFNetworking
//
//  Created by admin on 2018/4/25.
//

#import <CTMediator/CTMediator.h>
#import <GBZAPIsKit/APIRequest.h>
#import <GBZAPIsKit/FFReformProtocol.h>
@interface CTMediator (Special)
- (UIViewController*)specialDetailController;

- (NSDictionary*)specialReformerWithOriginData:(NSDictionary*)data;

- (NSDictionary *)specialReformer;

- (APIRequest*)specialAPIRequest;

@end
