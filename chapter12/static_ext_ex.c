#include <stdio.h>

void print_i(void);
void another_file(void);

int i; //static with external linkage: file level scope, external linkage, static duration 

void static_ext_ex(void){
    int limit = 10; //block level scope
    
    printf("Value of i before initialization: %d\n", i); //global i 
    for(int i = 0; i < limit; i++)
    {
        printf("Value of i within a loop: %d\n", i);
    } 
    i = 5;
    printf("Value of i after the loop: %d\n", i);
    print_i();
    another_file();
    printf("Value of i after a call to another_file: %d\n", i);
}

void print_i(void){
    printf("The value of i inside print_i(): %d\n", i);
}