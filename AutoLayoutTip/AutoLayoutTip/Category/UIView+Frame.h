//
//  UIView+Frame.h
//  YiJiaJianKang
//
//  Created by 王红庆 on 2018/8/9.
//  Copyright © 2018年 YiJiaJianKang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Frame)

@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat w;
@property (nonatomic, assign) CGFloat h;
@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;
@property (nonatomic, assign) CGSize size;

+ (instancetype)viewFromNib;

@end
