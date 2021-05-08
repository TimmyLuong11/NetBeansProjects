// commission.c -- calculates sales commission 
#include <stdio.h>
#define LEV1   0.1            // Commission percentage by levels
#define LEV2   0.15      
#define LEV3   0.20  
#define LEV4   0.25 
#define CUTOFF1  1000.0        // first breakpoint for commission  
#define CUTOFF2  2000.0        // second breakpoint for commission 
#define CUTOFF3  3000.0        // third breakpoint for commission

void commission(void)
{
    float sales, commis;               // sales and commission                          
    
    printf("Please enter the weekly sales.\n");
    scanf("%f", &sales);               
    if (sales < CUTOFF1)
        commis = LEV1 * sales;
    else if (sales < CUTOFF2)   
        commis =  LEV2 * sales;
    else if (sales < CUTOFF3)   
        commis =  LEV3 * sales;
    else                                   
        commis =  LEV4  * sales;
    printf("The commission is: $%.2f.\n", commis);
}