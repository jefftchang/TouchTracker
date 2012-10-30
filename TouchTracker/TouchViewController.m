//
//  TouchViewController.m
//  TouchTracker
//
//  Created by Jeff Chang on 10/30/12.
//  Copyright (c) 2012 Jeff Chang. All rights reserved.
//

#import "TouchViewController.h"
#import "TouchDrawView.h"

@implementation TouchViewController

- (void)loadView
{
    [self setView:[[TouchDrawView alloc] initWithFrame:CGRectZero]];
}

@end
