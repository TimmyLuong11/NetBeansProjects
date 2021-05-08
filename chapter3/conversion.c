/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

//A floating point type makes more sense than a integer type because when you convert between the measurement there could be decimal point and when you enter the amount of cups it could be a point something of a cup and an integer would round it and it would lose accuracy during the conversion between the types. 

#include <stdio.h>

void conversion(void)
{
    float cups;
 
    printf("How many cups do you have: ");
    scanf("%f",&cups);
    printf("That is equal to %.2f pints.\n", cups/2);
    printf("That is equal to %.2f ounces.\n", cups*8);
    printf("That is equal to %.2f tablespoons.\n", cups *16);
    printf("That is equal to %.2f teaspoon.\n", cups *48 );
    
}
