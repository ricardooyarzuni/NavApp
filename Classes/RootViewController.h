//
//  RootViewController.h
//  NavApp
//
//  Created by Ricardo Oyarzun on 04-03-11.
//  Copyright Universidad Tecnica Federico Santa Maria 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UITableViewController {
	IBOutlet UIButton *Button;
}

@property(nonatomic,retain) IBOutlet UIButton *Button;

- (IBAction)updateText:(id)sender;

@end
