/* swap1.c -- first attempt at a swapping function */
#include <stdio.h>
void interchange3(int *u, int *v); /* declare function pass by reference */

void swap3(void)
{
    int x = 5, y = 10;
    
    printf("Originally x = %d and y = %d.\n", x , y);
    interchange3(&x, &y);
    printf("Now x = %d and y = %d.\n", x, y);
}

void interchange3(int *u, int *v)  /* define function  */
{
    int temp;
    
    temp = *u;
    *u = *v;
    *v = temp;
}
