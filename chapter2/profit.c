/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void profit(void) {
    float sales = 0.0;
    printf("Please enter the sales: \n");
    scanf("%f", &sales);
    printf("The projected profit is 23%% or $%.2f.\n", sales * .23);
}
