//
//  BST.h
//  Objective-C
//
//  Created by Jobair Hassan on 2014-09-13.
//  Copyright (c) 2014 Jobair Hassan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Node.h"

@interface BST : NSObject

@property (nonatomic, strong) Node *root;

-(id) initTree;

-(BOOL) isEmpty;

-(BOOL) has: (NSString *) key;

-(void) insertWithData: (NSObject *) data
                andKey: (NSString *) key;
-(void) print;

-(void) deleteNodeWithKey: (NSString *) key;

@end
