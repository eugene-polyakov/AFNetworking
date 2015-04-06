//
//  AFAuthenticator.h
//  
//
//  Created by E on 4/6/15.
//
//

#import <Foundation/Foundation.h>

@interface AFURLRequestAuthenticator : NSObject

-(void)authenticateRequest:(NSMutableURLRequest*)request;

@end
