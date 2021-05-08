/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#define COVERAGE 350

void paint(void){
    int sq_feet;
    int cans;
    
    printf("Enter the number of sq feet to be painted: \n");
    while(scanf("%d", &sq_feet) == 1){
        cans = sq_feet / COVERAGE;
        cans += (sq_feet % COVERAGE == 0) ? 0 : 1;
        printf("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");
        printf("Enter the next value (q to quit): \n");
    }
}


