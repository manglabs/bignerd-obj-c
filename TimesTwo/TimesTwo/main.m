//
//  main.m
//  TimesTwo
//
//  Created by Tim on 12/30/13.
//  Copyright (c) 2013 Mang Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        NSDate *currentTime = nil;
        NSLog(@"pointer's address is %p", currentTime);
        
        currentTime = [NSDate date];
        NSLog(@"pointer's address is %p", currentTime);

        NSDate *startTime = currentTime;

        sleep(1);
        
        currentTime = [NSDate date];
        NSLog(@"pointer's new address is %p", currentTime);
        NSLog(@"new pointer's address is still the original address: %p", startTime);
    }
    return 0;
}

