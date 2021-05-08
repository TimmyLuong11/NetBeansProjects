/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void do_while(void){
    const int secret_code = 13;
    int code_entered;
    
    do
    {  
        printf("To enter the triskaidekaphobia therapy club, \n");
        printf("Please enter the secret code: ");
        scanf("%d", &code_entered);
    } while(code_entered != secret_code);
    printf("You are free of the fear of 13!!!\n");
}
