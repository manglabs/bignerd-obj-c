//
//  main.m
//  TimeAfterTime
//
//  Created by Tim on 12/29/13.
//  Copyright (c) 2013 Mang Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSDate *now = [NSDate date];
        
        NSLog(@"This NSDate obj lives at %p", now);
        NSLog(@"Now: %@", now);
        
        double seconds = [now timeIntervalSince1970];
        NSLog(@"Since 1970: %f", seconds);
        
        // message with an argument
        
        NSDate *later = [now dateByAddingTimeInterval:100000];
        NSLog(@"In 100,000 seconds it will be %@", later);
        
        // calendars
        
        NSCalendar *cal = [NSCalendar currentCalendar];
        NSLog(@"My cal is %@", [cal calendarIdentifier]);
        
        // multiple arguments
        
        unsigned long day = [cal ordinalityOfUnit:NSDayCalendarUnit
                                           inUnit:NSMonthCalendarUnit
                                          forDate:now];
        NSLog(@"Day %lu of the month", day);
    }
    return 0;
}

