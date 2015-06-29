//
//  SwitchCell.h
//  Yelp
//
//  Created by Ray Chiang on 2015/6/26.
//  Copyright (c) 2015年 codepath. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SwitchCell;
@protocol SwitchCellDelegate <NSObject>
- (void)switchCell:(SwitchCell *)cell didUpdateValue:(BOOL)value;
@end

@interface SwitchCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (nonatomic, assign) BOOL on;
@property (nonatomic, weak) id<SwitchCellDelegate> delegate; // delegate has to use weak reference
- (void)setOn:(BOOL)on animated:(BOOL)animated;
@end
