//
//  UIView+SubviewRecursion.h
//  UIViewRecursion
//
//  Created by Eric Goldberg on 5/3/12.
//  Copyright (c) 2012 Eric Goldberg. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^SubviewBlock) (UIView* view);

@interface UIView (SubviewRecursion)

-(void)runBlockOnAllSubviews:(SubviewBlock)block;
-(void)enableAllControlsInViewHierarchy;
-(void)disableAllControlsInViewHierarchy;

@end
