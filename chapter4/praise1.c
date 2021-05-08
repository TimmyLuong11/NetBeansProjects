/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#define PRAISE "You are an extraordinany being!"

void praise1(void){
    char c; 
    char name[40];
    
    printf("Hi! What's your name?\n");
    scanf("%s", name); //name of array is pointer to mem address
    while ((c = getchar()) !=EOF && c !='\n')
        printf("%c", c);
    
    printf("Hello, %s. %s\n", name, PRAISE);
}