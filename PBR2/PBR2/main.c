//
//  main.c
//  PBR2
//
//  Created by Tim on 12/27/13.
//  Copyright (c) 2013 mang labs. All rights reserved.
//

#include <stdio.h>
#include <math.h>

//“In metersToFeedAndInches(), you used floor() and subtraction to break rawFeet into its integer and fractional parts.
//Change metersToFeedAndInches() to use modf() instead.”

void metersToFeetAndInches(double meters, unsigned int *feetPtr, double *inchesPtr)
{
    // Convert the number of meters into a floating-point number of feet
    double rawFeet = meters * 3.281; // e.g. 2.4536
    
    double integerPart;
    *inchesPtr = (unsigned int) (modf(rawFeet, &integerPart) * 12);
    *feetPtr = (unsigned int) integerPart;
}

void metersToFeetAndInchesOriginal(double meters, unsigned int *ftPtr, double *inPtr)
{
    // This function assumes meters is non-negative.
    
    // Convert the number of meters into a floating-point number of feet
    double rawFeet = meters * 3.281; // e.g. 2.4536
    
    // How many complete feet as an unsigned int?
    unsigned int feet = (unsigned int)floor(rawFeet);

    // Store the number of feet at the supplied address
    printf("Storing %u to the address %p\n", feet, ftPtr);
    *ftPtr = feet;

    // Calculate inches
    double fractionalFoot = rawFeet - feet;
    double inches = fractionalFoot * 12.0;

    // Store the number of inches at the supplied address
    printf("Storing %.2f to the address %p\n", inches, inPtr);
    *inPtr = inches;
}

int main(int argc, const char * argv[])
{
    double meters = 3.0;
    unsigned int feet;
    double inches;
    
    metersToFeetAndInches(meters, &feet, &inches);
    printf("%.1f meters is equal to %d feet and %.1f inches.", meters, feet, inches);
    
    return 0;
}
