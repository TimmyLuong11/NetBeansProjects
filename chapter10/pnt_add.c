/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#define SIZE 4

void pnt_add(void){
    short dates[SIZE];
    short *pti;
    short index;
    double bills[SIZE];
    double *ptf;
    
    pti = dates;
    ptf = bills;
    printf("%23s %15s\n", "short", "double");
    for(index = 0; index < SIZE; index++)
        printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
    
}
