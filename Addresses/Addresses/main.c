//
//  main.c
//  Addresses
//
//  Created by Tim on 12/27/13.
//  Copyright (c) 2013 mang labs. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(int argc, const char * argv[])
{
    // Same symbol '*' is used in 3 ways:
    // A) declare a pointer for a specified data type, that will point at some address once it is defined
    // B) to dereference a pointer, i.e., to read the value from the address that the pointer points to
    // C) to store a new value at the address that the pointer points to

    // %p will format a memory address
    int i = 17;
    printf("The variable \"i\" stores its value at: %p\n", &i);
    
    // Here, we store the address in a pointer; no change in behavior (usage A above).
    int *addressOfI = &i;
    printf("The variable \"i\" stores its value at: %p\n", addressOfI);

    // Here, we dereference (usage B above):
    printf("The dereferenced value of \"i\": %i\n", *addressOfI);
    
    // Here, we store a new value (usage C above)
    *addressOfI = 42;
    printf("New value of \"i\": %i\n", i);
    
    // -----
    // Your functions live at memory addresses too, natch
    printf("The code for the main() function lives in memory at: %p\n", main);

    // -----
    // You can find the size of the data type for a given pointer using sizeof()
    printf("An int is %zu bytes\n", sizeof(i));
    printf("On this system, a pointer is %zu bytes\n", sizeof(addressOfI));
    
    printf("A float consumes this much memory; %zu\n", sizeof(float));
    
    /*On a Mac, a short is a 2-byte integer, and one bit is used to hold the sign (positive or negative). What is the smallest number that a short can store? What is the largest?
    An unsigned short only holds non-negative numbers. What is the largest number that an unsigned short can store?*/
    
    printf("Size of short: %zu\n", sizeof(short));
    printf("Size of unsigned short: %zu\n", sizeof(unsigned short));
    
    // 2 bytes minus 1 bit is 15 bits
    // 2^15
    printf("2^15=%.lf\n", pow(2, 15));

    // First let's look at the official definition for this platform,
    // as defined in "limits.h"
    printf("SHRT_MIN:   %d\n",  SHRT_MIN);    // signed short int
    printf("SHRT_MAX:   %d\n",  SHRT_MAX);
    
    // Max signed short value should be 2^15 - 1
    // The "minus one" part will seem mysterious unless you know that signed integers are represented
    // (in every computer system I'm aware of anyway) in two's-complement.
    // There's another representation called one's-complement but it's not used anymore, afaik.
    // Two's complement basically involves:
    // a) reserve the most-significant bit to represent the sign,
    // b) flip all the bits,
    // c) add 1.
    // You can represent one more number on the negative side than
    // you can on the positive side before you overflow, because we have to account for zero.
    short positive_max_short = pow(2, 15) - 1;
    printf("Unsigned short at what should be max value: %i\n", positive_max_short);
    
    // Now watch what happens when we increment by one...
    positive_max_short++;
    printf("Unsigned short has overflowed and should roll around to the other extreme, which also tells us what the lowest possible negative number is, too: %i\n", positive_max_short);

    // Let's manually assign the lowest negative number...
    short negative_max_short = pow(2, 15) * -1;
    printf("Lowest negative short: %d\n", negative_max_short);
    
    // Let's check the bound by decrementing, should overflow...
    negative_max_short--;
    printf("Have we wrapped? %d\n", negative_max_short);

    // Now let's look at unsigned shorts.
    // This should be simpler since there is no 2's-complement and no sign-bit.
    unsigned short us = pow(2, 16) - 1; // Note: still subtracting one, to account for 0
    printf("Unsigned short should have this maximum: %d\n", us);
    
    // Let's check...
    us++;
    printf("Did we overflow? %d\n", us);
    
    return 0;
}
