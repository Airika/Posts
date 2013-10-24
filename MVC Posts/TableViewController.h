//
//  TableViewController.h
//  MVC Posts
//
//  Created by Erika Martinez on 10/22/13.
//  Copyright (c) 2013 Erika Martinez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic) NSMutableArray *characters;

@end
