/*
 * Example of automatic variables
 */

#include <stdio.h>
void print_i2(void); //function prototype
void another_file(void);
static int i; // file-level scope, internal linkage, static duration

void static_int_ex(void) {
    int limit = 10; //variable declaration and initialization
    
    printf("i before initialization %d \n", i);
    for (i=0;i < limit; i++) {
        printf("i in outer loop %d \n", i);
        for (int j = 0; j <= i; j++)   
            printf("$");
        printf("\n");
    }          
    printf("i after both loops %d \n", i); 
    print_i2();
    another_file();
    print_i2();
}

void print_i2(void){
    printf("Yes! I can see the value of i AND increment it: %d \n", i);
    i++;
}