//
//  LPTextField.h
//  LaunchPad
//
//  Copyright (c) 2013 Syrp Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LPElementProtocol.h"

@interface LPTextField : UITextField <LPElementProtocol>

- (id)initWithLPElementKey:(NSString*)elementKey styleKey:(NSString*)styleKey;

- (id)initWithFrame:(CGRect)frame LPElementKey:(NSString*)elementKey styleKey:(NSString*)styleKey;

+ (instancetype)textFieldWithLPElementKey:(NSString*)elementKey styleKey:(NSString*)styleKey;

+ (instancetype)textFieldWithFrame:(CGRect)frame LPElementKey:(NSString*)elementKey styleKey:(NSString*)styleKey;

@end