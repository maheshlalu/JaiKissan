//
//  TestViewController.h
//  OnGO
//
//  Created by krish on 06/06/14.
//  Copyright (c) 2014 Aryan Ghassemi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CXPageImageViewController : UIViewController
{
    IBOutlet UIImageView* imageView;
    IBOutlet UIActivityIndicatorView* activityView;
}

@property(assign) NSInteger pageIndex;
@property(strong,nonatomic) NSString* urlString;



@end
