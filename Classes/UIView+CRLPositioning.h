#import <UIKit/UIKit.h>

@interface UIView (CRLPositioning)

-(UIView *)crl_firstSubviewOfType:(Class)aClass;

-(void)crl_exchangeSubview:(UIView *)view1 withSubview:(UIView *)view2;
-(BOOL)crl_subview:(UIView *)view1 isInFrontOfSubview:(UIView *)view2;

@property (nonatomic, assign) CGPoint crl_origin;
@property (nonatomic, assign) CGFloat crl_x;
@property (nonatomic, assign) CGFloat crl_y;

@property (nonatomic, assign) CGSize crl_size;
@property (nonatomic, assign) CGFloat crl_width;
@property (nonatomic, assign) CGFloat crl_height;

@end