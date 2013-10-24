//
//  Post.h
//  MVC Posts
//
//  Created by Erika Martinez on 10/22/13.
//  Copyright (c) 2013 Erika Martinez. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Post : NSObject

@property (nonatomic) NSString *userName;
@property (nonatomic) NSString *title;
@property (nonatomic) NSString *content;
@property (nonatomic) NSDate *timeStamp;
@property (nonatomic) NSArray *stats;
@end
