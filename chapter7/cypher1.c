/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#define SPACE ' '

void cypher1(void){
    char ch;
    getchar();
    ch = getchar();
    
    while(ch != '\n'){
        if(ch == SPACE)
            putchar(ch);
        else
            putchar(ch +1);
        ch = getchar();
    }
    putchar(ch);
} 
