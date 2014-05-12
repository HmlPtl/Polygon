//
//  ViewController.m
//  Polygon
//
//  Created by hemal patel on 12/05/14.
//  Copyright (c) 2014 Hml. All rights reserved.
//

#import "ViewController.h"
#import "PolygonComponentView.h"

@interface ViewController (){
    PolygonComponentView* componentView;
}
@property (nonatomic , strong) PolygonComponentView* componentView;

@end

@implementation ViewController
@synthesize componentView;

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    self.componentView = [[PolygonComponentView alloc]initWithFrame:self.view.bounds];
    componentView.datasource = self;
    componentView.delegate = self;
    [self.view addSubview:componentView];
}
-(NSInteger)numberOfLayersInPolygonView:(PolygonComponentView *)view{
    return 3;
}
-(UIColor *)colorForLayerAtIndex:(NSInteger)index inPolygonView:(PolygonComponentView *)view{
    if (index == 0) {
        return [UIColor colorWithRed:(147.0/255.0) green:(126.0/255.0) blue:(161.0/255.0) alpha:1.0];
    }
    else if (index == 1){
        return [UIColor colorWithRed:(152.0/255.0) green:(77.0/255.0) blue:(58.0/255.0) alpha:1.0];
    }
    else if (index == 2){
        return [UIColor colorWithRed:(88.0/255.0) green:(158.0/255.0) blue:(172.0/255.0) alpha:1.0];
    }
    else if (index == 3){
        return [UIColor colorWithRed:(96.0/255.0) green:(184.0/255.0) blue:(145.0/255.0) alpha:1.0];
    }
    else if (index == 4){
        return [UIColor colorWithRed:(184.0/255.0) green:(164.0/255.0) blue:(116.0/255.0) alpha:1.0];
    }
    else if (index == 5){
        return [UIColor colorWithRed:(229.0/255.0) green:(71.0/255.0) blue:(70.0/255.0) alpha:1.0];
    }
    return 0;
}
-(UIColor*)colorForCentrePolygonInPolygonView:(PolygonComponentView*)view{
    return [UIColor colorWithRed:(164.0/255.0) green:(79.0/255.0) blue:(223.0/255.0) alpha:1.0];
}
-(NSString *)titleForCentrePolygonInPolygonView:(PolygonComponentView *)view{
    return @"Center";
}
-(NSString *)titleForLayerAtIndex:(NSInteger)index inPolygonView:(PolygonComponentView *)view{
    return [NSString stringWithFormat:@"Layer-%d",index+1];
}
- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
