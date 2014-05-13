
#import <Foundation/Foundation.h>
@class PolygonComponentView;

@protocol PolygonDelegate <NSObject>

@optional
-(void)didSingleTapSelectLayerAtIndex:(NSInteger)index inPolygonView:(PolygonComponentView*)view;
-(void)didDoubleTapSelectLayerAtIndex:(NSInteger)index inPolygonView:(PolygonComponentView*)view;

@end
