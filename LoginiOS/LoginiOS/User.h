//
//  User.h
//  LoginRichie
//
//  Created by Sistemas on 03/02/16.
//  Copyright © 2016 Softhink. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface User : NSObject

- (void)loginWithUsername:(NSString *)username andPassword:(NSString *)password;
- (void)logout;
- (BOOL)userAuthenticated;

@end