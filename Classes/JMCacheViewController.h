//
//  JMCacheViewController.h
//  JMCache
//
//  Created by Jake Marsh on 2/7/11.
//  Copyright 2011 Rubber Duck Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JMCacheViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource> {
	NSMutableArray *_imagesToLoad;
}

@end