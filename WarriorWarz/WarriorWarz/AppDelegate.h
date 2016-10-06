//
//  AppDelegate.h
//  WarriorWarz
//
//  Created by Liam Patterson on 1/3/16.
//  Copyright © 2016 Liam Patterson. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ParseUI/ParseUI.h>
#import "ParseLoginViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, PFLogInViewControllerDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, strong) NSMutableData *profilePictureData;

@end

