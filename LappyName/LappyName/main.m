//
//  main.m
//  LappyName
//
//  Created by Tim on 12/29/13.
//  Copyright (c) 2013 Mang Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSHost *host = [NSHost currentHost];
        NSString *name = [host localizedName];
        NSLog(@"Name: %@", name);
    }
    return 0;
}

