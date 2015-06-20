//
//  AFAuthenticator.m
//
//
//  Created by E on 4/6/15.
//
//

#import "AFURLRequestAuthenticator.h"

@implementation AFURLRequestAuthenticator

-(BOOL)authenticateRequest:(NSMutableURLRequest*)request  {
    return true;
}

-(dispatch_group_t)authenticatorGroup {
    return nil;
}

@end
