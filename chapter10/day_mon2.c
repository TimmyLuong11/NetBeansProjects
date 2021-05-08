/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#define MONTHS 12

void day_mon2(void){
    int days[MONTHS] = {31, 28, [4] = 31,30,31, [1] = 29};
    int index; 
    
    for(index = 0; index < MONTHS; index++)
        printf("Month %d had %d days.\n", index+1, days[index]);
}

