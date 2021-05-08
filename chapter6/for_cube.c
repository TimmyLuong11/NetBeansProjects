/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void for_cube(void){
    int num;
    
    for(num = 1; num <=6; num++)
        printf("%5d %5d\n", num, num*num*num);
    
}
