UIImage-Tool
============

图片分类,禁止系统渲染图片等方法

*  禁止系统自动渲染图片(iOS8可以直接修改图片的属性)
+ (UIImage *)imageOriginalNamed:(NSString *)name;

*  拉伸图片
+ (UIImage *)imageResizableWithName:(NSString *)imageName;

*  传入图片名称,返回一张圆角图片
+ (UIImage *)circleImageWithName:(NSString *)name borderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor;


*  根据CIImage生成指定大小的UIImage
+ (UIImage *)createNonInterpolatedUIImageFormCIImage:(CIImage *)image withSize:(CGFloat) size
