//
//  stsAppDelegate.h
//  FirsObjectiveCTests
//
//  Created by Trainee 2 on 2/7/14.
//  Copyright (c) 2014 Ulices. All rights reserved.
//

#import <UIKit/UIKit.h>
#include "Person.h"

@interface stsAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
