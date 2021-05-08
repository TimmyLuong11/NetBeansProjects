/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void summing(void){
    long num;
    long sum = 0L;
    int status;
    char c;
    
    printf("Please enter an integer to be summed (q to quit): ");
    status = scanf("%ld", &num);
    
    while(status){
        sum = sum + num;
        printf("Enter next number (q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("The sum is %ld.\n", sum);
    while((c = getchar() != EOF) && (c != '\n') && (c != 'q'))
        ;
}
