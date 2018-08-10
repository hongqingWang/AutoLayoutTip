//
//  QQVerticalButton.m
//  YiJiaJianKang
//
//  Created by 王红庆 on 2018/8/9.
//  Copyright © 2018年 YiJiaJianKang. All rights reserved.
//

#import "QQVerticalButton.h"
#import "UIView+Frame.h"

@implementation QQVerticalButton

- (void)layoutSubviews {
    [super layoutSubviews];
    
    self.imageView.centerX = self.w * 0.5;
    self.imageView.y = 0;
    
    [self.titleLabel sizeToFit];
    
    self.titleLabel.centerX = self.w * 0.5;
    self.titleLabel.y = self.h - self.titleLabel.h;
}

@end
