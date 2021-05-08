/* proto.c -- uses a function prototype */
#include <stdio.h>
int imax2(int, int);        /* prototype */
void proto(void)
{
    /*
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax2(3));  
    */
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax2(3.0, 5.0));
    
}

int imax2(int n, int m)
{
    return (n > m ? n : m);
}
