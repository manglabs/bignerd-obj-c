//
//  main.m
//  DateList
//
//  Created by Tim on 12/30/13.
//  Copyright (c) 2013 Mang Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        // now
        NSDate *now = [NSDate date];
        
        // tomorrow
        NSDate *tomorrow = [now dateByAddingTimeInterval:24 * 60 * 60];
        // yesterday
        NSDate *yesterday = [now dateByAddingTimeInterval:-24 * 60 * 60];
        
        // array of all 3
        NSArray *dateList = @[now, tomorrow, yesterday];
        //NSLog(@"%@", dateList);
        
        // count the dates
        NSLog(@"%lu", [dateList count]);

        // ye-olde-school iterate over the array
        int count = (int)[dateList count];
        for (int i = 0; i < count; i++) {
            NSDate *date = dateList[i];
            NSLog(@"%i: %@", i, date);
        }
        
        // nu-skool iteration
        for (NSDate *date in dateList) {
            NSLog(@"Fast enumeration style: %@", date);
        }
        
    }
    return 0;
}

