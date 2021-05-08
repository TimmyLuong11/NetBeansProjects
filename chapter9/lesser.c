/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
int imin(int n, int m);

void lesser(void){
    int evil1, evil2;
    
    printf("Enter a pair of integers to find the lesser of two evils OR press enter to quit:\n");
    while(scanf("%d %d", &evil1, &evil2) == 2){
        printf("The lesser of %d and %d is %d .\n", evil1, evil2, imin(evil1, evil2));
    }
}



int imin(int n, int m){
    int min;
    
    /*if(n < m)
        min = n;
    else
        min = m;
     */
    
    min = m < n ? m : n;
    
    return min;
}