//
//  WKTextFieldFormatter.h
//
//  Created by Welkin Xie on 15/12/25.
//  Copyright © 2015年 WelkinXie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    WKFormatterTypeAny,
    WKFormatterTypePhoneNumber,
    WKFormatterTypeNumber,
    WKFormatterTypeAlphabet,
    WKFormatterTypeNumberAndAlphabet,
    WKFormatterTypeCustom
} WKFormatterType;

@interface WKTextFieldFormatter : NSObject <UITextFieldDelegate>

@property (assign, nonatomic) WKFormatterType formatterType;
@property (assign, nonatomic) NSUInteger limitedLength;
@property (copy, nonatomic) NSString *characterSet;

- (instancetype)initWithTextField:(UITextField *)textField;

@end