//
//  ViewController.h
//  PictureHead
//
//  Created by 涂婉丽 on 15/12/8.
//  Copyright (c) 2015年 涂婉丽. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *headIcon;
- (IBAction)changeIconAction:(UITapGestureRecognizer *)sender;


@end

