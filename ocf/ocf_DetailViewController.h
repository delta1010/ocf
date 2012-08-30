//
//  ocf_DetailViewController.h
//  ocf
//
//  Created by Dj Aero on 8/29/12.
//  Copyright (c) 2012 Dj Aero. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ocf_DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
