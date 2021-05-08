/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

void file_eof(void){
    int ch;
    FILE *fp;  //pointer to a type FILE 
    char fname[50]; //to hold the file name
    
    printf("Enter the name of the file: ");
    scanf("%s", fname);
    
    fp = fopen(fname, "r"); //open file for reading
    if(fp == NULL){
        printf("Fail to open file. Bye\n");
        exit(1);
    }
    while((ch = getc(fp)) !=EOF){
        putchar(ch);
    }
    fclose(fp);
}
