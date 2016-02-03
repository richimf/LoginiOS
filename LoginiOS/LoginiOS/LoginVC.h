//
//  LoginVC.h
//  LoginiOS
//
//  Created by Sistemas on 03/02/16.
//  Copyright © 2016 com.richie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginVC : UIViewController <UITextFieldDelegate>

@property (strong, nonatomic) IBOutlet UITextField *usuarioTF;
@property (strong, nonatomic) IBOutlet UITextField *passwordTF;
@property (strong, nonatomic) IBOutlet UISwitch *miSwitch;

//buttons
@property (strong, nonatomic) IBOutlet UIButton *loginBtn;
@property (strong, nonatomic) IBOutlet UIButton *faceBtn;
@property (strong, nonatomic) IBOutlet UIButton *tuitBtn;
@property (strong, nonatomic) IBOutlet UIButton *gogleBtn;

- (IBAction)logInNow:(id)sender;


@end
