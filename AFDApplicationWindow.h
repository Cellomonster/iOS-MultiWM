//
//  ARWindow.h
//  
//
//  Created by Julian Triveri on 10/22/17.
//

#import <UIKit/UIKit.h>

@interface AFDApplicationWindow : UIView
@property (assign) NSString* applicationBundleId;
-(AFDApplicationWindow*)initWithApplication:(NSString*)applicationBundleId;
-(void)setWindowFrame:(CGRect)frame;
@end
