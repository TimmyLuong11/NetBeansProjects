/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <ctype.h>

void cypher2(void){
    char ch;
    getchar();
    ch = getchar();
    
    while(ch != '\n'){
        if(isalpha(ch)) //isspace(ch), isalpha(ch), isalnum(ch)
        {    
            ch = toupper(ch);
            putchar(ch);
        }
        else
            putchar(ch);
        ch = getchar();
    }
    putchar(ch);
} 