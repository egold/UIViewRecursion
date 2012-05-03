UIViewRecursion
===============

An Objective-C category on UIView that allows execution of a block on all subviews

Installation
============

1. Add UIView+SubviewRecursion.h and UIView+SubviewRecursion.m to your project
1. Make sure UIView+SubviewRecursion.m is part of your build target
1. Import UIView+SubviewRecursion.h whereever you wish to execute a block recursively on all subview of a view

Usage
=====

Simply call `-[UIView runBlockOnAllSubviews:]` in your view controllers. The block has access to each UIView (or descendant) object, so you can do things like hide / show, enable / disable, etc. very easily.

There are also a couple of convenient methods that showcase certain common use cases, like disabling or enabling all controls in a hierarchy. (For instance, to disable controls from being accidentally touched when they are part of a page being turned in a UIPageViewController)

Example
=======

To quickly disable all controls (buttons, text fields) in a view hierarchy:

    #import "UIView+SubviewRecursion.h"

    @implementation MyFancyViewController

    -(void)disableAllControls
    {
        [self.view disableAllControlsInViewHierarchy];
    }
    
    -(void)makeAllSubviewsGreen
    {
        [self.view runBlockOnAllSubviews:^(UIView *view) {
        
            view.backgroundColor = [UIColor greenColor];
        }];
    }
    
    @end
    