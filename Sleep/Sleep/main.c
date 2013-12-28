//
//  main.c
//  Sleep
//
//  Created by Tim on 12/21/13.
//  Copyright (c) 2013 mang labs. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

void congratulateStudent(char* student, char* course, int numDays)
{
    printf("%s has done as much %s Programming as I could fit into %d days.\n", student, course, numDays);
}

int main(int argc, const char * argv[])
{

    // insert code here...
    congratulateStudent("Kate", "Cocoa", 5);
    sleep(2);

    congratulateStudent("Bo", "Java", 5);
    sleep(2);

    congratulateStudent("Mike", "Python", 5);
    sleep(2);

    return 0;
}

