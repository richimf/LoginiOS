//
//  User.m
//  LoginRichie
//
//  Created by Sistemas on 03/02/16.
//  Copyright © 2016 Softhink. All rights reserved.
//

#import "User.h"

@implementation User

- (void)loginWithUsername:(NSString *)username andPassword:(NSString *)password{
    
    // Validate user here with your implementation
    // and notify the root controller
     NSLog(@"usuario: %@, password %@",username,password);
}

- (void)logout{
    // Here you can delete the account
}

- (BOOL)userAuthenticated {
    
    // This variable is only for testing
    // Here you have to implement a mechanism to manipulate this
    
    BOOL auth = NO;
    
    if (auth) {
        return YES;
    }
    
    return NO;
}

@end