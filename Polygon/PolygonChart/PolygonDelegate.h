//
//  A3PolygonDelegate.h
//  A3PolygonComponent
//
//  Created by macravytech4 on 21/08/13.
//  Copyright (c) 2013 macravytech4. All rights reserved.
//

#import <Foundation/Foundation.h>
@class PolygonComponentView;

@protocol PolygonDelegate <NSObject>

@optional
-(void)didSingleTapSelectLayerAtIndex:(NSInteger)index inPolygonView:(PolygonComponentView*)view;
-(void)didDoubleTapSelectLayerAtIndex:(NSInteger)index inPolygonView:(PolygonComponentView*)view;

@end
