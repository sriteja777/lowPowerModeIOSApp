//
//  main.m
//  lowPowerMode
//
//  Created by Sriteja Sugoor on 03/03/23.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import <CoreDuet.h>
#import <objc/runtime.h>

int main(int argc, char * argv[]) {
    NSString * appDelegateClassName;
    @autoreleasepool {
        // Setup code that might create autoreleased objects goes here.
        appDelegateClassName = NSStringFromClass([AppDelegate class]);
    }
    
    _CDBatterySaver *batterySaver = [objc_getClass("_CDBatterySaver") batterySaver];
    int nextState;
    bool isOn = false;
    if(isOn) {
        nextState = 1;
    } else {
        nextState = 0;
    }
    NSError *error = nil;

//    id error: <id <NSError>> NSError;

    if([batterySaver setPowerMode:(long long)nextState error:&error]) {
        NSLog(@"Set power mode state");
    }
    
    NSLog(@"sdfsdf sdfsdf %@",error);

    
    return UIApplicationMain(argc, argv, nil, appDelegateClassName);
}
