/* swap2.c -- researching swap1.c */
#include <stdio.h>
void interchange2(int u, int v);

void swap2(void)
{
    int x = 5, y = 10;
    
    printf("Originally x = %d and y = %d.\n", x , y);
    interchange2(x, y);
    printf("Now x = %d and y = %d.\n", x, y);  
}

void interchange2(int u, int v)
{
    int temp;
    
    printf("Originally u = %d and v = %d.\n", u , v);
    temp = u;
    u = v;
    v = temp;
    printf("Now u = %d and v = %d.\n", u, v);
}
