//
//  ViewController.h
//  LocalChat
//
//  Created by Ken Rubesh on 11/20/14.
//  Copyright (c) 2014 Portland Code School. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIView *textEntryView;

@property (weak, nonatomic) IBOutlet UITextField *textInput;
@property (weak, nonatomic) IBOutlet UIButton *sendText;

@end

