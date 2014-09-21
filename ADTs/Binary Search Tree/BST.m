//
//  BST.m
//  Objective-C
//
//  Created by Jobair Hassan on 2014-09-13.
//  Copyright (c) 2014 Jobair Hassan. All rights reserved.
//

#import "BST.h"

@implementation BST

-(id) initWithRootData
{
    self = [super init];
    if(nil != self)
    {
        _root = nil;
    }
    
    return self;
}

-(BOOL) isEmpty
{
    return nil == _root;
}

-(BOOL) has: (NSString *) key
{
    NSAssert(![self isEmpty], @"The tree is empty");
    
    if([_root key] == key)
    {
        return YES;
    }
    
    else if([_root key] < key)
    {
    }
    
    return NO;
}


@end
