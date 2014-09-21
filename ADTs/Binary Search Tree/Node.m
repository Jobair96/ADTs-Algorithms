//
//  Node.m
//  Objective-C
//
//  Created by Jobair Hassan on 2014-09-12.
//  Copyright (c) 2014 Jobair Hassan. All rights reserved.
//

#import "Node.h"

@implementation Node

-(id) initWithObject:(NSObject *)object
              andKey:(NSString *)key
{
    self = [super init];
    if(nil != self)
    {
        _data = object;
        _key = key;
    }
    
    return self;
    
}

@end
