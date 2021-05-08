/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void colddays(void){
    const int FREEZING = 0;
    float temp;
    int cold_days = 0, all_days = 0;
    
    printf("Enter the list of daily low temps. \n");
    printf("Use Celsius, and enter q to quit. \n");
    
    while(scanf("%f", &temp) == 1){
        all_days++;
        if(temp < FREEZING){
            cold_days++;
        }
    
    }
    if(all_days != 0)
        printf("%d days total: %.1f%% were below freezing.\n", all_days, ((float)cold_days / all_days * 100.0));
    //if(all_days == 0)
        //printf("No data entered!\n");
    else
        printf("No data entered!\n");
}
