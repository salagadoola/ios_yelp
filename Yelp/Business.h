//
//  Business.h
//  Yelp
//
//  Created by Ray Chiang on 2015/6/26.
//  Copyright (c) 2015年 codepath. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Business : NSObject

@property (nonatomic, strong) NSString *imageURL;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *ratingImageURL;
@property (nonatomic, assign) NSInteger numReviews;
@property (nonatomic, strong) NSString *address;
@property (nonatomic, strong) NSString *categories;
@property (nonatomic, assign) CGFloat distance;

+ (NSMutableArray *)businessesWithDictionaries:(NSArray *)dictionaries;

@end
