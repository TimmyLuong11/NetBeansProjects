/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void varwid(void){
    int number = 256;
    float weight = 242.5;
    unsigned width, precision;
    
    printf("Please enter the field width:\n");
    scanf("%d", &width);
    printf("The number is: %*d.\n", width, number);
    
    printf("Please enter the field width and precision:\n");
    scanf("%d %d", &width, &precision);
    printf("The number is: %*.*f.\n", width, precision, weight);
}
