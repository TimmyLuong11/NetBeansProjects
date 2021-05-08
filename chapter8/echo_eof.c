/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void echo_eof(void){
    int c;
    
    while((c = getchar()) !=EOF){
        putchar(c);
    }
}