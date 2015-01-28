//
//  L360ConfettiView.h
//  L360ConfettiExample
//
//  Created by Mohammed Islam on 12/11/14.
//  Copyright (c) 2014 Life360. All rights reserved.
//

#import <UIKit/UIKit.h>

@class L360ConfettiArea;

@protocol L360ConfettiAreaDelegate <NSObject>

@optional

/**
 *  Return an array of UIColor types and the confetti will be these colors
 */
- (NSArray *)colorsForConfettiArea:(L360ConfettiArea *)confettiArea;

@end

@interface L360ConfettiArea : UIView

@property (weak, nonatomic) id <L360ConfettiAreaDelegate> delegate;

/**
 *  Use this to create a burst of confetti from a specific point
 *  The width determines the square size of the confetti.
 */
- (void)burstAt:(CGPoint)point confettiWidth:(CGFloat)confettiWidth numberOfConfetti:(NSInteger)numberConfetti;

/**
 *  This is the upper limit on how much the confetti sways 
 *  (the actual number per confetti is a random number between 0.0 and this value
 *  This is for iPad/iPhone6+ implementations where the swaying of the confetti will seem too small as compared to iPhone
 *  DEFAULT: 50.0
 */
@property (nonatomic, assign) CGFloat swayLength;

@end
