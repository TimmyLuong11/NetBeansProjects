/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#define PERIOD '.'

void chcount (void){
    char ch;
    int charcount = 0;
    getchar();
    
    while((ch = getchar()) != PERIOD){
        if (ch != '"' && ch != '\'')
            charcount++;
        //printf("ch: %c, charcount: %d\n", ch, charcount);
    }
    printf("There are %d non-quote characters.\n", charcount);
}

