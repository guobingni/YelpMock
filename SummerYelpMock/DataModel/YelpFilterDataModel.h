//
//  YelpFilterDataModel.h
//  SummerYelpMock
//
//  Created by guo on 2017/9/13.
//  Copyright © 2017年 guo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YelpFilterDataModel : NSObject

@property (nonatomic, copy) NSString *categoryName;
@property (nonatomic, copy) NSString *categoryCode;

+ (NSArray <YelpFilterDataModel *>*)buildDataModelArrayFromDictionaryArray:(NSArray<NSDictionary *> *)dictArray;

@end
