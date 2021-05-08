/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void mpg(void){
    float miles; //I float the miles because you can have a point something in mile. 
    float gallons; //I float the gallons because you can have a point something in gallons.
    float totmpg; // I float the mpg to get a more accurate number instead of round off. 
    
    printf("Please enter the number of miles driven: ");
    scanf("%f", &miles);
    printf("Please enter the number of gallons of gas used: ");
    scanf("%f", &gallons);
    totmpg = miles / gallons;
    printf("The total miles per gallons is %0.2f.\n", totmpg);
}
