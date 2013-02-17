//
//  CalculatorViewController.h
//  Calculator
//
//  Created by Nicholas Mercer on 2/16/13.
//  Copyright (c) 2013 Nicholas Mercer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CalculatorViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *display;

- (IBAction)digitPressed:(UIButton *)sender;

@end
