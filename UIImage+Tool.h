//
//  UIImage+Tool.h
//  Lottery
//
//  Created by ZhuiYi on 14-11-9.
//  Copyright (c) 2014年 ZhuiYi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Tool)
/**
 *  禁止系统自动渲染图片
 */ 
+ (UIImage *)imageOriginalNamed:(NSString *)name;
/**
 *  拉伸图片
 */ 
+ (UIImage *)imageResizableWithName:(NSString *)imageName;
/**
 *  传入图片名称,返回一张圆角图片
 *
 *  @param name        图片明
 *  @param borderWidth 边框宽度
 *  @param borderColor 边框颜色
 *
 *  @return 返回图片
 */
+ (UIImage *)circleImageWithName:(NSString *)name borderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor;

/**
 *  根据CIImage生成指定大小的UIImage
 *
 *  @param image CIImage
 *  @param size  图片宽度
 */
+ (UIImage *)createNonInterpolatedUIImageFormCIImage:(CIImage *)image withSize:(CGFloat) size

@end
