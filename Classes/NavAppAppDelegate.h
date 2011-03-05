//
//  NavAppAppDelegate.h
//  NavApp
//
//  Created by Ricardo Oyarzun on 04-03-11.
//  Copyright Universidad Tecnica Federico Santa Maria 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NavAppAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

