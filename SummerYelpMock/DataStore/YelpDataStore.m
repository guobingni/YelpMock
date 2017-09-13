//
//  YelpDataStore.m
//  SummerYelpMock
//
//  Created by guo on 2017/9/3.
//  Copyright © 2017年 guo. All rights reserved.
//

#import "YelpDataStore.h"
@implementation YelpDataStore

+ (YelpDataStore *)sharedInstance {
    static YelpDataStore *_sharedInstance = nil;
    static dispatch_once_t oncePredicate;
    dispatch_once(&oncePredicate, ^{
        _sharedInstance = [[YelpDataStore alloc] init];
    });
    return _sharedInstance;
}

- (instancetype)init
{
    if (self = [super init]){
        self.selectedCategories = [NSMutableSet new];
    }
    return self;
}

@end

