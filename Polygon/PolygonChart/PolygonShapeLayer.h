
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface PolygonShapeLayer : CAShapeLayer{
    
}
@property(nonatomic)CGPathRef defaultPath;
@property (nonatomic , strong) UIColor* fontColor;
@property (nonatomic , strong) UIFont* font;
@property (nonatomic , assign) BOOL isSelected;
@property (nonatomic , assign) BOOL isPolygon;
@property (nonatomic , assign) CGPoint titleAtPoint;
@property (nonatomic , assign) CGFloat angle;
-(void)gradientColorForPolygonAtIndex:(NSInteger)index;

-(void)setPolygonTitle:(NSString*)title;
@end
