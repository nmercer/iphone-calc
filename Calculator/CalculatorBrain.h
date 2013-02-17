//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Nicholas Mercer on 2/17/13.
//  Copyright (c) 2013 Nicholas Mercer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (double)performOperation:(NSString *)operation;

@end
