/* addemup.c -- five kinds of statements */
#include <stdio.h>
void addemup(void)                /* finds sum of first 20 integers */
{
    int count, sum;           /* declaration statement          */
    
    count = 0;                /* assignment statement           */
    sum = 0;                  /* ditto                          */
    
    while (count++ < 20){      /* while                          */
        sum = sum + count;    /*     statement                  */
        printf("count: %d sum: %d\n", count, sum);
    }
    
    printf("sum = %d\n", sum);/* function statement             */
    
}
