//
//  A3PolygonDatasource.h
//  A3PolygonComponent
//
//  Created by macravytech4 on 21/08/13.
//  Copyright (c) 2013 macravytech4. All rights reserved.
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
