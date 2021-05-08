/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void two_func(void) {
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Please bring me some coffee!!!!\n");
}

void butler(void) {
    printf("Yes! Get the coffee yourself!!!\n");
}