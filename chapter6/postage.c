// postage.c -- first-class postage rates
#include <stdio.h>
void postage(void)
{
    const int FIRST_OZ = 46; // 2013 rate
    const int NEXT_OZ = 20;  // 2013 rate
    int ounces, cost;
    
    printf(" ounces  cost\n");
    /*for (ounces=1, cost=FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
        printf("%5d   $%4.2f\n", ounces, cost/100.0);*/
    
    cost=FIRST_OZ;
    ounces=1;
    for (;ounces <= 16;){
    printf("%5d   $%4.2f\n", ounces, cost/100.0);
    cost += NEXT_OZ;
    ounces++;
    }
}
