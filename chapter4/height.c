/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void height(void){
    float inches;
    char name[40];
    
    printf("Enter in your name: ");
    scanf("%s", name);
    printf("Enter in your height in inches: ");
    scanf("%f", &inches);
    printf("%s, you are %.3f feet tall \n", name, inches/12);
}
