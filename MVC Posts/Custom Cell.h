//
//  Custom Cell.h
//  MVC Posts
//
//  Created by Erika Martinez on 10/22/13.
//  Copyright (c) 2013 Erika Martinez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Post.h"


@interface Custom_Cell : UITableViewCell

@property (nonatomic, strong) Post *post;

@property (weak, nonatomic) IBOutlet UILabel *title;
@property (weak, nonatomic) IBOutlet UILabel *userName;
@property (weak, nonatomic) IBOutlet UILabel *content;
@property (weak, nonatomic) IBOutlet UIDatePicker *timeStamp;

@end
