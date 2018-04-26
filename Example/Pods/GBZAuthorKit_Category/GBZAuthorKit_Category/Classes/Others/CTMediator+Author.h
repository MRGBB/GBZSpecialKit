//
//  CTMediator+Author.h
//  AFNetworking
//
//  Created by admin on 2018/4/25.
//
#import <CTMediator/CTMediator.h>
#import <GBZAPIsKit/APIRequest.h>
#import <GBZAPIsKit/FFReformProtocol.h>

@interface CTMediator (Author)
- (UIViewController*)authorDetailViewController;

- (NSDictionary*)authorReformerWithOriginData:(NSDictionary*)data;

- (NSDictionary *)authorReformer;

- (APIRequest*)authorAPIRequest;

@end
