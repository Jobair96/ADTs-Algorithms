//
//  main.m
//  Objective-C
//
//  Created by Jobair Hassan on 8/29/2014.
//  Copyright (c) 2014 Jobair Hassan. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSString *message = @"Hello World";
        NSString *newMessage = [[NSString alloc] initWithFormat:@"I am %@ ", message];
        NSDate *n = [[NSDate alloc] init];
        NSLog(@"%@", n);
        
    }
    return 0;
}

