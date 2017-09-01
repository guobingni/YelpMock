//
//  YelpTableViewCell.h
//  SummerYelpMock
//
//  Created by guo on 2017/8/30.
//  Copyright © 2017年 guo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"

@interface YelpTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;

@end

