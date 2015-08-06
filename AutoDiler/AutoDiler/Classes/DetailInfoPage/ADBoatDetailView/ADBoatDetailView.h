//
//  ADBoatDetailView.h
//  AutoDiler
//
//  Created by RenZhe Ahn on 2/7/14.
//  Copyright (c) 2014 MRDzA. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ADModel;

@interface ADBoatDetailView : UIView

@property(nonatomic, retain) ADModel *model;

@property (weak, nonatomic) IBOutlet UILabel *adDate;
@property (weak, nonatomic) IBOutlet UILabel *adID;
@property (weak, nonatomic) IBOutlet UILabel *adYear;
@property (weak, nonatomic) IBOutlet UILabel *adCategory;
@property (weak, nonatomic) IBOutlet UILabel *adPower;
@property (weak, nonatomic) IBOutlet UILabel *adFuelType;
@property (weak, nonatomic) IBOutlet UILabel *adReplacement;
@property (weak, nonatomic) IBOutlet UILabel *adForeigner;
@property (weak, nonatomic) IBOutlet UILabel *adCrashed;

- (void)initView;
- (void)populateData;

@end
