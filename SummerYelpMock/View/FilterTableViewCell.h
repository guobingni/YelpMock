//
//  FilterTableViewCell.h
//  SummerYelpMock
//
//  Created by guo on 2017/9/13.
//  Copyright © 2017年 guo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpFilterDataModel.h"

@interface FilterTableViewCell : UITableViewCell

- (void)updateDataModel:(YelpFilterDataModel *)dataModel;

@end
