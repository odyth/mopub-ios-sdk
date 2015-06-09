//
//  UIViewController+MPAdditions.m
//  MoPub
//
//  Copyright (c) 2012 MoPub, Inc. All rights reserved.
//

#import "UIViewController+MPAdditions.h"

#import "MPGlobal.h"

@implementation UIViewController (MPAdditions)

- (UIViewController *)mp_presentedViewController
{
    return self.presentedViewController;
}

- (UIViewController *)mp_presentingViewController
{
    return self.presentingViewController;
}

- (void)mp_presentModalViewController:(UIViewController *)modalViewController
                             animated:(BOOL)animated
{
    [self presentViewController:modalViewController animated:animated completion:nil];
}

- (void)mp_dismissModalViewControllerAnimated:(BOOL)animated
{
    [self dismissViewControllerAnimated:animated completion:nil];
}

@end
