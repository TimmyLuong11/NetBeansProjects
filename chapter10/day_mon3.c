/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#define MONTHS 12

void day_mon3(void){
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index; 
    
    for(index = 0; index < MONTHS; index++)
        printf("Month %2d had %d days.\n", index+1, *(days + index));
}
