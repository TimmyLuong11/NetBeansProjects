/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <string.h>

void name(void){
    char first[40], last[40];
    int letterfirst, letterlast;
    
    printf("Enter in your first name: ");
    scanf("%s", first);
    printf("Enter in your last name: ");
    scanf("%s", last);
    
    letterfirst = strlen(first);
    letterlast = strlen(last);
    
    printf("%s %s\n%*d %*d\n", first, last, letterfirst, letterfirst, letterlast, letterlast);
    printf("%s %s\n%-*d %-*d\n", first, last, letterfirst, letterfirst, letterlast, letterlast);
}