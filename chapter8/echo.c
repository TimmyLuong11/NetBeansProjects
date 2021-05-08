/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void echo(void){
    char c;
    int num = 0;
    
    while((c = getchar()) !='#'){
        putchar(c);
        printf(" - loop #%d\n", num++);
    }
}