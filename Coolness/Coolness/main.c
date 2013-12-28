//
//  main.c
//  Countdown
//
//  Created by Tim on 12/27/13.
//  Copyright (c) 2013 mang labs. All rights reserved.
//

#include <stdio.h>
#import <readline/readline.h>

int main(int argc, const char * argv[])
{
    printf("Who is cool? ");
    const char *name = readline(NULL);
    printf("%s is cool!\n\n", name);
    return 0;
}

