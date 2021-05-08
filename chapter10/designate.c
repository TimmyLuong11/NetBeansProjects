/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void designate(void){
    const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index; 
    
    for(index = 0; index < sizeof days/ sizeof days[0] ; index++)
        printf("Month %d had %d days.\n", index+1, days[index]);
}
