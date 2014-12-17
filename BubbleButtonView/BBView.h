//
//  BBView.h
//  BubbleButtonView
//
//  Created by Benjamin Gordon on 1/8/13.
//  Copyright (c) 2013 Benjamin Gordon. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol BBDelegate
-(void)didClickBubbleButton:(UIButton *)bubble;
@end

@interface BBView : UIView
@property (nonatomic, weak) id <BBDelegate> delegate;
@property (nonatomic, strong) NSMutableArray *buttons;
-(void)fillBubbleViewWithButtons:(NSArray *)strings bgColor:(UIColor *)bgColor textColor:(UIColor *)textColor fontSize:(float)fsize;
-(void)addBubbleButtonsWithInterval:(float)ftime;
-(void)removeBubbleButtonsWithInterval:(float)ftime;
-(void)clickedBubbleButton:(UIButton *)bubble;

@end
