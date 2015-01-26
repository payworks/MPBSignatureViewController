//
//  MPBSignatureViewControllerConfiguration.h
//  mpos.ios.blocks.signatureview
//
//  Created by Korbinian Breu on 26/01/15.
//  Copyright (c) 2015 payworks. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MPBSignatureViewControllerConfiguration : NSObject

@property (nonatomic, strong) NSString *merchantName;
@property (nonatomic, strong) NSString *formattedAmount;

@property (nonatomic, strong) UIImage *merchantImage;
@property (nonatomic, strong) /* TODO: MAKE ENUM FOR ICONS */ NSString *schemeName;

- (instancetype)initWithMerchantName:(NSString *)merchantName formattedAmount:(NSString *)formattedAmount;
+ (instancetype)configurationWithMerchantName:(NSString *)merchantName formattedAmount:(NSString *)formattedAmount;


@end