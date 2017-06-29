//
//  AppDelegate.h
//  GoogleMapsIntegration
//
//  Created by student on 6/29/17.
//  Copyright © 2017 AIO. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

