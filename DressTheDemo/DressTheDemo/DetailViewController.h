//
//  DetailViewController.h
//  DressTheDemo
//
//  Created by Billy Tobon on 4/27/15.
//  Copyright (c) 2015 Rent the Runway. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

