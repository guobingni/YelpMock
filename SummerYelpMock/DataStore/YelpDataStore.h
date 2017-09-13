//
//  YelpDataStore.h
//  SummerYelpMock
//
//  Created by guo on 2017/9/3.
//  Copyright © 2017年 guo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YelpDataModel.h"

@import CoreLocation;

@interface YelpDataStore : NSObject

@property (nonatomic, copy) NSArray <YelpDataModel *> *dataModels;
@property (nonatomic) CLLocation *userLocation;

@property (nonatomic) NSString *priceParameter;
@property (nonatomic) NSMutableSet *selectedCategories;

+ (YelpDataStore *)sharedInstance;
@end

