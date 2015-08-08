//
//  DetailViewController.h
//  testavecgithub
//
//  Created by Frederic Kwiatkowski on 08/08/2015.
//  Copyright (c) 2015 Frederic Kwiatkowski. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

