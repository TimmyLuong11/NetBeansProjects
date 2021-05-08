/* no_data.c -- uninitialized array */
#include <stdio.h>
#define SIZE 4
void no_data(void)
{
    int no_data[SIZE];  /* uninitialized array */
    int i, num;
    
    printf("%2s%14s\n", "i", "no_data[i]");
    
    for(i = 5, num = 0; i < 21; i = i +5, num++)
        no_data[num] = i;
    
    for (i = 0; i < SIZE; i++)
        printf("%2d%14d\n", i, no_data[i]);

}
