//
//  RCLRefreshTableViewController.h
//  RCL
//
//  Created by Clawoo on 3/25/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 The RCLRefreshTableViewController adds pull to refresh functionality
 to the UITableViewController. It is basically Leah Culver's PTR TVC
 modified to fit the RCL coding style and fixed in a couple of places.
 
 Based on PullRefreshTableViewController.h - Plancast
 Originally created by Leah Culver on 7/2/10.
 Copyright (c) 2010 Leah Culver
 https://github.com/leah/PullToRefresh
 */
@interface RCLRefreshTableViewController : UITableViewController {
    UIView *refreshHeaderView_;
    UILabel *refreshLabel_;
    UILabel *lastRefreshLabel_;
    UIImageView *refreshArrow_;
    UIActivityIndicatorView *refreshSpinner_;
    
    BOOL isDragging_;
    BOOL isReloading_;
    
    NSString *textPull_;
    NSString *textRelease_;
    NSString *textLoading_;
    
    NSDate *lastRefreshDate_;
}

@property (nonatomic, copy) NSString *textPull;
@property (nonatomic, copy) NSString *textRelease;
@property (nonatomic, copy) NSString *textLoading;

/*!
 This method is called when the user has completed a PTR gesture.
 The table view controller should override this method and start loading data 
 in background
 */
- (void)startReloadingResults;

/*!
 This method must be called manually after the reload of the data has been
 completed.
 */
- (void)didEndReloadingResults;

@end