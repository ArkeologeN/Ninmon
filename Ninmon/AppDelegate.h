//
//  AppDelegate.h
//  Ninmon
//
//  Created by Ali Hashmi on 6/13/12.
//  Copyright The Plumtree Group 2012. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
