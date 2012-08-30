//
//  ocf_MasterViewController.h
//  ocf
//
//  Created by Dj Aero on 8/29/12.
//  Copyright (c) 2012 Dj Aero. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ocf_DetailViewController;

#import <CoreData/CoreData.h>

@interface ocf_MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) ocf_DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
