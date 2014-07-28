//
//  BPDDetailViewController.h
//  ControleSource
//
//  Created by Carlos Bracarense Foerstnow on 28/07/14.
//  Copyright (c) 2014 br.com.carlosfoerstnow. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BPDDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
