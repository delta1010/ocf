//
//  ocf_AppDelegate.h
//  ocf
//
//  Created by Dj Aero on 8/29/12.
//  Copyright (c) 2012 Dj Aero. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ocf_AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
