//
//  TouchDrawView.h
//  TouchTracker
//
//  Created by Jeff Chang on 10/30/12.
//  Copyright (c) 2012 Jeff Chang. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Line;
@interface TouchDrawView : UIView <UIGestureRecognizerDelegate>
{
    NSMutableDictionary *linesInProcess;
    NSMutableArray *completeLines;
    UIPanGestureRecognizer *moveRecognizer;
}
@property (nonatomic, weak) Line *selectedLine;
- (Line *)lineAtPoint: (CGPoint)p;
- (void)clearAll;
- (void)endTouches:(NSSet *)touches;
@end
