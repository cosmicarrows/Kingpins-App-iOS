//
//  firstView.h
//  orangeConference
//
//  Created by Laurence Wingo on 1/9/13.
//  Copyright (c) 2013 Laurence Wingo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface scheduleView : UIViewController <UITableViewDataSource> {
    
    UISegmentedControl *weeklySegmentedControl;
    UITableView *regularScheduleTableView;
}
@property (nonatomic, strong) UISegmentedControl *weeklySegmentedControl;
@property (nonatomic, strong) UITableView *regularScheduleTableView;
@property (nonatomic, strong) UIViewController *secondViewController;

@end
