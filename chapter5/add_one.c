/* add_one.c -- incrementing: prefix and postfix */
#include <stdio.h>
void add_one(void)
{
    int ultra = 0, super = 0, num1 = 0, num2 = 0;
    
    while ((super < 5) && (ultra < 5))
    {
        num1 = super++;    //postfix
        num2 = ++ultra;   //prefix 
        printf("super = %d, ultra = %d \n", super, ultra);
        printf("num1 = %d, num2 = %d \n", num1, num2);
    }

}
