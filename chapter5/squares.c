/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void squares(void){
    int num = 1;
    
    while(num < 21){
        printf("%10d%15d\n", num, num*num);
        num += 1;
    }
}