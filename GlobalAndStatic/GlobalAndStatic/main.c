//
//  main.c
//  GlobalAndStatic
//
//  Created by Tim on 12/27/13.
//  Copyright (c) 2013 mang labs. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// global - this is accessible from all functions in all files
// float lastTemp;

// static - this is accessible from all functions in *this* file
// since there is only one file in this project, of course this does nothing
static float lastTemp;

float fahrenheitFromCelsius(float cel)
{
    lastTemp = cel;
    float fahr = cel * 1.8 + 32.0;
    printf("%f Celsius is %f Fahrenheit.\n", cel, fahr);
    return fahr;
}

int main(int argc, const char * argv[])
{
    float freezeInC = 0;
    float freezeInF = fahrenheitFromCelsius(freezeInC);
    printf("Water freezes at %f degrees Fahrenheit.\n", freezeInF);
    printf("The last temperature converted was %f.\n", lastTemp);
    return EXIT_SUCCESS;
}
