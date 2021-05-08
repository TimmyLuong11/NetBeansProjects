/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#define SQUARES 64

void wheat(void){
    const double CROP = 2E16;
    int count = 1;
    double current, total;
    current = total = 1.0;
    
    printf("Square     Grains       Total\n");
    
    while(count <= SQUARES){
        printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
        current = current * 2.0;
        total = total + current;
        count += 1;
    }
}
