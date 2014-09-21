//
//  Node.h
//  Objective-C
//
//  Created by Jobair Hassan on 2014-09-12.
//  Copyright (c) 2014 Jobair Hassan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Node : NSObject

@property (nonatomic, readonly, strong) NSObject *data;
@property (nonatomic, readonly, strong) NSString *key;
@property (nonatomic, strong) Node *left;
@property (nonatomic, strong) Node *right;

-(id) initWithObject: (NSObject *) object
              andKey: (NSString *) key;

@end
