//
//  main.m
//  Readline2
//
//  Created by Tim on 12/30/13.
//  Copyright (c) 2013 Mang Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <readline/readline.h>

//The return value of the readline function from Chapter 8 is of type const char *, or a C string.
//It is possible to get an NSString instance with the same characters as any given C string
//by sending the stringWithUTF8String: class message to the NSString class
//and passing in the C string as its argument.
//Re-write the readline() challenge from Chapter 8 to use an NSString and NSLog()
//rather than a C string and printf().

int main(int argc, const char * argv[])
{
    printf("Where should I start counting? ");
    NSString *countStr = [NSString stringWithUTF8String: readline(NULL)];
    for (int i = countStr.intValue; i >= 0; i -= 3) {
        NSLog(@"%d\n", i);
        if (i % 5 == 0) {
            NSLog(@"Found one!\n");
        }
    }
    return 0;
}
