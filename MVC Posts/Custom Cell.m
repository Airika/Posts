//
//  Custom Cell.m
//  MVC Posts
//
//  Created by Erika Martinez on 10/22/13.
//  Copyright (c) 2013 Erika Martinez. All rights reserved.
//

#import "Custom Cell.h"

@implementation Custom_Cell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
