/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void download(void){
    float speed, size;
    
    printf("Enter the download speed in megabits per second (Mbs): ");
    scanf("%f", &speed);
    printf("Enter the size of the file in megabytes (MB): ");
    scanf("%f", &size);
    printf("At %.2f megabits per second, a file of %.2f megabytes download in %.2f seconds. \n", 
            speed, size, size*8/speed);
}
