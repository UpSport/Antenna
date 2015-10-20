//
//  AFHTTPClient.h
//  antenna
//
//  Created by Craig (Mingtao) Zhang on 10/20/15.
//  Copyright © 2015 Marin Todorov. All rights reserved.
//

#import "AFHTTPRequestOperationManager.h"
#import "AFNetworking.h"

//API call completion block with result as json
typedef void (^JSONResponseBlock)(NSDictionary* json);

@interface API : AFHTTPRequestOperationManager

//the authorized user
@property (strong, nonatomic) NSDictionary* user;

+(API*)sharedInstance;

//check whether there's an authorized user
-(BOOL)isAuthorized;

//send an API command to the server
-(void)commandWithParams:(NSMutableDictionary*)params onCompletion:(JSONResponseBlock)completionBlock;

@end
