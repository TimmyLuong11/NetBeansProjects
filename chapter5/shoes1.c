/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#define ADJUST 7.31

void shoes1(void){
    const double SCALE = 0.333; //typed, local to shoes1
    double shoe, foot;
    
    shoe = 9.0;
    foot = SCALE * shoe + ADJUST; 
    printf("Shoe size(men's) foot length\n");
    printf("%10.1f%15.2f inches\n", shoe, foot);
}
