//
//  main.c
//  BMICalc
//
//  Created by Tim on 12/27/13.
//  Copyright (c) 2013 mang labs. All rights reserved.
//

#include <stdio.h>

// Here is the declaration of the struct
//struct Person {
//    float heightInMeters;
//    int weightInKilos;
//};
typedef struct {
    float heightInMeters;
    int weightInKilos;
} Person;

float bodyMassIndex(Person p)
{
    return p.weightInKilos / (p.heightInMeters * p.heightInMeters);
}

int main(int argc, const char * argv[])
{
    Person mikey;
    mikey.heightInMeters = 1.7;
    mikey.weightInKilos = 96;
    
    Person aaron;
    aaron.heightInMeters = 1.97;
    aaron.weightInKilos = 84;
    
    float bmi;
    bmi = bodyMassIndex(mikey);
    printf("mikey has a BMI of %.2f\n", bmi);
    
    bmi = bodyMassIndex(aaron);
    printf("aaron has a BMI of %.2f\n", bmi);

    return 0;
}


