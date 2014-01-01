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
        
        // Create a mutable array.
        NSMutableArray *dateList = [NSMutableArray array];
        
        [dateList addObject:now];
        [dateList addObject:tomorrow];
        
        // Insert the remaining item at the beginning of the list
        [dateList insertObject:yesterday atIndex:0];
        
        // count the dates
        NSLog(@"%lu", [dateList count]);
        
        // Delete the middle item (today)
        [dateList removeObjectAtIndex:1];
        
        // nu-skool iteration
        for (NSDate *date in dateList) {
            NSLog(@"Fast enumeration style: %@", date);
        }
        
        // Note: when using fast enumeration with an NSMutableArray,
        // you are not allowed to mutate the array:
        // *** Terminating app due to uncaught exception 'NSGenericException',
        //reason: '*** Collection <__NSArrayM: 0x100103000> was mutated
        //while being enumerated.'
//        for (NSDate *date in dateList) {
//            [dateList removeLastObject];
//        }
        
        NSArray *oldSchoolArr = [NSArray arrayWithObjects: now, tomorrow, nil];
        NSLog(@"Old-school array: %@", oldSchoolArr);
    }
    return 0;
}