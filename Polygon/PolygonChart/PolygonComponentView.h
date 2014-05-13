
//

#import <UIKit/UIKit.h>

@protocol PolygonDatasource,PolygonDelegate;

@interface PolygonComponentView : UIView

@property (nonatomic , weak) __weak id<PolygonDatasource> datasource;
@property (nonatomic , weak) __weak id<PolygonDelegate> delegate;
@property (nonatomic , strong) UIColor* borderColor;
@property (nonatomic , assign) CGFloat borderWidth;
@property (nonatomic , strong) UIFont* font;
@property (nonatomic , strong) UIColor* fontColor;
@property (nonatomic , assign) CGFloat widthOfLayer;
@property (nonatomic , assign) CGFloat distanceFromCenterPolygon;
-(void)reloadData;
@end
