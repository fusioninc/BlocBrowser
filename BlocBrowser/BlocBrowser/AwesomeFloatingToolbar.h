//
//  AwesomeFloatingToolbar.h
//  BlocBrowser
//
//  Created by Fusion on 6/22/15.
//  Copyright (c) 2015 Jason Kuang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AwesomeFloatingToolbar;

@protocol AwesomeFloatingToolbarDelegate <NSObject>

@optional

- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didSelectButtonWithTitle:(NSString *)title;

- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didTryToPanWithOffset:(CGPoint)offset;

- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didTryToZoom:(UIPinchGestureRecognizer *)recognizer;

- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didTryToLongPressButton:(UIView *)view;


@end

@interface AwesomeFloatingToolbar : UIView

- (instancetype) initWithFourTitles:(NSArray *)titles;

- (void) setEnabled:(BOOL)enabled forButtonWithTitle:(NSString *)title;

- (void)buttonPressed:(UIButton *)sender;

- (void)buttonReleased:(UIButton *)sender;



@property (nonatomic, weak) id <AwesomeFloatingToolbarDelegate> delegate;

@end