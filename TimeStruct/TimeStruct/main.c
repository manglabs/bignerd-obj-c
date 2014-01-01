//
//  main.c
//  TimeStruct
//
//  Created by Tim on 12/27/13.
//  Copyright (c) 2013 Mang Labs. All rights reserved.
//

#include <stdio.h>
#include <time.h>

//Your challenge is to write a program that will tell you what the date (4-30-2015 format is fine) will be in 4 million seconds

int main(int argc, const char * argv[])
{
//    The function time() returns the number of seconds since the first moment of 1970 in Greenwich, England. localtime_r() can read that duration and pack a struct tm with the appropriate values. (It actually takes the address of the number of seconds since 1970 and the address of an struct tm.) Thus, getting the current time as a struct tm looks like this:
    long secondsSince1970 = time(NULL);
    printf("It has been %ld seconds since 1970\n", secondsSince1970);

    long fourMillionSecondsFromNow = secondsSince1970 + 4000000;
    struct tm then;
    localtime_r(&fourMillionSecondsFromNow, &then);
    printf("The future date is %d-%d-%d\n", then.tm_mon + 1, then.tm_mday, then.tm_year + 1900);

    return 0;
}

// struct tm {
// int    tm_sec;     /* seconds after the minute [0-60] */
//int    tm_min;     /* minutes after the hour [0-59] */
//int    tm_hour;    /* hours since midnight [0-23] */
//int    tm_mday;    /* day of the month [1-31] */
//int    tm_mon;     /* months since January [0-11] */
//int    tm_year;    /* years since 1900 */
//int    tm_wday;    /* days since Sunday [0-6] */
//int    tm_yday;    /* days since January 1 [0-365] */
//int    tm_isdst;   /* Daylight Savings Time flag */
//long   tm_gmtoff;  /* offset from CUT in seconds */
//char   *tm_zone;   /* timezone abbreviation */
//};
