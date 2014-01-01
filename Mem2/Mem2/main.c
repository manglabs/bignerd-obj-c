//
//  main.c
//  Mem2
//
//  Created by Tim on 12/29/13.
//  Copyright (c) 2013 Mang Labs. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float heightInMeters;
    int weightInKilos;
} Person;

float bodyMassIndex(Person *p)
{
    return p->weightInKilos / (p->heightInMeters * p->heightInMeters);
}

int main(int argc, const char * argv[])
{
    // Important note:
    // The idea of allocating and deallocating structs on the heap is the basis
    // of Objective-C objects (i.e., it is the way that classes were layere
    // onto basic C, back in the day).
    Person *mikey = (Person *)malloc(sizeof(Person));
    
    mikey->weightInKilos = 96;
    mikey->heightInMeters = 1.7;
    
    free(mikey);
    
    mikey = NULL;

    return 0;
}
