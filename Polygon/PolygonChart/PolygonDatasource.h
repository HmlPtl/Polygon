
//

#import <Foundation/Foundation.h>
@class PolygonComponentView;

@protocol PolygonDatasource <NSObject>

-(NSInteger)numberOfLayersInPolygonView:(PolygonComponentView*)view;

@optional
-(NSString*)titleForLayerAtIndex:(NSInteger)index inPolygonView:(PolygonComponentView*)view;
-(NSString*)titleForCentrePolygonInPolygonView:(PolygonComponentView*)view;
-(UIColor*)colorForLayerAtIndex:(NSInteger)index inPolygonView:(PolygonComponentView*)view;
-(UIColor*)colorForCentrePolygonInPolygonView:(PolygonComponentView*)view;
@end
