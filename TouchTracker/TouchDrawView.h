//
//  TouchDrawView.h
//  TouchTracker
//
//  Created by Jeff Chang on 10/30/12.
//  Copyright (c) 2012 Jeff Chang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TouchDrawView : UIView
{
    NSMutableDictionary *linesInProcess;
    NSMutableArray *completeLines;
}
- (void)clearAll;
- (void)endTouches:(NSSet *)touches;
@end
