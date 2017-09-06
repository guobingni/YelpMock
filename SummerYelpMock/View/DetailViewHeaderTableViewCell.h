//
//  DetailViewHeaderTableViewCell.h
//  SummerYelpMock
//
//  Created by guo on 2017/9/6.
//  Copyright © 2017年 guo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"

@interface DetailViewHeaderTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;

@end
