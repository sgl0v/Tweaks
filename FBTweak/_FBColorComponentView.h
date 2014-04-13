/**
 Copyright (c) 2014-present, Facebook, Inc.
 All rights reserved.

 This source code is licensed under the BSD-style license found in the
 LICENSE file in the root directory of this source tree. An additional grant
 of patent rights can be found in the PATENTS file in the same directory.
 */

#import <UIKit/UIKit.h>

@class SliderView;
@class FBSliderView;

@interface FBColorComponentView : UIView

@property(nonatomic, strong, readonly) UILabel* label;
@property(nonatomic, strong, readonly) FBSliderView* slider;
@property(nonatomic, strong, readonly) UITextField* textField;

@end
