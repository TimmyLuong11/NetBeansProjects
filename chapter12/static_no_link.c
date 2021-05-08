/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void static_no_link(void) {
    static int count = 1;
    printf("The value of count before incrementing: %d\n", count);
    count++;         
}