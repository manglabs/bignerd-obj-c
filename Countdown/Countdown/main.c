//
//  main.c
//  Countdown
//
//  Created by Tim on 12/27/13.
//  Copyright (c) 2013 mang labs. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#import <readline/readline.h>

int main(int argc, const char * argv[])
{
    printf("Where should I start counting? ");
    const char *countStr = readline(NULL);
    for (int i = atoi(countStr); i >= 0; i -= 3) {
        printf("%d\n", i);
        if (i % 5 == 0) {
            printf("Found one!\n");
        }
    }
    return 0;
}
