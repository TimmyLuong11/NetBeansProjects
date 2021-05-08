/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void distance(void){
    int mph;
    float minutes;
    float distance;
    
    printf("Please enter the mph: ");
    scanf("%d",&mph);
    printf("Please enter the minutes: ");
    scanf("%f",&minutes);
    //distance = mph * (minutes / 60.0); //60 is a float
    //distance = mph * ((float)minutes / 60); //type cast to a float
    distance = mph * (minutes / 60.0);
    printf("The distance traveled is %.2f.\n", distance);
}
