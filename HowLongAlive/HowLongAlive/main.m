//
//  main.m
//  HowLongAlive
//
//  Created by Tim on 12/29/13.
//  Copyright (c) 2013 Mang Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSDateComponents *dateComponents = [[NSDateComponents alloc] init];
        [dateComponents setYear:1980];
        [dateComponents setMonth:1];
        [dateComponents setDay:1];
        [dateComponents setHour:13];
        [dateComponents setMinute:30];
        [dateComponents setSecond:0];
        
        NSCalendar *gregorianCalendar = [[NSCalendar alloc] initWithCalendarIdentifier:NSGregorianCalendar];
    
        NSDate *birthDate = [gregorianCalendar dateFromComponents:dateComponents];
        
        NSDate *now = [[NSDate alloc] init];
        
        
        NSLog(@"Number of seconds since birth: %lf", [now timeIntervalSinceDate:birthDate]);
    }
    return 0;
}

