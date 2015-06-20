//
//  AFAuthenticator.h
//
//
//  Created by E on 4/6/15.
//
//

#import <Foundation/Foundation.h>

@interface AFURLRequestAuthenticator : NSObject

-(BOOL)authenticateRequest:(NSMutableURLRequest*)request;

-(dispatch_group_t)authenticatorGroup;

@end
