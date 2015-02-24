//
//  DetailViewController.h
//  LiveUI
//
//  Created by Ondrej Rafaj on 23/02/2015.
//  Copyright (c) 2015 Ridiculous Innovations. All rights reserved.
//

#import <UIKit/UIKit.h>


@class WBASettings;

@interface WBADetailViewController : UIViewController

@property (nonatomic, strong) WBASettings *detailItem;

@property (nonatomic, weak) IBOutlet UILabel *detailDescriptionLabel;


@end

